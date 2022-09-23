#pragma once

using namespace System::Drawing;

class Circulo {
private:
	int x, y;
	int Nombre;
	int radio;
public:
	Circulo() {
		x = 0;
		y = 0;
		radio = 0;
	}
	Circulo(int posx, int posy,int nombre) {
		x = posx;
		y = posy;
		radio = 25;
		Nombre = nombre;
	}
	~Circulo() {}

	void Dibujar(Graphics^ g) {
		//definir color
		
		g->FillEllipse(Brushes::DodgerBlue, x, y, 2 * radio, 2 * radio);
		Font^ letra = gcnew Font("Arial", 14.5);
		g->DrawString(Convert::ToString(Nombre), letra, Brushes::Black, x + (radio / 2), y + (radio / 2));
		delete letra;
	}

};
