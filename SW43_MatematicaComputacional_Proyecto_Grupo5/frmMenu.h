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
	private: System::Windows::Forms::PictureBox^ imgTitleMenu;

	private: System::Windows::Forms::PictureBox^ imgbtnAbout;



	private: System::Windows::Forms::PictureBox^ imgbtnInstructions;
	private: System::Windows::Forms::PictureBox^ imgSelection;


	private: System::Windows::Forms::PictureBox^ imgbtnTheory;
	private: System::Windows::Forms::PictureBox^ imgbtnExit;
	private: System::Windows::Forms::PictureBox^ imgbtnStart;
	private: System::Windows::Forms::PictureBox^ imgGrafico;
	private: System::Windows::Forms::PictureBox^ imgLogoUPC;
	private: System::Windows::Forms::PictureBox^ imgDespedida;
	private: System::Windows::Forms::PictureBox^ imgManual;
	private: System::Windows::Forms::PictureBox^ imgLibro;
	private: System::Windows::Forms::PictureBox^ imgFondo;
	private: System::Windows::Forms::PictureBox^ imgbtnBack;


























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
			this->imgTitleMenu = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnAbout = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnInstructions = (gcnew System::Windows::Forms::PictureBox());
			this->imgSelection = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnTheory = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnExit = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnStart = (gcnew System::Windows::Forms::PictureBox());
			this->imgGrafico = (gcnew System::Windows::Forms::PictureBox());
			this->imgLogoUPC = (gcnew System::Windows::Forms::PictureBox());
			this->imgDespedida = (gcnew System::Windows::Forms::PictureBox());
			this->imgManual = (gcnew System::Windows::Forms::PictureBox());
			this->imgLibro = (gcnew System::Windows::Forms::PictureBox());
			this->imgFondo = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnBack = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLeft))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgTitleMenu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnAbout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnInstructions))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgSelection))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnTheory))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgGrafico))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogoUPC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDespedida))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgManual))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLibro))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFondo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnBack))->BeginInit();
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
			// imgTitleMenu
			// 
			this->imgTitleMenu->BackColor = System::Drawing::SystemColors::Window;
			this->imgTitleMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgTitleMenu.Image")));
			this->imgTitleMenu->Location = System::Drawing::Point(0, 12);
			this->imgTitleMenu->Name = L"imgTitleMenu";
			this->imgTitleMenu->Size = System::Drawing::Size(1345, 190);
			this->imgTitleMenu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgTitleMenu->TabIndex = 16;
			this->imgTitleMenu->TabStop = false;
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
			this->imgGrafico->Location = System::Drawing::Point(819, 266);
			this->imgGrafico->Name = L"imgGrafico";
			this->imgGrafico->Size = System::Drawing::Size(513, 400);
			this->imgGrafico->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgGrafico->TabIndex = 23;
			this->imgGrafico->TabStop = false;
			// 
			// imgLogoUPC
			// 
			this->imgLogoUPC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgLogoUPC.Image")));
			this->imgLogoUPC->Location = System::Drawing::Point(819, 312);
			this->imgLogoUPC->Name = L"imgLogoUPC";
			this->imgLogoUPC->Size = System::Drawing::Size(513, 306);
			this->imgLogoUPC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgLogoUPC->TabIndex = 24;
			this->imgLogoUPC->TabStop = false;
			this->imgLogoUPC->Visible = false;
			// 
			// imgDespedida
			// 
			this->imgDespedida->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgDespedida.Image")));
			this->imgDespedida->Location = System::Drawing::Point(819, 304);
			this->imgDespedida->Name = L"imgDespedida";
			this->imgDespedida->Size = System::Drawing::Size(513, 339);
			this->imgDespedida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgDespedida->TabIndex = 25;
			this->imgDespedida->TabStop = false;
			this->imgDespedida->Visible = false;
			// 
			// imgManual
			// 
			this->imgManual->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgManual.Image")));
			this->imgManual->Location = System::Drawing::Point(819, 304);
			this->imgManual->Name = L"imgManual";
			this->imgManual->Size = System::Drawing::Size(513, 314);
			this->imgManual->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgManual->TabIndex = 26;
			this->imgManual->TabStop = false;
			this->imgManual->Visible = false;
			// 
			// imgLibro
			// 
			this->imgLibro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgLibro.Image")));
			this->imgLibro->Location = System::Drawing::Point(819, 308);
			this->imgLibro->Name = L"imgLibro";
			this->imgLibro->Size = System::Drawing::Size(513, 314);
			this->imgLibro->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgLibro->TabIndex = 27;
			this->imgLibro->TabStop = false;
			this->imgLibro->Visible = false;
			// 
			// imgFondo
			// 
			this->imgFondo->Location = System::Drawing::Point(0, 0);
			this->imgFondo->Name = L"imgFondo";
			this->imgFondo->Size = System::Drawing::Size(1345, 669);
			this->imgFondo->TabIndex = 28;
			this->imgFondo->TabStop = false;
			this->imgFondo->Visible = false;
			// 
			// imgbtnBack
			// 
			this->imgbtnBack->BackColor = System::Drawing::Color::White;
			this->imgbtnBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnBack.Image")));
			this->imgbtnBack->Location = System::Drawing::Point(612, 522);
			this->imgbtnBack->Name = L"imgbtnBack";
			this->imgbtnBack->Size = System::Drawing::Size(201, 110);
			this->imgbtnBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnBack->TabIndex = 48;
			this->imgbtnBack->TabStop = false;
			this->imgbtnBack->Visible = false;
			this->imgbtnBack->MouseEnter += gcnew System::EventHandler(this, &frmMenu::imgbtnBack_MouseEnter);
			this->imgbtnBack->MouseLeave += gcnew System::EventHandler(this, &frmMenu::imgbtnBack_MouseLeave);
			// 
			// frmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1344, 681);
			this->Controls->Add(this->imgbtnBack);
			this->Controls->Add(this->imgLibro);
			this->Controls->Add(this->imgManual);
			this->Controls->Add(this->imgDespedida);
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
			this->Controls->Add(this->imgTitleMenu);
			this->Controls->Add(this->imgFondo);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Flujo Maximo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLeft))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgTitleMenu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnAbout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnInstructions))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgSelection))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnTheory))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgGrafico))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLogoUPC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDespedida))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgManual))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgLibro))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFondo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnBack))->EndInit();
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
		SoundPlayer^ Instructions = gcnew SoundPlayer();
		Instructions->SoundLocation = "imgMenu/soundInstructions.wav";
		Instructions->Play();
	}
	if (Position == 2) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnTheory2.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection2.png");
		SoundPlayer^ Theory = gcnew SoundPlayer();
		Theory->SoundLocation = "imgMenu/soundTheory.wav";
		Theory->Play();
	}
	if (Position == 3) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnStart2.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection2.png");
		SoundPlayer^ Player = gcnew SoundPlayer();
		Player->SoundLocation = "imgMenu/soundStart.wav";
		Player->Play();
	}
	if (Position == 4) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnExit2.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection2.png");
		SoundPlayer^ Exit = gcnew SoundPlayer();
		Exit->SoundLocation = "imgMenu/soundExit.wav";
		Exit->Play();
	}
	if (Position == 5) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnAbout2.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection2.png");
		SoundPlayer^ About = gcnew SoundPlayer();
		About->SoundLocation = "imgMenu/soundAbout.wav";
		About->Play();
	}
}

//Evento cuando el mouse sale del botón Start
private: System::Void btnIcon_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	if (Position == 1) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnInstructions.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
		SoundPlayer^ Instructions = gcnew SoundPlayer();
		Instructions->SoundLocation = "imgMenu/soundInstructions.wav";
		Instructions->Stop();
	}
	if (Position == 2) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnTheory.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
		SoundPlayer^ Theory = gcnew SoundPlayer();
		Theory->SoundLocation = "imgMenu/soundTheory.wav";
		Theory->Stop();
	}
	if (Position == 3) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnStart.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
		SoundPlayer^ Player = gcnew SoundPlayer();
		Player->SoundLocation = "imgMenu/soundStart.wav";
		Player->Stop();
	}
	if (Position == 4) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnExit.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
		SoundPlayer^ Exit = gcnew SoundPlayer();
		Exit->SoundLocation = "imgMenu/soundExit.wav";
		Exit->Stop();
	}
	if (Position == 5) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnAbout.png");
		this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
		SoundPlayer^ About = gcnew SoundPlayer();
		About->SoundLocation = "imgMenu/soundAbout.wav";
		About->Stop();
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
	if (Position == 3) {
		frmStart^ frm = gcnew frmStart();
		this->Visible = false;
		frm->ShowDialog();
		this->Visible = true;
	}
	if (Position == 4) {
		Application::Exit();
	}
	if (Position == 5) {
		//this->imgFondo->Image = System::Drawing::Image::FromFile("imgMenu\\imgfrmAbout.png");
		//this->imgFondo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		//this->imgFondo->BackColor = System::Drawing::Color::White;
		//this->BackColor = System::Drawing::SystemColors::Menu;
		//Llamar al formulario About
		frmAbout^ frm = gcnew frmAbout();
		//Esconder el formulario Menu
		//this->Visible = false;
		this->Hide();
		//Mostrar el contenido del formulario About
		frm->ShowDialog();
		//Cerrar el formulario About
		//frmMenu::imgbtnBack->Enabled = true;
		//imgbtnBack->Visible = true;
		this->Close();
		//this->Visible = true;
		imgFondo->Visible = false;
		imgGrafico->Visible = false;
		imgLogoUPC->Visible = false;
		imgDespedida->Visible = false;
		imgManual->Visible = false;
		imgLibro->Visible = false;
		imgTitleMenu->Visible = false;
		imgSelection->Visible = false;
		btnIcon->Visible = false;
		imgbtnAbout->Visible = false;
		imgbtnExit->Visible = false;
		imgbtnTheory->Visible = false;
		imgbtnInstructions->Visible = false;
		imgbtnStart->Visible = false;
		btnLeft->Visible = false;
		btnRight->Visible = false;
		//imgFlechaTemporal->Visible = true;
		//imgbtnBernardo->Visible = true;
		//imgbtnCharlie->Visible = true;
		//imgbtnErick->Visible = true;
		//imgbtnHansel->Visible = true;
		//imgbtnKathy->Visible = true;
	}
}

private: System::Void btnLeft_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnLeft->Image = System::Drawing::Image::FromFile("imgMenu\\btnLeft2.png");
	this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection2.png");
}
private: System::Void btnLeft_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnLeft->Image = System::Drawing::Image::FromFile("imgMenu\\btnLeft.png");
	this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
}
private: System::Void btnRight_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnRight->Image = System::Drawing::Image::FromFile("imgMenu\\btnRight2.png");
	this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection2.png");
}
private: System::Void btnRight_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnRight->Image = System::Drawing::Image::FromFile("imgMenu\\btnRight.png");
	this->imgSelection->Image = System::Drawing::Image::FromFile("imgMenu\\imgPanelSelection.png");
}

private: System::Void btnLeft_Click(System::Object^ sender, System::EventArgs^ e) {
	SoundPlayer^ Arrow = gcnew SoundPlayer();
	Arrow->SoundLocation = "imgMenu/soundArrow.wav";
	Arrow->Play();
	PositionListCir(-1);
	if (Position == 1) { 
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnInstructions.png");
		imgGrafico->Visible = false;
		imgLogoUPC->Visible = false;
		imgDespedida->Visible = false;
		imgManual->Visible = true;
		imgLibro->Visible = false;
	}
	else if (Position ==2 ) {
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnTheory.png");
		imgGrafico->Visible = false;
		imgLogoUPC->Visible = false;
		imgDespedida->Visible = false;
		imgManual->Visible = false;
		imgLibro->Visible = true;
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
		imgDespedida->Visible = false;
		imgManual->Visible = false;
		imgLibro->Visible = false;
	}
	else if (Position ==4 ) {
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnExit.png");
		imgGrafico->Visible = false;
		imgLogoUPC->Visible = false;
		imgDespedida->Visible = true;
		imgManual->Visible = false;
		imgLibro->Visible = false;
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
		imgDespedida->Visible = false;
		imgManual->Visible = false;
		imgManual->Visible = false;
		imgLibro->Visible = false;
	}
		
}
private: System::Void btnRight_Click(System::Object^ sender, System::EventArgs^ e) {
	SoundPlayer^ Arrow = gcnew SoundPlayer();
	Arrow->SoundLocation = "imgMenu/soundArrow.wav";
	Arrow->Play();
	PositionListCir(1);
	if (Position == 1) {
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnInstructions.png");
		imgGrafico->Visible = false;
		imgLogoUPC->Visible = false;
		imgDespedida->Visible = false;
		imgManual->Visible = true;
		imgLibro->Visible = false;
	}
	else if (Position == 2) {
		this->imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory2.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnTheory.png");
		imgGrafico->Visible = false;
		imgLogoUPC->Visible = false;
		imgDespedida->Visible = false;
		imgManual->Visible = false;
		imgLibro->Visible = true;
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
		imgDespedida->Visible = false;
		imgManual->Visible = false;
		imgLibro->Visible = false;
	}
	else if (Position == 4) {
		//this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuT.png");
		imgbtnStart->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnExit2.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnExit.png");
		imgbtnTheory->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnStart.png");
		imgbtnInstructions->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnTheory.png");
		imgbtnAbout->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnInstructions.png");
		imgbtnExit->Image = System::Drawing::Image::FromFile("imgMenu/imgbtnAbout.png");
		imgGrafico->Visible = false;
		imgLogoUPC->Visible = false;
		imgDespedida->Visible = true;
		imgManual->Visible = false;
		imgLibro->Visible = false;
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
		imgDespedida->Visible = false;
		imgManual->Visible = false;
		imgLibro->Visible = false;
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
private: System::Void imgbtnBack_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnBack->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack2.png");
}

private: System::Void imgbtnBack_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnBack->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack.png");
}
};

}


