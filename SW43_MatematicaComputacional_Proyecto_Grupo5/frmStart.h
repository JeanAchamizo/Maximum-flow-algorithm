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
			paisaje = gcnew Bitmap("img/frmStart13.png");
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

	private: System::Windows::Forms::Button^ btnDraw;
	private: System::Windows::Forms::Button^ btnClear;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::PictureBox^ btnCheck1;
private: System::Windows::Forms::PictureBox^ btnCheck3;
private: System::Windows::Forms::PictureBox^ btnCheck2;
private: System::Windows::Forms::PictureBox^ btnCheck4;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox6;










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
			this->btnDraw = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnCheck1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCheck3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCheck2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCheck4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCheck1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCheck3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCheck2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCheck4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
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
			this->panel1->Location = System::Drawing::Point(51, 375);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(481, 281);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Snow;
			this->label1->Location = System::Drawing::Point(229, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tamaño de la matriz";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(380, 49);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(41, 20);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// btnDraw
			// 
			this->btnDraw->BackColor = System::Drawing::Color::Purple;
			this->btnDraw->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
			this->btnDraw->FlatAppearance->BorderSize = 3;
			this->btnDraw->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDraw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDraw->ForeColor = System::Drawing::Color::Snow;
			this->btnDraw->Location = System::Drawing::Point(449, 36);
			this->btnDraw->Name = L"btnDraw";
			this->btnDraw->Size = System::Drawing::Size(83, 41);
			this->btnDraw->TabIndex = 4;
			this->btnDraw->Text = L"Dibujar";
			this->btnDraw->UseVisualStyleBackColor = false;
			this->btnDraw->MouseEnter += gcnew System::EventHandler(this, &frmStart::btnDraw_MouseEnter);
			this->btnDraw->MouseLeave += gcnew System::EventHandler(this, &frmStart::btnDraw_MouseLeave);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->btnClear->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
			this->btnClear->FlatAppearance->BorderSize = 3;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::Snow;
			this->btnClear->Location = System::Drawing::Point(1181, 36);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(83, 41);
			this->btnClear->TabIndex = 5;
			this->btnClear->Text = L"Limpiar";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->MouseEnter += gcnew System::EventHandler(this, &frmStart::btnClear_MouseEnter);
			this->btnClear->MouseLeave += gcnew System::EventHandler(this, &frmStart::btnClear_MouseLeave);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(41, 329);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(380, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(41, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(151, 44);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(576, 32);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(376, 51);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(51, 111);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(138, 43);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Snow;
			this->label2->Location = System::Drawing::Point(62, 260);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Valor entre ambos nodos";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(232, 260);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(41, 20);
			this->numericUpDown2->TabIndex = 11;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Snow;
			this->label3->Location = System::Drawing::Point(95, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Nodo de Origen";
			// 
			// btnCheck1
			// 
			this->btnCheck1->BackColor = System::Drawing::Color::Transparent;
			this->btnCheck1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCheck1.Image")));
			this->btnCheck1->Location = System::Drawing::Point(51, 174);
			this->btnCheck1->Name = L"btnCheck1";
			this->btnCheck1->Size = System::Drawing::Size(38, 19);
			this->btnCheck1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnCheck1->TabIndex = 13;
			this->btnCheck1->TabStop = false;
			this->btnCheck1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmStart::btnCheck1_MouseClick);
			// 
			// btnCheck3
			// 
			this->btnCheck3->BackColor = System::Drawing::Color::Transparent;
			this->btnCheck3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCheck3.Image")));
			this->btnCheck3->Location = System::Drawing::Point(51, 213);
			this->btnCheck3->Name = L"btnCheck3";
			this->btnCheck3->Size = System::Drawing::Size(39, 20);
			this->btnCheck3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnCheck3->TabIndex = 14;
			this->btnCheck3->TabStop = false;
			this->btnCheck3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmStart::btnCheck3_MouseClick);
			// 
			// btnCheck2
			// 
			this->btnCheck2->BackColor = System::Drawing::Color::Transparent;
			this->btnCheck2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCheck2.Image")));
			this->btnCheck2->Location = System::Drawing::Point(282, 174);
			this->btnCheck2->Name = L"btnCheck2";
			this->btnCheck2->Size = System::Drawing::Size(48, 19);
			this->btnCheck2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnCheck2->TabIndex = 15;
			this->btnCheck2->TabStop = false;
			this->btnCheck2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmStart::btnCheck2_MouseClick);
			// 
			// btnCheck4
			// 
			this->btnCheck4->BackColor = System::Drawing::Color::Transparent;
			this->btnCheck4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCheck4.Image")));
			this->btnCheck4->Location = System::Drawing::Point(282, 213);
			this->btnCheck4->Name = L"btnCheck4";
			this->btnCheck4->Size = System::Drawing::Size(48, 20);
			this->btnCheck4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnCheck4->TabIndex = 16;
			this->btnCheck4->TabStop = false;
			this->btnCheck4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmStart::btnCheck4_MouseClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Snow;
			this->label4->Location = System::Drawing::Point(336, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 16);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Nodo de Llegada";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Snow;
			this->label5->Location = System::Drawing::Point(96, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 16);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Primer Nodo";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Snow;
			this->label6->Location = System::Drawing::Point(336, 216);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 16);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Segundo Nodo";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1092, 552);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(183, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 20;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(576, 552);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(183, 36);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 21;
			this->pictureBox6->TabStop = false;
			// 
			// frmStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1314, 686);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnCheck4);
			this->Controls->Add(this->btnCheck2);
			this->Controls->Add(this->btnCheck3);
			this->Controls->Add(this->btnCheck1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDraw);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"frmStart";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmStart";
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmStart::frmStart_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCheck1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCheck3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCheck2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCheck4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	buffer->Graphics->DrawImage(paisaje, Rectangle(0, 0, 1318, 696), Rectangle(0, 0, paisaje->Width, paisaje->Height), GraphicsUnit::Pixel);
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
	btnDraw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
		static_cast<System::Int32>(static_cast<System::Byte>(152)));
	btnDraw->ForeColor = System::Drawing::Color::Magenta;
	btnDraw->FlatAppearance->BorderColor = System::Drawing::Color::Magenta;
}

private: System::Void btnDraw_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	btnDraw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
		static_cast<System::Int32>(static_cast<System::Byte>(152)));
	btnDraw->ForeColor = System::Drawing::Color::Snow;
	btnDraw->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
}

private: System::Void btnClear_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(20)));
	btnClear->ForeColor = System::Drawing::Color::Orange;
	btnClear->FlatAppearance->BorderColor = System::Drawing::Color::DarkOrange;
}

private: System::Void btnClear_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(20)));
	btnClear->ForeColor = System::Drawing::Color::Snow;
	btnClear->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
}
private: System::Void btnCheck1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->btnCheck1->Image = System::Drawing::Image::FromFile("img\\pctButton6.png");
	this->btnCheck2->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
	this->btnCheck3->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
	this->btnCheck4->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
}
private: System::Void btnCheck2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->btnCheck1->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
	this->btnCheck2->Image = System::Drawing::Image::FromFile("img\\pctButton6.png");
	this->btnCheck3->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
	this->btnCheck4->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
}
private: System::Void btnCheck3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->btnCheck1->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
	this->btnCheck2->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
	this->btnCheck3->Image = System::Drawing::Image::FromFile("img\\pctButton6.png");
	this->btnCheck4->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
}
private: System::Void btnCheck4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->btnCheck1->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
	this->btnCheck2->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
	this->btnCheck3->Image = System::Drawing::Image::FromFile("img\\pctButton7.png");
	this->btnCheck4->Image = System::Drawing::Image::FromFile("img\\pctButton6.png");
}
};
}
