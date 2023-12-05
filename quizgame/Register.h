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
	using namespace System::Speech::Recognition;
	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		SpeechRecognizer^ recognizer;
		int i = 0;
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			SpeechSynthesizer^ x = gcnew SpeechSynthesizer();
			x->SpeakAsync("fill out the fields then click on register to register the user");
			if (i==0)
			work();
		}
	private: System::Windows::Forms::Label^  label1;
	public:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Panel^  panel2;



			 System::Windows::Forms::Form^ y;
		Register(System::Windows::Forms::Form^ x)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			y = x;
			SpeechSynthesizer^ z = gcnew SpeechSynthesizer();
			z->SpeakAsync("fill out the fields then click on register to register the user");
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(322, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"BACK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label1->Location = System::Drawing::Point(24, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"userName";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(121, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Click += gcnew System::EventHandler(this, &Register::textBox1_TextChanged);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Register::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label2->Location = System::Drawing::Point(24, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label3->Location = System::Drawing::Point(24, 149);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(48, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label4->Location = System::Drawing::Point(24, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Address";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label5->Location = System::Drawing::Point(24, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Class";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label6->Location = System::Drawing::Point(349, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 24);
			this->label6->TabIndex = 7;
			this->label6->Text = L"testsGiven";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(326, 129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 24);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Marks obtained";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label8->Location = System::Drawing::Point(550, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(203, 24);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Special quizes given";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(514, 129);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(272, 24);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Special quiz marks obtained";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(121, 111);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 20);
			this->textBox2->TabIndex = 11;
			this->textBox2->Click += gcnew System::EventHandler(this, &Register::textBox2_TextChanged);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Register::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(121, 147);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->Click += gcnew System::EventHandler(this, &Register::textBox3_TextChanged);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Register::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(121, 183);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(140, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Click += gcnew System::EventHandler(this, &Register::textBox4_TextChanged);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Register::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(121, 219);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(140, 20);
			this->textBox5->TabIndex = 14;
			this->textBox5->Click += gcnew System::EventHandler(this, &Register::textBox5_TextChanged);
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Register::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(351, 92);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(328, 156);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(146, 20);
			this->textBox7->TabIndex = 16;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(596, 92);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 17;
			this->textBox8->Text = L"0";
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(566, 156);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(160, 20);
			this->textBox9->TabIndex = 18;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Firebrick;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(497, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(281, 49);
			this->button2->TabIndex = 19;
			this->button2->Text = L"REGISTER";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Register::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(894, 456);
			this->panel1->TabIndex = 20;
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
			this->panel4->Controls->Add(this->label10);
			this->panel4->Location = System::Drawing::Point(3, 399);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(892, 32);
			this->panel4->TabIndex = 5;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->label10->Location = System::Drawing::Point(262, 5);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(355, 19);
			this->label10->TabIndex = 0;
			this->label10->Text = L"QUIZ GAMESHOW DESIGNED BY ZIA AND TEAM";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(37, 122);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(828, 334);
			this->panel2->TabIndex = 3;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 460);
			this->Controls->Add(this->panel1);
			this->Name = L"Register";
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			this->panel1->ResumeLayout(false);
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
				 this->Hide();
				 y->ShowDialog();
	}
	private: System::Void Register_Load(System::Object^  sender, System::EventArgs^  e) {


	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 sqlconnect x;
				 x.registera(textBox1->Text,textBox2->Text,textBox3->Text,textBox4->Text,textBox5->Text,textBox6->Text,textBox7->Text,textBox8->Text,textBox9->Text);

	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 i = 1;
}
		 void new_SpeechRecognized(Object^ sender, SpeechRecognizedEventArgs^ e)
		 {
			 try
			 {
				 if (e->Result->Text == "a")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "b")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "c")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "d")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "e")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "f")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "g")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "h")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "i")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "j")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "k")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "l")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "m")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "n")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "o")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "p")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "q")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "r")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "s")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "t")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "u")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "v")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "w")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "x")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "y")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "z")
				 {
					 if (i == 1)
					 {
						 textBox1->Text += e->Result->Text;
					 }
					 if (i == 2)
					 {
						 textBox2->Text += e->Result->Text;
					 }
					 if (i == 3)
					 {
						 textBox3->Text += e->Result->Text;
					 }
					 if (i == 4)
					 {
						 textBox4->Text += e->Result->Text;
					 }
					 if (i == 5)
					 {
						 textBox5->Text += e->Result->Text;
					 }
				 }
				 if (e->Result->Text == "Register")
				 {
					 button2_Click(sender, e);
				 }
			 }
			 catch (Exception^ exce)
			 {
				 MessageBox::Show("occured");
			 }
			 work();
			 return;
		 }
		 System::Void work()
		 {
			 try
			 {
				 recognizer = gcnew SpeechRecognizer();
				 Choices^ cho = gcnew Choices();
				 cho->Add("a");
				 cho->Add("b");
				 cho->Add("c");
				 cho->Add("d");
				 cho->Add("e");
				 cho->Add("f");
				 cho->Add("g");
				 cho->Add("h");
				 cho->Add("i");
				 cho->Add("j");
				 cho->Add("k");
				 cho->Add("l");
				 cho->Add("m");
				 cho->Add("n");
				 cho->Add("o");
				 cho->Add("p");
				 cho->Add("q");
				 cho->Add("r");
				 cho->Add("s");
				 cho->Add("t");
				 cho->Add("u");
				 cho->Add("v");
				 cho->Add("w");
				 cho->Add("x");
				 cho->Add("y");
				 cho->Add("z");
				 cho->Add("Register");
				 GrammarBuilder^ gbuilder = gcnew GrammarBuilder(cho);
				 Grammar^ new_gram = gcnew Grammar(gbuilder);
				 new_gram->SpeechRecognized += gcnew EventHandler<SpeechRecognizedEventArgs^>(this, &quizgame::Register::new_SpeechRecognized);
				 recognizer->LoadGrammar(new_gram);
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show("Here");
				 return;
			 }
		 }
		 
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 i = 2;
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 i = 3;
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 i = 4;
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 i = 5;
}
};
}
