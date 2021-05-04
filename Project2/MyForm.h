#pragma once
#include <string>


namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std; 
	using namespace System::IO;
	

	Double liczba, liczba_1, liczba_2;
	Double suma, roznica, iloczyn, iloraz;
	Double bufor, clipboard;
	Char operacja;
	Boolean przecinek;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dodawanieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ odejmowanieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mnozenieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dzielenieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ kopiujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wytnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wklejToolStripMenuItem;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button25;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->kopiujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wytnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wklejToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodawanieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->odejmowanieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnozenieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dzielenieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(68, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(208, 231);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 52);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(345, 231);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 52);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(480, 231);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 52);
			this->button4->TabIndex = 3;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(618, 231);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 52);
			this->button5->TabIndex = 4;
			this->button5->Text = L"MR";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(68, 325);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(106, 52);
			this->button6->TabIndex = 5;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(208, 325);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(106, 52);
			this->button7->TabIndex = 6;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(345, 325);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(106, 52);
			this->button8->TabIndex = 7;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(480, 325);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(106, 52);
			this->button9->TabIndex = 8;
			this->button9->Text = L"*";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(618, 325);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(106, 52);
			this->button10->TabIndex = 9;
			this->button10->Text = L"MC";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(68, 412);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(106, 52);
			this->button11->TabIndex = 10;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(208, 412);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(106, 52);
			this->button12->TabIndex = 11;
			this->button12->Text = L"2";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(345, 412);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(106, 52);
			this->button13->TabIndex = 12;
			this->button13->Text = L"3";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(480, 412);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(106, 52);
			this->button14->TabIndex = 13;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(618, 412);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(106, 52);
			this->button15->TabIndex = 14;
			this->button15->Text = L"M+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(45, 586);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(176, 52);
			this->button16->TabIndex = 15;
			this->button16->Text = L"ToDo";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(254, 586);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(176, 52);
			this->button17->TabIndex = 16;
			this->button17->Text = L"Change Color";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(466, 586);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(176, 52);
			this->button18->TabIndex = 17;
			this->button18->Text = L"Change Font";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->textBox1->Location = System::Drawing::Point(102, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(212, 26);
			this->textBox1->TabIndex = 18;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->kopiujToolStripMenuItem,
					this->wytnijToolStripMenuItem, this->wklejToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(135, 100);
			// 
			// kopiujToolStripMenuItem
			// 
			this->kopiujToolStripMenuItem->Name = L"kopiujToolStripMenuItem";
			this->kopiujToolStripMenuItem->Size = System::Drawing::Size(134, 32);
			this->kopiujToolStripMenuItem->Text = L"Kopiuj";
			this->kopiujToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::kopiujToolStripMenuItem_Click);
			// 
			// wytnijToolStripMenuItem
			// 
			this->wytnijToolStripMenuItem->Name = L"wytnijToolStripMenuItem";
			this->wytnijToolStripMenuItem->Size = System::Drawing::Size(134, 32);
			this->wytnijToolStripMenuItem->Text = L"Wytnij";
			this->wytnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::wytnijToolStripMenuItem_Click);
			// 
			// wklejToolStripMenuItem
			// 
			this->wklejToolStripMenuItem->Name = L"wklejToolStripMenuItem";
			this->wklejToolStripMenuItem->Size = System::Drawing::Size(134, 32);
			this->wklejToolStripMenuItem->Text = L"Wklej";
			this->wklejToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::wklejToolStripMenuItem_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->Location = System::Drawing::Point(404, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(169, 26);
			this->textBox2->TabIndex = 19;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(68, 658);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(631, 192);
			this->textBox3->TabIndex = 20;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 20);
			this->label1->TabIndex = 21;
			this->label1->Text = L"INPUT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(332, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 20);
			this->label2->TabIndex = 22;
			this->label2->Text = L"SCORE";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(603, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 20);
			this->label3->TabIndex = 23;
			this->label3->Text = L"MEMORY";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(674, 602);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(82, 20);
			this->linkLabel1->TabIndex = 24;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"www.wp.pl";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->toolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1792, 33);
			this->menuStrip1->TabIndex = 25;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->dodawanieToolStripMenuItem,
					this->odejmowanieToolStripMenuItem, this->mnozenieToolStripMenuItem, this->dzielenieToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(55, 29);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// dodawanieToolStripMenuItem
			// 
			this->dodawanieToolStripMenuItem->Name = L"dodawanieToolStripMenuItem";
			this->dodawanieToolStripMenuItem->Size = System::Drawing::Size(224, 34);
			this->dodawanieToolStripMenuItem->Text = L"Dodawanie";
			this->dodawanieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dodawanieToolStripMenuItem_Click);
			// 
			// odejmowanieToolStripMenuItem
			// 
			this->odejmowanieToolStripMenuItem->Name = L"odejmowanieToolStripMenuItem";
			this->odejmowanieToolStripMenuItem->Size = System::Drawing::Size(224, 34);
			this->odejmowanieToolStripMenuItem->Text = L"Odejmowanie";
			this->odejmowanieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::odejmowanieToolStripMenuItem_Click);
			// 
			// mnozenieToolStripMenuItem
			// 
			this->mnozenieToolStripMenuItem->Name = L"mnozenieToolStripMenuItem";
			this->mnozenieToolStripMenuItem->Size = System::Drawing::Size(224, 34);
			this->mnozenieToolStripMenuItem->Text = L"Mnozenie";
			this->mnozenieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mnozenieToolStripMenuItem_Click);
			// 
			// dzielenieToolStripMenuItem
			// 
			this->dzielenieToolStripMenuItem->Name = L"dzielenieToolStripMenuItem";
			this->dzielenieToolStripMenuItem->Size = System::Drawing::Size(224, 34);
			this->dzielenieToolStripMenuItem->Text = L"Dzielenie";
			this->dzielenieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dzielenieToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(90, 29);
			this->toolStripMenuItem1->Text = L"Zamknij";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(68, 492);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(106, 52);
			this->button19->TabIndex = 27;
			this->button19->Text = L"0";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(208, 492);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(106, 52);
			this->button20->TabIndex = 28;
			this->button20->Text = L"+/-";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(345, 492);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(106, 52);
			this->button21->TabIndex = 29;
			this->button21->Text = L".";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(480, 492);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(106, 52);
			this->button22->TabIndex = 30;
			this->button22->Text = L"+";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(618, 492);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(106, 52);
			this->button23->TabIndex = 31;
			this->button23->Text = L"=";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(690, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 32;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(696, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 20);
			this->label5->TabIndex = 33;
			this->label5->Text = L"bufor";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(90, 145);
			this->progressBar1->MarqueeAnimationSpeed = 1;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(282, 36);
			this->progressBar1->TabIndex = 34;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Enabled = false;
			this->monthCalendar1->FirstDayOfWeek = System::Windows::Forms::Day::Monday;
			this->monthCalendar1->Location = System::Drawing::Point(935, 158);
			this->monthCalendar1->MaxDate = System::DateTime(2020, 3, 1, 0, 0, 0, 0);
			this->monthCalendar1->MinDate = System::DateTime(2019, 9, 29, 0, 0, 0, 0);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->SelectionRange = (gcnew System::Windows::Forms::SelectionRange(System::DateTime(2019, 9, 30, 0, 0, 0, 0), System::DateTime(2019,
				10, 6, 0, 0, 0, 0)));
			this->monthCalendar1->TabIndex = 35;
			this->monthCalendar1->TodayDate = System::DateTime(2019, 9, 29, 0, 0, 0, 0);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"hmm", L"test" });
			this->listBox1->Location = System::Drawing::Point(1442, 187);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(293, 264);
			this->listBox1->TabIndex = 37;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(17, 36);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(123, 68);
			this->button24->TabIndex = 38;
			this->button24->Text = L"Now Forma";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button24);
			this->groupBox1->Location = System::Drawing::Point(1243, 505);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(377, 323);
			this->groupBox1->TabIndex = 39;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(891, 541);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(131, 126);
			this->button25->TabIndex = 40;
			this->button25->Text = L"add day";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1792, 875);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		bufor = 0;
		progressBar1->Value = bufor;
		label5->Text = bufor.ToString();
		listBox1->Items->Add("geeks");
	}

	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "0";
	}
	
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "1";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "4";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "7";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "8";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "5";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "9";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "6";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + "3";
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (przecinek == false)
	{
		if (textBox1->Text != "")
		{ 
			textBox1->Text = textBox1->Text + ".";
			przecinek = true;
		}
	}
}


private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		liczba = Convert::ToDouble(textBox1->Text);
		if (liczba > 0)
		{
			textBox1->Text = "-" + textBox1->Text;
		}
		if (liczba < 0)
		{
			liczba = liczba * (-1);
			textBox1->Text = liczba.ToString();
		}
	}
	else
	{
		MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = bufor.ToString();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	bufor = 0;
	progressBar1->Value = bufor;
	label5->Text = bufor.ToString();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if(textBox1->Text != "")
	{
		bufor = bufor + Convert::ToDouble(textBox1->Text);
		progressBar1->Value = bufor;
		label5->Text = bufor.ToString();
	}
	else {
		MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


	
}


private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{ 
		liczba_1 = Convert::ToDouble(textBox1->Text);
		operacja = '+';
		textBox1->Text = ""; przecinek = false;
	}
	else { 
		MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		liczba_1 = Convert::ToDouble(textBox1->Text);
		operacja = '-';
		textBox1->Text = ""; przecinek = false;
	}
	else {
		MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   //
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		liczba_1 = Convert::ToDouble(textBox1->Text);
		operacja = '*';
		textBox1->Text = ""; przecinek = false;
	}
	else {
		MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		liczba_1 = Convert::ToDouble(textBox1->Text);
		operacja = '/';
		textBox1->Text = ""; przecinek = false;
	}
	else {
		MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operacja == '/') 
	{
		if (textBox1->Text != "")
		{
			if (Convert::ToDouble(textBox1->Text) != 0)
			{
				liczba_2 = Convert::ToDouble(textBox1->Text);
				iloraz = liczba_1 / liczba_2;
				textBox2->Text = iloraz.ToString();
				przecinek = false; textBox1->Text = "";
			}
			else
			{
				MessageBox::Show("Nie dziel przez zero !!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	if (operacja == '+')
	{
		if (textBox1->Text != "")
		{
			liczba_2 = Convert::ToDouble(textBox1->Text);
			suma = liczba_1 + liczba_2;
			textBox2->Text = suma.ToString();
			przecinek = false; textBox1->Text = "";
		}
		else 
		{
			MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	if (operacja == '-')
	{
		if (textBox1->Text != "")
		{
			liczba_2 = Convert::ToDouble(textBox1->Text);
			roznica = liczba_1 - liczba_2;
			textBox2->Text = roznica.ToString();
			przecinek = false; textBox1->Text = "";
		}
		else
		{
			MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	if (operacja == '*')
	{
		if (textBox1->Text != "")
		{
			liczba_2 = Convert::ToDouble(textBox1->Text);
			iloczyn = liczba_1 * liczba_2;
			textBox2->Text = iloczyn.ToString();
			przecinek = false; textBox1->Text = "";
		}
		else
		{
			MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
}
private: System::Void dodawanieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		liczba_1 = Convert::ToDouble(textBox1->Text);
		operacja = '+';
		textBox1->Text = ""; przecinek = false;
	}
	else {
		MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void odejmowanieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		liczba_1 = Convert::ToDouble(textBox1->Text);
		operacja = '-';
		textBox1->Text = ""; przecinek = false;
	}
	else {
		MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void mnozenieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		liczba_1 = Convert::ToDouble(textBox1->Text);
		operacja = '*';
		textBox1->Text = ""; przecinek = false;
	}
	else {
		MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void dzielenieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		liczba_1 = Convert::ToDouble(textBox1->Text);
		operacja = '/';
		textBox1->Text = ""; przecinek = false;
	}
	else {
		MessageBox::Show("Wprowadz liczbe!!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
	
	if (e->KeyChar == '\r')
	{
		bool error = false;
		try
		{
			Convert::ToDouble(textBox3->Text);
		}
		catch (...)
		{
			MessageBox::Show("Wprowadz tylko liczby!", "B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox3->Text = "";
			e->Handled = true;
			error = true;
		}
		if (error != true)
		{
			textBox1->Text = textBox3->Text;
			textBox3->Text = "";
			e->Handled = true;
		}
	}
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult odp = MessageBox::Show("Chcesz zamknac aplikacje", "PYTANIE", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button2);
	switch (odp) 
		{ 
			case System::Windows::Forms::DialogResult::Yes: Close();
			case System::Windows::Forms::DialogResult::No: break;
		}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	
		openFileDialog1->Filter = "Pliki tekstowe (*.txt)|*.txt|Wszystkie  pliki (*.*)|*.*)";
		openFileDialog1->ShowDialog();
		StreamReader^ plik = gcnew StreamReader(openFileDialog1->FileName, System::Text::Encoding::Default);
		textBox3->Text = plik->ReadToEnd();
		plik->Close();
	
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{ 
		textBox3->BackColor = colorDialog1->Color; 
	}
}

private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{ 
		textBox3->Font = fontDialog1->Font;
	}
}
private: System::Void kopiujToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	clipboard = Convert::ToDouble(textBox1->Text);
}
private: System::Void wytnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	clipboard = Convert::ToDouble(textBox1->Text);
	textBox1->Text = "";
}
private: System::Void wklejToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = clipboard.ToString();
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	System::Diagnostics::Process::Start(linkLabel1->Text);
	linkLabel1->LinkVisited = true;
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm^ m = gcnew MyForm();
	m->Show();
	//this->Hide();
	//this->Close();
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	DateTime today = this->monthCalendar1->TodayDate;
	DateTime startweek = this->monthCalendar1->TodayDate.AddDays(1);
	DateTime endweek = this->monthCalendar1->TodayDate.AddDays(7);
	monthCalendar1->TodayDate = today.AddDays(7);
	monthCalendar1->SelectionRange = gcnew SelectionRange(startweek.AddDays(7), endweek.AddDays(7));
	
}
};//
}//
