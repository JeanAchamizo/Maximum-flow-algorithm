#include "frmMenu.h"
#include "Matriz.h"

using namespace SW43MatematicaComputacionalProyectoGrupo5;

//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

int main() {

	//Application::Run(gcnew frmMenu);
	//Application::Run(gcnew MyForm(1));
	//Application::Run(gcnew MyForm(2));


	Matriz* matriz = new Matriz(7);
	
	matriz->MostrarMatriz();
	
	cout << endl;
	system("pause > 0");

	return 0;
}