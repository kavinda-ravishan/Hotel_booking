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
	/// Summary for userMainForm
	/// </summary>
	public ref class userMainForm : public System::Windows::Forms::Form
	{
	public:
		userMainForm(void)
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
		~userMainForm()
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
	private: System::Windows::Forms::TextBox^  stdAdults;
	private: System::Windows::Forms::TextBox^  seaAdults;




	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;


	private: System::Windows::Forms::Label^  label9;






	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label11;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  id;



	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  tele;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DateTimePicker^  datein;
	private: System::Windows::Forms::DateTimePicker^  dateout;








	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  button3;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(userMainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->stdAdults = (gcnew System::Windows::Forms::TextBox());
			this->seaAdults = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dateout = (gcnew System::Windows::Forms::DateTimePicker());
			this->datein = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tele = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 17);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Room Type [ No of Adults ]";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(233, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 25);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Standard";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label3->Location = System::Drawing::Point(234, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"$ 50  ( 2 )";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkOrange;
			this->label4->Location = System::Drawing::Point(420, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 25);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Sea Veiw";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label5->Location = System::Drawing::Point(421, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"$ 75  ( 4 )";
			// 
			// stdAdults
			// 
			this->stdAdults->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdAdults->Location = System::Drawing::Point(341, 26);
			this->stdAdults->Name = L"stdAdults";
			this->stdAdults->Size = System::Drawing::Size(35, 23);
			this->stdAdults->TabIndex = 0;
			this->stdAdults->Tag = L"";
			this->stdAdults->Text = L"0";
			this->stdAdults->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->stdAdults->TextChanged += gcnew System::EventHandler(this, &userMainForm::stdAdults_TextChanged);
			// 
			// seaAdults
			// 
			this->seaAdults->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seaAdults->Location = System::Drawing::Point(524, 26);
			this->seaAdults->Name = L"seaAdults";
			this->seaAdults->Size = System::Drawing::Size(35, 23);
			this->seaAdults->TabIndex = 2;
			this->seaAdults->Text = L"0";
			this->seaAdults->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->seaAdults->TextChanged += gcnew System::EventHandler(this, &userMainForm::seaAdults_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(200, 138);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Check - in  :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(385, 138);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Check - out  :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label8->Location = System::Drawing::Point(250, 158);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(262, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Rooms are only avilable from 2017-11-1 to 2018-12-31";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(316, 97);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(175, 25);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Visiting information";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(320, 201);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Calculate Payment";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &userMainForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->panel1);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->dateout);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->datein);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->seaAdults);
			this->groupBox1->Controls->Add(this->stdAdults);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(580, 245);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Booking Information";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(499, 60);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(75, 13);
			this->label19->TabIndex = 34;
			this->label19->Text = L"20 -Rooms left";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(317, 60);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(75, 13);
			this->label15->TabIndex = 33;
			this->label15->Text = L"50 -Rooms left";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::DarkRed;
			this->label18->Location = System::Drawing::Point(234, 44);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 32;
			this->label18->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Orange;
			this->label17->Location = System::Drawing::Point(421, 44);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 31;
			this->label17->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label16->Location = System::Drawing::Point(79, 42);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(126, 15);
			this->label16->TabIndex = 30;
			this->label16->Text = L"No of Rooms Require";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->label10->Location = System::Drawing::Point(351, 171);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 19);
			this->label10->TabIndex = 29;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(16, 85);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(169, 136);
			this->panel1->TabIndex = 28;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(142, 113);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label13->Location = System::Drawing::Point(3, 60);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(202, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Per Person | Per Night  (Adults Per Room)";
			// 
			// dateout
			// 
			this->dateout->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateout->Location = System::Drawing::Point(465, 135);
			this->dateout->MaxDate = System::DateTime(2021, 12, 31, 0, 0, 0, 0);
			this->dateout->MinDate = System::DateTime::Now;
			this->dateout->Name = L"dateout";
			this->dateout->Size = System::Drawing::Size(95, 20);
			this->dateout->TabIndex = 5;
			this->dateout->ValueChanged += gcnew System::EventHandler(this, &userMainForm::dateout_ValueChanged);
			// 
			// datein
			// 
			this->datein->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->datein->Location = System::Drawing::Point(268, 135);
			this->datein->MaxDate = System::DateTime(2021, 12, 31, 0, 0, 0, 0);
			this->datein->MinDate = System::DateTime::Now;
			this->datein->Name = L"datein";
			this->datein->Size = System::Drawing::Size(95, 20);
			this->datein->TabIndex = 4;
			this->datein->ValueChanged += gcnew System::EventHandler(this, &userMainForm::datein_ValueChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label11->Location = System::Drawing::Point(37, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Name";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label12->Location = System::Drawing::Point(37, 60);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"ID Number";
			// 
			// id
			// 
			this->id->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->id->Location = System::Drawing::Point(139, 57);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(100, 20);
			this->id->TabIndex = 8;
			this->id->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label14->Location = System::Drawing::Point(37, 86);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 13);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Telephone No";
			// 
			// tele
			// 
			this->tele->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tele->Location = System::Drawing::Point(139, 83);
			this->tele->Name = L"tele";
			this->tele->Size = System::Drawing::Size(100, 20);
			this->tele->TabIndex = 9;
			this->tele->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->groupBox2->Controls->Add(this->name);
			this->groupBox2->Controls->Add(this->tele);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->id);
			this->groupBox2->Location = System::Drawing::Point(19, 263);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(573, 141);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Personal Information";
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(139, 21);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(279, 20);
			this->name->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(235, 410);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 39);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Confirm";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &userMainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(517, 426);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &userMainForm::button3_Click);
			// 
			// userMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 461);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(620, 500);
			this->MinimumSize = System::Drawing::Size(620, 500);
			this->Name = L"userMainForm";
			this->Text = L"Air Holiday Colombo";
			this->Load += gcnew System::EventHandler(this, &userMainForm::userMainForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		int stdNo=50;
		int seaNo=20;

		int stdP = 50;
		int stdC = 40;

		int seaP = 75;
		int seaC = 60;

		int noOfNights() {
		
			String ^ DateIn = datein->Text + " 00:00:00";
			String ^ DateNow = DateTime::Today.ToString();

			int nights = (dateout->Value - datein->Value).Days;
			if (DateIn == DateNow) nights++;
			
			if (dateout->Value < datein->Value) return 0;
			else return nights;
		}
		int Payment() {

			int noStdAdults = System::Convert::ToInt16(stdAdults->Text);
			int noSeaAdults = System::Convert::ToInt16(seaAdults->Text);
			
			return ((noStdAdults*stdP)+(noSeaAdults*seaP))*noOfNights();
		}
		int cost() {

			int noStdAdults = System::Convert::ToInt16(stdAdults->Text);
			int noSeaAdults = System::Convert::ToInt16(seaAdults->Text);

			return ((noStdAdults*stdC) + (noSeaAdults*seaC))*noOfNights();
		}
		int roomsCount(String ^ adults,int perRoom,bool std) {
			int peaple = 0;
			if (std) {
				if (this->stdAdults->TextLength > 0)peaple = System::Convert::ToInt16(adults);
			}
			else {
				if (this->seaAdults->TextLength > 0)peaple = System::Convert::ToInt16(adults);
			}
			int rooms =  peaple/ perRoom;
			if (peaple%perRoom != 0) rooms++;
			return rooms;
		}
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (roomsCount(stdAdults->Text, 2, true) > stdNo || roomsCount(seaAdults->Text, 4, false) > seaNo)MessageBox::Show(" Only " + System::Convert::ToString(stdNo) + " Standard and " + System::Convert::ToString(seaNo) + " Sea view rooms are available ", "Attention");
	else if(Payment()==0)MessageBox::Show("Check again !", "Attention");
	else MessageBox::Show("Total : $ " + System::Convert::ToString(Payment()), "Payment");
}
private: System::Void dateout_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	label10->Text = (System::Convert::ToString(noOfNights()))+" - night stay";
}
private: System::Void datein_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	label10->Text = (System::Convert::ToString(noOfNights())) + " - night stay";
}
private: System::Void stdAdults_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	label18->Text= System::Convert::ToString(roomsCount(stdAdults->Text,2,true));
}
private: System::Void seaAdults_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	label17->Text = System::Convert::ToString(roomsCount(seaAdults->Text, 3,false));
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ Path = "data/0.txt";
		int count = 1;
		bool idF = false;
		bool loop = true;
		while (loop) {
			Path = "data/" + System::Convert::ToString(count) + ".txt";
			if (File::Exists(Path)) {
				StreamReader^ dataTXT = File::OpenText(Path);
				if (dataTXT->ReadLine() == id->Text) {
					loop = false;
					idF = true;
				}
				dataTXT->Close();
			}
			if (count > 100) loop = false;
			count++;
		}
		if (idF) MessageBox::Show("ID alrady Exists", "Error !",MessageBoxButtons::OK,MessageBoxIcon::Stop);
		else {
			if (Payment() > 0 && this->id->TextLength == 10 && this->tele->TextLength > 0 && this->name->TextLength > 0 && roomsCount(stdAdults->Text, 2, true) <= 50 && roomsCount(seaAdults->Text, 3, false) <= 20) {

				System::Windows::Forms::DialogResult result = MessageBox::Show("Click OK for Confirm.", "Booking", MessageBoxButtons::OKCancel, MessageBoxIcon::None);
				if (result == System::Windows::Forms::DialogResult::OK) {
					int count = 1;

					while (File::Exists("data/" + System::Convert::ToString(count) + ".txt")) {
						count++;
					}
					String ^ Path = "data/" + System::Convert::ToString(count) + ".txt";

					DateTime timeNow = DateTime::Now;

					StreamWriter ^ datatxt = gcnew StreamWriter(Path);
					//StreamWriter^ datatxt = File::AppendText(Path);

					datatxt->WriteLine(id->Text);
					datatxt->WriteLine(timeNow.ToString());
					datatxt->WriteLine(name->Text);
					datatxt->WriteLine(tele->Text);
					datatxt->WriteLine(stdAdults->Text);
					datatxt->WriteLine(roomsCount(stdAdults->Text, 2, true));
					datatxt->WriteLine(seaAdults->Text);
					datatxt->WriteLine(roomsCount(seaAdults->Text, 3, false));
					datatxt->WriteLine(datein->Text);
					datatxt->WriteLine(dateout->Text);
					datatxt->WriteLine(System::Convert::ToString(noOfNights()));
					datatxt->WriteLine(System::Convert::ToString(Payment()));
					datatxt->WriteLine(System::Convert::ToString(cost()));

					datatxt->Close();

					MessageBox::Show("Thank You !", "Air Holiday");
					this->Close();
				}

			}
			else MessageBox::Show("Check again !", "Attention");
		}
	}
private: System::Void userMainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
	String ^ Inpath = "data/infor.txt";
	if (File::Exists(Inpath)) {
		StreamReader ^ infor = File::OpenText(Inpath);
		stdP = System::Convert::ToInt16(infor->ReadLine());
		stdC = System::Convert::ToInt16(infor->ReadLine());
		seaP = System::Convert::ToInt16(infor->ReadLine());
		seaC = System::Convert::ToInt16(infor->ReadLine());

		label3->Text = "$ "+System::Convert::ToString(stdP)+" (2)";
		label5->Text = "$ "+System::Convert::ToString(seaP)+" (4)";
	}
	
	    String ^ Path = "data/0.txt";

		String ^ outdate;
		String ^ Std;
		stdNo = 50;
		String ^ Sea;
		seaNo = 20;
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
					stdNo = stdNo - System::Convert::ToInt16(Std);
					seaNo = seaNo - System::Convert::ToInt16(Sea);
				}
			}
			if (count > 100) {
				loop = false;
				
				label15->Text = System::Convert::ToString(stdNo) + " -Rooms left";
				label19->Text = System::Convert::ToString(seaNo) + " -Rooms left";
			}
			count++;
		}
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
