#pragma once

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  label2;
	private:
	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Button^  button4;
	public: System::Windows::Forms::Button^  button5;
	public: System::Windows::Forms::Button^  button6;
	public: System::Windows::Forms::VScrollBar^  vScrollBar1;
	public: System::Windows::Forms::RichTextBox^  richTextBox1;
	public: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::TextBox^  textBox4;
	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  Message;
	private: System::Windows::Forms::Button^  button10;

	public:
























	private: System::ComponentModel::IContainer^  components;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->Message = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(191, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(691, 45);
			this->label2->TabIndex = 0;
			this->label2->Text = L"TEXT EDITOR (COMMAND MODE)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(755, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(755, 158);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Confirm";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(755, 187);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Confirm";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(755, 216);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Confirm";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(691, 245);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(139, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Save";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(559, 244);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(114, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Delete All";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(1042, 1);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(21, 599);
			this->vScrollBar1->TabIndex = 7;
			this->vScrollBar1->Value = 100;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 322);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1027, 265);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(469, 129);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(280, 22);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(469, 158);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(280, 22);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(469, 187);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(279, 22);
			this->textBox3->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(195, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 20);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Append Text:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(195, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(238, 20);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Insert / change whole text: ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(195, 187);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 20);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Enter Lines:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(469, 216);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(280, 22);
			this->textBox4->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(195, 216);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(221, 20);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Enter Number of Spaces:";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(469, 244);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Space";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(717, 285);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 20);
			this->label7->TabIndex = 21;
			this->label7->Text = L"No Message";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(290, 245);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Print";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(380, 281);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(153, 23);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Clear Message";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::button9_Click);
			// 
			// Message
			// 
			this->Message->AutoSize = true;
			this->Message->BackColor = System::Drawing::Color::Transparent;
			this->Message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Message->ForeColor = System::Drawing::Color::White;
			this->Message->Location = System::Drawing::Point(594, 281);
			this->Message->Name = L"Message";
			this->Message->Size = System::Drawing::Size(106, 24);
			this->Message->TabIndex = 26;
			this->Message->Text = L"Message: ";
			this->Message->Click += gcnew System::EventHandler(this, &MyForm2::Message_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(380, 245);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 27;
			this->button10->Text = L"Enter";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1060, 599);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->Message);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(211, 48);
			this->Name = L"MyForm";
			this->Text = L"Text Editor Command Mode";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->richTextBox1->Text = "";
		this->label7->Text = "Deleted all";
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->Text = textBox2->Text;
	this->textBox2->Text = "";
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void toolStripTextBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->AppendText(textBox1->Text);
	//this->button1->Enabled = true;
	this->textBox1->Text = "";}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int number1 = int::Parse(this->textBox3->Text);
	for (int i = 0; i <= number1; i++) {
		this->richTextBox1->AppendText("\n");
	}
	this->textBox3->Text = "";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	int number2 = int::Parse(this->textBox4->Text);
	for (int i = 0; i <= number2; i++) {
		this->richTextBox1->AppendText(" ");
	}
	this->textBox4->Text = "";

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label7->Text = "File Saved";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->AppendText(" ");
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label7->Text = "No Message";
}
private: System::Void Message_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	this->label7->Text = "Printing file";
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->AppendText("\n");
}
};
}
