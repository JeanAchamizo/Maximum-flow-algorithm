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
	

	solucion->MosrtrarCaminoMaximo(1,5);

	

	return 0;
}