#include "frmMenu.h"
//#include "Grafos.h"
#include "CaminoMax.h"

using namespace SW43MatematicaComputacionalProyectoGrupo5;

//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

int main() {

	//Application::Run(gcnew frmMenu);
	//Application::Run(gcnew MyForm(1));
	//Application::Run(gcnew MyForm(2));

	//Grafos* grafo = new Grafos(7);
	CaminoMax* solucion;
	solucion = new CaminoMax;
	//grafo->CrearNodos();
	
	//solucion->ObtGrafo()->EntradaMaxima();
	//cout << endl;
	//solucion->ObtGrafo()->MostrarMatriz();
	//solucion->EncontrarCamino(0,0,6);
	//cout << endl;
	//solucion->MostrarCamino();
	//cout << endl;
	//solucion->ObtGrafo()->MostrarMatriz();

	
	 while (true) {
		system("cls");
		cout << endl;
		solucion->ObtGrafo()->MostrarMatriz();
		solucion->EncontrarCamino(0, 0, 6);
		cout << endl;
		solucion->MostrarCamino();
		cout << endl;
		solucion->ObtGrafo()->MostrarMatriz();
		system("pause > 0");
	};

	

	return 0;
}