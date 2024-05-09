#include "Baza_danych.h"

Baza_danych::Baza_danych() {
    try {
        driver = get_driver_instance();
        con = driver->connect(IP, user, password);
        con->setSchema(database);
        stmt = con->createStatement();
        res = nullptr;
    }
    catch (SQLException& e) {
        // Obs³uga b³êdów
        cout << "SQLException: " << e.what() << endl;
    }
    catch (std::runtime_error& e) {
        // Obs³uga b³êdów
        cout << "RuntimeError: " << e.what() << endl;
    }
}

Baza_danych::~Baza_danych() {
    if (res != nullptr and stmt != nullptr and con != nullptr) {
        delete res;
        delete stmt;
        delete con;
    }
}

void Baza_danych::Pobierz_dane(string zapytanie) {

}