#include "frmMenu.h"
//#include "Grafos.h"
#include "CaminoMax.h"

using namespace SW43MatematicaComputacionalProyectoGrupo5;

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

int main() {
	srand(time(NULL));
	Application::Run(gcnew frmMenu);

	return 0;
}