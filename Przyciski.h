#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

using namespace sf;
using namespace std;

class Przyciski
{
	RectangleShape shape;
	Text napis;
	Font font;

	float xn = 0, yn = 0;

public:
	Przyciski();
	Przyciski(float x, float y, float sx, float sy, int R, int G, int B, float obwodka);
	bool CzyMyszNadPrzyciskiem(Vector2f myszPoz);
	void DodajNapis(string nap, int zacz);
	void RysujPrzycisk(RenderWindow& okno);
	void ZmienKolor(int r, int g, int b);;
	void ZmienNapis(string nap);
};