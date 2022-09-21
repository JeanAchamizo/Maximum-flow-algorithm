#pragma once
//Clases
#include "Dependencias.h"
#include "frmStart.h"
#include "frmTheory.h"
#include "frmAbout.h"

namespace SW43MatematicaComputacionalProyectoGrupo5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMenu
	/// </summary>
	public ref class frmMenu : public System::Windows::Forms::Form
	{
	public:
		frmMenu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pctTittle;
	private: System::Windows::Forms::PictureBox^ pctBorder1;
	private: System::Windows::Forms::PictureBox^ pctBorder2;
	protected:

	protected:


	private: System::Windows::Forms::PictureBox^ btnTheory;
	private: System::Windows::Forms::PictureBox^ btnAbout;



	private: System::Windows::Forms::PictureBox^ btnStart;
	private: System::Windows::Forms::PictureBox^ btnExit;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMenu::typeid));
			this->pctTittle = (gcnew System::Windows::Forms::PictureBox());
			this->pctBorder1 = (gcnew System::Windows::Forms::PictureBox());
			this->pctBorder2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnTheory = (gcnew System::Windows::Forms::PictureBox());
			this->btnAbout = (gcnew System::Windows::Forms::PictureBox());
			this->btnStart = (gcnew System::Windows::Forms::PictureBox());
			this->btnExit = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctTittle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctBorder1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctBorder2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnTheory))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAbout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExit))->BeginInit();
			this->SuspendLayout();
			// 
			// pctTittle
			// 
			this->pctTittle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pctTittle.Image")));
			this->pctTittle->Location = System::Drawing::Point(188, 12);
			this->pctTittle->Name = L"pctTittle";
			this->pctTittle->Size = System::Drawing::Size(879, 396);
			this->pctTittle->TabIndex = 1;
			this->pctTittle->TabStop = false;
			// 
			// pctBorder1
			// 
			this->pctBorder1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pctBorder1.Image")));
			this->pctBorder1->Location = System::Drawing::Point(12, 428);
			this->pctBorder1->Name = L"pctBorder1";
			this->pctBorder1->Size = System::Drawing::Size(1325, 20);
			this->pctBorder1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pctBorder1->TabIndex = 5;
			this->pctBorder1->TabStop = false;
			// 
			// pctBorder2
			// 
			this->pctBorder2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pctBorder2.Image")));
			this->pctBorder2->Location = System::Drawing::Point(12, 582);
			this->pctBorder2->Name = L"pctBorder2";
			this->pctBorder2->Size = System::Drawing::Size(1325, 20);
			this->pctBorder2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pctBorder2->TabIndex = 6;
			this->pctBorder2->TabStop = false;
			// 
			// btnTheory
			// 
			this->btnTheory->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTheory.Image")));
			this->btnTheory->Location = System::Drawing::Point(348, 454);
			this->btnTheory->Name = L"btnTheory";
			this->btnTheory->Size = System::Drawing::Size(320, 122);
			this->btnTheory->TabIndex = 8;
			this->btnTheory->TabStop = false;
			this->btnTheory->Click += gcnew System::EventHandler(this, &frmMenu::btnTheory_Click);
			this->btnTheory->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnTheory_MouseEnter);
			this->btnTheory->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnTheory_MouseLeave);
			// 
			// btnAbout
			// 
			this->btnAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAbout.Image")));
			this->btnAbout->Location = System::Drawing::Point(674, 454);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(320, 122);
			this->btnAbout->TabIndex = 9;
			this->btnAbout->TabStop = false;
			this->btnAbout->Click += gcnew System::EventHandler(this, &frmMenu::btnAbout_Click);
			this->btnAbout->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnAbout_MouseEnter);
			this->btnAbout->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnAbout_MouseLeave);
			// 
			// btnStart
			// 
			this->btnStart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStart.Image")));
			this->btnStart->Location = System::Drawing::Point(22, 454);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(320, 122);
			this->btnStart->TabIndex = 7;
			this->btnStart->TabStop = false;
			this->btnStart->Click += gcnew System::EventHandler(this, &frmMenu::btnStart_Click);
			this->btnStart->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnStart_MouseEnter);
			this->btnStart->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnStart_MouseLeave);
			// 
			// btnExit
			// 
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->Location = System::Drawing::Point(1000, 454);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(320, 122);
			this->btnExit->TabIndex = 10;
			this->btnExit->TabStop = false;
			this->btnExit->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMenu::btnExit_MouseClick);
			this->btnExit->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnExit_MouseEnter);
			this->btnExit->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnExit_MouseLeave);
			// 
			// frmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(1344, 681);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnAbout);
			this->Controls->Add(this->btnTheory);
			this->Controls->Add(this->pctBorder2);
			this->Controls->Add(this->pctBorder1);
			this->Controls->Add(this->pctTittle);
			this->Controls->Add(this->btnStart);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Flujo Maximo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctTittle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctBorder1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctBorder2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnTheory))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAbout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExit))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Eventos del botón Start
//Evento cuando el mouse entra en el botón Start
private: System::Void btnStart_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnStart->Image = System::Drawing::Image::FromFile("img\\btnStart2.png");
}

//Evento cuando el mouse sale del botón Start
private: System::Void btnStart_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnStart->Image = System::Drawing::Image::FromFile("img\\btnStart.png");
}

//Evento cuando se realiza un click dentro del botón Start
private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {
	//Llamar al formulario Start
   frmStart^ frm = gcnew frmStart();
   //Esconder el formulario Menu
   //this->Hide();
   this->Visible = false;
   //Mostrar el contenido del formulario Start
   frm->ShowDialog();
   //Cerrar el formulario Start
   this->Visible = true;
   //this->Close();
   //Application::Exit();
}


	   //Eventos del botón Theory
//Evento cuando el mouse entra en el botón Theory
private: System::Void btnTheory_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnTheory->Image = System::Drawing::Image::FromFile("img\\btnTheory2.png");
}

//Evento cuando el mouse sale del botón Theory
private: System::Void btnTheory_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnTheory->Image = System::Drawing::Image::FromFile("img\\btnTheory.png");
}

//Evento cuando se realiza un click dentro del botón Theory
private: System::Void btnTheory_Click(System::Object^ sender, System::EventArgs^ e) {
	//Llamar al formulario Theory
	frmTheory^ frm = gcnew frmTheory();
	//Esconder el formulario Menu
	this->Visible = false;
	//this->Hide();
	//Mostrar el contenido del formulario Theory
	frm->ShowDialog();
	//Cerrar el formulario Theory
	//this->Close();
	this->Visible = true;
}


	   //Eventos del botón About
//Evento cuando el mouse entra en el botón About
private: System::Void btnAbout_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnAbout->Image = System::Drawing::Image::FromFile("img\\btnAbout2.png");
}

//Evento cuando el mouse sale del botón About
private: System::Void btnAbout_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnAbout->Image = System::Drawing::Image::FromFile("img\\btnAbout.png");
}

//Evento cuando se realiza un click dentro del botón About
private: System::Void btnAbout_Click(System::Object^ sender, System::EventArgs^ e) {
	//Llamar al formulario About
	frmAbout^ frm = gcnew frmAbout();
	//Esconder el formulario Menu
	this->Visible = false;
	//this->Hide();
	//Mostrar el contenido del formulario About
	frm->ShowDialog();
	//Cerrar el formulario About
	//this->Close();
	this->Visible = true;
}
	   //Evento del botón Exit
//Evento cuando el mouse entra en el botón Exit
private: System::Void btnExit_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnExit->Image = System::Drawing::Image::FromFile("img\\btnExit2.png");
}

//Evento cuando el mouse entra en el botón Exit
private: System::Void btnExit_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnExit->Image = System::Drawing::Image::FromFile("img\\btnExit.png");
}

//Evento cuando se realiza un click dentro del botón Exit
private: System::Void btnExit_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//Sale de la aplicación
	Application::Exit();
}
};
}
