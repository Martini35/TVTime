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
	opis[1] = Przyciski(80, 10, 820, 50, 0, 255, 0, 0);
	opis[1].DodajNapis("Tytul ", 320);
	opis[2] = Przyciski(910, 10, 150, 50, 0, 255, 0, 0);
	opis[2].DodajNapis("Ocena", 20);
	opis[3] = Przyciski(1070, 10, 350, 50, 0, 255, 0, 0);
	opis[3].DodajNapis("Gatunek", 100);
	opis[4] = Przyciski(1430, 10, 240, 50, 0, 255, 0, 0);
	opis[4].DodajNapis("Obejrzane", 30);
}

void Draw::TworzenieNawigacja() {
	int ax = 415;
	for (int i = 0; i < 14; i++) {
		nawigacja[i] = Przyciski(ax, 610, 50, 50, 0, 0, 0, 0);
		ax += 60;
	}
	nawigacja[0].DodajNapis("<", 15);
	nawigacja[1].DodajNapis("1", 15);
	nawigacja[2].DodajNapis("2", 15);
	nawigacja[3].DodajNapis("3", 15);
	nawigacja[4].DodajNapis("4", 15);
	nawigacja[5].DodajNapis("5", 15);
	nawigacja[6].DodajNapis("6", 15);
	nawigacja[7].DodajNapis("7", 15);
	nawigacja[8].DodajNapis("8", 15);
	nawigacja[9].DodajNapis("9", 15);
	nawigacja[10].DodajNapis("10", 7);
	nawigacja[11].DodajNapis("11", 7);
	nawigacja[12].DodajNapis("12", 7);
	nawigacja[13].DodajNapis(">", 15);
}

void Draw::TworzenieFilmy() {
	int ay = 90;
	for (int i = 0; i < 10; i++) {
		filmy_id[i] = Przyciski(10, ay, 70, 40, 0, 255, 0, 0);
		filmy_tytuł[i] = Przyciski(80, ay, 830, 40, 0, 255, 0, 0);
		filmy_ocena[i] = Przyciski(910, ay, 160, 40, 0, 255, 0, 0);
		filmy_gatunek[i] = Przyciski(1070, ay, 360, 40, 0, 255, 0, 0);
		filmy_czyObejrzane[i] = Przyciski(1430, ay, 240, 40, 0, 255, 0, 0);
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
	nawigacja[aktualna_strona].ZmienKolor(161, 153, 153);
}

void Draw::WyswietlFilmy(RenderWindow& okno) {
	for (int i = 0; i < 10; i++) {
		filmy_id[i].RysujPrzycisk(okno);
		filmy_tytuł[i].RysujPrzycisk(okno);
		filmy_ocena[i].RysujPrzycisk(okno);
		filmy_gatunek[i].RysujPrzycisk(okno);
		filmy_czyObejrzane[i].RysujPrzycisk(okno);
	}
}

bool Draw::Klikniecie(RenderWindow& okno, Event eve) {

	Vector2i mousePosition = Mouse::getPosition(okno);
	Vector2f mousePositionFloat(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y));


	for (int i = 0; i < 5; i++) {

		if (opis[i].CzyMyszNadPrzyciskiem(mousePositionFloat)) {
			opis[i].ZmienKolor(255, 0, 0);

			if (eve.type == Event::MouseButtonPressed && eve.mouseButton.button == Mouse::Left) {
				switch (i)
				{
				case 0:
					kolumna = "id";
					aktualna_strona = 1;
					aktualny_opis = 0;
					if(czy_pierwszy){
						sortuj = "ASC";
						czy_pierwszy = false;
					}
					else {
						sortuj = "DESC";
						czy_pierwszy = true;
					}
				break;
				case 1:
					kolumna = "tytul";
					aktualna_strona = 1;
					aktualny_opis = 1;
					if (czy_pierwszy) {
						sortuj = "ASC";
						czy_pierwszy = false;
					}
					else {
						sortuj = "DESC";
						czy_pierwszy = true;
					}
				break;
				case 2:
					kolumna = "ocena";
					aktualna_strona = 1;
					aktualny_opis = 2;
					if (czy_pierwszy) {
						sortuj = "ASC";
						czy_pierwszy = false;
					}
					else {
						sortuj = "DESC";
						czy_pierwszy = true;
					}
				break;
				case 3:
					kolumna = "gatunek";
					aktualna_strona = 1;
					aktualny_opis = 3;
					if (czy_pierwszy) {
						sortuj = "ASC";
						czy_pierwszy = false;
					}
					else {
						sortuj = "DESC";
						czy_pierwszy = true;
					}
				break;
				case 4:
					kolumna = "czy_obejrzane";
					aktualna_strona = 1;
					aktualny_opis = 4;
					if (czy_pierwszy) {
						sortuj = "ASC";
						czy_pierwszy = false;
					}
					else {
						sortuj = "DESC";
						czy_pierwszy = true;
					}
				break;
				}
				OdczytFilmu();
			}
		}
		else {
			opis[i].ZmienKolor(0, 255, 0);
		}

		if (i == aktualny_opis) {
			opis[i].ZmienKolor(0, 150, 0);
		}
	}

	for (int i = 0; i < 10; i++) {
		if (filmy_id[i].CzyMyszNadPrzyciskiem(mousePositionFloat) || filmy_tytuł[i].CzyMyszNadPrzyciskiem(mousePositionFloat) || filmy_ocena[i].CzyMyszNadPrzyciskiem(mousePositionFloat) || filmy_gatunek[i].CzyMyszNadPrzyciskiem(mousePositionFloat) || filmy_czyObejrzane[i].CzyMyszNadPrzyciskiem(mousePositionFloat)) {
			filmy_id[i].ZmienKolor(255, 0, 0);
			filmy_tytuł[i].ZmienKolor(255, 0, 0);
			filmy_ocena[i].ZmienKolor(255, 0, 0);
			filmy_gatunek[i].ZmienKolor(255, 0, 0);
			filmy_czyObejrzane[i].ZmienKolor(255, 0, 0);

			if (eve.type == Event::MouseButtonPressed && eve.mouseButton.button == Mouse::Left) {
				TworzenieSzczegoly(film[i].GetIndeks(), i);
				return true;
			}
		}
		else {
			filmy_id[i].ZmienKolor(0, 255, 0);
			filmy_tytuł[i].ZmienKolor(0, 255, 0);
			filmy_ocena[i].ZmienKolor(0, 255, 0);
			filmy_gatunek[i].ZmienKolor(0, 255, 0);
			filmy_czyObejrzane[i].ZmienKolor(0, 255, 0);
		}
	}

	for (int i = 0; i < 14; i++) {
		nawigacja[aktualna_strona].ZmienKolor(161, 153, 153);
		if (nawigacja[i].CzyMyszNadPrzyciskiem(mousePositionFloat)) {
			nawigacja[i].ZmienKolor(218, 208, 208);
		}
		else {
			nawigacja[i].ZmienKolor(0, 0, 0);
		}
	}

	for(int i = 0; i < 14; i++){
		if (nawigacja[i].CzyMyszNadPrzyciskiem(mousePositionFloat)) {
			if (eve.type == Event::MouseButtonPressed && eve.mouseButton.button == Mouse::Left) {
				if (i > 0 && i < 13) {
					aktualna_strona = i;
					OdczytFilmu();
				}
				if (i == 0 && aktualna_strona != 1) {
					aktualna_strona--;
					OdczytFilmu();
				}
				if (i == 13 && aktualna_strona != 12) {
					aktualna_strona++;
					OdczytFilmu();
				}
			}
		}
	}
	return false;
}

bool Draw::Klikniecie_szczegoly(RenderWindow& okno, Event eve) {

	Vector2i mousePosition = Mouse::getPosition(okno);
	Vector2f mousePositionFloat(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y));

	if (szczegol[4].CzyMyszNadPrzyciskiem(mousePositionFloat)) {
		szczegol[4].ZmienKolor(255, 0, 0);
		if (eve.type == Event::MouseButtonPressed && eve.mouseButton.button == Mouse::Left) {
			OdczytFilmu();
			return true;
		}
	}
	else {
		szczegol[4].ZmienKolor(0, 255, 0);
	}

	if (szczegol[3].CzyMyszNadPrzyciskiem(mousePositionFloat)) {
		szczegol[3].ZmienKolor(255, 0, 0);
		if (eve.type == Event::MouseButtonPressed && eve.mouseButton.button == Mouse::Left) {
			film[ktory_filmu].ZmienObejrzane();
			TworzenieSzczegoly(numer_filmu, ktory_filmu);
		}
	}
	else {
		szczegol[3].ZmienKolor(0, 255, 0);
	}
	return false;
}

void Draw::OdczytFilmu() {

	for (int i = 0; i < 10; i++) {

		zapytanie << "SELECT * FROM (SELECT*, ROW_NUMBER() OVER(ORDER BY " << kolumna << " " << sortuj << ") AS row_num FROM filmy) AS temp_table WHERE row_num = " << i + 1 + ((aktualna_strona - 1) * 10);
		zapytanie_str = zapytanie.str();
		film[i].Pobierz_dane(zapytanie_str);
		filmy_id[i].DodajNapis(to_string(film[i].GetIndeks()), 8, 30);
		filmy_tytuł[i].DodajNapis(film[i].GetTytuł(), 30, 30);
		filmy_ocena[i].DodajNapis(to_string(film[i].GetOcena()).erase(4), 45, 30);
		filmy_gatunek[i].DodajNapis(film[i].GetGatunek(), 30, 30);
		if(film[i].GetCzyObejrzane() == 0){
			filmy_czyObejrzane[i].DodajNapis("Nie", 90, 30);
		}else{
			filmy_czyObejrzane[i].DodajNapis("Tak", 90, 30);
		}
			
		zapytanie.str("");
	}
}

void Draw::SzczegolyWyswietl(RenderWindow& szczegoly){

	szczegoly.draw(sprite);
	for (int i = 0; i < 5; i++) {
		szczegol[i].RysujPrzycisk(szczegoly);
	}
}

void Draw::TworzenieSzczegoly(int numer, int ktory) {
	stringstream filmPlik;
	filmPlik << "C:/Users/marci/Desktop/TVTime/TVTime/okladki_filmow/"<< numer <<".jpg";
	string filmPlikStr = filmPlik.str();
	obrazek.loadFromFile(filmPlikStr);
	sprite.setTexture(obrazek);
	sprite.setPosition(10, 10);
	sprite.setScale(2, 2);

	numer_filmu = numer;
	ktory_filmu = ktory;

	szczegol[0] = Przyciski(300, 10, 830, 50, 0, 255, 0, 0);
	szczegol[0].DodajNapis(film[ktory].GetTytuł(), 20, 40);

	szczegol[1] = Przyciski(300, 100, 410, 50, 0, 255, 0, 0);
	szczegol[1].DodajNapis(film[ktory].GetGatunek(), 20, 40);

	szczegol[2] = Przyciski(720, 100, 410, 50, 0, 255, 0, 0);
	szczegol[2].DodajNapis(to_string(film[ktory].GetOcena()).erase(4), 170, 40);

	szczegol[3] = Przyciski(300, 190, 410, 50, 0, 255, 0, 0);
	if (film[ktory].GetCzyObejrzane() == 0) {
		szczegol[3].DodajNapis("Nie Obejrzane", 20, 40);
	}
	else {
		szczegol[3].DodajNapis("Obejrzane", 20, 40);
	};

	szczegol[4] = Przyciski(300, 360, 410, 50, 0, 255, 0, 0);
	szczegol[4].DodajNapis("Zamknij", 110, 40);
}