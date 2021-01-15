#pragma once
#include "changePass.h"
#include "Advanced.h"
#include "userMainForm.h"

namespace Hotelbooking {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;
	/// <summary>
	/// Summary for adminForm
	/// </summary>
	public ref class adminForm : public System::Windows::Forms::Form
	{
	public:
		adminForm(void)
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
		~adminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;







	protected:








	private: System::Windows::Forms::Label^  label1;






	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::RichTextBox^  richTextBox1;



	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
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
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;












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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
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
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(125, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 23);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ID Number";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Find";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &adminForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(268, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &adminForm::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(26, 30);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(100, 98);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(176, 288);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 35);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Clear";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &adminForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(254, 288);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(89, 24);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Rooms Usage";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &adminForm::button6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Created Date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Tel No";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"STD Adults";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(198, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Rooms";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Sea Adults";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(198, 165);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Rooms";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 191);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Check in";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(26, 217);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Check out";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(244, 203);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Nights";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 243);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 13);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Cost";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(125, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(198, 20);
			this->textBox2->TabIndex = 20;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(125, 81);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(198, 20);
			this->textBox3->TabIndex = 21;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(125, 107);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(113, 20);
			this->textBox4->TabIndex = 22;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(125, 133);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(67, 20);
			this->textBox5->TabIndex = 23;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(256, 136);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(67, 20);
			this->textBox6->TabIndex = 24;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(125, 159);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(67, 20);
			this->textBox7->TabIndex = 25;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(256, 162);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(67, 20);
			this->textBox8->TabIndex = 26;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(125, 188);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(113, 20);
			this->textBox9->TabIndex = 27;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(125, 214);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(113, 20);
			this->textBox10->TabIndex = 28;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(281, 200);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(42, 20);
			this->textBox11->TabIndex = 29;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(198, 243);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 13);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Payment";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(256, 240);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(67, 20);
			this->textBox12->TabIndex = 31;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(125, 240);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(67, 20);
			this->textBox13->TabIndex = 32;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(80, 349);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(93, 13);
			this->linkLabel1->TabIndex = 33;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Change Password";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &adminForm::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(12, 349);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(56, 13);
			this->linkLabel2->TabIndex = 34;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Advanced";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &adminForm::linkLabel2_LinkClicked);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label14->Location = System::Drawing::Point(265, 17);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 13);
			this->label14->TabIndex = 35;
			this->label14->Text = L"---------";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(443, 339);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 36;
			this->button7->Text = L"Exit";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &adminForm::button7_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(402, 169);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(100, 98);
			this->richTextBox2->TabIndex = 37;
			this->richTextBox2->Text = L"";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(408, 278);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 34);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &adminForm::button3_Click_1);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(34, 13);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 13);
			this->label15->TabIndex = 39;
			this->label15->Text = L"In Service";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(410, 149);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(42, 13);
			this->label16->TabIndex = 40;
			this->label16->Text = L"Expired";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Location = System::Drawing::Point(376, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(145, 311);
			this->groupBox1->TabIndex = 41;
			this->groupBox1->TabStop = false;
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(183, 349);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(55, 13);
			this->linkLabel3->TabIndex = 42;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"User Form";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &adminForm::linkLabel3_LinkClicked);
			// 
			// adminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 371);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(546, 410);
			this->MinimumSize = System::Drawing::Size(546, 410);
			this->Name = L"adminForm";
			this->Text = L"adminForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^Path = "data/0.txt";
		String ^SPath = "data/0.txt";

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String ^ id = textBox1->Text;
		
		String ^ rid;
		int count = 1;
		Path="data/0.txt";

		bool loop = true;
		while (loop) {
			Path = "data/" + System::Convert::ToString(count) + ".txt";
			if (File::Exists(Path)) {
				StreamReader^ dataTXT = File::OpenText(Path);
				rid = dataTXT->ReadLine();
				if (id == rid) loop = false;

				dataTXT->Close();
			}
			if (count > 100) {
				loop = false;
				MessageBox::Show("ID Not Found", "ID");
			}
			count++;
		}
		if (File::Exists(Path)) {
			StreamReader^ dataTXT = File::OpenText(Path);

			textBox1->Text = dataTXT->ReadLine();
			textBox2->Text = dataTXT->ReadLine();
			textBox3->Text = dataTXT->ReadLine();
			textBox4->Text = dataTXT->ReadLine();
			textBox5->Text = dataTXT->ReadLine();
			textBox6->Text = dataTXT->ReadLine();
			textBox7->Text = dataTXT->ReadLine();
			textBox8->Text = dataTXT->ReadLine();
			textBox9->Text = dataTXT->ReadLine();
			textBox10->Text = dataTXT->ReadLine();
			textBox11->Text = dataTXT->ReadLine();
			textBox12->Text = dataTXT->ReadLine();
			textBox13->Text = dataTXT->ReadLine();

			dataTXT->Close();
			SPath = Path;
			label14->Text = SPath;
		}
		if (File::Exists(SPath)) this->button2->Enabled = true;
		else this->button2->Enabled = false;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (File::Exists(SPath)) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Are you Sure !\n\n"+SPath, "Delete File", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				File::Delete(SPath);

				textBox1->Text = nullptr;
				textBox2->Text = nullptr;
				textBox3->Text = nullptr;
				textBox4->Text = nullptr;
				textBox5->Text = nullptr;
				textBox6->Text = nullptr;
				textBox7->Text = nullptr;
				textBox8->Text = nullptr;
				textBox9->Text = nullptr;
				textBox10->Text = nullptr;
				textBox11->Text = nullptr;
				textBox12->Text = nullptr;
				textBox13->Text = nullptr;
				{
					richTextBox1->Text = nullptr;
					richTextBox2->Text = nullptr;

					Path = "data/0.txt";

					String ^ outdate;
					int count = 1;

					bool loop = true;
					while (loop) {
						Path = "data/" + System::Convert::ToString(count) + ".txt";
						if (File::Exists(Path)) {
							StreamReader^ dataTXT = File::OpenText(Path);
							for (short n = 1; n < 10; n++) {
								dataTXT->ReadLine();
							}
							outdate = dataTXT->ReadLine();
							DateTime note = System::Convert::ToDateTime(outdate);
							DateTime now = DateTime::Today;

							dataTXT->Close();

							if (note <= now) {
								StreamReader^ dataTXT = File::OpenText(Path);
								richTextBox2->Text = richTextBox2->Text + dataTXT->ReadLine() + "\n";
								dataTXT->Close();
							}
							else {
								StreamReader^ dataTXT = File::OpenText(Path);
								richTextBox1->Text = richTextBox1->Text + dataTXT->ReadLine() + "\n";
								dataTXT->Close();
							}
						}
						if (count > 100) {
							loop = false;
						}
						count++;
					}
				}
				
			}
		}
		if (File::Exists(SPath)) this->button2->Enabled = true;
		else this->button2->Enabled = false;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = nullptr;
		textBox2->Text = nullptr;
		textBox3->Text = nullptr;
		textBox4->Text = nullptr;
		textBox5->Text = nullptr;
		textBox6->Text = nullptr;
		textBox7->Text = nullptr;
		textBox8->Text = nullptr;
		textBox9->Text = nullptr;
		textBox10->Text = nullptr;
		textBox11->Text = nullptr;
		textBox12->Text = nullptr;
		textBox13->Text = nullptr;

		richTextBox1->Text = nullptr;
		richTextBox2->Text = nullptr;

		label14->Text = "---------";
		SPath = "data/0.txt";

		if (File::Exists(SPath)) this->button2->Enabled = true;
		else this->button2->Enabled = false;
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

		Path = "data/0.txt";
		
		String ^ outdate;
		String ^ Std;
		int stdNo = 0;
		int stdU = 0;
		String ^ Sea;
		int seaNo = 0;
		int seaU = 0;

		int count = 1;

		bool loop = true;
		while (loop) {
			Path = "data/" + System::Convert::ToString(count) + ".txt";
			if (File::Exists(Path)) {
				StreamReader^ dataTXT = File::OpenText(Path);
				for (short n = 1;n <= 5;n++) {
					dataTXT->ReadLine();
				}
				Std = dataTXT->ReadLine();
				dataTXT->ReadLine();
				Sea = dataTXT->ReadLine();
				dataTXT->ReadLine();
				outdate = dataTXT->ReadLine();
				DateTime note = System::Convert::ToDateTime(outdate);
				DateTime now = DateTime::Today;

				dataTXT->Close();

				if (note > now) {
					stdNo = stdNo + System::Convert::ToInt16(Std);
					seaNo = seaNo + System::Convert::ToInt16(Sea);
				}
				stdU = stdU + System::Convert::ToInt16(Std);
				seaU = seaU + System::Convert::ToInt16(Sea);
			}
			if (count > 100) {
				loop = false;
				MessageBox::Show("STD Rooms = " + System::Convert::ToInt16(stdNo)+"/50" + "\n" + "Sea Rooms = " + System::Convert::ToInt16(seaNo)+"/20"+"\n\n"
					+"STD current = " + System::Convert::ToInt16(stdU) +"/50" + "\n" + "Sea current = " + System::Convert::ToInt16(seaU) + "/20", "Rooms Usage");
			}
			count++;
		}
		
	}
    private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	changePass ^ f4 = gcnew changePass();
	f4->ShowDialog();
}
    private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Advanced ^ f5 = gcnew Advanced();
		f5->ShowDialog();
	}
    private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->Text = nullptr;
		richTextBox2->Text = nullptr;

		Path = "data/0.txt";

		String ^ outdate;
		int count = 1;

		bool loop = true;
		while (loop) {
			Path = "data/" + System::Convert::ToString(count) + ".txt";
			if (File::Exists(Path)) {
				StreamReader^ dataTXT = File::OpenText(Path);
				for (short n = 1; n < 10; n++) {
					dataTXT->ReadLine();
				}
				outdate = dataTXT->ReadLine();
				DateTime note = System::Convert::ToDateTime(outdate);
				DateTime now = DateTime::Today;

				dataTXT->Close();

				if (note <= now) {
					StreamReader^ dataTXT = File::OpenText(Path);
					richTextBox2->Text = richTextBox2->Text + dataTXT->ReadLine() + "\n";
					dataTXT->Close();
				}
				else {
					StreamReader^ dataTXT = File::OpenText(Path);
					richTextBox1->Text = richTextBox1->Text + dataTXT->ReadLine() + "\n";
					dataTXT->Close();
				}
			}
			if (count > 100) {
				loop = false;
				MessageBox::Show("Search Completed.", "Search");
			}
			count++;
		}
	}
private: System::Void linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	userMainForm ^ f1 = gcnew userMainForm();
	f1->ShowDialog();
}
};
}
