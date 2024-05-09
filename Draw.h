#include "Przyciski.h"
#include "Baza_danych.h"

using namespace std;
using namespace sf;

class Draw
{
private:
	Przyciski opis[5];
	Przyciski filmy[10];
	Przyciski nawigacja[14];

	void TworzenieOpis();
	void TworzenieNawigacja();
	void TworzenieFilmy();

public:
	Draw();
	~Draw();
	
	void WyswietlOpis(RenderWindow& okno);
	void WyswietlNawigacja(RenderWindow& okno);
	void WyswietlFilmy(RenderWindow& okno);
};