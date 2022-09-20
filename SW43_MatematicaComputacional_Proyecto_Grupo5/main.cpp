#include "frmMenu.h"
//#include "Grafos.h"
#include "CaminoMax.h"

using namespace SW43MatematicaComputacionalProyectoGrupo5;

//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

int main() {

	//Application::Run(gcnew frmMenu);
	//Application::Run(gcnew MyForm(1));
	//Application::Run(gcnew MyForm(2));

	CaminoMax* solucion;
	solucion = new CaminoMax;
	
	 while (true) {
		system("cls");
		cout << endl;
		solucion->ObtGrafo()->MostrarMatriz();
		solucion->EncontrarCamino(1, 0, 5);
		cout << endl;
		solucion->MostrarCamino();
		cout << endl;
		solucion->ObtGrafo()->MostrarMatriz();
		system("pause > 0");
	};

	

	return 0;
}