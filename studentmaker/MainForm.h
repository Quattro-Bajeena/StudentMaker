#pragma once
#include <Windows.h>
#include<cstdlib>
#include <msclr/marshal_cppstd.h>
#include"myclass.h"
#include "characreator.h"
#include "activity.h"
#include <ctime>
#include <fstream>
#include "endscreen.h"


namespace studentmaker {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	my_class::character* player;

	my_class::activity* action;
	my_class::test* tests[player->grade_quantity];
	my_class::test* finals[3];
	
	my_class::consumable* shop_cons[4];
	my_class::laptop* shop_tech[4];
	my_class::accessory* shop_acce[4];
	my_class::diet* diets[4];
	

	
	

	static int current_month;
	int fortesting = 1;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:

		ref class Global {
		public:
			static DateTime Date1;
			static array<String^>^ gradelist;
			static array<String^>^ itemlist;
			static array<String^>^ dietlist;
			//static array<String^>^ conslist;
		};

		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ProgressBar^ progressBar1;

	private: System::Windows::Forms::ProgressBar^ progressBar5;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::ProgressBar^ progressBar6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::ProgressBar^ progressBar7;
	private: System::Windows::Forms::ProgressBar^ progressBar9;
	private: System::Windows::Forms::ProgressBar^ progressBar8;
	private: System::Windows::Forms::ProgressBar^ progressBar10;
	private: System::Windows::Forms::ProgressBar^ progressBar12;
	private: System::Windows::Forms::ProgressBar^ progressBar11;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;





	private: System::Windows::Forms::ProgressBar^ progressBar13;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
	private: System::Windows::Forms::ProgressBar^ progressBar15;
	private: System::Windows::Forms::ProgressBar^ progressBar14;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox5;

private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::PictureBox^ pictureBox2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->progressBar12 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar11 = (gcnew System::Windows::Forms::ProgressBar());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->progressBar10 = (gcnew System::Windows::Forms::ProgressBar());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->progressBar9 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar8 = (gcnew System::Windows::Forms::ProgressBar());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->progressBar7 = (gcnew System::Windows::Forms::ProgressBar());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->progressBar6 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->progressBar15 = (gcnew System::Windows::Forms::ProgressBar());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->progressBar14 = (gcnew System::Windows::Forms::ProgressBar());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->progressBar13 = (gcnew System::Windows::Forms::ProgressBar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Enabled = false;
			this->monthCalendar1->FirstDayOfWeek = System::Windows::Forms::Day::Monday;
			this->monthCalendar1->Location = System::Drawing::Point(18, 18);
			this->monthCalendar1->MaxDate = System::DateTime(2020, 3, 2, 0, 0, 0, 0);
			this->monthCalendar1->MinDate = System::DateTime(2019, 9, 1, 0, 0, 0, 0);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->SelectionRange = (gcnew System::Windows::Forms::SelectionRange(System::DateTime(2019, 9, 30, 0, 0, 0, 0), System::DateTime(2019,
				10, 5, 0, 0, 0, 0)));
			this->monthCalendar1->TabIndex = 35;
			this->monthCalendar1->TodayDate = System::DateTime(2019, 9, 29, 0, 0, 0, 0);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Location = System::Drawing::Point(18, 283);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(512, 849);
			this->groupBox1->TabIndex = 36;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Statistics";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->tableLayoutPanel3);
			this->groupBox4->Location = System::Drawing::Point(6, 640);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(497, 203);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Reputation";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel3->ColumnCount = 3;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				61.45277F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				38.54723F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				334)));
			this->tableLayoutPanel3->Controls->Add(this->progressBar12, 2, 2);
			this->tableLayoutPanel3->Controls->Add(this->progressBar11, 2, 1);
			this->tableLayoutPanel3->Controls->Add(this->label23, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->label17, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label18, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->label19, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->label24, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->label25, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->progressBar10, 2, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 22);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 3;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(491, 178);
			this->tableLayoutPanel3->TabIndex = 1;
			// 
			// progressBar12
			// 
			this->progressBar12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar12->Location = System::Drawing::Point(158, 122);
			this->progressBar12->Name = L"progressBar12";
			this->progressBar12->Size = System::Drawing::Size(329, 51);
			this->progressBar12->TabIndex = 11;
			// 
			// progressBar11
			// 
			this->progressBar11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar11->Location = System::Drawing::Point(158, 63);
			this->progressBar11->Name = L"progressBar11";
			this->progressBar11->Size = System::Drawing::Size(329, 51);
			this->progressBar11->TabIndex = 10;
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(99, 20);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(46, 20);
			this->label23->TabIndex = 6;
			this->label23->Text = L"val10";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(4, 20);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(78, 20);
			this->label17->TabIndex = 3;
			this->label17->Text = L"ACADEM";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(4, 79);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(68, 20);
			this->label18->TabIndex = 4;
			this->label18->Text = L"SOCIAL";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(4, 138);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(76, 20);
			this->label19->TabIndex = 5;
			this->label19->Text = L"COMBAT";
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(99, 79);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(46, 20);
			this->label24->TabIndex = 7;
			this->label24->Text = L"val11";
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(99, 138);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(46, 20);
			this->label25->TabIndex = 8;
			this->label25->Text = L"val12";
			// 
			// progressBar10
			// 
			this->progressBar10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar10->Location = System::Drawing::Point(158, 4);
			this->progressBar10->Name = L"progressBar10";
			this->progressBar10->Size = System::Drawing::Size(329, 51);
			this->progressBar10->TabIndex = 9;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tableLayoutPanel2);
			this->groupBox3->Location = System::Drawing::Point(6, 429);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(500, 205);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Academic";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				60.36401F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				39.63599F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				334)));
			this->tableLayoutPanel2->Controls->Add(this->progressBar9, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->progressBar8, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->label14, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label15, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label16, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label20, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->label21, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label22, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->progressBar7, 2, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 22);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(494, 180);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// progressBar9
			// 
			this->progressBar9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar9->Location = System::Drawing::Point(161, 123);
			this->progressBar9->Name = L"progressBar9";
			this->progressBar9->Size = System::Drawing::Size(329, 51);
			this->progressBar9->TabIndex = 8;
			// 
			// progressBar8
			// 
			this->progressBar8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar8->Location = System::Drawing::Point(161, 63);
			this->progressBar8->Name = L"progressBar8";
			this->progressBar8->Size = System::Drawing::Size(329, 51);
			this->progressBar8->TabIndex = 7;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(4, 20);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 20);
			this->label14->TabIndex = 0;
			this->label14->Text = L"MATH";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(4, 79);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(80, 20);
			this->label15->TabIndex = 1;
			this->label15->Text = L"PHYSICS";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 139);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(23, 20);
			this->label16->TabIndex = 2;
			this->label16->Text = L"IT";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(99, 20);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(37, 20);
			this->label20->TabIndex = 3;
			this->label20->Text = L"val7";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(99, 79);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(37, 20);
			this->label21->TabIndex = 4;
			this->label21->Text = L"val8";
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(99, 139);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(37, 20);
			this->label22->TabIndex = 5;
			this->label22->Text = L"val9";
			// 
			// progressBar7
			// 
			this->progressBar7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar7->Location = System::Drawing::Point(161, 4);
			this->progressBar7->Name = L"progressBar7";
			this->progressBar7->Size = System::Drawing::Size(329, 51);
			this->progressBar7->TabIndex = 6;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableLayoutPanel1);
			this->groupBox2->Location = System::Drawing::Point(6, 25);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(500, 401);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"General";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				60.54422F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				39.45578F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				334)));
			this->tableLayoutPanel1->Controls->Add(this->progressBar4, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->progressBar3, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->progressBar2, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->progressBar6, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label9, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label10, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label11, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label12, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label13, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->progressBar1, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->progressBar5, 2, 4);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 22);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(494, 376);
			this->tableLayoutPanel1->TabIndex = 39;
			// 
			// progressBar4
			// 
			this->progressBar4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar4->Location = System::Drawing::Point(161, 192);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(329, 51);
			this->progressBar4->TabIndex = 15;
			// 
			// progressBar3
			// 
			this->progressBar3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar3->Location = System::Drawing::Point(161, 130);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(329, 51);
			this->progressBar3->TabIndex = 14;
			// 
			// progressBar2
			// 
			this->progressBar2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar2->Location = System::Drawing::Point(161, 68);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(329, 51);
			this->progressBar2->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 333);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"EXHAU.";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 269);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"STRESS";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"INT.";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"STAMINA";
			// 
			// progressBar6
			// 
			this->progressBar6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar6->Location = System::Drawing::Point(161, 317);
			this->progressBar6->Name = L"progressBar6";
			this->progressBar6->Size = System::Drawing::Size(329, 51);
			this->progressBar6->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"CHARIS.";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"STR.";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(99, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 20);
			this->label8->TabIndex = 6;
			this->label8->Text = L"val1";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(99, 83);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 20);
			this->label9->TabIndex = 7;
			this->label9->Text = L"val2";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(99, 145);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 20);
			this->label10->TabIndex = 8;
			this->label10->Text = L"val3";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(99, 207);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 20);
			this->label11->TabIndex = 9;
			this->label11->Text = L"val4";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(99, 269);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 20);
			this->label12->TabIndex = 10;
			this->label12->Text = L"val5";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(99, 333);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 20);
			this->label13->TabIndex = 11;
			this->label13->Text = L"val6";
			// 
			// progressBar1
			// 
			this->progressBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar1->Location = System::Drawing::Point(161, 6);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(329, 51);
			this->progressBar1->TabIndex = 12;
			// 
			// progressBar5
			// 
			this->progressBar5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->progressBar5->Location = System::Drawing::Point(161, 254);
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(329, 51);
			this->progressBar5->TabIndex = 16;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(550, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(552, 723);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 39;
			this->pictureBox1->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(3, 22);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(407, 321);
			this->tabControl1->TabIndex = 41;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tableLayoutPanel5);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(399, 288);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"GROCERIES";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel5->ColumnCount = 3;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel5->Controls->Add(this->button3, 2, 1);
			this->tableLayoutPanel5->Controls->Add(this->label35, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->label34, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->label36, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->label37, 1, 1);
			this->tableLayoutPanel5->Controls->Add(this->button2, 2, 0);
			this->tableLayoutPanel5->Controls->Add(this->label44, 1, 2);
			this->tableLayoutPanel5->Controls->Add(this->button7, 2, 2);
			this->tableLayoutPanel5->Controls->Add(this->label43, 0, 2);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 3;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(393, 282);
			this->tableLayoutPanel5->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Location = System::Drawing::Point(264, 97);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 86);
			this->button3->TabIndex = 5;
			this->button3->Text = L"BUY";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// label35
			// 
			this->label35->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(134, 37);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(94, 20);
			this->label35->TabIndex = 1;
			this->label35->Text = L"cons 1 price";
			// 
			// label34
			// 
			this->label34->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(4, 37);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(100, 20);
			this->label34->TabIndex = 0;
			this->label34->Text = L"cons 1 name";
			// 
			// label36
			// 
			this->label36->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(4, 130);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(100, 20);
			this->label36->TabIndex = 2;
			this->label36->Text = L"cons 2 name";
			// 
			// label37
			// 
			this->label37->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(134, 130);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(94, 20);
			this->label37->TabIndex = 3;
			this->label37->Text = L"cons 2 price";
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Location = System::Drawing::Point(264, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 86);
			this->button2->TabIndex = 4;
			this->button2->Text = L"BUY";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label44
			// 
			this->label44->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(134, 224);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(94, 20);
			this->label44->TabIndex = 7;
			this->label44->Text = L"cons 3 price";
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->Location = System::Drawing::Point(264, 190);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(125, 88);
			this->button7->TabIndex = 8;
			this->button7->Text = L"BUY";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// label43
			// 
			this->label43->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(4, 224);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(100, 20);
			this->label43->TabIndex = 6;
			this->label43->Text = L"cons 3 name";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tableLayoutPanel6);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(399, 288);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"TECH";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel6->ColumnCount = 3;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel6->Controls->Add(this->button5, 2, 1);
			this->tableLayoutPanel6->Controls->Add(this->label38, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->label39, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->label40, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->label41, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->button6, 2, 0);
			this->tableLayoutPanel6->Controls->Add(this->label46, 1, 2);
			this->tableLayoutPanel6->Controls->Add(this->button8, 2, 2);
			this->tableLayoutPanel6->Controls->Add(this->label45, 0, 2);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 3;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(393, 282);
			this->tableLayoutPanel6->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Location = System::Drawing::Point(264, 97);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 86);
			this->button5->TabIndex = 5;
			this->button5->Text = L"BUY";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// label38
			// 
			this->label38->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(134, 37);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(91, 20);
			this->label38->TabIndex = 1;
			this->label38->Text = L"tech 0 price";
			// 
			// label39
			// 
			this->label39->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(4, 37);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(97, 20);
			this->label39->TabIndex = 0;
			this->label39->Text = L"tech 0 name";
			// 
			// label40
			// 
			this->label40->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(4, 130);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(97, 20);
			this->label40->TabIndex = 2;
			this->label40->Text = L"tech 1 name";
			// 
			// label41
			// 
			this->label41->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(134, 130);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(91, 20);
			this->label41->TabIndex = 3;
			this->label41->Text = L"tech 1 price";
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->Location = System::Drawing::Point(264, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 86);
			this->button6->TabIndex = 4;
			this->button6->Text = L"BUY";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// label46
			// 
			this->label46->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(134, 224);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(91, 20);
			this->label46->TabIndex = 7;
			this->label46->Text = L"tech 2 price";
			// 
			// button8
			// 
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->Location = System::Drawing::Point(264, 190);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(125, 88);
			this->button8->TabIndex = 8;
			this->button8->Text = L"BUY";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// label45
			// 
			this->label45->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(4, 224);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(97, 20);
			this->label45->TabIndex = 6;
			this->label45->Text = L"tech 2 name";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->tableLayoutPanel7);
			this->tabPage6->Location = System::Drawing::Point(4, 29);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(399, 288);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"ACCESORIES";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel7->ColumnCount = 3;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel7->Controls->Add(this->button11, 2, 2);
			this->tableLayoutPanel7->Controls->Add(this->button10, 2, 1);
			this->tableLayoutPanel7->Controls->Add(this->label50, 1, 0);
			this->tableLayoutPanel7->Controls->Add(this->label47, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->label48, 0, 1);
			this->tableLayoutPanel7->Controls->Add(this->label49, 0, 2);
			this->tableLayoutPanel7->Controls->Add(this->label51, 1, 1);
			this->tableLayoutPanel7->Controls->Add(this->label52, 1, 2);
			this->tableLayoutPanel7->Controls->Add(this->button9, 2, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 3;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(393, 282);
			this->tableLayoutPanel7->TabIndex = 0;
			// 
			// button11
			// 
			this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button11->Location = System::Drawing::Point(264, 190);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(125, 88);
			this->button11->TabIndex = 8;
			this->button11->Text = L"BUY";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button10->Location = System::Drawing::Point(264, 97);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(125, 86);
			this->button10->TabIndex = 7;
			this->button10->Text = L"BUY";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click);
			// 
			// label50
			// 
			this->label50->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(134, 37);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(94, 20);
			this->label50->TabIndex = 3;
			this->label50->Text = L"acce 0 price";
			// 
			// label47
			// 
			this->label47->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(4, 37);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(100, 20);
			this->label47->TabIndex = 0;
			this->label47->Text = L"acce 0 name";
			// 
			// label48
			// 
			this->label48->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(4, 130);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(100, 20);
			this->label48->TabIndex = 1;
			this->label48->Text = L"acce 1 name";
			// 
			// label49
			// 
			this->label49->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(4, 224);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(100, 20);
			this->label49->TabIndex = 2;
			this->label49->Text = L"acce 2 name";
			// 
			// label51
			// 
			this->label51->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(134, 130);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(94, 20);
			this->label51->TabIndex = 4;
			this->label51->Text = L"acce 0 price";
			// 
			// label52
			// 
			this->label52->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(134, 224);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(94, 20);
			this->label52->TabIndex = 5;
			this->label52->Text = L"acce 0 price";
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button9->Location = System::Drawing::Point(264, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(125, 86);
			this->button9->TabIndex = 6;
			this->button9->Text = L"BUY";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(550, 847);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(552, 285);
			this->textBox2->TabIndex = 42;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(1136, 330);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(413, 92);
			this->button4->TabIndex = 43;
			this->button4->Text = L"SCHEDULE";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Location = System::Drawing::Point(3, 22);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(407, 327);
			this->tabControl2->TabIndex = 44;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->label58);
			this->tabPage3->Controls->Add(this->label57);
			this->tabPage3->Controls->Add(this->tableLayoutPanel8);
			this->tabPage3->Controls->Add(this->comboBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(399, 294);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"LIFESTYLE";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(11, 256);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(176, 26);
			this->textBox5->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(11, 215);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(176, 26);
			this->textBox4->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(11, 177);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(176, 26);
			this->textBox3->TabIndex = 8;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(275, 19);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(69, 20);
			this->label58->TabIndex = 7;
			this->label58->Text = L"diet cost";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(208, 19);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(46, 20);
			this->label57->TabIndex = 6;
			this->label57->Text = L"Cost:";
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 3;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				21.96383F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				18.60465F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				59.68992F)));
			this->tableLayoutPanel8->Controls->Add(this->progressBar15, 2, 1);
			this->tableLayoutPanel8->Controls->Add(this->label54, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->label56, 1, 1);
			this->tableLayoutPanel8->Controls->Add(this->label53, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->label55, 1, 0);
			this->tableLayoutPanel8->Controls->Add(this->progressBar14, 2, 0);
			this->tableLayoutPanel8->Location = System::Drawing::Point(11, 50);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 2;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(382, 104);
			this->tableLayoutPanel8->TabIndex = 5;
			// 
			// progressBar15
			// 
			this->progressBar15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->progressBar15->Location = System::Drawing::Point(156, 55);
			this->progressBar15->Maximum = 220;
			this->progressBar15->Minimum = 130;
			this->progressBar15->Name = L"progressBar15";
			this->progressBar15->Size = System::Drawing::Size(223, 46);
			this->progressBar15->TabIndex = 6;
			this->progressBar15->Value = 130;
			// 
			// label54
			// 
			this->label54->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(3, 16);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(74, 20);
			this->label54->TabIndex = 2;
			this->label54->Text = L"WEIGHT";
			// 
			// label56
			// 
			this->label56->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(86, 68);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(60, 20);
			this->label56->TabIndex = 4;
			this->label56->Text = L"label56";
			// 
			// label53
			// 
			this->label53->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(3, 68);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(71, 20);
			this->label53->TabIndex = 1;
			this->label53->Text = L"HEIGHT";
			// 
			// label55
			// 
			this->label55->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(86, 16);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(60, 20);
			this->label55->TabIndex = 3;
			this->label55->Text = L"label55";
			// 
			// progressBar14
			// 
			this->progressBar14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->progressBar14->Location = System::Drawing::Point(156, 3);
			this->progressBar14->Maximum = 130;
			this->progressBar14->Minimum = 40;
			this->progressBar14->Name = L"progressBar14";
			this->progressBar14->Size = System::Drawing::Size(223, 46);
			this->progressBar14->TabIndex = 5;
			this->progressBar14->Value = 40;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(11, 16);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(176, 28);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox1_SelectedIndexChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->listBox2);
			this->tabPage4->Controls->Add(this->tableLayoutPanel4);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(399, 294);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"INVENTORY";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(3, 67);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(393, 224);
			this->listBox2->TabIndex = 3;
			this->listBox2->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::listBox2_MouseDoubleClick);
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->label26, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->label31, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->label32, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->label33, 1, 1);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(393, 59);
			this->tableLayoutPanel4->TabIndex = 2;
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(4, 5);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(95, 20);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Used laptop";
			// 
			// label31
			// 
			this->label31->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(4, 34);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(114, 20);
			this->label31->TabIndex = 1;
			this->label31->Text = L"Used accesory";
			// 
			// label32
			// 
			this->label32->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(200, 5);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(14, 20);
			this->label32->TabIndex = 2;
			this->label32->Text = L"-";
			// 
			// label33
			// 
			this->label33->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(200, 34);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(14, 20);
			this->label33->TabIndex = 3;
			this->label33->Text = L"-";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->listBox1);
			this->tabPage5->Location = System::Drawing::Point(4, 29);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(399, 294);
			this->tabPage5->TabIndex = 2;
			this->tabPage5->Text = L"GRADES";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(393, 288);
			this->listBox1->TabIndex = 0;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->tabControl1);
			this->groupBox5->Location = System::Drawing::Point(1136, 428);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(413, 346);
			this->groupBox5->TabIndex = 45;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"SHOPS";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->tabControl2);
			this->groupBox6->Location = System::Drawing::Point(1136, 780);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(413, 352);
			this->groupBox6->TabIndex = 46;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"YOU";
			// 
			// progressBar13
			// 
			this->progressBar13->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->progressBar13->Location = System::Drawing::Point(550, 765);
			this->progressBar13->Name = L"progressBar13";
			this->progressBar13->Size = System::Drawing::Size(552, 68);
			this->progressBar13->TabIndex = 52;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Location = System::Drawing::Point(1136, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(412, 281);
			this->panel1->TabIndex = 53;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox6->Location = System::Drawing::Point(13, 30);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(390, 44);
			this->textBox6->TabIndex = 4;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(18, 233);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(146, 35);
			this->textBox1->TabIndex = 1;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label30->Location = System::Drawing::Point(15, 201);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(65, 29);
			this->label30->TabIndex = 0;
			this->label30->Text = L"Gold";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(192, 81);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(204, 187);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1578, 1144);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->progressBar13);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->monthCalendar1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Padding = System::Windows::Forms::Padding(10);
			this->RightToLeftLayout = true;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student Maker";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void StatRefresh(my_class::character* player)
		{
			//chyba nie optymalne, do poprawy w przyszlosci
			player->all_stat_floor();

			textBox1->Text = player->gold.ToString();
			label8->Text = player->strenght.ToString();
			label9->Text = player->intelligence.ToString();
			label10->Text = player->charisma.ToString();
			label11->Text = player->stamina.ToString();
			label12->Text = player->stress.ToString();
			label13->Text = player->exhaustion.ToString();
			label20->Text = player->aca_math.ToString();
			label21->Text = player->aca_phys.ToString();
			label22->Text = player->aca_it.ToString();
			label23->Text = player->rep_aca.ToString();
			label24->Text = player->rep_soc.ToString();
			label25->Text = player->rep_cmb.ToString();
			label55->Text = ((round(player->weight*100))/100).ToString();
			label56->Text = player->height.ToString();

			progressBar1->Value = player->strenght;
			progressBar2->Value = player->intelligence;
			progressBar3->Value = player->charisma;
			progressBar4->Value = player->stamina;
			progressBar5->Value = player->stress;
			progressBar6->Value = player->exhaustion;
			progressBar7->Value = player->aca_math;
			progressBar8->Value = player->aca_phys;
			progressBar9->Value = player->aca_it;
			progressBar10->Value = player->rep_aca;
			progressBar11->Value = player->rep_soc;
			progressBar12->Value = player->rep_cmb;
			progressBar14->Value = player->weight;
			progressBar15->Value = player->height;

			if (player->stressed == true) { textBox3->Text = "Distress"; } else { textBox3->Text = "Good Mental Health"; }
			if (player->exhausted == true) { textBox4->Text = "Fatigue"; } else { textBox4->Text = "Well rested"; }
			if (player->exhausted == true && player->stressed == true) { textBox5->Text = "DEPRESSION"; } else { textBox5->Text = ""; }
			if (fortesting = 0)
			{
				if (player->strenght >= 0) progressBar1->Value = player->strenght; else progressBar1->Value = 0;
				if (player->intelligence >= 0) progressBar2->Value = player->intelligence; else progressBar2->Value = 0;
				if (player->charisma >= 0) progressBar3->Value = player->charisma; else progressBar3->Value = 0;
				if (player->stamina >= 0) progressBar4->Value = player->stamina; else progressBar4->Value = 0;
				if (player->stress >= 0) progressBar5->Value = player->stress; else progressBar5->Value = 0;
				if (player->exhaustion >= 0) progressBar6->Value = player->exhaustion; else progressBar6->Value = 0;
				if (player->aca_math >= 0) progressBar7->Value = player->aca_math; else progressBar7->Value = 0;
				if (player->aca_phys >= 0) progressBar8->Value = player->aca_phys; else progressBar8->Value = 0;
				if (player->aca_it >= 0) progressBar9->Value = player->aca_it; else progressBar9->Value = 0;
				if (player->rep_aca >= 0) progressBar10->Value = player->rep_aca; else progressBar10->Value = 0;
				if (player->rep_soc >= 0) progressBar11->Value = player->rep_soc; else progressBar11->Value = 0;
				if (player->rep_cmb >= 0) progressBar12->Value = player->rep_cmb; else progressBar12->Value = 0;
			}
		}

		void nextweek()
		{
			DateTime today = this->monthCalendar1->TodayDate;
			DateTime startweek = this->monthCalendar1->TodayDate.AddDays(1);
			DateTime endweek = this->monthCalendar1->TodayDate.AddDays(7);
			if (monthCalendar1->TodayDate.AddDays(7) < monthCalendar1->MaxDate)
			{
				monthCalendar1->TodayDate = today.AddDays(7);
			}
			if (monthCalendar1->TodayDate.AddDays(8) <= monthCalendar1->MaxDate)
			{
				monthCalendar1->SelectionRange = gcnew SelectionRange(startweek.AddDays(7), endweek.AddDays(7));
			}
		}

		void calendarupdate()
		{
			DateTime today = this->monthCalendar1->TodayDate;
			DateTime startweek = this->monthCalendar1->TodayDate.AddDays(1);
			DateTime endweek = this->monthCalendar1->TodayDate.AddDays(7);

			if (monthCalendar1->TodayDate.AddDays(7) <= monthCalendar1->MaxDate)
			{
				monthCalendar1->SelectionRange = gcnew SelectionRange(startweek, endweek);
			}
			else monthCalendar1->SelectionRange = gcnew SelectionRange(startweek.AddDays(-7), endweek.AddDays(-7));
		}

		void grading()
		{
			std::string today_string = marshal_as< std::string >(monthCalendar1->TodayDate.ToString());
			std::string today_day = marshal_as< std::string >(monthCalendar1->TodayDate.Day.ToString());
			std::string today_month = marshal_as< std::string >(monthCalendar1->TodayDate.Month.ToString());
			std::string today_year = marshal_as< std::string >(monthCalendar1->TodayDate.Year.ToString());

			//label27->Text = monthCalendar1->TodayDate.ToString();

			for (int i = 0; i < 9; i++)
			{
				if (tests[i]->check_date(today_string, today_day, today_month, today_year) == true)
				{
					tests[i]->grading(player);
					if (tests[i]->pass() == true)
					{
						MessageBox::Show("there was a test,you passed", "test", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else MessageBox::Show("there was a test, you didn't pass", "test", MessageBoxButtons::OK, MessageBoxIcon::Information);

					textBox2->Text = marshal_as< System::String^ >(tests[i]->name) + ": \r\n";
					textBox2->Text = textBox2->Text + "Your test score was: " + tests[i]->grade.ToString() + "\r\n";
					textBox2->Text = textBox2->Text + "Your percentage score was: " + tests[i]->percentage.ToString() + "% \r\n";
					
					Global::gradelist[player->grade_number] = tests[i]->grade.ToString();
					player->grades[player->grade_number] = tests[i]->grade;
					player->grade_number++;
					this->listBox1->Items->Clear();
					this->listBox1->Items->AddRange(Global:: gradelist);
				}
			}
		}

		void tests_initialization()
		{
			//test initilization( pass_val,  weight_int,  weight_math, weight_phys,  weight_it, day, month, year)
			tests[0] = new my_class::test(25, 0.1, 1, 0.1, 0.1, "6", "10", "2019", "Linear algebra");
			tests[1] = new my_class::test(35, 0.1, 1, 0.1, 0.1,  "10", "11", "2019", "Derivatives");
			tests[2] = new my_class::test(40, 0.1, 0.1, 0.05, 1, "17", "11", "2019","Matlab" );
			tests[3] = new my_class::test(50, 0.2, 0, 0, 1, "8", "12", "2019","Object Oriented Programming");
			tests[4] = new my_class::test(55, 0.2, 0.3, 1, 0, "22", "12", "2019", "Clasical mechanics");
			tests[5] = new my_class::test(60, 0.2, 1, 0.05, 0.05, "12", "1", "2020", "Probability");
			tests[6] = new my_class::test(65, 0.2, 0.2, 1, 0, "26", "1", "2020","Thermodynamics");
			tests[7] = new my_class::test(70, 0.2, 1, 0, 0, "16", "2", "2020", "Calculus");
			tests[8] = new my_class::test(75, 0.2, 0.1, 1, 0.05, "23", "2", "2020","General Relativity");
			finals[0] = new my_class::test(100, 0.5, 1, 0.05, 0.05, "2", "3", "2020", "MATH FINAL");
			finals[1] = new my_class::test(100, 0.5, 0.05, 1, 0.05, "6", "3", "2020", "PHYSICS FINAL");
			finals[2] = new my_class::test(100, 0.5, 0.05, 0.05, 1, "10", "3", "2020", "IT FINAL");
			//array of your grades
			Global:: gradelist = gcnew array<String^>(player->grade_quantity);
			for (int i = 0; i < player->grade_quantity; i++) { Global::gradelist[i] = ""; player->grades[i] = 0; }
			for (int i = 0; i < 3; i++) { player->grades_final[i] = 0; }
		}


		void pocket_money()
		{
			if (this->monthCalendar1->TodayDate.Month != current_month)
			{
				MessageBox::Show("You got pocket Money From your parents\r\nLook how much they love you!", "Pocket Money", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int pocket_money = 50 + rand() % 150 + 1;
				player->gold += pocket_money;
				textBox2->Text = textBox2->Text + "You got " + pocket_money.ToString() + " gold from your Parents! \r\n";
				current_month = this->monthCalendar1->TodayDate.Month;
			}
		}
		void diet_initialization()
		{
			for (int i = 0; i < 4; i++)
			{
				diets[i] = new my_class::diet(i);
			}
			Global::dietlist = gcnew array<String^>(4);

			for (int i = 0; i < 4; i++)
			{
				Global::dietlist[i] = marshal_as< System::String^ >(diets[i]->diet_name);
			}
			player->current_diet = diets[1];
			comboBox1->Items->AddRange(Global::dietlist);
			comboBox1->SelectedIndex = 1;
			label58->Text = player->current_diet->cost.ToString();
		}
		void shop_initialization()
		{
			shop_cons[0] = new my_class::pizza();
			shop_cons[1] = new my_class::anti_depress();
			shop_cons[2] = new my_class::kebab();

			label34->Text = marshal_as< System::String^ >(shop_cons[0]->item_name);
			label36->Text = marshal_as< System::String^ >(shop_cons[1]->item_name);
			label43->Text = marshal_as< System::String^ >(shop_cons[2]->item_name);

			label35->Text = shop_cons[0]->value.ToString() + " gold";
			label37->Text = shop_cons[1]->value.ToString() + " gold";
			label44->Text = shop_cons[2]->value.ToString() + " gold";

			shop_tech[0] = new my_class::lenovo();
			shop_tech[1] = new my_class::macbook();
			shop_tech[2] = new my_class::gaming_laptop();

			label39->Text = marshal_as< System::String^ >(shop_tech[0]->item_name);
			label40->Text = marshal_as< System::String^ >(shop_tech[1]->item_name);
			label45->Text = marshal_as< System::String^ >(shop_tech[2]->item_name);

			label38->Text = shop_tech[0]->value.ToString() + " gold";
			label41->Text = shop_tech[1]->value.ToString() + " gold";
			label46->Text = shop_tech[2]->value.ToString() + " gold";

			shop_acce[0] = new my_class::fedora();
			shop_acce[1] = new my_class::jacket();
			shop_acce[2] = new my_class::shades();

			label47->Text = marshal_as< System::String^ >(shop_acce[0]->item_name);
			label48->Text = marshal_as< System::String^ >(shop_acce[1]->item_name);
			label49->Text = marshal_as< System::String^ >(shop_acce[2]->item_name);

			label50->Text = shop_acce[0]->value.ToString() + " gold";
			label51->Text = shop_acce[1]->value.ToString() + " gold";
			label52->Text = shop_acce[2]->value.ToString() + " gold";

			Global::itemlist = gcnew array<String^>(player->eq_space);
			for (int i = 0; i < player->eq_space; i++) { Global::itemlist[i] = ""; }
		}

		void cons_buy(int cons_number)
		{
			if (player->gold > 0)
			{
				shop_cons[cons_number]->buy(player);
				shop_cons[cons_number]->use(player);
				StatRefresh(player);
			}
			else MessageBox::Show("not enough money", "money", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		void tech_buy(int tech_number)
		{
			if (player->eq_number < player->eq_space)
			{
				if (player->gold > 0)
				{
					player->eq[player->eq_number] = shop_tech[tech_number];
					player->eq[player->eq_number]->buy(player);
					Global::itemlist[player->eq_number] = marshal_as< System::String^ >(player->eq[player->eq_number]->item_name);;
					this->listBox2->Items->Clear();
					this->listBox2->Items->AddRange(Global::itemlist);
					player->eq_number++;
					StatRefresh(player);
				}
				else MessageBox::Show("not enough money", "money", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}

		void acce_buy(int acce_number)
		{
			if (player->eq_number < player->eq_space)
			{
				if (player->gold > 0)
				{
					player->eq[player->eq_number] = shop_acce[acce_number];
					player->eq[player->eq_number]->buy(player);
					Global::itemlist[player->eq_number] = marshal_as< System::String^ >(player->eq[player->eq_number]->item_name);
					this->listBox2->Items->Clear();
					this->listBox2->Items->AddRange(Global::itemlist);
					player->eq_number++;
					StatRefresh(player);
				}
				else MessageBox::Show("not enough money", "money", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}

		void ending()
		{
			textBox2->Text = "";
			for (int i = 0; i < 3; i++)
			{
				finals[i]->grading(player);
				player->grades_final[i] = finals[i]->grade;
				textBox2->Text = textBox2->Text + marshal_as< System::String^ >(finals[i]->name) + ": \r\n";
				textBox2->Text = textBox2->Text + "Your test score was: " + finals[i]->grade.ToString() + "\r\n";
				textBox2->Text = textBox2->Text + "Your percentage score was: " + finals[i]->percentage.ToString() + "% \r\n";
			}

		 MessageBox::Show("Finals are over", "Finish", MessageBoxButtons::OK, MessageBoxIcon::Information);

			theend = new my_class::ending(player);
		 endscreen^ end = gcnew endscreen();
		 end->ShowDialog();
		 Application::Exit();

		}

/////////////////////////////////////////////////////////////////////////////////////////// MAIN CONTROLS
///////////////////////////////////////////////////////////////////////////////////////////

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		characreator^ m = gcnew characreator();
		this->Hide();
		m->ShowDialog();

		player = new my_class::character(TheSchool,character_name);

		textBox6->Text = marshal_as< System::String^ >(player->name);
		player->status_check();
		StatRefresh(player);

		shop_initialization();
		diet_initialization();
		tests_initialization();

		int current_month = this->monthCalendar1->TodayDate.Month; //for pocket money
		srand((unsigned int)time(NULL));
	}

  /////////////////////////////////SCHEDULING
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { 
		activity^ ac = gcnew activity();
		ac->DateNow = this->monthCalendar1->TodayDate;

		ac->ShowDialog(this);
		textBox2->Text = "";
		if (confirmation == true)
		{
			this->monthCalendar1->TodayDate = ac->DateNow;
			
			for (int i = 0; i < 3; i++)
			{
				
				if (player->stressed == true)
				{
					if (rand() % 6 == 0)
					{
						delete schedule[i];
						schedule[i] = new my_class::distress();
					}
				}
				if (player->exhausted == true)
				{
					if (rand() % 6 == 0)
					{
						delete schedule[i];
						schedule[i] = new my_class::fatigue();
					}
				}
				if (player->exhausted == true && player->stressed == true)
				{
					if (rand() % 9 == 0)
					{
						delete schedule[i];
						schedule[i] = new my_class::depression();
					}
				}
				textBox2->Text = textBox2->Text + marshal_as< System::String^ >(schedule[i]->description) + "\r\n";
				this->Refresh();
				for (int j = 0; j < 10; j++)
				{
					this->progressBar13->PerformStep();
					Sleep(10);
				}
				schedule[i]->stat_change(player);
				schedule[i]->gold_change(player);

				StatRefresh(player);
				delete schedule[i];
				progressBar13->Value = 0;
			}
			
			nextweek();
			calendarupdate();
			grading();
			pocket_money();
			player->status_check();
			player->current_diet->effects(player);
			StatRefresh(player);
			if (this->monthCalendar1->TodayDate >= this->monthCalendar1->MaxDate.AddDays(-1))
			{
				ending();
			}
			
		}
		confirmation = false;
	}

	
	private: System::Void listBox2_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int index = this->listBox2->IndexFromPoint(e->Location);
		if (index != System::Windows::Forms::ListBox::NoMatches)
		{
			
			if (listBox2->SelectedIndex < player->eq_number)
			{
				if (player->eq[listBox2->SelectedIndex]->usable == true)
				{
					for (int i = 0; i < player->eq_number; i++)
					{
						if (player->eq[listBox2->SelectedIndex]->item_type == player->eq[i]->item_type)
						{
							if (player->eq[i]->in_use == true)
							{
								player->eq[i]->use(player);
							}
						}
					}
					player->eq[listBox2->SelectedIndex]->use(player);
					switch (player->eq[listBox2->SelectedIndex]->item_type)
					{
					case 1:
						label32->Text = marshal_as< System::String^ >(player->eq[listBox2->SelectedIndex]->item_name);
						break;
					case 2:
						label33->Text = marshal_as< System::String^ >(player->eq[listBox2->SelectedIndex]->item_name);
						break;
					}
				}
			}
		}
		StatRefresh(player);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	cons_buy(0);
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	cons_buy(1);
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	cons_buy(2);
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	tech_buy(0);
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	tech_buy(1);
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	tech_buy(2);
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	acce_buy(0);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	acce_buy(1);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	acce_buy(2);
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	player->current_diet = diets[comboBox1->SelectedIndex];
	label58->Text = player->current_diet->cost.ToString();
}

};//
}//
