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
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ btnBack;
	private: System::Windows::Forms::GroupBox^ groupBox4;

	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::PictureBox^ btnDraw;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ btnAdd;
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


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmStart::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnDraw = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnBack = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->btnAdd = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDraw))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnBack))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAdd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnDraw);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->groupBox1->Location = System::Drawing::Point(15, 15);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(482, 79);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ingresar Matriz";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmStart::groupBox1_Enter);
			// 
			// btnDraw
			// 
			this->btnDraw->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDraw.Image")));
			this->btnDraw->Location = System::Drawing::Point(345, 15);
			this->btnDraw->Name = L"btnDraw";
			this->btnDraw->Size = System::Drawing::Size(107, 59);
			this->btnDraw->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnDraw->TabIndex = 3;
			this->btnDraw->TabStop = false;
			this->btnDraw->Click += gcnew System::EventHandler(this, &frmStart::btnDraw_Click);
			this->btnDraw->MouseEnter += gcnew System::EventHandler(this, &frmStart::btnDraw_MouseEnter);
			this->btnDraw->MouseLeave += gcnew System::EventHandler(this, &frmStart::btnDraw_MouseLeave);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(247, 35);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(60, 23);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(25, 41);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tamaño de la matriz";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(14, 97);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(271, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Ingresar el valor entre ambos nodos";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(204, 149);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Nodo de llegada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(14, 149);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Nodo de origen";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(267, 55);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Segundo nodo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(45, 55);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Primer nodo";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->panel1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->groupBox2->Location = System::Drawing::Point(15, 306);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(482, 373);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Matriz Generada";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(28, 37);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(424, 312);
			this->panel1->TabIndex = 8;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(18, 531);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(752, 520);
			this->panel2->TabIndex = 8;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->panel2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::Color::DodgerBlue;
			this->groupBox3->Location = System::Drawing::Point(531, 30);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(181, 28);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Grafo Generado";
			// 
			// btnBack
			// 
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(1119, 590);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(202, 75);
			this->btnBack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnBack->TabIndex = 10;
			this->btnBack->TabStop = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &frmStart::btnBack_Click);
			this->btnBack->MouseEnter += gcnew System::EventHandler(this, &frmStart::btnBack_MouseEnter);
			this->btnBack->MouseLeave += gcnew System::EventHandler(this, &frmStart::btnBack_MouseLeave);
			// 
			// groupBox4
			// 
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->ForeColor = System::Drawing::Color::DodgerBlue;
			this->groupBox4->Location = System::Drawing::Point(521, 590);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(582, 75);
			this->groupBox4->TabIndex = 11;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Flujo Maximo";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->btnAdd);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->numericUpDown2);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->ForeColor = System::Drawing::Color::DodgerBlue;
			this->groupBox5->Location = System::Drawing::Point(15, 106);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2);
			this->groupBox5->Size = System::Drawing::Size(482, 196);
			this->groupBox5->TabIndex = 12;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Nodos";
			// 
			// btnAdd
			// 
			this->btnAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Image")));
			this->btnAdd->Location = System::Drawing::Point(380, 91);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(84, 33);
			this->btnAdd->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnAdd->TabIndex = 14;
			this->btnAdd->TabStop = false;
			this->btnAdd->MouseEnter += gcnew System::EventHandler(this, &frmStart::btnAdd_MouseEnter);
			this->btnAdd->MouseLeave += gcnew System::EventHandler(this, &frmStart::btnAdd_MouseLeave);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label7->Location = System::Drawing::Point(203, 23);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Seleccionar";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(301, 95);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(60, 23);
			this->numericUpDown2->TabIndex = 10;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmStart::timer1_Tick);
			// 
			// frmStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1344, 681);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"frmStart";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmStart";
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmStart::frmStart_MouseUp);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnDraw))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnBack))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnAdd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	//frmMenu^ frm = gcnew frmMenu();
	//this->Visible = false;
	//this->Hide();
	//frm->ShowDialog();
	//this->Visible = true;
	this->timer1->Enabled=false;
	this->Close();
	//pplication::Exit();
}
private: System::Void btnBack_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnBack->Image = System::Drawing::Image::FromFile("img\\btnBack2.png");
}
private: System::Void btnBack_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnBack->Image = System::Drawing::Image::FromFile("img\\btnBack.png");
}
private: System::Void btnDraw_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnDraw->Image = System::Drawing::Image::FromFile("img\\btnDraw2.png");
}
private: System::Void btnDraw_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnDraw->Image = System::Drawing::Image::FromFile("img\\btnDraw.png");
}
private: System::Void btnAdd_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnAdd->Image = System::Drawing::Image::FromFile("img\\btnAdd2.png");
}
private: System::Void btnAdd_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnAdd->Image = System::Drawing::Image::FromFile("img\\btnAdd.png");
}
private: System::Void btnDraw_Click(System::Object^ sender, System::EventArgs^ e) {	

		//solucion->CrearNodoMatriz(int(numericUpDown1->Value));
	

}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	buffer->Graphics->Clear(Color::White);
	solucion->DibujarNodos(buffer->Graphics);
	buffer->Render(g);

}

private: System::Void frmStart_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {


	if (547< e->X && e->X <1299 && e->Y>40 && e->Y < 560) {
		solucion->CrearNodos(e->X-13,e->Y-13);
	}

}
};
}
