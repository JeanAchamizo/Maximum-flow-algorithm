#pragma once
//Librerias
#include "iostream"
#include "vector"

//Using name spaces
using namespace std;
using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;  

class CloseAll {
private:
	bool closeAll;
public:
	CloseAll(bool value) {
		closeAll = value;}
	bool GetValue() { return closeAll; }
	void SetValue(bool value) { closeAll = value; }
};