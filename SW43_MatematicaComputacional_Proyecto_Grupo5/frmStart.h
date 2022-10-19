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
		frmStart(CloseAll* CloseAll)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->closeAll = CloseAll;
			solucion = new CaminoMax;
			
			gpanel1= panel1->CreateGraphics();
			space1 = BufferedGraphicsManager::Current;
			buffer1 = space1->Allocate(gpanel1, panel1->ClientRectangle);
			
			g = panel2->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, panel2->ClientRectangle);

			
			gpanel3= panel3->CreateGraphics();
			space3 = BufferedGraphicsManager::Current;
			buffer3 = space3->Allocate(gpanel3, panel3->ClientRectangle);
			


			ClickComp = false;
			CirElegido = 0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmStart()
		{

			delete closeAll;
			if (components)
			{
				delete components;
			}
				delete solucion;
				delete paisaje;
		}

	protected:

	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Timer^ timer1;
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

		CaminoMax* solucion;
		Bitmap^ paisaje;
		int CirElegido;
		bool ClickComp;
		CloseAll* closeAll;

		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;
		Graphics^ g;
		
		Graphics^ gpanel1;
		BufferedGraphicsContext^ space1;
		BufferedGraphics^ buffer1;
		
		Graphics^ gpanel3;
		BufferedGraphicsContext^ space3;
		BufferedGraphics^ buffer3;


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

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::NumericUpDown^ numFuente;
	private: System::Windows::Forms::NumericUpDown^ numSumidero;
	private: System::Windows::Forms::NumericUpDown^ numNodoLlegada;
	private: System::Windows::Forms::NumericUpDown^ numNodoSalida;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnBack;


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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->numFuente = (gcnew System::Windows::Forms::NumericUpDown());
			this->numSumidero = (gcnew System::Windows::Forms::NumericUpDown());
			this->numNodoLlegada = (gcnew System::Windows::Forms::NumericUpDown());
			this->numNodoSalida = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numFuente))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSumidero))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNodoLlegada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNodoSalida))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmStart::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Cyan;
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
			this->btnDraw->Click += gcnew System::EventHandler(this, &frmStart::btnDraw_Click);
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
			this->btnClear->Location = System::Drawing::Point(966, 36);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(83, 41);
			this->btnClear->TabIndex = 5;
			this->btnClear->Text = L"Limpiar";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &frmStart::btnClear_Click);
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
			this->pictureBox4->Location = System::Drawing::Point(28, 109);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(128, 43);
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
			this->label2->Location = System::Drawing::Point(229, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Valor entre ambos nodos";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(279, 254);
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
			this->label3->Location = System::Drawing::Point(717, 604);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Nodo de Origen: Fuente";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Snow;
			this->label4->Location = System::Drawing::Point(715, 636);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 16);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Nodo destino: Sumidero";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Snow;
			this->label5->Location = System::Drawing::Point(48, 221);
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
			this->label6->Location = System::Drawing::Point(48, 260);
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
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->btnBack->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
			this->btnBack->FlatAppearance->BorderSize = 3;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::Snow;
			this->btnBack->Location = System::Drawing::Point(1181, 36);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(83, 41);
			this->btnBack->TabIndex = 22;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &frmStart::btnBack_Click);
			// 
			// numFuente
			// 
			this->numFuente->Location = System::Drawing::Point(873, 604);
			this->numFuente->Name = L"numFuente";
			this->numFuente->Size = System::Drawing::Size(35, 20);
			this->numFuente->TabIndex = 23;
			this->numFuente->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numSumidero
			// 
			this->numSumidero->Location = System::Drawing::Point(873, 632);
			this->numSumidero->Name = L"numSumidero";
			this->numSumidero->Size = System::Drawing::Size(35, 20);
			this->numSumidero->TabIndex = 24;
			this->numSumidero->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numNodoLlegada
			// 
			this->numNodoLlegada->Location = System::Drawing::Point(158, 256);
			this->numNodoLlegada->Name = L"numNodoLlegada";
			this->numNodoLlegada->Size = System::Drawing::Size(34, 20);
			this->numNodoLlegada->TabIndex = 25;
			this->numNodoLlegada->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numNodoSalida
			// 
			this->numNodoSalida->Location = System::Drawing::Point(151, 217);
			this->numNodoSalida->Name = L"numNodoSalida";
			this->numNodoSalida->Size = System::Drawing::Size(36, 20);
			this->numNodoSalida->TabIndex = 26;
			this->numNodoSalida->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Purple;
			this->button1->Enabled = false;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
			this->button1->FlatAppearance->BorderSize = 3;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Snow;
			this->button1->Location = System::Drawing::Point(914, 597);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 58);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Buscar Caminos";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmStart::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Purple;
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
			this->button2->FlatAppearance->BorderSize = 3;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Snow;
			this->button2->Location = System::Drawing::Point(393, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 38);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Asig Valor";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmStart::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
			this->button3->FlatAppearance->BorderSize = 3;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Snow;
			this->button3->Location = System::Drawing::Point(119, 168);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(328, 31);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Crear arcos entre nodos";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button4->Enabled = false;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Snow;
			this->button4->FlatAppearance->BorderSize = 3;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Snow;
			this->button4->Location = System::Drawing::Point(582, 594);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 67);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Elegir el sumidero y la fuente";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(576, 109);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(699, 414);
			this->panel2->TabIndex = 30;
			this->panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmStart::panel2_MouseDown);
			this->panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmStart::panel2_MouseMove);
			this->panel2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmStart::panel2_MouseUp);
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(1101, 592);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(163, 64);
			this->panel3->TabIndex = 31;
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
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numNodoSalida);
			this->Controls->Add(this->numNodoLlegada);
			this->Controls->Add(this->numSumidero);
			this->Controls->Add(this->numFuente);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
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
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmStart::frmStart_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numFuente))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSumidero))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNodoLlegada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numNodoSalida))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//buffer->Graphics->DrawImage(paisaje, Rectangle(0, 0, 1318, 696), Rectangle(0, 0, paisaje->Width, paisaje->Height), GraphicsUnit::Pixel);
	
	buffer->Graphics->Clear(Color::Black);
	buffer3->Graphics->Clear(Color::Black);

	buffer1->Graphics->Clear(Color::Cyan);
	

	solucion->ObtGrafo()->DibujarGrafo(buffer->Graphics);
	solucion->ObtGrafo()->MostrarMatrizPanel(buffer1->Graphics);
	solucion->MostrarFlujoMaximo(buffer3->Graphics);

	buffer->Render(g);
	buffer1->Render(gpanel1);
	
	buffer3->Render(gpanel3);


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

private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnDraw_Click(System::Object^ sender, System::EventArgs^ e) {

	solucion->CrearNodoMatriz(int(numericUpDown1->Value));

	numFuente->Maximum = solucion->ObtGrafo()->NumAristas()-1;
	numSumidero->Maximum = solucion->ObtGrafo()->NumAristas()-1;
	
	//Asignarle sumidero por defecto
	numSumidero->Value = numSumidero->Maximum;

	//Asignar el parametro para elegir los valores
	numNodoSalida->Maximum = solucion->ObtGrafo()->NumAristas()-1;
	numNodoLlegada->Maximum = solucion->ObtGrafo()->NumAristas()-1;
	
	button1->Enabled = true;
	button2->Enabled = true;


}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			
	if (numFuente->Value == numSumidero->Value) {
		// IMPORTANTE-> MENSAJE DE QUE NO DEBEN SER IGUALES
		numFuente->Value = numFuente->Minimum;
		numSumidero->Value = numSumidero->Maximum;
	}
	solucion->ObtGrafo()->RestablecerAcumulacion();
	solucion->SolucionCaminoMaximo(int(numFuente->Value),int(numSumidero->Value));
}

private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	//se limpia todo lo creado en la pantalla de los nodos 
	solucion->CrearNodoMatriz(0);
	button1->Enabled = false;
	button2->Enabled = false;


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (numNodoSalida->Value == numNodoLlegada->Value) {
		// IMPORTANTE-> MENSAJE DE QUE NO DEBEN SER IGUALES
		return;
	}

	//solucion->ObtGrafo()->matriz()->ObtPosicion(int(numNodoSalida->Value),int(numNodoLlegada->Value))->AsigCapacidad(int(numericUpDown2->Value));
	solucion->ObtGrafo()->AgregarArcos(int(numNodoSalida->Value),int(numNodoLlegada->Value), int(numericUpDown2->Value));



}

private: System::Void panel2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	solucion->ObtGrafo()->CrearNodos(e->X - 13, e->Y - 13);
	if (solucion->ObtGrafo()->NumAristas() == solucion->ObtGrafo()->NumNodos()) {

		for (int i = 0; i < solucion->ObtGrafo()->NumNodos(); i++) {

			if (solucion->ObtGrafo()->GetCirculo(i)->GetX() <= e->X && solucion->ObtGrafo()->GetCirculo(i)->GetX() + 2 * solucion->ObtGrafo()->GetCirculo(i)->GetRadio() > e->X) {

				if (solucion->ObtGrafo()->GetCirculo(i)->GetY() <= e->Y && solucion->ObtGrafo()->GetCirculo(i)->GetY() + 2 * solucion->ObtGrafo()->GetCirculo(i)->GetRadio() > e->Y) {

					ClickComp = true;
					CirElegido = i;
					solucion->ObtGrafo()->GetCirculo(CirElegido)->asigClickMov(true);

					return;
				}
			}
		}

	}

}	
private: System::Void panel2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		
		ClickComp = false;
		if (solucion->ObtGrafo()->NumAristas() != 0 && solucion->ObtGrafo()->NumAristas() == solucion->ObtGrafo()->NumNodos()) {
			solucion->ObtGrafo()->GetCirculo(CirElegido)->asigClickMov(false);
		}
		
}
private: System::Void panel2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		
	if (!ClickComp)return;

		if (panel2->Width - 25 > e->X && 25 < e->X && panel2->Height - 25 > e->Y && 25 < e->Y ) { 
			solucion->ObtGrafo()->GetCirculo(CirElegido)->AsigX(e->X - solucion->ObtGrafo()->GetCirculo(CirElegido)->GetRadio());
			solucion->ObtGrafo()->GetCirculo(CirElegido)->AsigY(e->Y - solucion->ObtGrafo()->GetCirculo(CirElegido)->GetRadio());
		}

		
	}

private: System::Void frmStart_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

	std::cout << "se cerro el formulario" << endl;
	timer1->Enabled = false;
	closeAll->SetValue(true);
	
}
};
}
