#include "Przyciski.h"
#include "Baza_danych.h"
#include <iostream>
#include <string>

using namespace std;
using namespace sf;

class Draw
{
private:
	Przyciski opis[5];
	Przyciski filmy_id[10];
	Przyciski filmy_tytu³[10];
	Przyciski filmy_ocena[10];
	Przyciski filmy_gatunek[10];
	Przyciski filmy_czyObejrzane[10];
	Przyciski nawigacja[14];
	Przyciski szczegol[5];
	Baza_danych film[10];

	Texture obrazek;
	Sprite sprite;

	stringstream zapytanie;
	string zapytanie_str, kolumna = "id", sortuj = "ASC";
	
	int aktualna_strona = 1, aktualny_opis = 0, ktory_filmu, numer_filmu;
	bool czy_pierwszy = true;

	void TworzenieOpis();
	void TworzenieNawigacja();
	void TworzenieFilmy();
	void TworzenieSzczegoly(int numer, int ktory);

public:
	Draw();
	~Draw();
	
	void WyswietlOpis(RenderWindow& okno);
	void WyswietlNawigacja(RenderWindow& okno);
	void WyswietlFilmy(RenderWindow& okno);
	bool Klikniecie(RenderWindow& okno, Event eve);
	bool Klikniecie_szczegoly(RenderWindow& okno, Event eve);
	void OdczytFilmu();
	void SzczegolyWyswietl(RenderWindow& szczegoly);
};