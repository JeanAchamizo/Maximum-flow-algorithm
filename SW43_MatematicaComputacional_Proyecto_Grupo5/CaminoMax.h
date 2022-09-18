#pragma once
#include "Dependencias.h"
#include "Grafos.h"

//Aplicar Algoritmo de Ford Fulkerson

class CaminoMax {
private:
	vector<Arcos*> Recorrido;
	Grafos* grafo;
	int Ki,FlujoInfinito;
	

public:
	CaminoMax() {
		grafo = new Grafos(7);
		FlujoInfinito = Ki = grafo->EntradaMaxima();

	}
	~CaminoMax() {
		delete grafo;
	}
	
	// si pongo 1 es por que estoy seleccionando la el NODO a
	//void EncontrarCamino(int i) {
	// inicio final nodo 6

	void EncontrarCamino(int fila, int Columna, int NodoDeLlegada) {		// 0 -- 0 = 6 // 2 -- 0 = 6// 5 -- 2 = 6
		bool Existe = false;
		bool LlegoMeta = false;
		// recorrido de columna de una fila determinada

		for (int j = 0; j < grafo->NumAristas(); j++) {
			// Si el grafico en posicion existe
			if (grafo->matriz()->ObtPosicion(fila, j)->ExisteArco()) { //  encontro 0 - 2 / 2 - 5 / 5 - 6 
					Existe = true;
					
					//Recorrido.push_back(new Arcos(fila,j));
					AcumularKi(grafo->matriz()->ObtPosicion(fila, j),fila,j);
					
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

	void MostrarCamino() {
		for (int i = 0; i < Recorrido.size();i++) {
			cout<<"["<<grafo->matriz()->ObtPosicion(Recorrido[i]->IndI(),
				Recorrido[i]->IndJ())->IndI() << ";" <<
				grafo->matriz()->ObtPosicion(Recorrido[i]->IndI(),
				Recorrido[i]->IndJ())->IndJ() << "]->";
			// Asignamos el flujo a las capacidades
				grafo->matriz()->ObtPosicion(Recorrido[i]->IndI(),
				Recorrido[i]->IndJ())->AsigAcumulados(grafo->matriz()->ObtPosicion(Recorrido[i]->IndI(),
				Recorrido[i]->IndJ())->ObtAcumulados() + Ki);
				
		}
		///Actualizar
		Recorrido.clear();
		Ki = FlujoInfinito;
	}

	void AcumularKi(Arcos* arcos,int fila,int j) {
		if ((arcos->ObtCapacidad()-arcos->ObtAcumulados())<Ki) {
			Ki = (arcos->ObtCapacidad() - arcos->ObtAcumulados());
		}
		Recorrido.push_back(new Arcos(fila, j));
	}

	Grafos* ObtGrafo() {
		return grafo;
	}

};