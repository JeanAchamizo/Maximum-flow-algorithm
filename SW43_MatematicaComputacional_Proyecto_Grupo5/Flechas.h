#pragma once
#include "Circulos.h"
#include "Matriz.h"


using namespace System::Drawing;

class Flecha {
private:
	int x, y;
	int x1, y1;

	int i, j;

	int Capacidad;
	int Valor;
public:
	Flecha() {
		x = 0;
		y = 0;
	}
	Flecha(Circulo* cir1,Circulo* cir2) {
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

		if (matriz->ObtPosicion(i,j)->ObtCapacidad() != 0) {
			
			g->DrawLine(Pens::Red, x, y, x1, y1);

			Font^ letra = gcnew Font("Arial", 14.5);
		
			g->DrawString("["+ matriz->ObtPosicion(i,j)->ObtCapacidad() +";"+ matriz->ObtPosicion(i, j)->ObtAcumulados() +"]",
				letra, Brushes::White,(x+x1)/2,(y+y1)/2);
		
			delete letra;

		}

	}

};