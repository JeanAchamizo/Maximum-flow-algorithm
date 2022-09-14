#pragma once
#include "iostream"

//Metodo AsignarVertice - Contructor Parametro de la matriz dependiendo grafos
using namespace std;

class Matriz {
private:
int Filas;
int Columnas;
bool **matriz;

public:
    Matriz(int Vertices){
        Filas = Columnas = Vertices;
        InstanciarMatriz();
    }                        
    ~Matriz(){
        for(int i=0;i<Filas;i++){
            delete matriz[i];
         }
         delete matriz; 
    }
    void AsignarValor(bool value){}
    //Test Cod
    void MostrarMatriz(){
            matriz[0][1] = 1;
            matriz[0][2] = 1;
            matriz[0][3] = 1;
            matriz[1][2] = 1;
            matriz[1][4] = 1;
            matriz[2][3] = 1;
            matriz[2][4] = 1;
            matriz[2][5] = 1;
            matriz[3][5] = 1;
            matriz[4][6] = 1;
            matriz[5][4] = 1;
            matriz[5][6] = 1;           
        for(int i=0;i<Filas;i++){
            for(int j=0;j<Columnas;j++){
                cout<<matriz[i][j]<<" ";   
            }  
            cout<<endl; 
        }
    }
private:
    void InstanciarMatriz(){

            matriz = new bool*[Filas];
        for(int i=0;i<Filas;i++){
            matriz[i] =  new bool[Columnas];
         }
    
        for(int i=0;i<Filas;i++){
            for(int j=0;j<Columnas;j++){
                 matriz[i][j] = 0;   
            }   
        }
    }

};
