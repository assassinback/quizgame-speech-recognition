#pragma once
#include "sqlconnect.h"
#include "UserPanel.h"
namespace quizgame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Synthesis;
	/// <summary>
	/// Summary for UserLogin
	/// </summary>
	public ref class UserLogin : public System::Windows::Forms::Form
	{
	public:
		UserLogin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			SpeechSynthesizer^ x = gcnew SpeechSynthesizer();
			x->Rate = -2;
			x->SpeakAsync("Please enter your username and password");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UserLogin::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Amaranth", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(301, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserLogin::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Amaranth", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label1->Location = System::Drawing::Point(165, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"UserName";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Amaranth", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label2->Location = System::Drawing::Point(165, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(268, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(240, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(268, 127);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(240, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(895, 456);
			this->panel1->TabIndex = 7;
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
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(3, 399);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(892, 32);
			this->panel4->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->label3->Location = System::Drawing::Point(262, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(355, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"QUIZ GAMESHOW DESIGNED BY ZIA AND TEAM";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(112, 122);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(664, 334);
			this->panel2->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Amaranth", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(426, 181);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 35);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// UserLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 460);
			this->Controls->Add(this->panel1);
			this->Name = L"UserLogin";
			this->Text = L"UserLogin";
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
				 SpeechSynthesizer^ z = gcnew SpeechSynthesizer();
				 z->Rate = -2;
				 sqlconnect x;
				 bool c=x.userLogin(textBox1->Text,textBox2->Text);
				 if (c == true)
				 {
					 UserPanel^ p = gcnew UserPanel(textBox1->Text);
					 p->ShowDialog();
				 }
				 else
				 {
					 z->SpeakAsync("username or password is not valid");
				 }
	}
};
}
