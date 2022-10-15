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
	private: System::Windows::Forms::PictureBox^ btnExit;
	protected:
	private: System::Windows::Forms::PictureBox^ btnAbout;


	private: System::Windows::Forms::PictureBox^ btnStart;

	private: System::Windows::Forms::PictureBox^ imgBotones;
	private: System::Windows::Forms::PictureBox^ btnSLeft;




	private: System::Windows::Forms::PictureBox^ btnSRight;

	private: System::ComponentModel::IContainer^ components;















	protected:

	protected:














	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

	private: System::Windows::Forms::PictureBox^ imgFondo;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMenu::typeid));
			this->btnExit = (gcnew System::Windows::Forms::PictureBox());
			this->btnAbout = (gcnew System::Windows::Forms::PictureBox());
			this->btnStart = (gcnew System::Windows::Forms::PictureBox());
			this->imgBotones = (gcnew System::Windows::Forms::PictureBox());
			this->btnSLeft = (gcnew System::Windows::Forms::PictureBox());
			this->btnSRight = (gcnew System::Windows::Forms::PictureBox());
			this->imgFondo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAbout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBotones))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnSLeft))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnSRight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFondo))->BeginInit();
			this->SuspendLayout();
			// 
			// btnExit
			// 
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->Location = System::Drawing::Point(1078, 445);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(228, 60);
			this->btnExit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnExit->TabIndex = 10;
			this->btnExit->TabStop = false;
			this->btnExit->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMenu::btnExit_MouseClick);
			this->btnExit->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnExit_MouseEnter);
			this->btnExit->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnExit_MouseLeave);
			// 
			// btnAbout
			// 
			this->btnAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAbout.Image")));
			this->btnAbout->Location = System::Drawing::Point(24, 494);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(138, 82);
			this->btnAbout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnAbout->TabIndex = 9;
			this->btnAbout->TabStop = false;
			this->btnAbout->Click += gcnew System::EventHandler(this, &frmMenu::btnAbout_Click);
			this->btnAbout->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnAbout_MouseEnter);
			this->btnAbout->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnAbout_MouseLeave);
			// 
			// btnStart
			// 
			this->btnStart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStart.Image")));
			this->btnStart->Location = System::Drawing::Point(616, 484);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(56, 54);
			this->btnStart->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnStart->TabIndex = 11;
			this->btnStart->TabStop = false;
			this->btnStart->Click += gcnew System::EventHandler(this, &frmMenu::btnStart_Click);
			this->btnStart->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnStart_MouseEnter);
			this->btnStart->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnStart_MouseLeave);
			// 
			// imgBotones
			// 
			this->imgBotones->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgBotones.Image")));
			this->imgBotones->Location = System::Drawing::Point(250, 310);
			this->imgBotones->Name = L"imgBotones";
			this->imgBotones->Size = System::Drawing::Size(790, 322);
			this->imgBotones->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgBotones->TabIndex = 12;
			this->imgBotones->TabStop = false;
			// 
			// btnSLeft
			// 
			this->btnSLeft->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSLeft.Image")));
			this->btnSLeft->Location = System::Drawing::Point(476, 472);
			this->btnSLeft->Name = L"btnSLeft";
			this->btnSLeft->Size = System::Drawing::Size(62, 82);
			this->btnSLeft->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnSLeft->TabIndex = 13;
			this->btnSLeft->TabStop = false;
			this->btnSLeft->Click += gcnew System::EventHandler(this, &frmMenu::btnSLeft_Click);
			this->btnSLeft->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnSLeft_MouseEnter);
			this->btnSLeft->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnSLeft_MouseLeave);
			// 
			// btnSRight
			// 
			this->btnSRight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSRight.Image")));
			this->btnSRight->Location = System::Drawing::Point(751, 472);
			this->btnSRight->Name = L"btnSRight";
			this->btnSRight->Size = System::Drawing::Size(59, 82);
			this->btnSRight->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnSRight->TabIndex = 14;
			this->btnSRight->TabStop = false;
			this->btnSRight->Click += gcnew System::EventHandler(this, &frmMenu::btnSRight_Click);
			this->btnSRight->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnSRight_MouseEnter);
			this->btnSRight->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnSRight_MouseLeave);
			// 
			// imgFondo
			// 
			this->imgFondo->Location = System::Drawing::Point(0, 1);
			this->imgFondo->Name = L"imgFondo";
			this->imgFondo->Size = System::Drawing::Size(1344, 680);
			this->imgFondo->TabIndex = 15;
			this->imgFondo->TabStop = false;
			// 
			// frmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1344, 681);
			this->Controls->Add(this->btnSRight);
			this->Controls->Add(this->btnSLeft);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->btnAbout);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->imgBotones);
			this->Controls->Add(this->imgFondo);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Flujo Maximo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAbout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBotones))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnSLeft))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnSRight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFondo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Eventos del botón Start
//Evento cuando el mouse entra en el botón Start
private: System::Void btnStart_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnStart->Image = System::Drawing::Image::FromFile("imgMenu\\btnStart2.png");
}

//Evento cuando el mouse sale del botón Start
private: System::Void btnStart_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnStart->Image = System::Drawing::Image::FromFile("imgMenu\\btnStart.png");
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
	//this->btnTheory->Image = System::Drawing::Image::FromFile("imgMenu\\btnTheory2.png");
}

//Evento cuando el mouse sale del botón Theory
private: System::Void btnTheory_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	//this->btnTheory->Image = System::Drawing::Image::FromFile("imgMenu\\btnTheory.png");
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
	this->btnAbout->Image = System::Drawing::Image::FromFile("imgMenu\\btnAbout2.png");
}

//Evento cuando el mouse sale del botón About
private: System::Void btnAbout_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnAbout->Image = System::Drawing::Image::FromFile("imgMenu\\btnAbout.png");
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
	this->btnExit->Image = System::Drawing::Image::FromFile("imgMenu\\btnExit2.png");
}

//Evento cuando el mouse entra en el botón Exit
private: System::Void btnExit_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	this->btnExit->Image = System::Drawing::Image::FromFile("imgMenu\\btnExit.png");
}

//Evento cuando se realiza un click dentro del botón Exit
private: System::Void btnExit_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//Sale de la aplicación
	Application::Exit();
}
private: System::Void btnSLeft_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnSLeft->Image = System::Drawing::Image::FromFile("imgMenu\\btnLeft2.png");
}
private: System::Void btnSLeft_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnSLeft->Image = System::Drawing::Image::FromFile("imgMenu\\btnLeft.png");
}
private: System::Void btnSRight_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnSRight->Image = System::Drawing::Image::FromFile("imgMenu\\btnRight2.png");
}
private: System::Void btnSRight_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnSRight->Image = System::Drawing::Image::FromFile("imgMenu\\btnRight.png");
}
private: System::Void btnSLeft_Click(System::Object^ sender, System::EventArgs^ e) {
	this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuE.png");
}
private: System::Void btnSRight_Click(System::Object^ sender, System::EventArgs^ e) {
	this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuT.png");
}
};
}
