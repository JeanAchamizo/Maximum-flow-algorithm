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

        //Ejercicios 


        //1er EJERCICIO
        //URL: https://youtu.be/T4jlNZjCaWk

        //0
        MatrizAdyacente->ObtPosicion(0, 1)->AsigCapacidad(6);
        MatrizAdyacente->ObtPosicion(0, 2)->AsigCapacidad(4);
        MatrizAdyacente->ObtPosicion(0, 3)->AsigCapacidad(1);

        //1
        MatrizAdyacente->ObtPosicion(1, 4)->AsigCapacidad(4);

        //2
        MatrizAdyacente->ObtPosicion(2, 3)->AsigCapacidad(3);
        MatrizAdyacente->ObtPosicion(2, 4)->AsigCapacidad(1);
        MatrizAdyacente->ObtPosicion(2, 5)->AsigCapacidad(3);

        //3
        MatrizAdyacente->ObtPosicion(3, 5)->AsigCapacidad(4);

        //4
        MatrizAdyacente->ObtPosicion(4, 6)->AsigCapacidad(4);

        //5
        MatrizAdyacente->ObtPosicion(5, 6)->AsigCapacidad(9);

        //Flujo Máximo: 9


        //2do EJERCICIO
        //URL: https://www.youtube.com/watch?v=fDZEwnucLOQ

        //0
        MatrizAdyacente->ObtPosicion(0, 1)->AsigCapacidad(8);
        MatrizAdyacente->ObtPosicion(0, 2)->AsigCapacidad(7);
        MatrizAdyacente->ObtPosicion(0, 3)->AsigCapacidad(6);

        //1
        MatrizAdyacente->ObtPosicion(1, 4)->AsigCapacidad(3);

        //2
        MatrizAdyacente->ObtPosicion(2, 4)->AsigCapacidad(4);
        MatrizAdyacente->ObtPosicion(2, 6)->AsigCapacidad(5);

        //3
        MatrizAdyacente->ObtPosicion(3, 2)->AsigCapacidad(3);
        MatrizAdyacente->ObtPosicion(3, 5)->AsigCapacidad(2);

        //4
        MatrizAdyacente->ObtPosicion(4, 6)->AsigCapacidad(9);

        //5
        MatrizAdyacente->ObtPosicion(5, 6)->AsigCapacidad(2);

        //Flujo Máximo: 14


        //3er EJERCICIO 
        //URL: https://www.youtube.com/watch?v=uUpv4gs-l18

        //0
        MatrizAdyacente->ObtPosicion(0,1)->AsigCapacidad(10);
        MatrizAdyacente->ObtPosicion(0,2)->AsigCapacidad(8);
        MatrizAdyacente->ObtPosicion(0,3)->AsigCapacidad(12);

        //1
        MatrizAdyacente->ObtPosicion(1,4)->AsigCapacidad(12);
        MatrizAdyacente->ObtPosicion(1,5)->AsigCapacidad(18);
        
        //2
        MatrizAdyacente->ObtPosicion(2,5)->AsigCapacidad(15);

        //3
        MatrizAdyacente->ObtPosicion(3,5)->AsigCapacidad(12);
        MatrizAdyacente->ObtPosicion(3,6)->AsigCapacidad(8);

        //4
        MatrizAdyacente->ObtPosicion(4,7)->AsigCapacidad(13);

        //5
        MatrizAdyacente->ObtPosicion(5,4)->AsigCapacidad(10);
        MatrizAdyacente->ObtPosicion(5,6)->AsigCapacidad(10);
        MatrizAdyacente->ObtPosicion(5,7)->AsigCapacidad(9);

        //6
        MatrizAdyacente->ObtPosicion(6,7)->AsigCapacidad(14);

        //Flujo Máximo: 30

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


 