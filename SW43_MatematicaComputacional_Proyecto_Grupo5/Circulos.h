#pragma once
#include "Dependencias.h"

using namespace System::Drawing;

class Circulo {
private:
	int x, y;
	int ID;
	int radio;
	int color;
	bool ClickMov;
public:
	Circulo() {
		x = 0;
		y = 0;
		radio = 0;
		
	}
	Circulo(int posx, int posy,int nombre) {
		radio = 25;
		x = posx;
		y = posy;
		ID = nombre;
		color = 1 + rand() % 15;
		ClickMov = false;
	}
	~Circulo() {}

	void Dibujar(Graphics^ g) {
		//definir color
		SolidBrush^ b;
		//Colores de las fichas
		if (color == 1) { b = gcnew SolidBrush(Color::DarkOrange); }
		else if (color == 2) { b = gcnew SolidBrush(Color::Fuchsia); }
		else if (color == 3) { b = gcnew SolidBrush(Color::OrangeRed); }
		else if (color == 4) { b = gcnew SolidBrush(Color::DeepPink); }
		else if (color == 5) { b = gcnew SolidBrush(Color::Indigo); }
		else if (color == 6) { b = gcnew SolidBrush(Color::Orange); }
		else if (color == 7) { b = gcnew SolidBrush(Color::Purple); }
		else if (color == 8) { b = gcnew SolidBrush(Color::Magenta); }
		else if (color == 9) { b = gcnew SolidBrush(Color::DarkViolet); }
		else if (color == 10) { b = gcnew SolidBrush(Color::MediumVioletRed); }
		else if (color == 11) { b = gcnew SolidBrush(Color::HotPink); }
		else if (color == 12) { b = gcnew SolidBrush(Color::Tomato); }
		else if (color == 13) { b = gcnew SolidBrush(Color::PaleVioletRed); }
		else if (color == 14) { b = gcnew SolidBrush(Color::BlueViolet); }
		else if (color == 15) { b = gcnew SolidBrush(Color::DarkOrchid); }
		else if (color == 16) { b = gcnew SolidBrush(Color::LightSalmon); }
		
		g->FillEllipse(b, x, y, 2 * radio, 2 * radio);

		Pen^ pen = gcnew Pen(Color::Yellow, 2.5f);

		if (ClickMov) { g->DrawEllipse(pen, x, y, 2 * radio, 2 * radio); }

		Font^ letra = gcnew Font("Arial", 14.5);

		g->DrawString(Convert::ToString(ID), letra, Brushes::Snow, x + (radio / 2), y + (radio / 2));

		delete pen;
		delete letra;
	}

	int GetX() { return x; }
	int GetY() { return y; }
	int GetID() { return ID; }
	int GetRadio() { return radio; }


	void AsigX(int value) { x = value; }
	void AsigY(int value) { y = value; }
	void asigClickMov(bool value) { ClickMov = value; }
};
