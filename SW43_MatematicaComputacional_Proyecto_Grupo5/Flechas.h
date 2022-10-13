#pragma once
#include "Circulos.h"
#include "Matriz.h"


using namespace System::Drawing;

class Flecha {
private:
	double x, y;
	double x1, y1;
	double i, j;

	Circulo* cir1; 
	Circulo* cir2;

public:
	Flecha() {
		x = 0;
		y = 0;
	}
	Flecha(Circulo* cir1,Circulo* cir2) {
		
		this->cir1=cir1;
		this->cir2=cir2;


		x = cir1->GetX() + (cir1->GetRadio());
		y = cir1->GetY() + (cir1->GetRadio());

		x1 = cir2->GetX() + (cir2->GetRadio());
		y1 = cir2->GetY() + (cir2->GetRadio());

		i = cir1->GetID();
		j = cir2->GetID();

	}
	
	~Flecha() {}

	void Dibujar(Graphics^ g,Matriz* matriz) {
		//definir color
		
		x = cir1->GetX() + (cir1->GetRadio());
		y = cir1->GetY() + (cir1->GetRadio());

		x1 = cir2->GetX() + (cir2->GetRadio());
		y1 = cir2->GetY() + (cir2->GetRadio());

		i = cir1->GetID();
		j = cir2->GetID();


		int sigA=1, sigB=1;
		double ang = 0;

		if (matriz->ObtPosicion(i,j)->ObtCapacidad() != 0) {
			
			Pen^ pen = gcnew Pen(Color::Red, 2.5f);
			Pen^ pen1 = gcnew Pen(Color::Yellow, 4.0f);
			Font^ letra = gcnew Font("Arial", 14.5);

			//Draw line 
			g->DrawLine(pen, int(x), y, x1, y1);

			if (x1 >= x) { sigA = -1; }
			if (y1 >= y) { sigB = -1; }
			


			if (x1 != x) {
				ang = atan(abs((y1 - y) / (x1 - x)));
			}
			else ang = 3.14159 / 2;
			


			g->DrawLine(pen1,int(x1+sigA * 50 * cos(ang)),y1 + sigB * 50 * sin(ang), x1 + sigA*25*cos(ang), y1 + sigB * 25*sin(ang));

			// draw text
			g->DrawString("["+ matriz->ObtPosicion(i,j)->ObtCapacidad() +";"+ matriz->ObtPosicion(i, j)->ObtAcumulados() +"]",
				letra, Brushes::White,-15+(x+x1)/2, -15 + (y+y1)/2);
		
			delete letra;
			delete pen;

		}


	}

};