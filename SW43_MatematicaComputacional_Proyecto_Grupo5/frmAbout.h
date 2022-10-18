#pragma once
#include "frmMenu.h"
#include "Dependencias.h"

namespace SW43MatematicaComputacionalProyectoGrupo5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Media;
	/// <summary>
	/// Resumen de frmAbout
	/// </summary>
	public ref class frmAbout : public System::Windows::Forms::Form
	{
	public:
		frmAbout(void)
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
		~frmAbout()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ imgbtnKathy;
	private: System::Windows::Forms::PictureBox^ imgbtnBernardo;
	private: System::Windows::Forms::PictureBox^ imgbtnErick;
	private: System::Windows::Forms::PictureBox^ imgbtnCharlie;
	private: System::Windows::Forms::PictureBox^ imgbtnHansel;
	private: System::Windows::Forms::PictureBox^ imgFlechaTemporal;
	private: System::Windows::Forms::PictureBox^ imgFondo;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::PictureBox^ btnLeft;
	private: System::Windows::Forms::PictureBox^ btnRight;
	private: System::Windows::Forms::PictureBox^ imgPhoto;
	private: System::Windows::Forms::PictureBox^ imgDescription;
	private: System::Windows::Forms::PictureBox^ imgCode;
	public: System::Windows::Forms::PictureBox^ imgbtnBack;
	private:


		   int Position;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmAbout::typeid));
			this->imgbtnKathy = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnBernardo = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnErick = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnCharlie = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnHansel = (gcnew System::Windows::Forms::PictureBox());
			this->imgFlechaTemporal = (gcnew System::Windows::Forms::PictureBox());
			this->imgFondo = (gcnew System::Windows::Forms::PictureBox());
			this->btnLeft = (gcnew System::Windows::Forms::PictureBox());
			this->btnRight = (gcnew System::Windows::Forms::PictureBox());
			this->imgPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->imgDescription = (gcnew System::Windows::Forms::PictureBox());
			this->imgCode = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnBack = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnKathy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnBernardo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnErick))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnCharlie))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnHansel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFlechaTemporal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFondo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLeft))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDescription))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgCode))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnBack))->BeginInit();
			this->SuspendLayout();
			// 
			// imgbtnKathy
			// 
			this->imgbtnKathy->BackColor = System::Drawing::Color::White;
			this->imgbtnKathy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnKathy.Image")));
			this->imgbtnKathy->Location = System::Drawing::Point(1004, 206);
			this->imgbtnKathy->Name = L"imgbtnKathy";
			this->imgbtnKathy->Size = System::Drawing::Size(163, 54);
			this->imgbtnKathy->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnKathy->TabIndex = 40;
			this->imgbtnKathy->TabStop = false;
			// 
			// imgbtnBernardo
			// 
			this->imgbtnBernardo->BackColor = System::Drawing::Color::White;
			this->imgbtnBernardo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnBernardo.Image")));
			this->imgbtnBernardo->Location = System::Drawing::Point(780, 206);
			this->imgbtnBernardo->Name = L"imgbtnBernardo";
			this->imgbtnBernardo->Size = System::Drawing::Size(201, 54);
			this->imgbtnBernardo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnBernardo->TabIndex = 39;
			this->imgbtnBernardo->TabStop = false;
			// 
			// imgbtnErick
			// 
			this->imgbtnErick->BackColor = System::Drawing::Color::White;
			this->imgbtnErick->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnErick.Image")));
			this->imgbtnErick->Location = System::Drawing::Point(599, 206);
			this->imgbtnErick->Name = L"imgbtnErick";
			this->imgbtnErick->Size = System::Drawing::Size(159, 54);
			this->imgbtnErick->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnErick->TabIndex = 38;
			this->imgbtnErick->TabStop = false;
			// 
			// imgbtnCharlie
			// 
			this->imgbtnCharlie->BackColor = System::Drawing::Color::White;
			this->imgbtnCharlie->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnCharlie.Image")));
			this->imgbtnCharlie->Location = System::Drawing::Point(383, 206);
			this->imgbtnCharlie->Name = L"imgbtnCharlie";
			this->imgbtnCharlie->Size = System::Drawing::Size(196, 54);
			this->imgbtnCharlie->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnCharlie->TabIndex = 37;
			this->imgbtnCharlie->TabStop = false;
			// 
			// imgbtnHansel
			// 
			this->imgbtnHansel->BackColor = System::Drawing::Color::White;
			this->imgbtnHansel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnHansel.Image")));
			this->imgbtnHansel->Location = System::Drawing::Point(168, 206);
			this->imgbtnHansel->Name = L"imgbtnHansel";
			this->imgbtnHansel->Size = System::Drawing::Size(196, 54);
			this->imgbtnHansel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnHansel->TabIndex = 36;
			this->imgbtnHansel->TabStop = false;
			// 
			// imgFlechaTemporal
			// 
			this->imgFlechaTemporal->BackColor = System::Drawing::Color::White;
			this->imgFlechaTemporal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgFlechaTemporal.Image")));
			this->imgFlechaTemporal->Location = System::Drawing::Point(136, 109);
			this->imgFlechaTemporal->Name = L"imgFlechaTemporal";
			this->imgFlechaTemporal->Size = System::Drawing::Size(1061, 92);
			this->imgFlechaTemporal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgFlechaTemporal->TabIndex = 35;
			this->imgFlechaTemporal->TabStop = false;
			// 
			// imgFondo
			// 
			this->imgFondo->BackColor = System::Drawing::Color::White;
			this->imgFondo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgFondo.Image")));
			this->imgFondo->Location = System::Drawing::Point(-1, -1);
			this->imgFondo->Name = L"imgFondo";
			this->imgFondo->Size = System::Drawing::Size(1345, 676);
			this->imgFondo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgFondo->TabIndex = 41;
			this->imgFondo->TabStop = false;
			// 
			// btnLeft
			// 
			this->btnLeft->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLeft.Image")));
			this->btnLeft->Location = System::Drawing::Point(168, 361);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(41, 65);
			this->btnLeft->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnLeft->TabIndex = 42;
			this->btnLeft->TabStop = false;
			this->btnLeft->Click += gcnew System::EventHandler(this, &frmAbout::btnLeft_Click);
			this->btnLeft->MouseEnter += gcnew System::EventHandler(this, &frmAbout::btnLeft_MouseEnter);
			this->btnLeft->MouseLeave += gcnew System::EventHandler(this, &frmAbout::btnLeft_MouseLeave);
			// 
			// btnRight
			// 
			this->btnRight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRight.Image")));
			this->btnRight->Location = System::Drawing::Point(1126, 361);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(41, 65);
			this->btnRight->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnRight->TabIndex = 43;
			this->btnRight->TabStop = false;
			this->btnRight->Click += gcnew System::EventHandler(this, &frmAbout::btnRight_Click);
			this->btnRight->MouseEnter += gcnew System::EventHandler(this, &frmAbout::btnRight_MouseEnter);
			this->btnRight->MouseLeave += gcnew System::EventHandler(this, &frmAbout::btnRight_MouseLeave);
			// 
			// imgPhoto
			// 
			this->imgPhoto->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgPhoto.Image")));
			this->imgPhoto->Location = System::Drawing::Point(250, 288);
			this->imgPhoto->Name = L"imgPhoto";
			this->imgPhoto->Size = System::Drawing::Size(265, 275);
			this->imgPhoto->TabIndex = 44;
			this->imgPhoto->TabStop = false;
			// 
			// imgDescription
			// 
			this->imgDescription->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgDescription.Image")));
			this->imgDescription->Location = System::Drawing::Point(547, 337);
			this->imgDescription->Name = L"imgDescription";
			this->imgDescription->Size = System::Drawing::Size(545, 173);
			this->imgDescription->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgDescription->TabIndex = 45;
			this->imgDescription->TabStop = false;
			// 
			// imgCode
			// 
			this->imgCode->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgCode.Image")));
			this->imgCode->Location = System::Drawing::Point(250, 569);
			this->imgCode->Name = L"imgCode";
			this->imgCode->Size = System::Drawing::Size(265, 81);
			this->imgCode->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgCode->TabIndex = 46;
			this->imgCode->TabStop = false;
			// 
			// imgbtnBack
			// 
			this->imgbtnBack->BackColor = System::Drawing::Color::White;
			this->imgbtnBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnBack.Image")));
			this->imgbtnBack->Location = System::Drawing::Point(979, 540);
			this->imgbtnBack->Name = L"imgbtnBack";
			this->imgbtnBack->Size = System::Drawing::Size(113, 110);
			this->imgbtnBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnBack->TabIndex = 49;
			this->imgbtnBack->TabStop = false;
			this->imgbtnBack->Click += gcnew System::EventHandler(this, &frmAbout::imgbtnBack_Click);
			this->imgbtnBack->MouseEnter += gcnew System::EventHandler(this, &frmAbout::imgbtnBack_MouseEnter);
			this->imgbtnBack->MouseLeave += gcnew System::EventHandler(this, &frmAbout::imgbtnBack_MouseLeave);
			// 
			// frmAbout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1342, 681);
			this->Controls->Add(this->imgbtnBack);
			this->Controls->Add(this->imgCode);
			this->Controls->Add(this->imgDescription);
			this->Controls->Add(this->imgPhoto);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->imgbtnKathy);
			this->Controls->Add(this->imgbtnBernardo);
			this->Controls->Add(this->imgbtnErick);
			this->Controls->Add(this->imgbtnCharlie);
			this->Controls->Add(this->imgbtnHansel);
			this->Controls->Add(this->imgFlechaTemporal);
			this->Controls->Add(this->imgFondo);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmAbout";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Flujo Maximo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnKathy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnBernardo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnErick))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnCharlie))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnHansel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFlechaTemporal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFondo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLeft))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDescription))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgCode))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnBack))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
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
private: System::Void btnLeft_Click(System::Object^ sender, System::EventArgs^ e) {
	SoundPlayer^ Arrow = gcnew SoundPlayer();
	Arrow->SoundLocation = "imgMenu/soundArrow.wav";
	Arrow->Play();
	PositionListCir(-1);
	if (Position == 1) {
		this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel.png");
		this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie2.png");
		this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick2.png");
		this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo2.png");
		this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy2.png");
		this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgHansel.png");
		this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionHansel.png");
		this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeHansel.png");
	}
	else if (Position == 2) {
		this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel2.png");
		this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie.png");
		this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick2.png");
		this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo2.png");
		this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy2.png");
		this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgCharlie.png");
		this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionCharlie.png");
		this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeCharlie.png");
	}
	else if (Position == 3) {
		this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel2.png");
		this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie2.png");
		this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick.png");
		this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo2.png");
		this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy2.png");
		this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgErick.png");
		this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionErick.png");
		this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeErick.png");
	}
	else if (Position == 4) {
		this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel2.png");
		this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie2.png");
		this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick2.png");
		this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo.png");
		this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy2.png");
		this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgBernardo.png");
		this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionBernardo.png");
		this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeBernardo.png");
	}
	else if (Position == 5) {
		this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel2.png");
		this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie2.png");
		this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick2.png");
		this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo2.png");
		this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy.png");
		this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgKathy.png");
		this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeKathy.png");
	}
}
private: System::Void btnRight_Click(System::Object^ sender, System::EventArgs^ e) {
	SoundPlayer^ Arrow = gcnew SoundPlayer();
	Arrow->SoundLocation = "imgMenu/soundArrow.wav";
	Arrow->Play();
	PositionListCir(1);
	if (Position == 1) {
		this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel.png");
		this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie2.png");
		this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick2.png");
		this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo2.png");
		this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy2.png");
		this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgHansel.png");
		this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionHansel.png");
		this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeHansel.png");
	}
	else if (Position == 2) {
		this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel2.png");
		this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie.png");
		this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick2.png");
		this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo2.png");
		this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy2.png");
		this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgCharlie.png");
		this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionCharlie.png");
		this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeCharlie.png");
	}
	else if (Position == 3) {
		this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel2.png");
		this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie2.png");
		this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick.png");
		this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo2.png");
		this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy2.png");
		this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgErick.png");
		this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionErick.png");
		this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeErick.png");
	}
	else if (Position == 4) {
		this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel2.png");
		this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie2.png");
		this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick2.png");
		this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo.png");
		this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy2.png");
		this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgBernardo.png");
		this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionBernardo.png");
		this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeBernardo.png");
	}
	else if (Position == 5) {
		this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel2.png");
		this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie2.png");
		this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick2.png");
		this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo2.png");
		this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy.png");
		this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgKathy.png");
		this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeKathy.png");
	}
}
private: System::Void btnLeft_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnLeft->Image = System::Drawing::Image::FromFile("imgMenu\\btnLeft4.png");
}
private: System::Void btnLeft_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnLeft->Image = System::Drawing::Image::FromFile("imgMenu\\btnLeft3.png");
}
private: System::Void btnRight_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnRight->Image = System::Drawing::Image::FromFile("imgMenu\\btnRight4.png");
}
private: System::Void btnRight_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnRight->Image = System::Drawing::Image::FromFile("imgMenu\\btnRight3.png");
}
private: System::Void imgbtnBack_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnBack->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack2.png");
}
private: System::Void imgbtnBack_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnBack->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack.png");
}
private: System::Void imgbtnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	//frmMenu^ frm = gcnew frmMenu();
	//SW43MatematicaComputacionalProyectoGrupo5::frmMenu^ frm = gcnew SW43MatematicaComputacionalProyectoGrupo5::frmMenu();
	//Esconder el formulario Menu
	//Application::Run(gcnew frmMenu);
	//this->Visible = false;
	//this->Hide();
	//Mostrar el contenido del formulario About
	//frm->ShowDialog();
	//Cerrar el formulario About
	//Application::Exit();
	//this->Close();
}
};
}
