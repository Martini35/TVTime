#include <SFML/Graphics.hpp>
#include "Draw.h"

using namespace sf;

class Okno
{
	RenderWindow okno;
	Event event;
	Draw zawartosc;

	bool zamknij = false;

	void TworzenieOkna();
	void Eventy();
	void Rysuj();
	void TworzenieMapy();

public:
	void OknoStart();
};