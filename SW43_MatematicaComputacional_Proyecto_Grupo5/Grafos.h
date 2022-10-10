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
        
        //Prueba1();
        //Prueba2();
        //Prueba3();  // 1  7
        //Prueba4();  // 1  6
        Prueba5();  // 1  6
    }

    void Prueba1() {
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
    }

    void Prueba2() {
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
    }

    void Prueba3() {
        //4to EJERCICIO
       //URL: https://www.youtube.com/watch?v=fDZEwnucLOQ

       //0
        MatrizAdyacente->ObtPosicion(0, 4)->AsigCapacidad(3);

        //1
        MatrizAdyacente->ObtPosicion(1, 0)->AsigCapacidad(8);
        MatrizAdyacente->ObtPosicion(1, 2)->AsigCapacidad(7);
        MatrizAdyacente->ObtPosicion(1, 3)->AsigCapacidad(6);

        //2
        MatrizAdyacente->ObtPosicion(2, 4)->AsigCapacidad(4);
        MatrizAdyacente->ObtPosicion(2, 5)->AsigCapacidad(5);

        //3
        MatrizAdyacente->ObtPosicion(3, 2)->AsigCapacidad(3);
        MatrizAdyacente->ObtPosicion(3, 6)->AsigCapacidad(2);

        //4
        MatrizAdyacente->ObtPosicion(4, 5)->AsigCapacidad(9);

        //5
        
        //6
        MatrizAdyacente->ObtPosicion(6, 5)->AsigCapacidad(2);

        //Flujo Máximo: 14
    }

    void Prueba4() {
        //4to EJERCICIO
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
    }

    void Prueba5() {
        //4to EJERCICIO

        //0
        MatrizAdyacente->ObtPosicion(0, 1)->AsigCapacidad(5);
        MatrizAdyacente->ObtPosicion(0, 2)->AsigCapacidad(2);

        //1
        MatrizAdyacente->ObtPosicion(1, 3)->AsigCapacidad(3);
        MatrizAdyacente->ObtPosicion(1, 4)->AsigCapacidad(7);
     
        //2
        MatrizAdyacente->ObtPosicion(2, 1)->AsigCapacidad(2);
        MatrizAdyacente->ObtPosicion(2, 6)->AsigCapacidad(9);

        //3
        MatrizAdyacente->ObtPosicion(3, 2)->AsigCapacidad(3);
        MatrizAdyacente->ObtPosicion(3, 4)->AsigCapacidad(2);
        MatrizAdyacente->ObtPosicion(3, 6)->AsigCapacidad(6);

        //4
        MatrizAdyacente->ObtPosicion(4, 5)->AsigCapacidad(8);
        MatrizAdyacente->ObtPosicion(4, 6)->AsigCapacidad(5);
        MatrizAdyacente->ObtPosicion(4, 7)->AsigCapacidad(7);

        //5
        MatrizAdyacente->ObtPosicion(5, 8)->AsigCapacidad(4);

        //6
        MatrizAdyacente->ObtPosicion(6, 7)->AsigCapacidad(2);

        //7
        MatrizAdyacente->ObtPosicion(7, 5)->AsigCapacidad(3);
        MatrizAdyacente->ObtPosicion(7, 8)->AsigCapacidad(5);

        //Flujo Máximo: 7
    }

    void MostrarMatriz() {

        for (int i = 0; i < Vertices; i++) {
            cout << "     " << i;
        }
        cout << endl;

        for (int i = 0; i < Vertices; i++) {
            cout << " " << i << " ";
            for (int j = 0; j < Vertices; j++) {
                cout << "[" << MatrizAdyacente->ObtPosicion(i, j)->ObtCapacidad() 
                << ";"<< MatrizAdyacente->ObtPosicion(i, j)->ObtAcumulados() 
                //<< ";" << MatrizAdyacente->ObtPosicion(i, j)->ExisteArco()
                    << "] ";
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


 