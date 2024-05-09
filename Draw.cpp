#include "Draw.h"

Draw::Draw() {
	TworzenieOpis();
	TworzenieNawigacja();
	TworzenieFilmy();
}

Draw::~Draw() {

}

void Draw::TworzenieOpis() {
	
	opis[0] = Przyciski(10,10, 60, 50, 0, 255, 0, 0);
	opis[0].DodajNapis("ID", 10);
	opis[1] = Przyciski(80, 10, 450, 50, 0, 255, 0, 0);
	opis[1].DodajNapis("Tytul", 180);
	opis[2] = Przyciski(540, 10, 150, 50, 0, 255, 0, 0);
	opis[2].DodajNapis("Ocena", 20);
	opis[3] = Przyciski(700, 10, 300, 50, 0, 255, 0, 0);
	opis[3].DodajNapis("Gatunek", 70);
	opis[4] = Przyciski(1010, 10, 50, 50, 0, 255, 0, 0);
	opis[4].DodajNapis("", 0);
}

void Draw::TworzenieNawigacja() {
	int ax = 120;
	for (int i = 0; i < 14; i++) {
		nawigacja[i] = Przyciski(ax, 610, 50, 50, 0, 0, 0, 0);
		ax += 60;
	}
	nawigacja[0].DodajNapis("<", 10);
	nawigacja[1].DodajNapis("1", 10);
	nawigacja[2].DodajNapis("2", 10);
	nawigacja[3].DodajNapis("3", 10);
	nawigacja[4].DodajNapis("4", 10);
	nawigacja[5].DodajNapis("5", 10);
	nawigacja[6].DodajNapis("6", 10);
	nawigacja[7].DodajNapis("7", 10);
	nawigacja[8].DodajNapis("8", 10);
	nawigacja[9].DodajNapis("9", 10);
	nawigacja[10].DodajNapis("10", 10);
	nawigacja[11].DodajNapis("11", 10);
	nawigacja[12].DodajNapis("12", 10);
	nawigacja[13].DodajNapis(">", 10);
}

void Draw::TworzenieFilmy() {
	int ay = 90;
	for (int i = 0; i < 10; i++) {
		filmy[i] = Przyciski(10, ay, 1050, 40, 0, 255, 0, 0);
		ay += 50;
	}
}

void Draw::WyswietlOpis(RenderWindow& okno) {
	for (int i = 0; i < 5; i++) {
		opis[i].RysujPrzycisk(okno);
	}
}

void Draw::WyswietlNawigacja(RenderWindow& okno) {
	for (int i = 0; i < 14; i++) {
		nawigacja[i].RysujPrzycisk(okno);
	}
}

void Draw::WyswietlFilmy(RenderWindow& okno) {
	for (int i = 0; i < 10; i++) {
		filmy[i].RysujPrzycisk(okno);
	}
}