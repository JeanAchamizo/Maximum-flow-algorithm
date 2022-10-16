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
	using namespace Media;

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
			Position = 3;
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


	





	protected:

	private: System::Windows::Forms::PictureBox^ btnIcon;





	private: System::Windows::Forms::PictureBox^ btnLeft;
	private: System::Windows::Forms::PictureBox^ btnRight;







	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ imgbtnAbout;



	private: System::Windows::Forms::PictureBox^ imgbtnInstructions;
	private: System::Windows::Forms::PictureBox^ imgSelection;


	private: System::Windows::Forms::PictureBox^ imgbtnTheory;
	private: System::Windows::Forms::PictureBox^ imgbtnExit;
	private: System::Windows::Forms::PictureBox^ imgbtnStart;
	private: System::Windows::Forms::PictureBox^ imgGrafico;
	private: System::Windows::Forms::PictureBox^ imgLogoUPC;















	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		int Position;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMenu::typeid));
			this->btnIcon = (gcnew System::Windows::Forms::PictureBox());
			this->btnLeft = (gcnew System::Windows::Forms::PictureBox());
			this->btnRight = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnAbout = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnInstructions = (gcnew System::Windows::Forms::PictureBox());
			this->imgSelection = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnTheory = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnExit = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnStart = (gcnew System::Windows::Forms::PictureBox());
			this->imgGrafico = (gcnew System::Windows::Forms::PictureBox());
			this->imgLogoUPC = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLeft))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnAbout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnInstructions))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgSelection))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnTheory))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgGrafico))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogoUPC))->BeginInit();
			this->SuspendLayout();
			// 
			// btnIcon
			// 
			this->btnIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnIcon.Image")));
			this->btnIcon->Location = System::Drawing::Point(356, 522);
			this->btnIcon->Name = L"btnIcon";
			this->btnIcon->Size = System::Drawing::Size(40, 34);
			this->btnIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnIcon->TabIndex = 11;
			this->btnIcon->TabStop = false;
			this->btnIcon->Click += gcnew System::EventHandler(this, &frmMenu::btnIcon_Click);
			this->btnIcon->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnIcon_MouseEnter);
			this->btnIcon->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnIcon_MouseLeave);
			// 
			// btnLeft
			// 
			this->btnLeft->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLeft.Image")));
			this->btnLeft->Location = System::Drawing::Point(204, 505);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(41, 65);
			this->btnLeft->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnLeft->TabIndex = 13;
			this->btnLeft->TabStop = false;
			this->btnLeft->Click += gcnew System::EventHandler(this, &frmMenu::btnLeft_Click);
			this->btnLeft->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnLeft_MouseEnter);
			this->btnLeft->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnLeft_MouseLeave);
			// 
			// btnRight
			// 
			this->btnRight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRight.Image")));
			this->btnRight->Location = System::Drawing::Point(509, 505);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(41, 65);
			this->btnRight->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnRight->TabIndex = 14;
			this->btnRight->TabStop = false;
			this->btnRight->Click += gcnew System::EventHandler(this, &frmMenu::btnRight_Click);
			this->btnRight->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnRight_MouseEnter);
			this->btnRight->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnRight_MouseLeave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1345, 190);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// imgbtnAbout
			// 
			this->imgbtnAbout->BackColor = System::Drawing::Color::Transparent;
			this->imgbtnAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnAbout.Image")));
			this->imgbtnAbout->Location = System::Drawing::Point(422, 251);
			this->imgbtnAbout->Name = L"imgbtnAbout";
			this->imgbtnAbout->Size = System::Drawing::Size(137, 129);
			this->imgbtnAbout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnAbout->TabIndex = 17;
			this->imgbtnAbout->TabStop = false;
			// 
			// imgbtnInstructions
			// 
			this->imgbtnInstructions->BackColor = System::Drawing::Color::Transparent;
			this->imgbtnInstructions->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnInstructions.Image")));
			this->imgbtnInstructions->Location = System::Drawing::Point(262, 266);
			this->imgbtnInstructions->Name = L"imgbtnInstructions";
			this->imgbtnInstructions->Size = System::Drawing::Size(137, 129);
			this->imgbtnInstructions->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnInstructions->TabIndex = 18;
			this->imgbtnInstructions->TabStop = false;
			// 
			// imgSelection
			// 
			this->imgSelection->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgSelection.Image")));
			this->imgSelection->Location = System::Drawing::Point(22, 218);
			this->imgSelection->Name = L"imgSelection";
			this->imgSelection->Size = System::Drawing::Size(791, 448);
			this->imgSelection->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgSelection->TabIndex = 19;
			this->imgSelection->TabStop = false;
			// 
			// imgbtnTheory
			// 
			this->imgbtnTheory->BackColor = System::Drawing::Color::Transparent;
			this->imgbtnTheory->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnTheory.Image")));
			this->imgbtnTheory->Location = System::Drawing::Point(108, 340);
			this->imgbtnTheory->Name = L"imgbtnTheory";
			this->imgbtnTheory->Size = System::Drawing::Size(137, 129);
			this->imgbtnTheory->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnTheory->TabIndex = 20;
			this->imgbtnTheory->TabStop = false;
			// 
			// imgbtnExit
			// 
			this->imgbtnExit->BackColor = System::Drawing::Color::Transparent;
			this->imgbtnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnExit.Image")));
			this->imgbtnExit->Location = System::Drawing::Point(585, 281);
			this->imgbtnExit->Name = L"imgbtnExit";
			this->imgbtnExit->Size = System::Drawing::Size(137, 129);
			this->imgbtnExit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnExit->TabIndex = 21;
			this->imgbtnExit->TabStop = false;
			// 
			// imgbtnStart
			// 
			this->imgbtnStart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnStart.Image")));
			this->imgbtnStart->Location = System::Drawing::Point(251, 415);
			this->imgbtnStart->Name = L"imgbtnStart";
			this->imgbtnStart->Size = System::Drawing::Size(252, 193);
			this->imgbtnStart->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnStart->TabIndex = 22;
			this->imgbtnStart->TabStop = false;
			// 
			// imgGrafico
			// 
			this->imgGrafico->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgGrafico.Image")));
			this->imgGrafico->Location = System::Drawing::Point(772, 340);
			this->imgGrafico->Name = L"imgGrafico";
			this->imgGrafico->Size = System::Drawing::Size(529, 289);
			this->imgGrafico->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgGrafico->TabIndex = 23;
			this->imgGrafico->TabStop = false;
			// 
			// imgLogoUPC
			// 
			this->imgLogoUPC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgLogoUPC.Image")));
			this->imgLogoUPC->Location = System::Drawing::Point(848, 340);
			this->imgLogoUPC->Name = L"imgLogoUPC";
			this->imgLogoUPC->Size = System::Drawing::Size(424, 289);
			this->imgLogoUPC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgLogoUPC->TabIndex = 24;
			this->imgLogoUPC->TabStop = false;
			this->imgLogoUPC->Visible = false;
			// 
			// frmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1344, 681);
			this->Controls->Add(this->imgLogoUPC);
			this->Controls->Add(this->imgGrafico);
			this->Controls->Add(this->btnIcon);
			this->Controls->Add(this->imgbtnStart);
			this->Controls->Add(this->imgbtnExit);
			this->Controls->Add(this->imgbtnTheory);
			this->Controls->Add(this->imgbtnInstructions);
			this->Controls->Add(this->imgbtnAbout);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->imgSelection);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Flujo Maximo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLeft))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnAbout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnInstructions))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgSelection))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnTheory))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgGrafico))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogoUPC))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Eventos del botón Start
//Evento cuando el mouse entra en el botón Start
private: System::Void btnIcon_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	if (Position == 1) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnInstructions2.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection2.png");
	}
	if (Position == 2) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnTheory2.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection2.png");
	}
	if (Position == 3) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnStart2.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection2.png");
		SoundPlayer^ Player = gcnew SoundPlayer();
		Player->SoundLocation = "imgMenu/musicThemeButton.wav";
		Player->Play();
	}
	if (Position == 4) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnExit2.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection2.png");
	}
	if (Position == 5) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnAbout2.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection2.png");
	}
}

//Evento cuando el mouse sale del botón Start
private: System::Void btnIcon_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	if (Position == 1) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnInstructions.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
	}
	if (Position == 2) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnTheory.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
	}
	if (Position == 3) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnStart.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
		SoundPlayer^ Player = gcnew SoundPlayer();
		Player->SoundLocation = "imgMenu/musicThemeButton.wav";
		Player->Stop();
	}
	if (Position == 4) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnExit.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
	}
	if (Position == 5) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnAbout.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
	}

}

//Evento cuando se realiza un click dentro del botón Start
private: System::Void btnIcon_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (Position == 1) {
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
	if (Position == 2) {
		Application::Exit();
	}
	if (Position == 3) {
		frmStart^ frm = gcnew frmStart();
		this->Visible = false;
		frm->ShowDialog();
		this->Visible = true;
	}
	if (Position == 4) {
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

}

private: System::Void btnLeft_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnLeft->Image = System::Drawing::Image::FromFile("imgMenu\\btnLeft2.png");
	this->btnLeft->Image = System::Drawing::Image::FromFile("imgMenu\\btnLeft2.png");
}
private: System::Void btnLeft_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnLeft->Image = System::Drawing::Image::FromFile("imgMenu\\btnLeft.png");
}
private: System::Void btnRight_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnRight->Image = System::Drawing::Image::FromFile("imgMenu\\btnRight2.png");
}
private: System::Void btnRight_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnRight->Image = System::Drawing::Image::FromFile("imgMenu\\btnRight.png");
}

private: System::Void btnLeft_Click(System::Object^ sender, System::EventArgs^ e) {
	PositionListCir(-1);
	if (Position == 1) { 
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnInstructions.png");
	}
	else if (Position ==2 ) {
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnTheory.png");
	}
	else if (Position ==3 ) {
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnStart.png");
		imgGrafico->Visible = true;
		imgLogoUPC->Visible = false;
	}
	else if (Position ==4 ) {
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnExit.png");
	}
	else if (Position ==5 ) {
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnAbout.png");
		imgGrafico->Visible = false;
		imgLogoUPC->Visible = true;
	}
		
}
private: System::Void btnRight_Click(System::Object^ sender, System::EventArgs^ e) {

	PositionListCir(1);
	if (Position == 1) {
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnInstructions.png");
	}
	else if (Position == 2) {
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnTheory.png");
	}
	else if (Position == 3) {
		imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnStart.png");
		imgGrafico->Visible = true;
		imgLogoUPC->Visible = false;
	}
	else if (Position == 4) {
		//this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuT.png");
		imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit2.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnExit.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
	}
	else if (Position == 5) {
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnAbout.png");
		imgGrafico->Visible = false;
		imgLogoUPC->Visible = true;
	}
}

private: Void PositionListCir(int Value) {
	
	// si la posicion es menor 5 y se le tiene que sumar
	if (Position == 5 && Value > 0) {
		Position = 1; return;
	}
	else if (Position == 1 && Value < 0) {
		Position = 5; return;
	}

	Position = Position + Value;
}
};

}


