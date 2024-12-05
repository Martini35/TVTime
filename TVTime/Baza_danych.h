#pragma once
#include <iostream>
#include <mysql_connection.h>
#include <jdbc/cppconn/driver.h>
#include <jdbc/cppconn/exception.h>
#include <cppconn/resultset.h>
#include <jdbc/cppconn/statement.h>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;
using namespace sql;

class Baza_danych
{
private:
    Driver* driver;
    Connection* con;

    Statement* stmt;
    ResultSet* res;

    PreparedStatement* pstmt;

    string IP = "tcp://127.0.0.1:4306";
    string user = "root";
    string password = "";
    string database = "filmy";

    int indeks = 0, czyObejrzane = 0;
    string tytu³ = "", gatunek = "";
    float ocena = 0.0;

public:
    Baza_danych();
    ~Baza_danych();
    void Pobierz_dane(string zapytanie);
    int GetIndeks();
    string GetTytu³();
    string GetGatunek();
    float GetOcena();
    int GetCzyObejrzane();
    void ZmienObejrzane();
};

