#pragma once
#include <iostream>
#include <mysql_connection.h>
#include <jdbc/cppconn/driver.h>
#include <jdbc/cppconn/exception.h>
#include <cppconn/resultset.h>

using namespace std;
using namespace sql;

class Baza_danych
{
private:
    Driver* driver;
    Connection* con;

    Statement* stmt;
    ResultSet* res;

    string IP = "tcp://127.0.0.1:4306";
    string user = "root";
    string password = "";
    string database = "filmy";

public:
    Baza_danych();
    ~Baza_danych();

};

