#pragma once
#include "Dependencias.h"
#include "Grafos.h"
#include "Circulos.h"


//Aplicar Algoritmo de Ford Fulkerson

class CaminoMax {
private:
	vector<Arcos*> Recorrido;
	vector<Circulo*> nodos;

	Grafos* grafo;
	int Ki,FlujoInfinito,FlujoMaximo;
	

public:
	CaminoMax() {

		//cambiar aqui
		grafo = new Grafos(9);
		FlujoInfinito = Ki = grafo->EntradaMaxima();
		FlujoMaximo = 0;


	}

	void CrearNodoMatriz(int Value) {

		grafo = new Grafos(Value);
		FlujoInfinito = Ki = grafo->EntradaMaxima();

	}
	

	CaminoMax(Grafos* Grafo) {
		grafo = Grafo;
		FlujoInfinito = Ki = grafo->EntradaMaxima();
	}


	~CaminoMax() {
		Recorrido.clear();
		delete grafo;
	}

	void CrearNodos(int x,int y) {
		
		if (grafo->NumAristas()>nodos.size()) {
			nodos.push_back(new Circulo(x,y,nodos.size()));

		}


	}

	void DibujarNodos(Graphics^g) {

		for (int i = 0; i < nodos.size();i++) {
			nodos[i]->Dibujar(g);
		}
	}

	bool ExisteBucle(int a,int b) {

		for (int i = 0; i < this->Recorrido.size();i++) {
			if (this->Recorrido[i]->IndI() == a && this->Recorrido[i]->IndJ() == b) {
				return true;
			}
		}

		return false;
		
	}

	void EncontrarCamino(int fila, int Columna, int NodoDeLlegada) {		// 0 -- 0 = 6 // 2 -- 0 = 6// 5 -- 2 = 6
		bool Existe = false;
		bool LlegoMeta = false;
		// recorrido de columna de una fila determinada

		for (int j = 0; j < grafo->NumAristas(); j++) {
			// Si el grafico en posicion existe




			if (!ExisteBucle(fila,j) && grafo->matriz()->ObtPosicion(fila, j)->ExisteArco()) { //  encontro 0 - 2 / 2 - 5 / 5 - 6 
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
			if (Recorrido.size()==i+1) {

			cout << " ===== "<< Ki;
			cout << endl;
			FlujoMaximo = FlujoMaximo + Ki;

			}
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

	void MosrtrarCaminoMaximo(int Inicio,int Final) {

		bool TerminoRecorrido=false;

			grafo->MostrarMatriz();
			cout << endl;
		do {
			
			EncontrarCamino(Inicio,0, Final);
				TerminoRecorrido = true;
				MostrarCamino();

			for (int i = 0; i < grafo->NumAristas(); i++) {

				if (grafo->matriz()->ObtPosicion(Inicio,i)->ExisteArco()) {
					TerminoRecorrido = false;
				}
			}

		} while (!TerminoRecorrido);


			grafo->MostrarMatriz();
			cout << endl;
			cout << "El flujo Maximo es: " << FlujoMaximo;
			cout << "\n" << grafo->matriz()->ObtPosicion(2, 1)->ExisteArco();
			
			system("pause > 0");
	}




	Grafos* ObtGrafo() {
		return grafo;
	}



};