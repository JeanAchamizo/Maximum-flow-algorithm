#pragma once
#include "Arcos.h"

class Matriz {
private:
    int Filas;
    int Columnas;
    Arcos*** matriz;

public:
    Matriz(int filas, int columnas) {
        Filas = filas;
        Columnas = columnas;
        InstanciarMatriz();
    }
    ~Matriz() {
        for (int i = 0; i < Filas; i++) {
            delete matriz[i];
        }
        delete[]matriz;
    }
    void AsignarValorPosicion(int Fil, int Col, Arcos* value) {
        if (Fil >= Filas || Col >= Columnas || Fil < 0 || Col < 0)return;
        matriz[Fil][Col] = value;
    }
    Arcos* ObtPosicion(int F, int C) {
        return (matriz[F][C]);
    };
    void InstanciarMatriz() {
        matriz = new Arcos * *[Filas];
        for (int i = 0; i < Filas; i++) {
            matriz[i] = new Arcos * [Columnas];
        }
        for (int i = 0; i < Filas; i++) {
            for (int j = 0; j < Columnas; j++) {
                matriz[i][j] = NULL;
            }
        }
    }
};
