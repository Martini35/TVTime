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
    string query = zapytanie;
    stmt = con->createStatement();
    res = stmt->executeQuery(query);
    while(res->next()){
        indeks = stoi(res->getString("ID"));
        tytu³ = res->getString("Tytul");
        gatunek = res->getString("Gatunek");
        ocena = stof(res->getString("Ocena"));
        czyObejrzane = stoi(res->getString("Czy_obejrzane"));
    }

}

int Baza_danych::GetIndeks(){
    return indeks;
}

string Baza_danych::GetTytu³(){
    return tytu³;
}

string Baza_danych::GetGatunek(){
    return gatunek;
}

float Baza_danych::GetOcena(){
    return ocena;
}

int Baza_danych::GetCzyObejrzane(){
    return czyObejrzane;
}

void Baza_danych::ZmienObejrzane() {
    if (czyObejrzane == 0) {
        czyObejrzane = 1;
    }
    else {
        czyObejrzane = 0;
    }
    stringstream zapytanie;
    zapytanie << "UPDATE filmy SET Czy_obejrzane = " << czyObejrzane << " WHERE id = " << indeks;
    string zapytanieStr = zapytanie.str();
    stmt = con->createStatement();
    stmt->executeUpdate(zapytanieStr);
    zapytanie.str("");
}
