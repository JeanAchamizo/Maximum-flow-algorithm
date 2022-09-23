#pragma once
#include "Dependencias.h"
#include "CaminoMax.h"
#include "frmMenu.h"

namespace SW43MatematicaComputacionalProyectoGrupo5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmStart
	/// </summary>
	public ref class frmStart : public System::Windows::Forms::Form
	{
	public:
		frmStart(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			solucion = new CaminoMax;
			g = this->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, this->ClientRectangle);
			paisaje = gcnew Bitmap("img/frmStart.png");
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmStart()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






















	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Timer^ timer1;






	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

		CaminoMax* solucion;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;



















		   Graphics^ g;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnDraw;
	private: System::Windows::Forms::Button^ btnClear;





		   Bitmap^ paisaje;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmStart::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnDraw = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmStart::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Location = System::Drawing::Point(41, 360);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(477, 283);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Snow;
			this->label1->Location = System::Drawing::Point(38, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tamaño de la matriz";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(192, 57);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(41, 20);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label2->Location = System::Drawing::Point(23, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Matriz ";
			// 
			// btnDraw
			// 
			this->btnDraw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnDraw->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
			this->btnDraw->FlatAppearance->BorderSize = 3;
			this->btnDraw->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDraw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDraw->ForeColor = System::Drawing::Color::Snow;
			this->btnDraw->Location = System::Drawing::Point(292, 26);
			this->btnDraw->Name = L"btnDraw";
			this->btnDraw->Size = System::Drawing::Size(89, 51);
			this->btnDraw->TabIndex = 4;
			this->btnDraw->Text = L"Dibujar";
			this->btnDraw->UseVisualStyleBackColor = false;
			this->btnDraw->MouseEnter += gcnew System::EventHandler(this, &frmStart::btnDraw_MouseEnter);
			this->btnDraw->MouseLeave += gcnew System::EventHandler(this, &frmStart::btnDraw_MouseLeave);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnClear->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
			this->btnClear->FlatAppearance->BorderSize = 3;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::Snow;
			this->btnClear->Location = System::Drawing::Point(429, 26);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(89, 51);
			this->btnClear->TabIndex = 5;
			this->btnClear->Text = L"Limpiar";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->MouseEnter += gcnew System::EventHandler(this, &frmStart::btnClear_MouseEnter);
			this->btnClear->MouseLeave += gcnew System::EventHandler(this, &frmStart::btnClear_MouseLeave);
			// 
			// frmStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1291, 676);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDraw);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"frmStart";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmStart";
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmStart::frmStart_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	buffer->Graphics->DrawImage(paisaje, Rectangle(0, 0, 1293, 684), Rectangle(0, 0, paisaje->Width, paisaje->Height), GraphicsUnit::Pixel);
	//buffer->Graphics->Clear(Color::White);
	solucion->DibujarNodos(buffer->Graphics);
	buffer->Render(g);

}

private: System::Void frmStart_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	if (585< e->X && e->X <1220 && e->Y>130 && e->Y < 475) {
		solucion->CrearNodos(e->X-13,e->Y-13);
	}
}

private: System::Void btnDraw_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	btnDraw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	btnDraw->ForeColor = System::Drawing::Color::Orange;
	btnDraw->FlatAppearance->BorderColor = System::Drawing::Color::DarkOrange;
}

private: System::Void btnDraw_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	btnDraw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	btnDraw->ForeColor = System::Drawing::Color::Snow;
	btnDraw->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
}

private: System::Void btnClear_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	btnClear->ForeColor = System::Drawing::Color::Fuchsia;
	btnClear->FlatAppearance->BorderColor = System::Drawing::Color::BlueViolet;
}

private: System::Void btnClear_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	btnClear->ForeColor = System::Drawing::Color::Snow;
	btnClear->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
}
};
}
