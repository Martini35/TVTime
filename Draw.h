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
	Przyciski filmy_tytu�[10];
	Przyciski filmy_ocena[10];
	Przyciski filmy_gatunek[10];
	Przyciski filmy_czyObejrzane[10];
	Przyciski nawigacja[14];
	Baza_danych film[10];

	void TworzenieOpis();
	void TworzenieNawigacja();
	void TworzenieFilmy();

	int aktualna_strona = 1;

public:
	Draw();
	~Draw();
	
	void WyswietlOpis(RenderWindow& okno);
	void WyswietlNawigacja(RenderWindow& okno);
	void WyswietlFilmy(RenderWindow& okno);
	void Klikniecie(RenderWindow& okno, Event eve);
	void OdczytFilmu();
};