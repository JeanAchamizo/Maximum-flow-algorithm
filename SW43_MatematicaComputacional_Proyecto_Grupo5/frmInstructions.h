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
	/// Resumen de frmInstructions
	/// </summary>
	public ref class frmInstructions : public System::Windows::Forms::Form
	{
	public:
		frmInstructions(CloseAll* CloseAll)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->closeAll = CloseAll;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmInstructions()
		{
			delete closeAll;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ imgFondo;
	protected:
	private: System::Windows::Forms::PictureBox^ btnBack;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::PictureBox^ btnNext;
	private: System::Windows::Forms::PictureBox^ btnBack2;
	private: System::Windows::Forms::PictureBox^ btnHome;

		   CloseAll* closeAll;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmInstructions::typeid));
			this->imgFondo = (gcnew System::Windows::Forms::PictureBox());
			this->btnBack = (gcnew System::Windows::Forms::PictureBox());
			this->btnNext = (gcnew System::Windows::Forms::PictureBox());
			this->btnBack2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnHome = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFondo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnBack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnNext))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnBack2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHome))->BeginInit();
			this->SuspendLayout();
			// 
			// imgFondo
			// 
			this->imgFondo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgFondo.Image")));
			this->imgFondo->Location = System::Drawing::Point(80, -1);
			this->imgFondo->Name = L"imgFondo";
			this->imgFondo->Size = System::Drawing::Size(1160, 641);
			this->imgFondo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgFondo->TabIndex = 0;
			this->imgFondo->TabStop = false;
			// 
			// btnBack
			// 
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(814, 485);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(164, 116);
			this->btnBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnBack->TabIndex = 1;
			this->btnBack->TabStop = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &frmInstructions::btnBack_Click);
			this->btnBack->MouseEnter += gcnew System::EventHandler(this, &frmInstructions::btnBack_MouseEnter);
			this->btnBack->MouseLeave += gcnew System::EventHandler(this, &frmInstructions::btnBack_MouseLeave);
			// 
			// btnNext
			// 
			this->btnNext->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNext.Image")));
			this->btnNext->Location = System::Drawing::Point(1014, 485);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(164, 116);
			this->btnNext->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnNext->TabIndex = 2;
			this->btnNext->TabStop = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &frmInstructions::btnNext_Click);
			this->btnNext->MouseEnter += gcnew System::EventHandler(this, &frmInstructions::btnNext_MouseEnter);
			this->btnNext->MouseLeave += gcnew System::EventHandler(this, &frmInstructions::btnNext_MouseLeave);
			// 
			// btnBack2
			// 
			this->btnBack2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack2.Image")));
			this->btnBack2->Location = System::Drawing::Point(834, 454);
			this->btnBack2->Name = L"btnBack2";
			this->btnBack2->Size = System::Drawing::Size(164, 116);
			this->btnBack2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnBack2->TabIndex = 3;
			this->btnBack2->TabStop = false;
			this->btnBack2->Visible = false;
			this->btnBack2->Click += gcnew System::EventHandler(this, &frmInstructions::btnBack2_Click);
			this->btnBack2->MouseEnter += gcnew System::EventHandler(this, &frmInstructions::btnBack2_MouseEnter);
			this->btnBack2->MouseLeave += gcnew System::EventHandler(this, &frmInstructions::btnBack2_MouseLeave);
			// 
			// btnHome
			// 
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHome.Image")));
			this->btnHome->Location = System::Drawing::Point(1049, 465);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(113, 92);
			this->btnHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnHome->TabIndex = 53;
			this->btnHome->TabStop = false;
			this->btnHome->Visible = false;
			this->btnHome->Click += gcnew System::EventHandler(this, &frmInstructions::btnHome_Click);
			this->btnHome->MouseEnter += gcnew System::EventHandler(this, &frmInstructions::btnHome_MouseEnter);
			this->btnHome->MouseLeave += gcnew System::EventHandler(this, &frmInstructions::btnHome_MouseLeave);
			// 
			// frmInstructions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1344, 681);
			this->Controls->Add(this->btnHome);
			this->Controls->Add(this->btnBack2);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->imgFondo);
			this->Name = L"frmInstructions";
			this->Text = L"frmInstructions";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmInstructions::frmInstructions_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFondo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnBack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnNext))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnBack2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHome))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btnBack_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnBack->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack2.png");
}
private: System::Void frmInstructions_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	closeAll->SetValue(true);
}
private: System::Void btnBack_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnBack->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack.png");
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	// close the aplication 
	SoundPlayer^ Click = gcnew SoundPlayer();
	Click->SoundLocation = "imgMenu/soundbtnClick.wav";
	Click->Play();
	this->Visible = false;
	//this->Close();
}

private: System::Void btnNext_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnNext->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnNext2.png");
}
private: System::Void btnNext_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnNext->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnNext.png");
}
private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) {
	SoundPlayer^ Click = gcnew SoundPlayer();
	Click->SoundLocation = "imgMenu/soundbtnClick.wav";
	Click->Play();
	this->imgFondo->Image = System::Drawing::Image::FromFile("imgMenu\\frmInstructions2.png");
	this->btnNext->Visible = false;
	this->btnBack->Visible = false;
	this->btnBack2->Visible = true;
	this->btnHome->Visible = true;
}
private: System::Void btnBack2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnBack2->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack2.png");
}
private: System::Void btnBack2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnBack2->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack.png");
}
private: System::Void btnHome_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnHome->Image = System::Drawing::Image::FromFile("imgMenu\\imgHomeAbout2.png");
}
private: System::Void btnHome_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnHome->Image = System::Drawing::Image::FromFile("imgMenu\\imgHomeAbout.png");
}
private: System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
	SoundPlayer^ Click = gcnew SoundPlayer();
	Click->SoundLocation = "imgMenu/soundbtnClick.wav";
	Click->Play();
	this->Visible = false;
	//this->Close();
}
private: System::Void btnBack2_Click(System::Object^ sender, System::EventArgs^ e) {
	SoundPlayer^ Click = gcnew SoundPlayer();
	Click->SoundLocation = "imgMenu/soundbtnClick.wav";
	Click->Play();
	this->btnBack2->Visible = false;
	this->imgFondo->Image = System::Drawing::Image::FromFile("imgMenu\\frmInstructions.png");
	this->btnNext->Visible = true;
	this->btnBack->Visible = true;
	this->btnHome->Visible = false;
}
};
}
