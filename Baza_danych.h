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

    int indeks = 0;
    string tytu³ = "", gatunek = "";
    float ocena = 0.0;
    bool czyObrajrzane = false;

public:
    Baza_danych();
    ~Baza_danych();
    void Pobierz_dane(string zapytanie);
};

