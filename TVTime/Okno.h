#include <SFML/Graphics.hpp>
#include "Draw.h"

using namespace sf;

class Okno
{
	RenderWindow okno, szczegoly;
	Event event;
	Draw zawartosc;

	bool zamknij = false;

	void TworzenieOkna();
	void Eventy();
	void Rysuj();
	void TworzenieMapy();

	void TworzenieSzegoly();
	void RysujSzczegoly();

public:
	void OknoStart();
};