#pragma once

namespace SW43MatematicaComputacionalProyectoGrupo5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmTheory
	/// </summary>
	public ref class frmTheory : public System::Windows::Forms::Form
	{
	public:
		frmTheory(void)
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
		~frmTheory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ btnBack;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmTheory::typeid));
			this->btnBack = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnBack))->BeginInit();
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(550, 575);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(202, 75);
			this->btnBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnBack->TabIndex = 11;
			this->btnBack->TabStop = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &frmTheory::btnBack_Click);
			this->btnBack->MouseEnter += gcnew System::EventHandler(this, &frmTheory::btnBack_MouseEnter);
			this->btnBack->MouseLeave += gcnew System::EventHandler(this, &frmTheory::btnBack_MouseLeave);
			// 
			// frmTheory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1344, 681);
			this->Controls->Add(this->btnBack);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmTheory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Flujo Maximo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnBack))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnBack_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->btnBack->Image = System::Drawing::Image::FromFile("img\\btnBack2.png");
	}
	private: System::Void btnBack_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->btnBack->Image = System::Drawing::Image::FromFile("img\\btnBack.png");
	}
	};
}
