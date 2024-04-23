#include <iostream>
#include <string>
#include <mosquittopp.h>
#include <mysql/mysql.h>

//need to enter the id address and port there
const char* broker_address = "";
const int broker_port = MQTT_BROKER_PORT_NUMBER;

//id of driver and cargo
std::string driver_id = "";
std::string cargo_owner_id = "";

// sending and reciving
std::string driver_topic_send = "";
std::string driver_topic_receive = "";
std::string cargo_owner_topic_send = "";
std::string cargo_owner_topic_receive = "";

class ChatClient : public mosqpp::mosquittopp {
public:
    ChatClient() : mosquittopp("chat_client") {}

    // connect success massage
    void on_connect(int rc) {
        std::cout << "connect success,：" << rc << std::endl;

        //subscrribe to recive massage
        if (driver_id != "") {
            subscribe(nullptr, driver_topic_receive.c_str());
        }

        if (cargo_owner_id != "") {
            subscribe(nullptr, cargo_owner_topic_receive.c_str());
        }
    }

    // notification
    void on_message(const mosquitto_message* message) {
        std::cout << "you recive" << message->topic << "'s massage：" << (char*) message->payload << std::endl;
    }

    void driver_send_message(const std::string& message) {
        publish(nullptr, driver_topic_send.c_str(), message.length(), message.c_str());
    }

    void cargo_owner_send_message(const std::string& message) {
        publish(nullptr, cargo_owner_topic_send.c_str(), message.length(), message.c_str());
    }
};

int main() {
    MYSQL* conn = mysql_init(nullptr);
    if (!mysql_real_connect(conn, "localhost", nullptr, nullptr, "1ver", 0, nullptr, 0)) {
        std::cerr << "database connect fail：" << mysql_error(conn) << std::endl;
        exit(1);
    }

    // get information from driver and owner
    MYSQL_RES* res;
    MYSQL_ROW row;
    std::string query = "SELECT Driver_Id FROM Driver WHERE DFname = 'DRIVER_NAME'";
    if (mysql_query(conn, query.c_str())) {
        std::cerr << "didn't find：" << mysql_error(conn) << std::endl;
        mysql_close(conn);
        exit(1);
    }
    res = mysql_use_result(conn);
    if (res) {
        row = mysql_fetch_row(res);
        if (row) {
            driver_id = row[0];
        }
        mysql_free_result(res);
    }

    query = "SELECT Owner_Id FROM Owner WHERE Fname = 'OWNER_NAME'";
    if (mysql_query(conn, query.c_str())) {
        std::cerr << "didn't find：" << mysql_error(conn) << std::endl;
        mysql_close(conn);
        exit(1);
    }
    res = mysql_use_result(conn);
    if (res) {
        row = mysql_fetch_row(res);
        if (row) {
            cargo_owner_id = row[0];
        }
        mysql_free_result(res);
    }


    // Modify information fby id
    if (driver_id != "") {
        driver_topic_send = "chat/drivers/" + driver_id;
        driver_topic_receive = "chat/cargo-owners/" + cargo_owner_id;
    }
    if (cargo_owner_id != "") {
        cargo_owner_topic_send = "chat/cargo-owners/" + cargo_owner_id;
        cargo_owner
