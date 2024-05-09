#include "Przyciski.h"


Przyciski::Przyciski() {

}

Przyciski::Przyciski(float x, float y, float sx, float sy, int R, int G, int B, float obwodka) {

	shape.setSize(Vector2f(sx, sy));
	shape.setPosition(x, y);
	shape.setFillColor(Color(R, G, B));
	shape.setOutlineThickness(obwodka);
	shape.setOutlineColor(Color::Black);

	xn = x;
	yn = y;
}

bool Przyciski::CzyMyszNadPrzyciskiem(Vector2f myszPoz) {

	return shape.getGlobalBounds().contains(myszPoz);
}

void Przyciski::DodajNapis(string nap, int zacz) {

	font.loadFromFile("Chunkfive Ex.ttf");
	napis.setFont(font);
	napis.setCharacterSize(35);
	napis.setFillColor(Color::White);
	napis.setOutlineColor(Color::Black);
	napis.setOutlineThickness(3);
	napis.setPosition(xn + zacz, yn + 2);
	napis.setString(nap);
}

void Przyciski::RysujPrzycisk(RenderWindow& okno) {

	okno.draw(shape);
	okno.draw(napis);
}

void Przyciski::ZmienKolor(int r, int g, int b) {

	shape.setFillColor(Color(r, g, b));
}

void Przyciski::ZmienNapis(string nap) {
	napis.setString(nap);
}