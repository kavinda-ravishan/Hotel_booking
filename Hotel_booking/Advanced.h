#pragma once

namespace Hotelbooking {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;
	/// <summary>
	/// Summary for Advanced
	/// </summary>
	public ref class Advanced : public System::Windows::Forms::Form
	{
	public:
		Advanced(void)
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
		~Advanced()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label5;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"STD Payment";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"STD Cost";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(193, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Sea Payment";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(193, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Sea Cost";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(191, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Refresh";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Advanced::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Advanced::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(91, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(68, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(269, 29);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(269, 64);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(68, 20);
			this->textBox4->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(102, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Advanced::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(287, 107);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Cancel";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Advanced::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(133, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L" Per Person and Per Night";
			// 
			// Advanced
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(374, 151);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(390, 190);
			this->MinimumSize = System::Drawing::Size(390, 190);
			this->Name = L"Advanced";
			this->Text = L"Advanced";
			this->Load += gcnew System::EventHandler(this, &Advanced::Advanced_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Advanced_Load(System::Object^  sender, System::EventArgs^  e) {
		String ^ Inpath = "data/infor.txt";
		if (File::Exists(Inpath)) {
			StreamReader ^ infor = File::OpenText(Inpath);
			textBox1->Text = infor->ReadLine();
			textBox2->Text = infor->ReadLine();
			textBox3->Text = infor->ReadLine();
			textBox4->Text = infor->ReadLine();

			infor->Close();
		}
		else {
			textBox1->Text = nullptr;
			textBox2->Text = nullptr;
			textBox3->Text = nullptr;
			textBox4->Text = nullptr;
		}
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ Inpath = "data/infor.txt";
	if (File::Exists(Inpath)) {
		StreamReader ^ infor = File::OpenText(Inpath);
		textBox1->Text = infor->ReadLine();
		textBox2->Text = infor->ReadLine();
		textBox3->Text = infor->ReadLine();
		textBox4->Text = infor->ReadLine();

		infor->Close();
	}
	else {
		textBox1->Text = nullptr;
		textBox2->Text = nullptr;
		textBox3->Text = nullptr;
		textBox4->Text = nullptr;
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
		textBox1->Text = "50";
		textBox2->Text = "40";
		textBox3->Text = "75";
		textBox4->Text = "60";
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		String ^ Inpath = "data/infor.txt";
		StreamWriter ^ infor = gcnew StreamWriter(Inpath);
		infor->WriteLine(textBox1->Text);
		infor->WriteLine(textBox2->Text);
		infor->WriteLine(textBox3->Text);
		infor->WriteLine(textBox4->Text);

		MessageBox::Show("Updated", "File");

		infor->Close();

	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
