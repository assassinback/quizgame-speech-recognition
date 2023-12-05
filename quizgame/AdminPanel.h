#pragma once
#include "sqlconnect.h"
#include "ViewQuestions.h"
#include "ViewMembers.h"
#include "SpecialQuiz.h"
#include "ViewQuizesDone.h"
#include "AddSpecialQuiz.h"
#include "AddOptions.h"
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
	/// Summary for AdminPanel
	/// </summary>
	public ref class AdminPanel : public System::Windows::Forms::Form
	{
	public:
		SpeechRecognizer^ recognizer;
		AdminPanel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			work();
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	public:
		System::Windows::Forms::Form^ y;
		AdminPanel(System::Windows::Forms::Form^ x)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			y = x;
			sqlconnect z;
			z.quescount(label1);
			SpeechSynthesizer^ q=gcnew SpeechSynthesizer();
			q->SpeakAsync("Dear Admin,Choose your option");
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminPanel()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminPanel::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->label1->Location = System::Drawing::Point(7, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"NbQuestions:";
			this->label1->Click += gcnew System::EventHandler(this, &AdminPanel::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(284, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(265, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"View Questions";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminPanel::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(284, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(265, 45);
			this->button2->TabIndex = 2;
			this->button2->Text = L"View UserInfo";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminPanel::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(284, 116);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(265, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Add Special Quiz Max 5";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminPanel::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(284, 167);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(265, 45);
			this->button4->TabIndex = 4;
			this->button4->Text = L"View Quizes done";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminPanel::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(-5, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(900, 456);
			this->panel1->TabIndex = 8;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(269, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(375, 134);
			this->panel3->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(338, 103);
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
			this->panel4->Location = System::Drawing::Point(5, 424);
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
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(112, 122);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(664, 334);
			this->panel2->TabIndex = 3;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(13, 18);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(265, 45);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Add Question Manually";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &AdminPanel::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(13, 72);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(265, 45);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Add Question Auto";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &AdminPanel::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(284, 259);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(265, 45);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Add Options";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &AdminPanel::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(284, 218);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(265, 45);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Add Special Quiz";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminPanel::button5_Click);
			// 
			// AdminPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 460);
			this->Controls->Add(this->panel1);
			this->Name = L"AdminPanel";
			this->Text = L"AdminPanel";
			this->Load += gcnew System::EventHandler(this, &AdminPanel::AdminPanel_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminPanel_Load(System::Object^  sender, System::EventArgs^  e) {


	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 ViewQuestions^ x = gcnew ViewQuestions(this);
				 x->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 ViewMembers^ x = gcnew ViewMembers(this);
				 x->ShowDialog();
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 SpecialQuiz^ x = gcnew SpecialQuiz();
			 x->ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 ViewQuizesDone^ x = gcnew ViewQuizesDone();
			 x->ShowDialog();
}
		 void new_SpeechRecognized(Object^ sender, SpeechRecognizedEventArgs^ e)
		 {
			 try
			 {
				 SpeechSynthesizer^ speaker = gcnew SpeechSynthesizer();
				 if (e->Result->Text == "View Questions")
				 {
					 button1_Click(sender, e);
					
				 }
				 if (e->Result->Text == "View Userinfo")
				 {
					 button2_Click(sender, e);
					 
					 
				 }
				 if (e->Result->Text == "Add Special Quiz")
				 {
					 button3_Click(sender, e);
					 
				 }
				 if (e->Result->Text == "View Quizes done")
				 {
					 button4_Click(sender, e);
				 
				 }
			 }
			 catch (Exception^ exce)
			 {

			 }
			 return;
		 }
		 Void work()
		 {
			 recognizer = gcnew SpeechRecognizer();

			 //Create a new grammar
			 Choices^ Cho = gcnew Choices();
			 Cho->Add("View Questions");
			 Cho->Add("View Userinfo");
			 Cho->Add("Add Special Quiz");
			 Cho->Add("View Quizes Done");
			 GrammarBuilder^ allBuild = gcnew GrammarBuilder(Cho);   // create a new instance of GrammarBuild^ to conbine all chices
			 Grammar^ new_gram = gcnew Grammar(allBuild);                  //creates a new Grammar^ instance to be recognize
			 //Attach an event handler
			 new_gram->SpeechRecognized += gcnew EventHandler<SpeechRecognizedEventArgs^>(this, &quizgame::AdminPanel::new_SpeechRecognized);
			 recognizer->LoadGrammar(new_gram);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 AddSpecialQuiz^ x = gcnew AddSpecialQuiz();
			 SpeechSynthesizer^ sp = gcnew SpeechSynthesizer();
			 sp->SpeakAsync("Quiz added");
			 x->ShowDialog();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 AddOptions^ x = gcnew AddOptions();
			 x->ShowDialog();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 AddQuestion^ x = gcnew AddQuestion();
			 x->ShowDialog();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 AddQuestion1^ x = gcnew AddQuestion1();
			 x->ShowDialog();
}
};
}
