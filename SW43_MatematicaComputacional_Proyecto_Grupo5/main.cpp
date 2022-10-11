#include "frmMenu.h"
//#include "Grafos.h"
#include "CaminoMax.h"

using namespace SW43MatematicaComputacionalProyectoGrupo5;

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

int main() {
	srand(time(NULL));
	Application::Run(gcnew frmStart);

	//CaminoMax* solucion;
	//solucion = new CaminoMax;
	//solucion->CrearNodoMatriz(9);
	//
	//solucion->SolucionCaminoMaximo(0,8);

	return 0;
}