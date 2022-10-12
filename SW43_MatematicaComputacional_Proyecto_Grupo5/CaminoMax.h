#pragma once
#include "Dependencias.h"
#include "Grafos.h"
#include "Flechas.h"
#include "Circulos.h"
#include "Matriz.h"


//Aplicar Algoritmo de Ford Fulkerson

class CaminoMax {
private:
	Grafos* grafo;

	int Ki,FlujoInfinito,FlujoMaximo;
	vector<Arcos*> Recorrido;
	

public:
	CaminoMax() {
		//cambiar aqui
		grafo = new Grafos(0);
		FlujoMaximo = 0;
	}

	void CrearNodoMatriz(int Value) {
		delete grafo;
		grafo = new Grafos(Value);
	}

	~CaminoMax() {
		delete grafo;
	}

	void SolucionCaminoMaximo(int Inicio,int Final) {

		//grafo->Prueba5();
		FlujoInfinito = Ki = grafo->EntradaMaxima();
		FlujoMaximo = 0;

		do {
			
			EncontrarCamino(Inicio,0, Final);

			this->ActualizarCamino();


		} while (NoterminoRecorrido(Inicio));

	}

	Grafos* ObtGrafo() {
		return grafo;
	}

	void MostrarFlujoMaximo(Graphics^g) {

		Font^ letra = gcnew Font("Arial", 50);
		g->DrawString(Convert::ToString(FlujoMaximo), letra, Brushes::Snow,1122,584);
		//g->DrawString(Convert::ToString(ID), letra, Brushes::Snow,x,y);
		delete letra;

	}


private:
	void EncontrarCamino(int fila, int Columna, int NodoDeLlegada) {		// 0 -- 0 = 6 // 2 -- 0 = 6// 5 -- 2 = 6
		bool Existe = false;
		bool LlegoMeta = false;
		// recorrido de columna de una fila determinada

		for (int j = 0; j < grafo->NumAristas(); j++) {
			// Si el grafico en posicion existe




			if (!ExisteBucle(fila, j) && grafo->matriz()->ObtPosicion(fila, j)->ExisteArco()) { //  encontro 0 - 2 / 2 - 5 / 5 - 6 
				Existe = true;

				//Recorrido.push_back(new Arcos(fila,j));
				AcumularKi(grafo->matriz()->ObtPosicion(fila, j), fila, j);

				cout << "";

				if (j != NodoDeLlegada) {
					EncontrarCamino(j, fila, NodoDeLlegada); // 2 -- 0 = 6 // 5 -- 2 = 6
				}

				return;
			}
		}

		// NO ENCUENTRA CAMINOS EN LA FILA => DEJA DE EXISTIR Y SALE DE LA ITERACION
		if (!Existe) {
			grafo->matriz()->ObtPosicion(Columna, fila)->NoExiste();
			Recorrido.clear();
		}
	}
	void ActualizarCamino() {

		for (int i = 0; i < Recorrido.size(); i++) {
			//cout << "[" << grafo->matriz()->ObtPosicion(Recorrido[i]->IndI(),
			//	Recorrido[i]->IndJ())->IndI() << ";" <<
			//	grafo->matriz()->ObtPosicion(Recorrido[i]->IndI(),
			//		Recorrido[i]->IndJ())->IndJ() << "]->";
			
			// Asignamos el flujo a las capacidades
			grafo->matriz()->ObtPosicion(Recorrido[i]->IndI(),
				Recorrido[i]->IndJ())->AsigAcumulados(grafo->matriz()->ObtPosicion(Recorrido[i]->IndI(),
					Recorrido[i]->IndJ())->ObtAcumulados() + Ki);
			
			if (Recorrido.size() == i + 1) {

				//cout << " ===== " << Ki;
				//cout << endl;
				FlujoMaximo = FlujoMaximo + Ki;

			}
		}
		///Actualizar
		Recorrido.clear();
		Ki = FlujoInfinito;

	}
	bool ExisteBucle(int a, int b) {

		for (int i = 0; i < this->Recorrido.size(); i++) {
			if (this->Recorrido[i]->IndI() == a && this->Recorrido[i]->IndJ() == b) {
				return true;
			}
		}

		return false;

	}
	void AcumularKi(Arcos* arcos, int fila, int j) {
		if ((arcos->ObtCapacidad() - arcos->ObtAcumulados()) < Ki) {
			Ki = (arcos->ObtCapacidad() - arcos->ObtAcumulados());
		}
		Recorrido.push_back(new Arcos(fila, j));
	}
	bool NoterminoRecorrido(int Inicio) {

		for (int i = 0; i < grafo->NumAristas(); i++) {

			if (grafo->matriz()->ObtPosicion(Inicio, i)->ExisteArco()) {
				return true;
			}
		}
		return false;
	}

};