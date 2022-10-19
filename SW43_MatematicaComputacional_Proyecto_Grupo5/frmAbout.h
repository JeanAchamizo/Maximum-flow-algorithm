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
		frmAbout(CloseAll* CloseAll)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->closeAll = CloseAll;
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
	public: System::Windows::Forms::PictureBox^ imgbtnBackPreview;
	private:
	public: System::Windows::Forms::PictureBox^ imgbtnNextPreview;
	public: System::Windows::Forms::PictureBox^ imgbtnBackAbout;
	private: System::Windows::Forms::PictureBox^ imgbtnHomeAbout;
	private: System::Windows::Forms::PictureBox^ imgbtnTeacher;
	private: System::Windows::Forms::PictureBox^ imgbtnMattos;
	private: System::Windows::Forms::PictureBox^ imgbtnGroup;

	public:

	private:


		   int Position;
		   CloseAll* closeAll;

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
			this->imgbtnBackPreview = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnNextPreview = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnBackAbout = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnHomeAbout = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnTeacher = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnMattos = (gcnew System::Windows::Forms::PictureBox());
			this->imgbtnGroup = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnBackPreview))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnNextPreview))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnBackAbout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnHomeAbout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnTeacher))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnMattos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnGroup))->BeginInit();
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
			this->imgbtnKathy->Visible = false;
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
			this->imgbtnBernardo->Visible = false;
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
			this->imgbtnErick->Visible = false;
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
			this->imgbtnCharlie->Visible = false;
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
			this->imgbtnHansel->Visible = false;
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
			this->imgFlechaTemporal->Visible = false;
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
			this->btnLeft->Visible = false;
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
			this->btnRight->Visible = false;
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
			this->imgPhoto->Visible = false;
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
			this->imgDescription->Visible = false;
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
			this->imgCode->Visible = false;
			// 
			// imgbtnBackPreview
			// 
			this->imgbtnBackPreview->BackColor = System::Drawing::Color::White;
			this->imgbtnBackPreview->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnBackPreview.Image")));
			this->imgbtnBackPreview->Location = System::Drawing::Point(780, 540);
			this->imgbtnBackPreview->Name = L"imgbtnBackPreview";
			this->imgbtnBackPreview->Size = System::Drawing::Size(113, 110);
			this->imgbtnBackPreview->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnBackPreview->TabIndex = 49;
			this->imgbtnBackPreview->TabStop = false;
			this->imgbtnBackPreview->Click += gcnew System::EventHandler(this, &frmAbout::imgbtnBackPreview_Click);
			this->imgbtnBackPreview->MouseEnter += gcnew System::EventHandler(this, &frmAbout::imgbtnBackPreview_MouseEnter);
			this->imgbtnBackPreview->MouseLeave += gcnew System::EventHandler(this, &frmAbout::imgbtnBackPreview_MouseLeave);
			// 
			// imgbtnNextPreview
			// 
			this->imgbtnNextPreview->BackColor = System::Drawing::Color::White;
			this->imgbtnNextPreview->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnNextPreview.Image")));
			this->imgbtnNextPreview->Location = System::Drawing::Point(1098, 540);
			this->imgbtnNextPreview->Name = L"imgbtnNextPreview";
			this->imgbtnNextPreview->Size = System::Drawing::Size(113, 110);
			this->imgbtnNextPreview->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnNextPreview->TabIndex = 50;
			this->imgbtnNextPreview->TabStop = false;
			this->imgbtnNextPreview->Click += gcnew System::EventHandler(this, &frmAbout::imgbtnNextPreview_Click);
			this->imgbtnNextPreview->MouseEnter += gcnew System::EventHandler(this, &frmAbout::imgbtnNextPreview_MouseEnter);
			this->imgbtnNextPreview->MouseLeave += gcnew System::EventHandler(this, &frmAbout::imgbtnNextPreview_MouseLeave);
			// 
			// imgbtnBackAbout
			// 
			this->imgbtnBackAbout->BackColor = System::Drawing::Color::White;
			this->imgbtnBackAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnBackAbout.Image")));
			this->imgbtnBackAbout->Location = System::Drawing::Point(579, 533);
			this->imgbtnBackAbout->Name = L"imgbtnBackAbout";
			this->imgbtnBackAbout->Size = System::Drawing::Size(113, 110);
			this->imgbtnBackAbout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnBackAbout->TabIndex = 51;
			this->imgbtnBackAbout->TabStop = false;
			this->imgbtnBackAbout->Visible = false;
			this->imgbtnBackAbout->Click += gcnew System::EventHandler(this, &frmAbout::imgbtnBackAbout_Click);
			this->imgbtnBackAbout->MouseEnter += gcnew System::EventHandler(this, &frmAbout::imgbtnBackAbout_MouseEnter);
			this->imgbtnBackAbout->MouseLeave += gcnew System::EventHandler(this, &frmAbout::imgbtnBackAbout_MouseLeave);
			// 
			// imgbtnHomeAbout
			// 
			this->imgbtnHomeAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnHomeAbout.Image")));
			this->imgbtnHomeAbout->Location = System::Drawing::Point(979, 540);
			this->imgbtnHomeAbout->Name = L"imgbtnHomeAbout";
			this->imgbtnHomeAbout->Size = System::Drawing::Size(113, 92);
			this->imgbtnHomeAbout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnHomeAbout->TabIndex = 52;
			this->imgbtnHomeAbout->TabStop = false;
			this->imgbtnHomeAbout->Visible = false;
			this->imgbtnHomeAbout->Click += gcnew System::EventHandler(this, &frmAbout::imgbtnHomeAbout_Click);
			this->imgbtnHomeAbout->MouseEnter += gcnew System::EventHandler(this, &frmAbout::imgbtnHomeAbout_MouseEnter);
			this->imgbtnHomeAbout->MouseLeave += gcnew System::EventHandler(this, &frmAbout::imgbtnHomeAbout_MouseLeave);
			// 
			// imgbtnTeacher
			// 
			this->imgbtnTeacher->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnTeacher.Image")));
			this->imgbtnTeacher->Location = System::Drawing::Point(847, 540);
			this->imgbtnTeacher->Name = L"imgbtnTeacher";
			this->imgbtnTeacher->Size = System::Drawing::Size(113, 92);
			this->imgbtnTeacher->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnTeacher->TabIndex = 53;
			this->imgbtnTeacher->TabStop = false;
			this->imgbtnTeacher->Visible = false;
			this->imgbtnTeacher->Click += gcnew System::EventHandler(this, &frmAbout::imgbtnTeacher_Click);
			this->imgbtnTeacher->MouseEnter += gcnew System::EventHandler(this, &frmAbout::imgbtnTeacher_MouseEnter);
			this->imgbtnTeacher->MouseLeave += gcnew System::EventHandler(this, &frmAbout::imgbtnTeacher_MouseLeave);
			// 
			// imgbtnMattos
			// 
			this->imgbtnMattos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnMattos.Image")));
			this->imgbtnMattos->Location = System::Drawing::Point(599, 206);
			this->imgbtnMattos->Name = L"imgbtnMattos";
			this->imgbtnMattos->Size = System::Drawing::Size(175, 55);
			this->imgbtnMattos->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnMattos->TabIndex = 54;
			this->imgbtnMattos->TabStop = false;
			this->imgbtnMattos->Visible = false;
			// 
			// imgbtnGroup
			// 
			this->imgbtnGroup->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgbtnGroup.Image")));
			this->imgbtnGroup->Location = System::Drawing::Point(715, 533);
			this->imgbtnGroup->Name = L"imgbtnGroup";
			this->imgbtnGroup->Size = System::Drawing::Size(113, 110);
			this->imgbtnGroup->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgbtnGroup->TabIndex = 55;
			this->imgbtnGroup->TabStop = false;
			this->imgbtnGroup->Visible = false;
			this->imgbtnGroup->Click += gcnew System::EventHandler(this, &frmAbout::imgbtnGroup_Click);
			this->imgbtnGroup->MouseEnter += gcnew System::EventHandler(this, &frmAbout::imgbtnGroup_MouseEnter);
			this->imgbtnGroup->MouseLeave += gcnew System::EventHandler(this, &frmAbout::imgbtnGroup_MouseLeave);
			// 
			// frmAbout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1342, 681);
			this->Controls->Add(this->imgbtnGroup);
			this->Controls->Add(this->imgbtnMattos);
			this->Controls->Add(this->imgbtnTeacher);
			this->Controls->Add(this->imgbtnHomeAbout);
			this->Controls->Add(this->imgbtnBackAbout);
			this->Controls->Add(this->imgbtnNextPreview);
			this->Controls->Add(this->imgbtnBackPreview);
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
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmAbout::frmAbout_FormClosed);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnBackPreview))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnNextPreview))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnBackAbout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnHomeAbout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnTeacher))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnMattos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgbtnGroup))->EndInit();
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
private: System::Void imgbtnBackPreview_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnBackPreview->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack2.png");
}
private: System::Void imgbtnBackPreview_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnBackPreview->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack.png");
}
private: System::Void imgbtnBackPreview_Click(System::Object^ sender, System::EventArgs^ e) {

	// close the aplication 
	this->Close();
}
private: System::Void imgbtnNextPreview_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnNextPreview->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnNext2.png");
}
private: System::Void imgbtnNextPreview_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnNextPreview->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnNext.png");
}
private: System::Void imgbtnBackAbout_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnBackAbout->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack2.png");
}
private: System::Void imgbtnBackAbout_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnBackAbout->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack.png");
}
private: System::Void imgbtnBackAbout_Click(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnBackPreview->Visible = true;
	this->imgbtnNextPreview->Visible = true;
	this->imgbtnHansel->Visible = false;
	this->imgbtnCharlie->Visible = false;
	this->imgbtnErick->Visible = false;
	this->imgbtnBernardo->Visible = false;
	this->imgbtnKathy->Visible = false;
	this->imgPhoto->Visible = false;
	this->imgDescription->Visible = false;
	this->imgCode->Visible = false;
	this->imgFondo->Image = System::Drawing::Image::FromFile("imgMenu\\frmPreviewAbout.png");
	this->imgFlechaTemporal->Visible = false;
	this->imgbtnBackAbout->Visible = false;
	this->imgbtnHomeAbout->Visible = false;
	this->imgbtnTeacher->Visible = false;
	this->imgbtnMattos->Visible = false;
	this->imgbtnGroup->Visible = false;
}
private: System::Void imgbtnNextPreview_Click(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnBackPreview->Visible = false;
	this->imgbtnHansel->Visible = true;
	this->imgbtnCharlie->Visible = true;
	this->imgbtnErick->Visible = true;
	this->imgbtnBernardo->Visible = true;
	this->imgbtnKathy->Visible = true;
	this->imgPhoto->Visible = true;
	this->imgDescription->Visible = true;
	this->imgCode->Visible = true;
	this->imgFondo->Image = System::Drawing::Image::FromFile("imgMenu\\imgfrmAbout.png");
	this->imgbtnBackAbout->Visible = true;
	this->imgbtnNextPreview->Visible = false;
	this->imgFlechaTemporal->Visible = true;
	this->btnRight->Visible = true;
	this->btnLeft->Visible = true;
	this->imgbtnHomeAbout->Visible = true;
	this->imgbtnTeacher->Visible = true;
	this->imgbtnMattos->Visible = false;
	this->imgbtnGroup->Visible = true;
	this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgErick.png");
	this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeErick.png");
	this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionErick.png");
	this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel2.png");
	this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie2.png");
	this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick.png");
	this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo2.png");
	this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy2.png");
	this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgErick.png");
	this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionErick.png");
	this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeErick.png");
}
private: System::Void imgbtnHomeAbout_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnHomeAbout->Image = System::Drawing::Image::FromFile("imgMenu\\imgHomeAbout2.png");
}
private: System::Void imgbtnHomeAbout_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnHomeAbout->Image = System::Drawing::Image::FromFile("imgMenu\\imgHomeAbout.png");
}
private: System::Void imgbtnHomeAbout_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void imgbtnTeacher_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnTeacher->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnTeacher2.png");
}
private: System::Void imgbtnTeacher_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnTeacher->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnTeacher.png");
}
private: System::Void imgbtnTeacher_Click(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnHansel->Visible = false;
	this->imgbtnCharlie->Visible = false;
	this->imgbtnErick->Visible = false;
	this->imgbtnBernardo->Visible = false;
	this->imgbtnMattos->Visible = true;
	this->imgbtnKathy->Visible = false;
	this->btnRight->Visible = false;
	this->btnLeft->Visible = false;
	this->imgbtnGroup->Visible = true;
	this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgMattos.png");
	this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionMattos.png");
	this->imgCode->Visible = false;
}
private: System::Void imgbtnGroup_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnGroup->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnGroup2.png");
}
private: System::Void imgbtnGroup_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnGroup->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnGroup.png");
}
private: System::Void imgbtnGroup_Click(System::Object^ sender, System::EventArgs^ e) {
	this->imgbtnBackPreview->Visible = false;
	this->imgbtnHansel->Visible = true;
	this->imgbtnCharlie->Visible = true;
	this->imgbtnErick->Visible = true;
	this->imgbtnBernardo->Visible = true;
	this->imgbtnKathy->Visible = true;
	this->imgPhoto->Visible = true;
	this->imgDescription->Visible = true;
	this->imgCode->Visible = true;
	this->imgFondo->Image = System::Drawing::Image::FromFile("imgMenu\\imgfrmAbout.png");
	this->imgbtnBackAbout->Visible = true;
	this->imgbtnNextPreview->Visible = false;
	this->imgFlechaTemporal->Visible = true;
	this->btnRight->Visible = true;
	this->btnLeft->Visible = true;
	this->imgbtnHomeAbout->Visible = true;
	this->imgbtnTeacher->Visible = true;
	this->imgbtnGroup->Visible = true;
	this->imgbtnMattos->Visible = false;
	this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgErick.png");
	this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeErick.png");
	this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionErick.png");
	this->imgbtnHansel->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreHansel2.png");
	this->imgbtnCharlie->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreCharlie2.png");
	this->imgbtnErick->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreErick.png");
	this->imgbtnBernardo->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreBernardo2.png");
	this->imgbtnKathy->Image = System::Drawing::Image::FromFile("imgMenu\\imgNombreKathy2.png");
	this->imgPhoto->Image = System::Drawing::Image::FromFile("imgMenu\\imgErick.png");
	this->imgDescription->Image = System::Drawing::Image::FromFile("imgMenu\\imgDescriptionErick.png");
	this->imgCode->Image = System::Drawing::Image::FromFile("imgMenu\\imgCodeErick.png");
}
private: System::Void frmAbout_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

	closeAll->SetValue(false);
}
};
}
