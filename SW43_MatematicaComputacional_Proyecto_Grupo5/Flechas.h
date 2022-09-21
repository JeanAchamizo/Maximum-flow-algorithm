#pragma once

using namespace System::Drawing;

class Flecha {
private:
	int x, y;
	int x1, y2;
	int Nombre;
	int radio;
public:
	Flecha() {
		x = 0;
		y = 0;
		radio = 0;
	}
	Flecha(int posx, int posy,int posx1,int posy2) {
		x = posx;
		y = posy;
		x1 = posx1;
		y2 = posy2;
		radio = 25;
	}
	~Flecha() {}

	void Dibujar(Graphics^ g,int Value) {
		//definir color

		g->DrawLine(Pens::Blue, x, y, x1, y2);

		Font^ letra = gcnew Font("Arial", 14.5);
		//delete letra;
	}

};