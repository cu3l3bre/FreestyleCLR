#pragma once

namespace FreestyleCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MainFenster
	/// </summary>
	public ref class MainFenster : public System::Windows::Forms::Form
	{
	public:
		MainFenster(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MainFenster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonQuit;
	private: System::Windows::Forms::CheckBox^  checkBoxTextOnOff;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBoxTest;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::TrackBar^  trackBar1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;

	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;


	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainFenster::typeid));
			this->buttonQuit = (gcnew System::Windows::Forms::Button());
			this->checkBoxTextOnOff = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxTest = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonQuit
			// 
			this->buttonQuit->Location = System::Drawing::Point(810, 537);
			this->buttonQuit->Name = L"buttonQuit";
			this->buttonQuit->Size = System::Drawing::Size(75, 23);
			this->buttonQuit->TabIndex = 0;
			this->buttonQuit->Text = L"Quit";
			this->buttonQuit->UseVisualStyleBackColor = true;
			this->buttonQuit->Click += gcnew System::EventHandler(this, &MainFenster::buttonQuit_Click);
			// 
			// checkBoxTextOnOff
			// 
			this->checkBoxTextOnOff->AutoSize = true;
			this->checkBoxTextOnOff->Location = System::Drawing::Point(19, 357);
			this->checkBoxTextOnOff->Name = L"checkBoxTextOnOff";
			this->checkBoxTextOnOff->Size = System::Drawing::Size(87, 17);
			this->checkBoxTextOnOff->TabIndex = 1;
			this->checkBoxTextOnOff->Text = L"ToggleName";
			this->checkBoxTextOnOff->UseVisualStyleBackColor = true;
			this->checkBoxTextOnOff->CheckedChanged += gcnew System::EventHandler(this, &MainFenster::checkBoxTextOnOff_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(110, 358);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Hallo";
			// 
			// comboBoxTest
			// 
			this->comboBoxTest->FormattingEnabled = true;
			this->comboBoxTest->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Hallo", L"das", L"ist", L"ein", L"Dropdown",
					L"oder", L"sowas"
			});
			this->comboBoxTest->Location = System::Drawing::Point(20, 410);
			this->comboBoxTest->Name = L"comboBoxTest";
			this->comboBoxTest->Size = System::Drawing::Size(121, 21);
			this->comboBoxTest->TabIndex = 3;
			this->comboBoxTest->SelectedIndexChanged += gcnew System::EventHandler(this, &MainFenster::comboBoxTest_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(212, 417);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"labelAusgabe";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(830, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(55, 56);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(13, 531);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(294, 40);
			this->progressBar1->TabIndex = 6;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MainFenster::progressBar1_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(12, 480);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(294, 45);
			this->trackBar1->TabIndex = 7;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MainFenster::trackBar1_Scroll);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(695, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainFenster::button1_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(0, 1);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(689, 320);
			this->webBrowser1->TabIndex = 9;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(707, 84);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(438, 417);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 154);
			this->textBox1->TabIndex = 11;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"3", L"4", L"5", L"6", L"7" });
			this->checkedListBox1->Location = System::Drawing::Point(628, 369);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(40, 94);
			this->checkedListBox1->TabIndex = 12;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainFenster::checkedListBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(734, 369);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(737, 386);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(740, 403);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(737, 420);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(743, 437);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"label7";
			// 
			// MainFenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(897, 583);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBoxTest);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBoxTextOnOff);
			this->Controls->Add(this->buttonQuit);
			this->Name = L"MainFenster";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainFenster";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonQuit_Click(System::Object^  sender, System::EventArgs^  e) {

		Close();

	}
	private: System::Void checkBoxTextOnOff_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		
		if (checkBoxTextOnOff->Checked)
		{
			label1->Text = "Welt";
		}
		else
		{
			label1->Text = "Hallo";
		}


	}
private: System::Void comboBoxTest_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	String^ Test;
	Test = comboBoxTest->Text;
	label2->Text = Test;
}





private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {


	progressBar1->Value = 75;



}
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {

	progressBar1->Value = trackBar1->Value;


}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	//webBrowser1->GoHome();
	webBrowser1->GoSearch();
	
	//webBrowser1->Url;
	String^ url = "www.google.de";
	webBrowser1->Navigate(url);



	



}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {





	if (checkedListBox1->GetItemChecked(0))
	{
		label3->Text = "3 ist checked";
	}
	else
	{
		label3->Text = "3 ist nicht checked";
	}

	if (checkedListBox1->GetItemChecked(1))
	{
		label4->Text = "4 ist checked";
	}
	else
	{
		label4->Text = "4 ist nicht checked";
	}
	if (checkedListBox1->GetItemChecked(2))
	{
		label5->Text = "5 ist checked";
	}
	else
	{
		label5->Text = "5 ist nicht checked";
	}

	if (checkedListBox1->GetItemChecked(3))
	{
		label6->Text = "6 ist checked";
	}
	else
	{
		label6->Text = "6 ist nicht checked";
	}

	if (checkedListBox1->GetItemChecked(4))
	{
		label7->Text = "7 ist checked";
	}
	else
	{
		label7->Text = "7 ist nicht checked";
	}


}
};
}
