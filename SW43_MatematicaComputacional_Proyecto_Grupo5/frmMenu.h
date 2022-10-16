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




	private: System::Windows::Forms::PictureBox^ imgBotones;
	private: System::Windows::Forms::PictureBox^ btnLeft;
	private: System::Windows::Forms::PictureBox^ btnRight;







	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			this->imgBotones = (gcnew System::Windows::Forms::PictureBox());
			this->btnLeft = (gcnew System::Windows::Forms::PictureBox());
			this->btnRight = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBotones))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLeft))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnIcon
			// 
			this->btnIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnIcon.Image")));
			this->btnIcon->Location = System::Drawing::Point(644, 463);
			this->btnIcon->Name = L"btnIcon";
			this->btnIcon->Size = System::Drawing::Size(56, 54);
			this->btnIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnIcon->TabIndex = 11;
			this->btnIcon->TabStop = false;
			this->btnIcon->Click += gcnew System::EventHandler(this, &frmMenu::btnIcon_Click);
			this->btnIcon->MouseEnter += gcnew System::EventHandler(this, &frmMenu::btnIcon_MouseEnter);
			this->btnIcon->MouseLeave += gcnew System::EventHandler(this, &frmMenu::btnIcon_MouseLeave);
			// 
			// imgBotones
			// 
			this->imgBotones->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgBotones.Image")));
			this->imgBotones->Location = System::Drawing::Point(280, 289);
			this->imgBotones->Name = L"imgBotones";
			this->imgBotones->Size = System::Drawing::Size(790, 322);
			this->imgBotones->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgBotones->TabIndex = 12;
			this->imgBotones->TabStop = false;
			// 
			// btnLeft
			// 
			this->btnLeft->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLeft.Image")));
			this->btnLeft->Location = System::Drawing::Point(506, 447);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(62, 82);
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
			this->btnRight->Location = System::Drawing::Point(783, 447);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(59, 82);
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
			this->pictureBox1->Location = System::Drawing::Point(-1, 81);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1345, 190);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// frmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1344, 681);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->btnIcon);
			this->Controls->Add(this->imgBotones);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Flujo Maximo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBotones))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnLeft))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnRight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Eventos del botón Start
//Evento cuando el mouse entra en el botón Start
private: System::Void btnIcon_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	if (Position == 1) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnAbout2.png");
	}
	if (Position == 2) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnExit2.png");
	}
	if (Position == 3) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnStart2.png");
		SoundPlayer^ Player = gcnew SoundPlayer();
		Player->SoundLocation = "imgMenu/musicThemeButton.wav";
		Player->Play();
	}
	if (Position == 4) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnTheory2.png");
	}
	if (Position == 5) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnInstructions2.png");
	}
}

//Evento cuando el mouse sale del botón Start
private: System::Void btnIcon_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	//Cambio de imagen
	if (Position == 1) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnAbout.png");
	}
	if (Position == 2) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnExit.png");
	}
	if (Position == 3) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnStart.png");
		SoundPlayer^ Player = gcnew SoundPlayer();
		Player->SoundLocation = "imgMenu/musicThemeButton.wav";
		Player->Stop();
	}
	if (Position == 4) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnTheory.png");
	}
	if (Position == 5) {
		this->btnIcon->Image = System::Drawing::Image::FromFile("imgMenu\\btnInstructions.png");
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
		this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuA.png"); 
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnAbout.png");
	}
	else if (Position ==2 ) {
		this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuE.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnExit.png");
	}
	else if (Position ==3 ) {
		this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuS.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnStart.png");
	}
	else if (Position ==4 ) {
		this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuT.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnTheory.png");
	}
	else if (Position ==5 ) {
		this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuI.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnInstructions.png");
	}
		
}
private: System::Void btnRight_Click(System::Object^ sender, System::EventArgs^ e) {

	PositionListCir(1);
	if (Position == 1) {
		this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuA.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnAbout.png");
	}
	else if (Position == 2) {
		this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuE.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnExit.png");
	}
	else if (Position == 3) {
		this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuS.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnStart.png");
	}
	else if (Position == 4) {
		this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuT.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnTheory.png");
	}
	else if (Position == 5) {
		this->imgBotones->Image = System::Drawing::Image::FromFile("imgMenu/frmMenuI.png");
		btnIcon->Image = System::Drawing::Image::FromFile("imgMenu/btnInstructions.png");
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


