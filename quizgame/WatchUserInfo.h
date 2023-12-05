#pragma once
#include "sqlconnect.h"
#include "UpdateUserInfo.h"
namespace quizgame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Recognition;
	/// <summary>
	/// Summary for WatchUserInfo
	/// </summary>
	public ref class WatchUserInfo : public System::Windows::Forms::Form
	{
	public:
		SpeechRecognizer^ recognizer;
		WatchUserInfo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		WatchUserInfo(String ^g)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			SpeechSynthesizer^ t = gcnew SpeechSynthesizer();
			t->Rate = -2;
			t->SpeakAsync("Your data is shown in the table!");
			l = g;
			sqlconnect x;
			label1->Text = "Username is:" + g;
			x.viewUserInfo(g, dataGridView1, bindingSource1);
		}
	private: System::Windows::Forms::Panel^  panel1;
	public:
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel2;
			 String^ l;
		
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	public:
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WatchUserInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(WatchUserInfo::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(635, 116);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(432, 192);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Update Info";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WatchUserInfo::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->label1->Location = System::Drawing::Point(23, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(895, 456);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WatchUserInfo::panel1_Paint);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &WatchUserInfo::pictureBox1_Click);
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
			this->panel4->Controls->Add(this->label2);
			this->panel4->Location = System::Drawing::Point(3, 399);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(892, 32);
			this->panel4->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->label2->Location = System::Drawing::Point(262, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(355, 19);
			this->label2->TabIndex = 0;
			this->label2->Text = L"QUIZ GAMESHOW DESIGNED BY ZIA AND TEAM";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(112, 122);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(664, 334);
			this->panel2->TabIndex = 3;
			// 
			// WatchUserInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 460);
			this->Controls->Add(this->panel1);
			this->Name = L"WatchUserInfo";
			this->Text = L"WatchUserInfo";
			this->Load += gcnew System::EventHandler(this, &WatchUserInfo::WatchUserInfo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
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
	private: System::Void WatchUserInfo_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 UpdateUserInfo^ x = gcnew UpdateUserInfo(l);
				 x->ShowDialog();
	}
			 void new_SpeechRecognized(Object^ sender, SpeechRecognizedEventArgs^ e)
			 {
				 try
				 {
					 if (e->Result->Text == "UpdateInfo")
					 {
						 button1_Click(sender, e);
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
				 Cho->Add("UpdateInfo");
				 GrammarBuilder^ allBuild = gcnew GrammarBuilder(Cho);   // create a new instance of GrammarBuild^ to conbine all chices
				 Grammar^ new_gram = gcnew Grammar(allBuild);                  //creates a new Grammar^ instance to be recognize
				 //Attach an event handler
				 new_gram->SpeechRecognized += gcnew EventHandler<SpeechRecognizedEventArgs^>(this, &quizgame::WatchUserInfo::new_SpeechRecognized);
				 recognizer->LoadGrammar(new_gram);
			 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
