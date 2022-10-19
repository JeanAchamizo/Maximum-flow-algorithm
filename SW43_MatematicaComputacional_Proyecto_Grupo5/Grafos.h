#pragma once
#include "iostream"
#include "Matriz.h"
#include "Flechas.h"

using namespace std;
//atributos V = Conjunto de vértices o nodos ,E = Conjunto de aristas o arcos que conectan los vértices en V
class Grafos {
private:
    int Vertices;
    //int Aristas;
    Matriz* MatrizAdyacente;
    vector<Flecha*> arcos;
    vector<Circulo*> nodos;
        
public:
    Grafos(int Vert) {
        Vertices = Vert;
        MatrizAdyacente = new Matriz(Vertices,Vertices);
        CrearMatrizNodo();
    }
    
	~Grafos(){
        delete MatrizAdyacente;
    }
private:
    //Truncar para prueba
    void CrearMatrizNodo() {
        for (int i = 0; i < Vertices; i++) {
            for (int j = 0; j < Vertices; j++) {
                MatrizAdyacente->AsignarValorPosicion(i,j,new Arcos(i,j));
            }
        }
    }

public:

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

    void MostrarMatrizPanel(Graphics^g) {

        int tamLetras = 25-Vertices;

        for (int i = 0; i < Vertices; i++) {

            if (i<10) {

                g->DrawString(" " + i + "  ", gcnew Font("Arial", tamLetras), Brushes::White, (30 - Vertices) + i * (tamLetras * 3), 0);
            }
            
            else g->DrawString( i + "  ", gcnew Font("Arial", tamLetras), Brushes::White, (30 - Vertices) + i * (tamLetras * 3), 0);
        
        }
        
        for (int i = 0; i < Vertices; i++) {

            if (i < 10) {
                   g->DrawString(" " + i + "  ",gcnew Font("Arial", tamLetras), Brushes::White,0, (30 - Vertices) + (i) * (tamLetras + 5));
            }
            else  g->DrawString( i + "  ",gcnew Font("Arial", tamLetras), Brushes::White,0, (30 - Vertices) + (i) * (tamLetras + 5));
            
            for (int j = 0; j < Vertices; j++) {

                g->DrawString("[" + MatrizAdyacente->ObtPosicion(j,i)->ObtCapacidad()
                    + ";" + MatrizAdyacente->ObtPosicion(j,i)->ObtAcumulados() + "]", 
                    gcnew Font("Arial", tamLetras), Brushes::White,(30-Vertices)+i*(tamLetras*3), (30 - Vertices)+(j)*(tamLetras +5));

           }
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
    int NumNodos() { return nodos.size(); }

    void RestablecerAcumulacion() {
        for (int i = 0; i < Vertices; i++) {
            for (int j = 0; j < Vertices; j++) {
                MatrizAdyacente->ObtPosicion(i, j)->AsigAcumulados(0);
                MatrizAdyacente->ObtPosicion(i, j)->RestrablecerExistencia();
            }
        }
    }
    
    //Agrear el nodo de salida y de llegada con su valor
    void AgregarArcos(int i,int j,int Value) {

        if (nodos.size()>i && nodos.size()>j) {
            arcos.push_back(new Flecha(nodos[i],nodos[j]));
            MatrizAdyacente->ObtPosicion(i,j)->AsigCapacidad(Value);
        }
    
    }
    
    //crear los nodos 
    void CrearNodos(int x, int y) {

        if (NumAristas() > nodos.size()) {
            nodos.push_back(new Circulo(x, y, nodos.size()));
        }


    }
    void DibujarGrafo(Graphics^ g) {

        for (int i = 0; i < arcos.size(); i++) {
            arcos[i]->Dibujar(g, MatrizAdyacente);
        }

        for (int i = 0; i < nodos.size(); i++) {
            nodos[i]->Dibujar(g);
        }
        


    }

    Matriz* matriz() {
        return MatrizAdyacente;
    }
    Circulo* GetCirculo(int i) {
        return nodos[i];
    }
};


 