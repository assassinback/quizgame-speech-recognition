#pragma once
#include "sqlconnect.h"
namespace quizgame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Synthesis;
	/// <summary>
	/// Summary for SpecialQuiz
	/// </summary>
	public ref class SpecialQuiz : public System::Windows::Forms::Form
	{
	public:
		SpecialQuiz(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			SpeechSynthesizer^ x = gcnew SpeechSynthesizer();
			x->SpeakAsync("please fill all fields then enter quiz code then click on insert to insert the special quiz for students");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SpecialQuiz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Panel^  panel2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label1->Location = System::Drawing::Point(37, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Question 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label2->Location = System::Drawing::Point(37, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"option a";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label3->Location = System::Drawing::Point(211, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"option b";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label4->Location = System::Drawing::Point(37, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"option c";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label5->Location = System::Drawing::Point(211, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 15);
			this->label5->TabIndex = 4;
			this->label5->Text = L"option d";
			this->label5->Click += gcnew System::EventHandler(this, &SpecialQuiz::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Amaranth", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(37, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Answer";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(101, 37);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(274, 31);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SpecialQuiz::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(101, 78);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(275, 78);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(101, 105);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(275, 105);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &SpecialQuiz::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(101, 139);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(274, 22);
			this->textBox6->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(101, 295);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(274, 22);
			this->textBox7->TabIndex = 24;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(275, 265);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 23;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(101, 266);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 22;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(275, 237);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 21;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(101, 240);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 20;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(101, 192);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(274, 31);
			this->textBox12->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Amaranth", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(37, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Answer";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label8->Location = System::Drawing::Point(217, 269);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 15);
			this->label8->TabIndex = 17;
			this->label8->Text = L"option d";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label9->Location = System::Drawing::Point(37, 274);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 15);
			this->label9->TabIndex = 16;
			this->label9->Text = L"option c";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label10->Location = System::Drawing::Point(217, 241);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 15);
			this->label10->TabIndex = 15;
			this->label10->Text = L"option b";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label11->Location = System::Drawing::Point(37, 240);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 15);
			this->label11->TabIndex = 14;
			this->label11->Text = L"option a";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label12->Location = System::Drawing::Point(37, 203);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(61, 15);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Question 2";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(101, 441);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(274, 22);
			this->textBox13->TabIndex = 36;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(275, 406);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 35;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(101, 407);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 22);
			this->textBox15->TabIndex = 34;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(275, 381);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 22);
			this->textBox16->TabIndex = 33;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(101, 381);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 22);
			this->textBox17->TabIndex = 32;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(101, 344);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(274, 31);
			this->textBox18->TabIndex = 31;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Amaranth", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(37, 447);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 17);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Answer";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label14->Location = System::Drawing::Point(211, 409);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(49, 15);
			this->label14->TabIndex = 29;
			this->label14->Text = L"option d";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label15->Location = System::Drawing::Point(37, 413);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 15);
			this->label15->TabIndex = 28;
			this->label15->Text = L"option c";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label16->Location = System::Drawing::Point(211, 381);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(49, 15);
			this->label16->TabIndex = 27;
			this->label16->Text = L"option b";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label17->Location = System::Drawing::Point(37, 381);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(49, 15);
			this->label17->TabIndex = 26;
			this->label17->Text = L"option a";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label18->Location = System::Drawing::Point(37, 352);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(61, 15);
			this->label18->TabIndex = 25;
			this->label18->Text = L"Question 3";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(491, 139);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(268, 22);
			this->textBox19->TabIndex = 48;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(659, 107);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 22);
			this->textBox20->TabIndex = 47;
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &SpecialQuiz::textBox20_TextChanged);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(491, 105);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 22);
			this->textBox21->TabIndex = 46;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(659, 81);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 22);
			this->textBox22->TabIndex = 45;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(491, 78);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 22);
			this->textBox23->TabIndex = 44;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(491, 37);
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(268, 31);
			this->textBox24->TabIndex = 43;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label20->Location = System::Drawing::Point(608, 105);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(49, 15);
			this->label20->TabIndex = 41;
			this->label20->Text = L"option d";
			this->label20->Click += gcnew System::EventHandler(this, &SpecialQuiz::label20_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label21->Location = System::Drawing::Point(427, 105);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(48, 15);
			this->label21->TabIndex = 40;
			this->label21->Text = L"option c";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label22->Location = System::Drawing::Point(608, 81);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(49, 15);
			this->label22->TabIndex = 39;
			this->label22->Text = L"option b";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label23->Location = System::Drawing::Point(427, 81);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(49, 15);
			this->label23->TabIndex = 38;
			this->label23->Text = L"option a";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label24->Location = System::Drawing::Point(427, 40);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(61, 15);
			this->label24->TabIndex = 37;
			this->label24->Text = L"Question 4";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(493, 302);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(268, 22);
			this->textBox25->TabIndex = 60;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(661, 266);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 22);
			this->textBox26->TabIndex = 59;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(492, 269);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 22);
			this->textBox27->TabIndex = 58;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(661, 234);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 22);
			this->textBox28->TabIndex = 57;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(492, 238);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 22);
			this->textBox29->TabIndex = 56;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(493, 189);
			this->textBox30->Multiline = true;
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(268, 31);
			this->textBox30->TabIndex = 55;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Amaranth", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label25->Location = System::Drawing::Point(427, 302);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 17);
			this->label25->TabIndex = 54;
			this->label25->Text = L"Answer";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label26->Location = System::Drawing::Point(606, 271);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(49, 15);
			this->label26->TabIndex = 53;
			this->label26->Text = L"option d";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label27->Location = System::Drawing::Point(427, 270);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(48, 15);
			this->label27->TabIndex = 52;
			this->label27->Text = L"option c";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label28->Location = System::Drawing::Point(605, 238);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(49, 15);
			this->label28->TabIndex = 51;
			this->label28->Text = L"option b";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label29->Location = System::Drawing::Point(427, 237);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(49, 15);
			this->label29->TabIndex = 50;
			this->label29->Text = L"option a";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label30->Location = System::Drawing::Point(427, 196);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(61, 15);
			this->label30->TabIndex = 49;
			this->label30->Text = L"Question 5";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Amaranth", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(532, 349);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(173, 26);
			this->label31->TabIndex = 61;
			this->label31->Text = L"Enter Quiz Code";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(537, 381);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(155, 22);
			this->textBox31->TabIndex = 62;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Amaranth", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(505, 413);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(229, 50);
			this->button1->TabIndex = 63;
			this->button1->Text = L"insert";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SpecialQuiz::button1_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Amaranth", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::Red;
			this->label32->Location = System::Drawing::Point(427, 138);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(55, 17);
			this->label32->TabIndex = 64;
			this->label32->Text = L"Answer";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(-4, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(899, 584);
			this->panel1->TabIndex = 65;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->panel6->Location = System::Drawing::Point(0, 10);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(903, 12);
			this->panel6->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->panel4->Controls->Add(this->label19);
			this->panel4->Location = System::Drawing::Point(7, 482);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(892, 32);
			this->panel4->TabIndex = 5;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->label19->Location = System::Drawing::Point(262, 5);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(355, 19);
			this->label19->TabIndex = 0;
			this->label19->Text = L"QUIZ GAMESHOW DESIGNED BY ZIA AND TEAM";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->label32);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->textBox31);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->textBox25);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->textBox26);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->textBox27);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->textBox28);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox29);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox30);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label28);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->textBox19);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->textBox20);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox21);
			this->panel2->Controls->Add(this->textBox12);
			this->panel2->Controls->Add(this->textBox22);
			this->panel2->Controls->Add(this->textBox11);
			this->panel2->Controls->Add(this->textBox23);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->textBox24);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->textBox13);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->textBox14);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->textBox15);
			this->panel2->Controls->Add(this->textBox18);
			this->panel2->Controls->Add(this->textBox16);
			this->panel2->Controls->Add(this->textBox17);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Amaranth", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->panel2->Location = System::Drawing::Point(28, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(842, 581);
			this->panel2->TabIndex = 3;
			// 
			// SpecialQuiz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 529);
			this->Controls->Add(this->panel1);
			this->Name = L"SpecialQuiz";
			this->Text = L"SpecialQuiz";
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 sqlconnect x;
			 x.insertspecialquiz(textBox1->Text,textBox2->Text,textBox3->Text,textBox4->Text,textBox5->Text,textBox6->Text,textBox12->Text,textBox11->Text,textBox10->Text,textBox9->Text,textBox8->Text,textBox7->Text,textBox18->Text,textBox17->Text,textBox16->Text,textBox15->Text,textBox14->Text,textBox13->Text,textBox24->Text,textBox23->Text,textBox22->Text,textBox21->Text,textBox20->Text,textBox19->Text,textBox30->Text,textBox29->Text,textBox28->Text,textBox27->Text,textBox26->Text,textBox25->Text,textBox31->Text);

}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox20_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
