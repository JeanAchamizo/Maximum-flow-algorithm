#pragma once

namespace SW43MatematicaComputacionalProyectoGrupo5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Media;

	/// <summary>
	/// Resumen de frmTheory
	/// </summary>
	public ref class frmTheory : public System::Windows::Forms::Form
	{
	public:
		frmTheory(CloseAll* CloseAll)
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
		~frmTheory()
		{
			delete closeAll;
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ imgFondo;
	private: System::Windows::Forms::PictureBox^ btnBack;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		CloseAll* closeAll;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmTheory::typeid));
			this->imgFondo = (gcnew System::Windows::Forms::PictureBox());
			this->btnBack = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFondo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnBack))->BeginInit();
			this->SuspendLayout();
			// 
			// imgFondo
			// 
			this->imgFondo->BackColor = System::Drawing::Color::White;
			this->imgFondo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgFondo.Image")));
			this->imgFondo->Location = System::Drawing::Point(0, 0);
			this->imgFondo->Name = L"imgFondo";
			this->imgFondo->Size = System::Drawing::Size(1344, 653);
			this->imgFondo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgFondo->TabIndex = 12;
			this->imgFondo->TabStop = false;
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::White;
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(1073, 520);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(149, 109);
			this->btnBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnBack->TabIndex = 13;
			this->btnBack->TabStop = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &frmTheory::btnBack_Click);
			this->btnBack->MouseEnter += gcnew System::EventHandler(this, &frmTheory::btnBack_MouseEnter);
			this->btnBack->MouseLeave += gcnew System::EventHandler(this, &frmTheory::btnBack_MouseLeave);
			// 
			// frmTheory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1344, 681);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->imgFondo);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmTheory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Flujo Maximo";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmTheory::frmTheory_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgFondo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnBack))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnBack_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->btnBack->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack2.png");
	}
	private: System::Void btnBack_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->btnBack->Image = System::Drawing::Image::FromFile("imgMenu\\imgbtnBack.png");
	}
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		SoundPlayer^ Click = gcnew SoundPlayer();
		Click->SoundLocation = "imgMenu/soundbtnClick.wav";
		Click->Play();
		this->Visible = false;
	}
	private: System::Void frmTheory_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		closeAll->SetValue(true);
	}
};
}
