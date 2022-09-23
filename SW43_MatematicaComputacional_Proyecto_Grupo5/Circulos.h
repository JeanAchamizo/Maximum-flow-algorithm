#pragma once

using namespace System::Drawing;

class Circulo {
private:
	int x, y;
	int Nombre;
	int radio;
	int color;
public:
	Circulo() {
		x = 0;
		y = 0;
		radio = 0;
		color = 1 + rand() % 15;
		
	}
	Circulo(int posx, int posy,int nombre) {
		x = posx;
		y = posy;
		radio = 25;
		Nombre = nombre;
		color = 1 + rand() % 15;
	}
	~Circulo() {}

	void Dibujar(Graphics^ g) {
		//definir color
		SolidBrush^ b;
		//Colores de las fichas
		if (color == 1) { b = gcnew SolidBrush(Color::DarkOrange); }
		if (color == 2) { b = gcnew SolidBrush(Color::Fuchsia); }
		if (color == 3) { b = gcnew SolidBrush(Color::OrangeRed); }
		if (color == 4) { b = gcnew SolidBrush(Color::DeepPink); }
		if (color == 5) { b = gcnew SolidBrush(Color::Indigo); }
		if (color == 6) { b = gcnew SolidBrush(Color::Orange); }
		if (color == 7) { b = gcnew SolidBrush(Color::Purple); }
		if (color == 8) { b = gcnew SolidBrush(Color::Magenta); }
		if (color == 9) { b = gcnew SolidBrush(Color::DarkViolet); }
		if (color == 10) { b = gcnew SolidBrush(Color::MediumVioletRed); }
		if (color == 11) { b = gcnew SolidBrush(Color::HotPink); }
		if (color == 12) { b = gcnew SolidBrush(Color::Tomato); }
		if (color == 13) { b = gcnew SolidBrush(Color::PaleVioletRed); }
		if (color == 14) { b = gcnew SolidBrush(Color::BlueViolet); }
		if (color == 15) { b = gcnew SolidBrush(Color::DarkOrchid); }
		g->FillEllipse(b, x, y, 2 * radio, 2 * radio);
		Font^ letra = gcnew Font("Arial", 14.5);
		g->DrawString(Convert::ToString(Nombre), letra, Brushes::Snow, x + (radio / 2), y + (radio / 2));
		delete letra;
	}

};
