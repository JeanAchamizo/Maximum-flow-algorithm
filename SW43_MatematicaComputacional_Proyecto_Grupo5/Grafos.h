#pragma once
#include "iostream"
#include "Matriz.h"

using namespace std;
//atributos V = Conjunto de vértices o nodos ,E = Conjunto de aristas o arcos que conectan los vértices en V
class Grafos {
private:
    int Vertices;
    //int Aristas;
    Matriz* MatrizAdyacente;
        
public:
    Grafos(int Vert) {
        Vertices = Vert;
        MatrizAdyacente = new Matriz(Vertices,Vertices);
        CrearNodos();
    }
    
	~Grafos(){
        delete MatrizAdyacente;
    }
    //Truncar para prueba
    void CrearNodos() {
        for (int i = 0; i < Vertices; i++) {
            for (int j = 0; j < Vertices; j++) {
                //Arcos* arco = new Arcos();
                MatrizAdyacente->AsignarValorPosicion(i,j,new Arcos(i,j));
                
            }
        }
        // Nodos Para Truncar la prueba

        MatrizAdyacente->ObtPosicion(0,1)->AsigCapacidad(6);
        MatrizAdyacente->ObtPosicion(0,2)->AsigCapacidad(4);
        MatrizAdyacente->ObtPosicion(0,3)->AsigCapacidad(1);

        MatrizAdyacente->ObtPosicion(1,4)->AsigCapacidad(4);
        
        MatrizAdyacente->ObtPosicion(2,3)->AsigCapacidad(3);
        MatrizAdyacente->ObtPosicion(2,4)->AsigCapacidad(1);
        MatrizAdyacente->ObtPosicion(2,5)->AsigCapacidad(3);

        MatrizAdyacente->ObtPosicion(3,5)->AsigCapacidad(4);

        MatrizAdyacente->ObtPosicion(4,6)->AsigCapacidad(4);

        MatrizAdyacente->ObtPosicion(5,6)->AsigCapacidad(9);

    }
    
    void MostrarMatriz() {

        for (int i = 0; i < Vertices;i++) {
            cout << "     "<<i;
        }
        cout << endl;
        for (int i = 0; i < Vertices;i++) {
            cout << " "<<i<<" ";
            for (int j = 0; j < Vertices;j++) {
              cout << "[" << MatrizAdyacente->ObtPosicion(i, j)->ObtCapacidad() << ";";
              cout << MatrizAdyacente->ObtPosicion(i,j)->ObtAcumulados() <<"] ";
           }
            cout << endl;
        }
    }
    int EntradaMaxima() {
        int Max = 0;
        for (int i = 0; i < Vertices;i++) {
            for (int j = 0; j < Vertices; j++) {
                if(matriz()->ObtPosicion(i, j)->ObtCapacidad() > Max) {
                    Max = matriz()->ObtPosicion(i, j)->ObtCapacidad();
                }
            }
        }
        return Max;
    }

    int NumAristas() { return Vertices;}
    Matriz* matriz() {
        return MatrizAdyacente;
    }

};


 