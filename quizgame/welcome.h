#pragma once
#include<iostream>
#include <string>
#include <ctime>
#include <sapi.h>
#include "AdminLogin.h"
#include "Register.h"
#include "UserLogin.h"
using namespace std;
namespace quizgame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Synthesis;
	using namespace System::Speech::Recognition;
	using namespace System::Speech::AudioFormat;
	/// <summary>
	/// Summary for welcome
	/// </summary>
	public ref class welcome : public System::Windows::Forms::Form
	{
	public:
		SpeechSynthesizer^ speaker;
	private: System::Windows::Forms::Timer^  timer1;
	public:
		SpeechRecognizer^ recognizer;
		welcome(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			SpeechSynthesizer^ x = gcnew SpeechSynthesizer();
			x->Rate = -2;
			this->Show();
			x->SpeakAsync("welcome to quiz game please choose between admin login,user login or register");
			welcome_Load();

		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~welcome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::ComponentModel::IContainer^  components;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(welcome::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(229, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"AdminLogin";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &welcome::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(229, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &welcome::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(229, 194);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(215, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"UserLogin";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &welcome::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(896, 456);
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &welcome::panel1_Paint);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Cooper Black", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Lime;
			this->label17->Location = System::Drawing::Point(819, 18);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(47, 55);
			this->label17->TabIndex = 16;
			this->label17->Text = L"\?";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Cooper Black", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(782, 63);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 40);
			this->label18->TabIndex = 17;
			this->label18->Text = L"\?";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Cooper Black", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label19->Location = System::Drawing::Point(728, 29);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(63, 74);
			this->label19->TabIndex = 18;
			this->label19->Text = L"\?";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Cooper Black", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Lime;
			this->label16->Location = System::Drawing::Point(142, 18);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(47, 55);
			this->label16->TabIndex = 15;
			this->label16->Text = L"\?";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Cooper Black", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(105, 63);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 40);
			this->label15->TabIndex = 15;
			this->label15->Text = L"\?";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Cooper Black", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label14->Location = System::Drawing::Point(51, 29);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(63, 74);
			this->label14->TabIndex = 15;
			this->label14->Text = L"\?";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(229, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(448, 160);
			this->panel3->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(65, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(313, 99);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->panel6->Location = System::Drawing::Point(-1, 122);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(903, 12);
			this->panel6->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->panel4->Controls->Add(this->label1);
			this->panel4->Location = System::Drawing::Point(3, 399);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(892, 32);
			this->panel4->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->label1->Location = System::Drawing::Point(262, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 19);
			this->label1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Location = System::Drawing::Point(112, 122);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(664, 334);
			this->panel2->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cooper Black", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Location = System::Drawing::Point(152, 132);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 74);
			this->label8->TabIndex = 14;
			this->label8->Text = L"\?";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cooper Black", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Fuchsia;
			this->label9->Location = System::Drawing::Point(122, 91);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 55);
			this->label9->TabIndex = 13;
			this->label9->Text = L"\?";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cooper Black", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Lime;
			this->label10->Location = System::Drawing::Point(111, 186);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 55);
			this->label10->TabIndex = 12;
			this->label10->Text = L"\?";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cooper Black", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Yellow;
			this->label11->Location = System::Drawing::Point(42, 186);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 74);
			this->label11->TabIndex = 11;
			this->label11->Text = L"\?";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cooper Black", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(95, 146);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 40);
			this->label12->TabIndex = 10;
			this->label12->Text = L"\?";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Cooper Black", 99.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(14, 54);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 152);
			this->label13->TabIndex = 9;
			this->label13->Text = L"\?";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cooper Black", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label7->Location = System::Drawing::Point(588, 118);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 74);
			this->label7->TabIndex = 8;
			this->label7->Text = L"\?";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cooper Black", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Fuchsia;
			this->label6->Location = System::Drawing::Point(558, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 55);
			this->label6->TabIndex = 7;
			this->label6->Text = L"\?";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lime;
			this->label5->Location = System::Drawing::Point(547, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 55);
			this->label5->TabIndex = 6;
			this->label5->Text = L"\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(478, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 74);
			this->label4->TabIndex = 5;
			this->label4->Text = L"\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(531, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 40);
			this->label3->TabIndex = 4;
			this->label3->Text = L"\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 99.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(450, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 152);
			this->label2->TabIndex = 3;
			this->label2->Text = L"\?";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &welcome::timer1_Tick);
			// 
			// welcome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 460);
			this->Controls->Add(this->panel1);
			this->Name = L"welcome";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"welcome";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 AdminLogin^ x = gcnew AdminLogin();
				 x->Refresh();
				 x->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Register^ x = gcnew Register();
				 x->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 UserLogin^ x = gcnew UserLogin();
				 x->ShowDialog();
	}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

}
		 void new_SpeechRecognized(Object^ sender, SpeechRecognizedEventArgs^ e)
		 {
			 try
			 {
				 SpeechSynthesizer^ speaker = gcnew SpeechSynthesizer();
				 if (e->Result->Text == "AdminLogin" || e->Result->Text == "Admin Login")
				 {
					 button1_Click(sender, e);
					 // or add your function

				 }
				 if (e->Result->Text == "UserLogin" || e->Result->Text == "User Login")
				 {
					 
					 //or add your function
					 button2_Click(sender, e);
				 }
				 if (e->Result->Text == "Register")
				 {
					 
					 // or add your function
					 button3_Click(sender, e);
				 }

			 }
			 catch (Exception^ exce)
			 {

			 }
			 return;
		 }
private: System::Void welcome_Load() {
			 try
			 {
				 speaker = gcnew SpeechSynthesizer();

				 recognizer = gcnew SpeechRecognizer();

				 //Create a new grammar
				 Choices^ a = gcnew Choices();
				 a->Add("AdminLogin");
				 a->Add("UserLogin");
				 a->Add("Register");
				 a->Add("Admin Login");
				 a->Add("User Login");

				 GrammarBuilder^ allBuild = gcnew GrammarBuilder(a);   // create a new instance of GrammarBuild^ to conbine all chices

				 Grammar^ new_gram = gcnew Grammar(allBuild);                  //creates a new Grammar^ instance to be recognize

				 //Attach an event handler
				 new_gram->SpeechRecognized += gcnew EventHandler<SpeechRecognizedEventArgs^>(this, &quizgame::welcome::new_SpeechRecognized);
				
				 recognizer->LoadGrammar(new_gram);
			 }
			 catch (Exception^ exc)
			 {

			 }
}
		 int y = -1;
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //QUIZ GAMESHOW DESIGNED BY ZIA AND TEAM
			 y++;
			 if (y == 0)
			 {
				 label1->Text = "Q";
			 }
			 if (y == 1)
			 {
				 label1->Text += "U";
			 }
			 if (y == 2)
			 {
				 label1->Text += "I";
			 }
			 if (y == 3)
			 {
				 label1->Text += "Z";
			 }
			 if (y == 4)
			 {
				 label1->Text += " G";
			 }
			 if (y == 5)
			 {
				 label1->Text += "A";
			 }
			 if (y == 6)
			 {
				 label1->Text += "M";
			 }
			 if (y == 7)
			 {
				 label1->Text += "E";
			 }
			 if (y == 8)
			 {
				 label1->Text += "S";
			 }
			 if (y == 9)
			 {
				 label1->Text += "H";
			 }
			 if (y == 10)
			 {
				 label1->Text += "O";
			 }
			 if (y == 11)
			 {
				 label1->Text += "W";
			 }
			 if (y == 12)
			 {
				 label1->Text += " D";
			 }
			 if (y == 13)
			 {
				 label1->Text += "E";
			 }
			 if (y == 14)
			 {
				 label1->Text += "S";
			 }
			 if (y == 15)
			 {
				 label1->Text += "I";
			 }
			 if (y == 16)
			 {
				 label1->Text += "G";
			 }
			 if (y == 17)
			 {
				 label1->Text += "N";
			 }
			 if (y == 18)
			 {
				 label1->Text += "E";
			 }
			 if (y == 19)
			 {
				 label1->Text += "D";
			 }
			 if (y == 20)
			 {
				 label1->Text += " B";
			 }
			 if (y == 21)
			 {
				 label1->Text += "Y";
			 }
			 if (y == 22)
			 {
				 label1->Text += " Z";
			 }
			 if (y == 23)
			 {
				 label1->Text += "I";
			 }
			 if (y == 24)
			 {
				 label1->Text += "A";
			 }
			 if (y == 25)
			 {
				 label1->Text += " A";
			 }
			 if (y == 26)
			 {
				 label1->Text += "N";
			 }
			 if (y == 27)
			 {
				 label1->Text += "D";
			 }
			 if (y == 28)
			 {
				 label1->Text += " T";
			 }
			 if (y == 29)
			 {
				 label1->Text += "E";
			 }
			 if (y == 30)
			 {
				 label1->Text += "A";
			 }
			 if (y == 31)
			 {
				 label1->Text += "M";
				 timer1->Enabled = false;
			 }

}
};
}