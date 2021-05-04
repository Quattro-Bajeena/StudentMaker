#pragma once
#include "MainForm.h"
//#include"myclass.h"

namespace studentmaker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	
	int snumber = 0;
	bool confirmation = false;
	my_class::activity* activity_pool[16];
	my_class::activity* schedule[3];
	
	
	

	
	
	/// <summary>
	/// Summary for activity
	/// </summary>
	public ref class activity : public System::Windows::Forms::Form
	{
		ref class global abstract sealed {
		public:
			static array<String^>^ slist;
		};

	public:
		activity(void)
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
		~activity()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MonthCalendar^ monthCalendar2;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->monthCalendar2 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// monthCalendar2
			// 
			this->monthCalendar2->Enabled = false;
			this->monthCalendar2->FirstDayOfWeek = System::Windows::Forms::Day::Monday;
			this->monthCalendar2->Location = System::Drawing::Point(18, 61);
			this->monthCalendar2->MaxDate = System::DateTime(2020, 3, 2, 0, 0, 0, 0);
			this->monthCalendar2->MinDate = System::DateTime(2019, 9, 1, 0, 0, 0, 0);
			this->monthCalendar2->Name = L"monthCalendar2";
			this->monthCalendar2->SelectionRange = (gcnew System::Windows::Forms::SelectionRange(System::DateTime(2019, 9, 30, 0, 0, 0, 0), System::DateTime(2019,
				10, 5, 0, 0, 0, 0)));
			this->monthCalendar2->TabIndex = 36;
			this->monthCalendar2->TodayDate = System::DateTime(2019, 9, 29, 0, 0, 0, 0);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(265, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 29);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Schedule your week";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(18, 326);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(312, 64);
			this->listBox1->TabIndex = 50;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(17, 484);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(313, 48);
			this->button4->TabIndex = 51;
			this->button4->Text = L"Proceed";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &activity::button4_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Location = System::Drawing::Point(357, 61);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(176, 183);
			this->groupBox3->TabIndex = 52;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Attending lectures";
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button7->AutoSize = true;
			this->button7->Location = System::Drawing::Point(6, 140);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(164, 30);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Concentrated";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &activity::button7_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button6->AutoSize = true;
			this->button6->Location = System::Drawing::Point(6, 104);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(164, 30);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Normal";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &activity::button6_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button5->AutoSize = true;
			this->button5->Location = System::Drawing::Point(6, 68);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(164, 30);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Little attention";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &activity::button5_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(6, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 30);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Sleeping";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &activity::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Location = System::Drawing::Point(563, 61);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(176, 183);
			this->groupBox1->TabIndex = 53;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Work";
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button8->AutoSize = true;
			this->button8->Location = System::Drawing::Point(6, 140);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(164, 30);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Free internship";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &activity::button8_Click);
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button9->AutoSize = true;
			this->button9->Location = System::Drawing::Point(6, 104);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(164, 30);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Call Centre";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &activity::button9_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button10->AutoSize = true;
			this->button10->Location = System::Drawing::Point(6, 68);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(164, 30);
			this->button10->TabIndex = 1;
			this->button10->Text = L"WcDonalds";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &activity::button10_Click);
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button11->AutoSize = true;
			this->button11->Location = System::Drawing::Point(6, 33);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(164, 30);
			this->button11->TabIndex = 0;
			this->button11->Text = L"Uber Drinks";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &activity::button11_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(64, 408);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(199, 48);
			this->button3->TabIndex = 48;
			this->button3->Text = L"Delete from schedule";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &activity::button3_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(830, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(113, 46);
			this->button12->TabIndex = 54;
			this->button12->Text = L"Close";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &activity::button12_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Location = System::Drawing::Point(357, 250);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(176, 183);
			this->groupBox2->TabIndex = 55;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Learning";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button1->AutoSize = true;
			this->button1->Location = System::Drawing::Point(6, 140);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 30);
			this->button1->TabIndex = 3;
			this->button1->Text = L"IT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &activity::button1_Click);
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button13->AutoSize = true;
			this->button13->Location = System::Drawing::Point(6, 104);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(164, 30);
			this->button13->TabIndex = 2;
			this->button13->Text = L"Physics";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &activity::button13_Click);
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button14->AutoSize = true;
			this->button14->Location = System::Drawing::Point(6, 68);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(164, 30);
			this->button14->TabIndex = 1;
			this->button14->Text = L"Mathematics";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &activity::button14_Click);
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button15->AutoSize = true;
			this->button15->Location = System::Drawing::Point(6, 33);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(164, 30);
			this->button15->TabIndex = 0;
			this->button15->Text = L"General";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &activity::button15_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button16);
			this->groupBox4->Controls->Add(this->button17);
			this->groupBox4->Controls->Add(this->button18);
			this->groupBox4->Controls->Add(this->button19);
			this->groupBox4->Location = System::Drawing::Point(563, 250);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(176, 183);
			this->groupBox4->TabIndex = 56;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Free time";
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button16->AutoSize = true;
			this->button16->Location = System::Drawing::Point(6, 140);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(164, 30);
			this->button16->TabIndex = 3;
			this->button16->Text = L"Making Games";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &activity::button16_Click);
			// 
			// button17
			// 
			this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button17->AutoSize = true;
			this->button17->Location = System::Drawing::Point(6, 104);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(164, 30);
			this->button17->TabIndex = 2;
			this->button17->Text = L"Model-Building";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &activity::button17_Click);
			// 
			// button18
			// 
			this->button18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button18->AutoSize = true;
			this->button18->Location = System::Drawing::Point(6, 68);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(164, 30);
			this->button18->TabIndex = 1;
			this->button18->Text = L"Video Games";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &activity::button18_Click);
			// 
			// button19
			// 
			this->button19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button19->AutoSize = true;
			this->button19->Location = System::Drawing::Point(6, 33);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(164, 30);
			this->button19->TabIndex = 0;
			this->button19->Text = L"Movies";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &activity::button19_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button20);
			this->groupBox5->Controls->Add(this->button21);
			this->groupBox5->Controls->Add(this->button22);
			this->groupBox5->Controls->Add(this->button23);
			this->groupBox5->Location = System::Drawing::Point(767, 61);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(176, 183);
			this->groupBox5->TabIndex = 57;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Sport";
			// 
			// button20
			// 
			this->button20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button20->AutoSize = true;
			this->button20->Location = System::Drawing::Point(6, 140);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(164, 30);
			this->button20->TabIndex = 3;
			this->button20->Text = L"Running";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &activity::button20_Click);
			// 
			// button21
			// 
			this->button21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button21->AutoSize = true;
			this->button21->Location = System::Drawing::Point(6, 104);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(164, 30);
			this->button21->TabIndex = 2;
			this->button21->Text = L"Football";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &activity::button21_Click);
			// 
			// button22
			// 
			this->button22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button22->AutoSize = true;
			this->button22->Location = System::Drawing::Point(6, 68);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(164, 30);
			this->button22->TabIndex = 1;
			this->button22->Text = L"Martial Arts";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &activity::button22_Click);
			// 
			// button23
			// 
			this->button23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button23->AutoSize = true;
			this->button23->Location = System::Drawing::Point(6, 33);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(164, 30);
			this->button23->TabIndex = 0;
			this->button23->Text = L"Gym";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &activity::button23_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button24);
			this->groupBox6->Controls->Add(this->button25);
			this->groupBox6->Controls->Add(this->button26);
			this->groupBox6->Controls->Add(this->button27);
			this->groupBox6->Location = System::Drawing::Point(767, 250);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(176, 183);
			this->groupBox6->TabIndex = 58;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Hang out";
			// 
			// button24
			// 
			this->button24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button24->AutoSize = true;
			this->button24->Location = System::Drawing::Point(6, 140);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(164, 30);
			this->button24->TabIndex = 3;
			this->button24->Text = L"In Clubs";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &activity::button24_Click);
			// 
			// button25
			// 
			this->button25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button25->AutoSize = true;
			this->button25->Location = System::Drawing::Point(6, 104);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(164, 30);
			this->button25->TabIndex = 2;
			this->button25->Text = L"On the City";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &activity::button25_Click);
			// 
			// button26
			// 
			this->button26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button26->AutoSize = true;
			this->button26->Location = System::Drawing::Point(6, 68);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(164, 30);
			this->button26->TabIndex = 1;
			this->button26->Text = L"At a Party";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &activity::button26_Click);
			// 
			// button27
			// 
			this->button27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button27->AutoSize = true;
			this->button27->Location = System::Drawing::Point(6, 33);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(164, 30);
			this->button27->TabIndex = 0;
			this->button27->Text = L"In Bar";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &activity::button27_Click);
			// 
			// activity
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(961, 544);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->monthCalendar2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"activity";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Activities";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &activity::activity_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	void assign_lecture(int i)
	{
		if (snumber < 3)
		{
			schedule[snumber] = new my_class::lecture(i);
			global::slist[snumber] = msclr::interop::marshal_as< System::String^ >(schedule[snumber]->description);
			snumber++;
			listBox1->Items->Clear();
			listBox1->Items->AddRange(global::slist);
		}
	}
	void assign_work(int i)
	{
		if (snumber < 3)
		{
			schedule[snumber] = new my_class::work(i);
			global::slist[snumber] = msclr::interop::marshal_as< System::String^ >(schedule[snumber]->description);
			snumber++;
			listBox1->Items->Clear();
			listBox1->Items->AddRange(global::slist);
		}
	}

	void assign_learn(int i)
	{
		if (snumber < 3)
		{
			schedule[snumber] = new my_class::learn(i);
			global::slist[snumber] = msclr::interop::marshal_as< System::String^ >(schedule[snumber]->description);
			snumber++;
			listBox1->Items->Clear();
			listBox1->Items->AddRange(global::slist);
		}
	}

	void assign_freetime(int i)
	{
		if (snumber < 3)
		{
			schedule[snumber] = new my_class::freetime(i);
			global::slist[snumber] = msclr::interop::marshal_as< System::String^ >(schedule[snumber]->description);
			snumber++;
			listBox1->Items->Clear();
			listBox1->Items->AddRange(global::slist);
		}
	}

	void assign_sport(int i)
	{
		if (snumber < 3)
		{
			schedule[snumber] = new my_class::sport(i);
			global::slist[snumber] = msclr::interop::marshal_as< System::String^ >(schedule[snumber]->description);
			snumber++;
			listBox1->Items->Clear();
			listBox1->Items->AddRange(global::slist);
		}
	}

	void assign_goout(int i)
	{
		if (snumber < 3)
		{
			schedule[snumber] = new my_class::goout(i);
			global::slist[snumber] = msclr::interop::marshal_as< System::String^ >(schedule[snumber]->description);
			snumber++;
			listBox1->Items->Clear();
			listBox1->Items->AddRange(global::slist);
		}
	}

	void assign_activity(int i) // cuœ nie dzia³a trzeba zrobiæ deep copy bo tak to wskaŸnik wskazuje w to samo miejsce
	{
		if (snumber < 3)
		{
			schedule[snumber] = activity_pool[i];
			global::slist[snumber] = msclr::interop::marshal_as< System::String^ >(schedule[snumber]->description);
			snumber++;
			listBox1->Items->Clear();
			listBox1->Items->AddRange(global::slist);
		}
	}

	void initialize_activities()
	{
		activity_pool[0] = new my_class::lecture(1);
		activity_pool[1] = new my_class::lecture(2);
		activity_pool[2] = new my_class::lecture(3);
		activity_pool[3] = new my_class::lecture(4);
		activity_pool[4] = new my_class::work(1);
		activity_pool[5] = new my_class::work(2);
		activity_pool[6] = new my_class::work(3);
		activity_pool[7] = new my_class::work(4);
		activity_pool[8] = new my_class::learn(1);
		activity_pool[9] = new my_class::learn(2);
		activity_pool[10] = new my_class::learn(3);
		activity_pool[11] = new my_class::learn(4);
		activity_pool[12] = new my_class::freetime(1);
		activity_pool[13] = new my_class::freetime(2);
		activity_pool[14] = new my_class::freetime(3);
		activity_pool[15] = new my_class::freetime(4);
	}

	public: property System::DateTime DateNow
	{
		System::DateTime get()
		{
			return this->monthCalendar2->TodayDate;
		}
		void set(System::DateTime inow)
		{
			this->monthCalendar2->TodayDate = inow;
		}
	}

	private: System::Void activity_Load(System::Object^ sender, System::EventArgs^ e) {
		DateTime today = this->monthCalendar2->TodayDate;
		DateTime startweek = this->monthCalendar2->TodayDate.AddDays(1);
		DateTime endweek = this->monthCalendar2->TodayDate.AddDays(7);
		if (monthCalendar2->TodayDate.AddDays(8) <= monthCalendar2->MaxDate)
		{
			monthCalendar2->SelectionRange = gcnew SelectionRange(startweek, endweek);
		}else
		monthCalendar2->SelectionRange = gcnew SelectionRange(startweek.AddDays(-7), endweek.AddDays(-7));


		global::slist = gcnew array<String^>(3);
		for (int i = 0; i < 3; i++){global::slist[i] = ""; }

		//initialize_activities();
	}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//assign_activity(0);
	assign_lecture(1);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//assign_activity(1);
	assign_lecture(2);
	
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	//assign_activity(2);
	assign_lecture(3);
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	//assign_activity(3);
	assign_lecture(4);
}

private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	//assign_activity(4);
	assign_work(1);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	//assign_activity(5);
	assign_work(2);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	//assign_activity(6);
	assign_work(3);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//assign_activity(7);
	assign_work(4);
}

private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_learn(1);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_learn(2);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_learn(3);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_learn(4);
}

private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_freetime(1);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_freetime(2);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_freetime(3);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_freetime(4);
}

private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_sport(1);
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_sport(2);
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_sport(3);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_sport(4);
}

private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_goout(1);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_goout(2);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_goout(3);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	assign_goout(4);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (snumber > 0)
	{
		snumber--;
		delete schedule[snumber];
		global::slist[snumber] = "";
		listBox1->Items->Clear();
		listBox1->Items->AddRange(global::slist);
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (snumber == 3)
	{
		snumber = 0;
		confirmation = true;
		this->Close();
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	snumber = 0;
	for (int i = 0; i < snumber; i++)
	{
		delete schedule[i];
	}
	this->Close();
}


};/////////////////
}//////////////////
