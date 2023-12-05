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
	/// Summary for GiveSpecialQuiz
	/// </summary>
	public ref class GiveSpecialQuiz : public System::Windows::Forms::Form
	{
		sqlconnect y;
	public:
		String^ username, ^code;
		String^ g = "";
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	public:
		int checkanswer = 0;

		GiveSpecialQuiz(String^ g, String^ f)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			username = g;
			code = f;
			SpeechSynthesizer^ x = gcnew SpeechSynthesizer();
			x->Rate = -2;
			y.head = y.dospecialquiz(code);
			String^ z = gcnew String(y.head->question.c_str());
			label1->Text = z;
			String^ a = gcnew String(y.head->a.c_str());
			radioButton1->Text = a;
			String^ b = gcnew String(y.head->b.c_str());
			radioButton2->Text = b;
			String^ c = gcnew String(y.head->c.c_str());
			radioButton3->Text = c;
			String^ d = gcnew String(y.head->d.c_str());
			radioButton4->Text = d;
			SpeechSynthesizer^ p = gcnew SpeechSynthesizer();
			p->Rate = -2;
			int i = y.head->question.find("*");
			if (i==0)
			{
				i = -1;
			}
			if (i > 0)
			{
				z = gcnew String(y.head->question.replace(i, 1, " Multiply by ").c_str());
			}
			i = y.head->question.find("/");
			if (i == 0)
			{
				i = -1;
			}
			if (i > 0)
			{
				z = gcnew String(y.head->question.replace(i, 1, " Divided by by ").c_str());
			}
			String^ l = gcnew String(z);
			p->SpeakAsync(l);
			label10->Text = "Questions done:" + questionsdone;
		}
	private: System::Windows::Forms::Panel^  panel1;
	public:
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label2;
			 int questionsdone = 0;
		
		GiveSpecialQuiz(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			SpeechSynthesizer^ p = gcnew SpeechSynthesizer();
			p->Rate = -2;
			String^ l = gcnew String(y.head->question.c_str());
			p->SpeakAsync(l);
			label10->Text = "Questions done:" + questionsdone;
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GiveSpecialQuiz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GiveSpecialQuiz::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->label1->Location = System::Drawing::Point(215, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.749999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton1->Location = System::Drawing::Point(169, 127);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(101, 20);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.749999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton2->Location = System::Drawing::Point(423, 127);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(101, 20);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.749999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton3->Location = System::Drawing::Point(169, 165);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(101, 20);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.749999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radioButton4->Location = System::Drawing::Point(423, 165);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(101, 20);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Firebrick;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(341, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 41);
			this->button1->TabIndex = 5;
			this->button1->Text = L"CONFIRM";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GiveSpecialQuiz::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(-5, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(898, 456);
			this->panel1->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(794, 156);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 25);
			this->label9->TabIndex = 16;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(17, 156);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 25);
			this->label10->TabIndex = 17;
			this->label10->Text = L"label10";
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &GiveSpecialQuiz::pictureBox1_Click);
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
			this->panel4->Controls->Add(this->label7);
			this->panel4->Location = System::Drawing::Point(3, 399);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(892, 32);
			this->panel4->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->label7->Location = System::Drawing::Point(262, 5);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(355, 19);
			this->label7->TabIndex = 0;
			this->label7->Text = L"QUIZ GAMESHOW DESIGNED BY ZIA AND TEAM";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->radioButton4);
			this->panel2->Controls->Add(this->radioButton3);
			this->panel2->Controls->Add(this->radioButton2);
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Location = System::Drawing::Point(112, 122);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(664, 334);
			this->panel2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label3->Location = System::Drawing::Point(85, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"YOUR QUESTION";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label4->Location = System::Drawing::Point(85, 128);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Option A";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label5->Location = System::Drawing::Point(337, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 20);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Option B";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label6->Location = System::Drawing::Point(335, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Option D";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->label8->Location = System::Drawing::Point(85, 164);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 20);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Option C";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panel5->Controls->Add(this->label2);
			this->panel5->Location = System::Drawing::Point(733, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(160, 124);
			this->panel5->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 62);
			this->label2->TabIndex = 0;
			this->label2->Text = L"SPECIAL \r\nQUIZ";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &GiveSpecialQuiz::timer1_Tick);
			// 
			// GiveSpecialQuiz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 460);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->Name = L"GiveSpecialQuiz";
			this->Text = L"GiveSpecialQuiz";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int z = 150;
		int t = 0;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 SpeechSynthesizer^ p = gcnew SpeechSynthesizer();
				 p->Rate = -2;

				 if (t == 2)
				 {
					 p->SpeakAsync("Your Time is up");
					 y.head = NULL;
				 }
				 if (y.head == NULL)
				 {
					 p->SpeakAsync("Your quiz is finished, Thank you " + username);
					 MessageBox::Show("Your marks are shown:\r\n" + g + "\r\n" + checkanswer + "/" + questionsdone + "\r\n\r\nScored by:" + username);
					 String^ g;
					 g = checkanswer + "";
					 y.insertspecialquiz(g, username);
					 this->Hide();

				 }
				 else if (y.head != NULL)
				 {
					 questionsdone++;
					 label10->Text = "Questions done:" + questionsdone;
					 if (radioButton1->Checked)
					 {
						 if (y.head->answer == "a")
						 {
							 checkanswer++;
							 p->Speak("You answered correctly");
							 g += "Correct\r\n";
						 }
						 else
						 {
							 p->Speak("Your answer is wrong");
							 g += "Wrong\r\n";
						 }
					 }
					 else if (radioButton2->Checked)
					 {
						 if (y.head->answer == "b")
						 {
							 checkanswer++;
							 p->Speak("You answered correctly");
							 g += "Correct\r\n";
						 }
						 else
						 {
							 p->Speak("Your answer is wrong");
							 g += "Wrong\r\n";
						 }
					 }
					 else if (radioButton3->Checked)
					 {
						 if (y.head->answer == "c")
						 {
							 checkanswer++;
							 p->Speak("You answered coorectly");
							 g += "Correct\r\n";
						 }
						 else
						 {
							 p->Speak("Your answer is wrong");
							 g += "Wrong\r\n";
						 }
					 }
					 else if (radioButton4->Checked)
					 {
						 if (y.head->answer == "d")
						 {
							 checkanswer++;
							 p->Speak("You answered correctly");
							 g += "Correct\r\n";
						 }
						 else
						 {
							 p->Speak("Your answer is wrong");
							 g += "Wrong\r\n";
						 }
					 }
					 else
					 {
						 SpeechSynthesizer^ x = gcnew SpeechSynthesizer();
						 x->Rate = -2;
						 x->SpeakAsync("plz choose your answer");
						 goto end;
					 }
					 y.head = y.head->next;
					 if (y.head != NULL)
					 {
						 String^ m = gcnew String(y.head->question.c_str());
						 label1->Text = m;
						 String^ a = gcnew String(y.head->a.c_str());
						 radioButton1->Text = a;
						 String^ b = gcnew String(y.head->b.c_str());
						 radioButton2->Text = b;
						 String^ c = gcnew String(y.head->c.c_str());
						 radioButton3->Text = c;
						 String^ d = gcnew String(y.head->d.c_str());
						 radioButton4->Text = d;
						 int i = y.head->question.find("*");
						 if (i == 0)
						 {
							 i = -1;
						 }
						 if (i > 0)
						 {
							 m = gcnew String(y.head->question.replace(i, 1, " Multiply by ").c_str());

						 }
						 i = y.head->question.find("/");
						 if (i == 0)
						 {
							 i = -1;
						 }
						 if (i > 0)
						 {
							 m = gcnew String(y.head->question.replace(i, 1, " Divided by by ").c_str());
						 }
						 p->SpeakAsync(m);
					 }
					 else
					 {
						 button1_Click(sender, e);
					 }
				 }
			 end:
				 if (true)
				 {

				 }
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 z--;
			 label9->Text = z + "";

			 if (z == 0)
			 {
				 t = 2;
				 button1_Click(sender, e);
			 }

}
};
}
