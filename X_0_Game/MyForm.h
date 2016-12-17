#pragma once

namespace X_0_Game {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	//protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 90);
			this->button1->TabIndex = 0;
			this->button1->Text = L"*";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_enter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(108, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 90);
			this->button2->TabIndex = 0;
			this->button2->Text = L"*";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_enter);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(204, 37);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 90);
			this->button3->TabIndex = 0;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->button3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_enter);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 133);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 90);
			this->button4->TabIndex = 0;
			this->button4->Text = L"*";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			this->button4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_enter);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(108, 133);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 90);
			this->button5->TabIndex = 0;
			this->button5->Text = L"*";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			this->button5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_enter);
			this->button5->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(204, 133);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 90);
			this->button6->TabIndex = 0;
			this->button6->Text = L"*";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			this->button6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_enter);
			this->button6->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(12, 229);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 90);
			this->button7->TabIndex = 0;
			this->button7->Text = L"*";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			this->button7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_enter);
			this->button7->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(108, 229);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 90);
			this->button8->TabIndex = 0;
			this->button8->Text = L"*";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			this->button8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_enter);
			this->button8->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(204, 229);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 90);
			this->button9->TabIndex = 0;
			this->button9->Text = L"*";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			this->button9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_enter);
			this->button9->MouseLeave += gcnew System::EventHandler(this, &MyForm::button_leave);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(305, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newGameToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->newGameToolStripMenuItem->Text = L"New game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newGameToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(305, 330);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"X & 0";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		unsigned int turn = 0; 
		bool b = true;         
		bool exits = false;    
		unsigned int count = 0;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

			 //button1
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (count < 9) {
			if (button1->Text == "*" && turn == 1 && exits == false) {
				button1->Text = "0";
				turn = 0;
				b = false;
			}
			else if (button1->Text == "*" && exits == false) {
				button1->Text = "X";
				turn = 1;
				b = true;
			}
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X"
				|| button1->Text == "0" && button2->Text == "0" && button3->Text == "0"
				|| button1->Text == "X" && button4->Text == "X" && button7->Text == "X"
				|| button1->Text == "0" && button4->Text == "0" && button7->Text == "0"
				|| button2->Text == "X" && button5->Text == "X" && button8->Text == "X"
				|| button2->Text == "0" && button5->Text == "0" && button8->Text == "0"
				|| button1->Text == "X" && button5->Text == "X" && button9->Text == "X"
				|| button1->Text == "0" && button5->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button6->Text == "X" && button9->Text == "X"
				|| button3->Text == "0" && button6->Text == "0" && button9->Text == "0"
				|| button4->Text == "X" && button5->Text == "X" && button6->Text == "X"
				|| button4->Text == "0" && button5->Text == "0" && button6->Text == "0"
				|| button7->Text == "X" && button8->Text == "X" && button9->Text == "X"
				|| button7->Text == "0" && button8->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button5->Text == "X" && button7->Text == "X"
				|| button3->Text == "0" && button5->Text == "0" && button7->Text == "0") {
				if (b == true) {
					button1->Text = "X Win";
					exits = true; 			
				}
				else {
					button1->Text = "0 Win";
					exits = true;
				}

			}
			else if(button1->Text=="*") {
				++count;   
			}
		}
	}

			 //button2
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (count < 9) {
			if (button2->Text == "*" && turn == 1 && exits == false) {
				button2->Text = "0";
				turn = 0;
				b = false;
			}
			else if (button2->Text == "*" && exits == false) {
				button2->Text = "X";
				turn = 1;
				b = true;
			}
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X"
				|| button1->Text == "0" && button2->Text == "0" && button3->Text == "0"
				|| button1->Text == "X" && button4->Text == "X" && button7->Text == "X"
				|| button1->Text == "0" && button4->Text == "0" && button7->Text == "0"
				|| button2->Text == "X" && button5->Text == "X" && button8->Text == "X"
				|| button2->Text == "0" && button5->Text == "0" && button8->Text == "0"
				|| button1->Text == "X" && button5->Text == "X" && button9->Text == "X"
				|| button1->Text == "0" && button5->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button6->Text == "X" && button9->Text == "X"
				|| button3->Text == "0" && button6->Text == "0" && button9->Text == "0"
				|| button4->Text == "X" && button5->Text == "X" && button6->Text == "X"
				|| button4->Text == "0" && button5->Text == "0" && button6->Text == "0"
				|| button7->Text == "X" && button8->Text == "X" && button9->Text == "X"
				|| button7->Text == "0" && button8->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button5->Text == "X" && button7->Text == "X"
				|| button3->Text == "0" && button5->Text == "0" && button7->Text == "0") {
				if (b == true) {
					button2->Text = "X Win";
					exits = true;
				}
				else {
					button2->Text = "0 Win";
					exits = true;
				}
			}
			else  if (button2->Text == "*") {
				++count;
			}
		}
	}

			 //button3
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (count < 9) {
			if (button3->Text == "*" && turn == 1 && exits == false) {
				button3->Text = "0";
				turn = 0;
				b = false;
			}
			else if (button3->Text == "*" && exits == false) {
				button3->Text = "X";
				turn = 1;
				b = true;
			}
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X"
				|| button1->Text == "0" && button2->Text == "0" && button3->Text == "0"
				|| button1->Text == "X" && button4->Text == "X" && button7->Text == "X"
				|| button1->Text == "0" && button4->Text == "0" && button7->Text == "0"
				|| button2->Text == "X" && button5->Text == "X" && button8->Text == "X"
				|| button2->Text == "0" && button5->Text == "0" && button8->Text == "0"
				|| button1->Text == "X" && button5->Text == "X" && button9->Text == "X"
				|| button1->Text == "0" && button5->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button6->Text == "X" && button9->Text == "X"
				|| button3->Text == "0" && button6->Text == "0" && button9->Text == "0"
				|| button4->Text == "X" && button5->Text == "X" && button6->Text == "X"
				|| button4->Text == "0" && button5->Text == "0" && button6->Text == "0"
				|| button7->Text == "X" && button8->Text == "X" && button9->Text == "X"
				|| button7->Text == "0" && button8->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button5->Text == "X" && button7->Text == "X"
				|| button3->Text == "0" && button5->Text == "0" && button7->Text == "0") {
				if (b == true) {
					button3->Text = "X Win";
					exits = true;
				}
				else {
					button3->Text = "0 Win";
					exits = true;
				}
			}
			else if (button3->Text == "*") {
				++count;
			}
		}
	}

			 //button4
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (count < 9) {
			if (button4->Text == "*" && turn == 1 && exits == false) {
				button4->Text = "0";
				turn = 0;
				b = false;
			}
			else if (button4->Text == "*" && exits == false) {
				button4->Text = "X";
				turn = 1;
				b = true;
			}
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X"
				|| button1->Text == "0" && button2->Text == "0" && button3->Text == "0"
				|| button1->Text == "X" && button4->Text == "X" && button7->Text == "X"
				|| button1->Text == "0" && button4->Text == "0" && button7->Text == "0"
				|| button2->Text == "X" && button5->Text == "X" && button8->Text == "X"
				|| button2->Text == "0" && button5->Text == "0" && button8->Text == "0"
				|| button1->Text == "X" && button5->Text == "X" && button9->Text == "X"
				|| button1->Text == "0" && button5->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button6->Text == "X" && button9->Text == "X"
				|| button3->Text == "0" && button6->Text == "0" && button9->Text == "0"
				|| button4->Text == "X" && button5->Text == "X" && button6->Text == "X"
				|| button4->Text == "0" && button5->Text == "0" && button6->Text == "0"
				|| button7->Text == "X" && button8->Text == "X" && button9->Text == "X"
				|| button7->Text == "0" && button8->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button5->Text == "X" && button7->Text == "X"
				|| button3->Text == "0" && button5->Text == "0" && button7->Text == "0") {
				if (b == true) {
					button4->Text = "X Win";
					exits = true;
				}
				else {
					button4->Text = "0 Win";
					exits = true;
				}
			}
			else if (button4->Text == "*") {
				++count;
			}
		}
	}

			 //button5
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (count < 9) {
			if (button5->Text == "*" && turn == 1 && exits == false) {
				button5->Text = "0";
				turn = 0;
				b = false;
			}
			else if (button5->Text == "*" && exits == false) {
				button5->Text = "X";
				turn = 1;
				b = true;
			}
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X"
				|| button1->Text == "0" && button2->Text == "0" && button3->Text == "0"
				|| button1->Text == "X" && button4->Text == "X" && button7->Text == "X"
				|| button1->Text == "0" && button4->Text == "0" && button7->Text == "0"
				|| button2->Text == "X" && button5->Text == "X" && button8->Text == "X"
				|| button2->Text == "0" && button5->Text == "0" && button8->Text == "0"
				|| button1->Text == "X" && button5->Text == "X" && button9->Text == "X"
				|| button1->Text == "0" && button5->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button6->Text == "X" && button9->Text == "X"
				|| button3->Text == "0" && button6->Text == "0" && button9->Text == "0"
				|| button4->Text == "X" && button5->Text == "X" && button6->Text == "X"
				|| button4->Text == "0" && button5->Text == "0" && button6->Text == "0"
				|| button7->Text == "X" && button8->Text == "X" && button9->Text == "X"
				|| button7->Text == "0" && button8->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button5->Text == "X" && button7->Text == "X"
				|| button3->Text == "0" && button5->Text == "0" && button7->Text == "0") {
				if (b == true) {
					button5->Text = "X Win";
					exits = true;
				}
				else {
					button5->Text = "0 Win";
					exits = true;
				}
			}
			else if (button5->Text == "*") {
				++count;
			}
		}
	}

			 //button6
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (count < 9) {
			if (button6->Text == "*" && turn == 1 && exits == false) {
				button6->Text = "0";
				turn = 0;
				b = false;
			}
			else if (button6->Text == "*" && exits == false) {
				button6->Text = "X";
				turn = 1;
				b = true;
			}
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X"
				|| button1->Text == "0" && button2->Text == "0" && button3->Text == "0"
				|| button1->Text == "X" && button4->Text == "X" && button7->Text == "X"
				|| button1->Text == "0" && button4->Text == "0" && button7->Text == "0"
				|| button2->Text == "X" && button5->Text == "X" && button8->Text == "X"
				|| button2->Text == "0" && button5->Text == "0" && button8->Text == "0"
				|| button1->Text == "X" && button5->Text == "X" && button9->Text == "X"
				|| button1->Text == "0" && button5->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button6->Text == "X" && button9->Text == "X"
				|| button3->Text == "0" && button6->Text == "0" && button9->Text == "0"
				|| button4->Text == "X" && button5->Text == "X" && button6->Text == "X"
				|| button4->Text == "0" && button5->Text == "0" && button6->Text == "0"
				|| button7->Text == "X" && button8->Text == "X" && button9->Text == "X"
				|| button7->Text == "0" && button8->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button5->Text == "X" && button7->Text == "X"
				|| button3->Text == "0" && button5->Text == "0" && button7->Text == "0") {
				if (b == true) {
					button6->Text = "X Win";
					exits = true;
				}
				else {
					button6->Text = "0 Win";
					exits = true;
				}
			}
			else if (button6->Text == "*") {
				++count;
			}
		}
	}

			 //button7
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (count < 9) {
			if (button7->Text == "*" && turn == 1 && exits == false) {
				button7->Text = "0";
				turn = 0;
				b = false;
			}
			else if (button7->Text == "*" && exits == false) {
				button7->Text = "X";
				turn = 1;
				b = true;
			}
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X"
				|| button1->Text == "0" && button2->Text == "0" && button3->Text == "0"
				|| button1->Text == "X" && button4->Text == "X" && button7->Text == "X"
				|| button1->Text == "0" && button4->Text == "0" && button7->Text == "0"
				|| button2->Text == "X" && button5->Text == "X" && button8->Text == "X"
				|| button2->Text == "0" && button5->Text == "0" && button8->Text == "0"
				|| button1->Text == "X" && button5->Text == "X" && button9->Text == "X"
				|| button1->Text == "0" && button5->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button6->Text == "X" && button9->Text == "X"
				|| button3->Text == "0" && button6->Text == "0" && button9->Text == "0"
				|| button4->Text == "X" && button5->Text == "X" && button6->Text == "X"
				|| button4->Text == "0" && button5->Text == "0" && button6->Text == "0"
				|| button7->Text == "X" && button8->Text == "X" && button9->Text == "X"
				|| button7->Text == "0" && button8->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button5->Text == "X" && button7->Text == "X"
				|| button3->Text == "0" && button5->Text == "0" && button7->Text == "0") {
				if (b == true) {
					button7->Text = "X Win";
					exits = true;
				}
				else {
					button7->Text = "0 Win";
					exits = true;
				}
			}
			else if (button7->Text == "*") {
				++count;
			}
		}
	}

			 //button8
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (count < 9) {
			if (button8->Text == "*" && turn == 1 && exits == false) {
				button8->Text = "0";
				turn = 0;
				b = false;
			}
			else if (button8->Text == "*" && exits == false) {
				button8->Text = "X";
				turn = 1;
				b = true;
			}
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X"
				|| button1->Text == "0" && button2->Text == "0" && button3->Text == "0"
				|| button1->Text == "X" && button4->Text == "X" && button7->Text == "X"
				|| button1->Text == "0" && button4->Text == "0" && button7->Text == "0"
				|| button2->Text == "X" && button5->Text == "X" && button8->Text == "X"
				|| button2->Text == "0" && button5->Text == "0" && button8->Text == "0"
				|| button1->Text == "X" && button5->Text == "X" && button9->Text == "X"
				|| button1->Text == "0" && button5->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button6->Text == "X" && button9->Text == "X"
				|| button3->Text == "0" && button6->Text == "0" && button9->Text == "0"
				|| button4->Text == "X" && button5->Text == "X" && button6->Text == "X"
				|| button4->Text == "0" && button5->Text == "0" && button6->Text == "0"
				|| button7->Text == "X" && button8->Text == "X" && button9->Text == "X"
				|| button7->Text == "0" && button8->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button5->Text == "X" && button7->Text == "X"
				|| button3->Text == "0" && button5->Text == "0" && button7->Text == "0") {
				if (b == true) {
					button8->Text = "X Win";
					exits = true;
				}
				else {
					button8->Text = "0 Win";
					exits = true;
				}
			}
			else  if (button8->Text == "*") {
				++count;
			}
		}
	}

			 //button9
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (count < 9) {
			if (button9->Text == "*" && turn == 1 && exits == false) {
				button9->Text = "0";
				turn = 0;
				b = false;
			}
			else if (button9->Text == "*" && exits == false) {
				button9->Text = "X";
				turn = 1;
				b = true;
			}
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X"
				|| button1->Text == "0" && button2->Text == "0" && button3->Text == "0"
				|| button1->Text == "X" && button4->Text == "X" && button7->Text == "X"
				|| button1->Text == "0" && button4->Text == "0" && button7->Text == "0"
				|| button2->Text == "X" && button5->Text == "X" && button8->Text == "X"
				|| button2->Text == "0" && button5->Text == "0" && button8->Text == "0"
				|| button1->Text == "X" && button5->Text == "X" && button9->Text == "X"
				|| button1->Text == "0" && button5->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button6->Text == "X" && button9->Text == "X"
				|| button3->Text == "0" && button6->Text == "0" && button9->Text == "0"
				|| button4->Text == "X" && button5->Text == "X" && button6->Text == "X"
				|| button4->Text == "0" && button5->Text == "0" && button6->Text == "0"
				|| button7->Text == "X" && button8->Text == "X" && button9->Text == "X"
				|| button7->Text == "0" && button8->Text == "0" && button9->Text == "0"
				|| button3->Text == "X" && button5->Text == "X" && button7->Text == "X"
				|| button3->Text == "0" && button5->Text == "0" && button7->Text == "0") {
				if (b == true) {
					button9->Text = "X Win";
					exits = true;
				}
				else {
					button9->Text = "0 Win";
					exits = true;
				}
			}
			else if (button9->Text == "*") {
				++count;
			}
		}
	}

	private: System::Void button_enter(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	}// 
	private: System::Void button_leave(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();

	}
	private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Restart();
	}
	};
}