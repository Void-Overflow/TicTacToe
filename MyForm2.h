#pragma once

#include "control.h"
#include "detection.h"
#include "user.h"

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Threading;

	/// <summary>
	/// Summary for MyForm2
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
	private: System::Windows::Forms::ImageList^ imageList1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button10;
	public: System::Windows::Forms::Button^ button9;
	private:
	public: System::Windows::Forms::Button^ button8;
	public: System::Windows::Forms::Button^ button7;
	public: System::Windows::Forms::Button^ button6;




	public: System::Windows::Forms::Button^ button5;
	public: System::Windows::Forms::Button^ button4;


	public: System::Windows::Forms::Button^ button3;
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::ForestGreen;
			this->label3->Location = System::Drawing::Point(31, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 37);
			this->label3->TabIndex = 26;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(3, 217);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(181, 128);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Red;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Location = System::Drawing::Point(16, 73);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(160, 62);
			this->button10->TabIndex = 24;
			this->button10->Text = L"Reset Game";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::button10_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Location = System::Drawing::Point(587, 302);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(180, 128);
			this->button9->TabIndex = 23;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::button9_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Location = System::Drawing::Point(394, 302);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(176, 128);
			this->button8->TabIndex = 22;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Location = System::Drawing::Point(196, 302);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(181, 128);
			this->button7->TabIndex = 21;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(587, 168);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(181, 119);
			this->button6->TabIndex = 20;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(394, 168);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(176, 119);
			this->button5->TabIndex = 19;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(196, 168);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 119);
			this->button4->TabIndex = 18;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(587, 25);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 128);
			this->button3->TabIndex = 17;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(394, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 128);
			this->button2->TabIndex = 16;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(196, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 128);
			this->button1->TabIndex = 15;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(196, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(571, 405);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 443);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	delegate void SetLabelDelegate(String^ text, Label^ textbox);
	private: void SetLabel(String^ text, Label^ label) {
		if (label->InvokeRequired) {
			SetLabelDelegate^ d =
				gcnew SetLabelDelegate(this, &MyForm2::SetLabel);
			this->Invoke(d, gcnew array<Object^> { text, label});
		}
		else {
			label->Text = text;
		}
	}
	user usr;
	control ctrl;

	List<Button^>^ btns = gcnew List<Button^>();
	public: Thread^ t;

	bool isWon = false;

	public: void thread_method(Object^ data) {
		bool pause_thread = false;
		while (true) {
			if (detection::check() == 1 && pause_thread == false) {
				pause_thread = true;
				isWon = true;

				pictureBox2->SizeMode = PictureBoxSizeMode::StretchImage;
				pictureBox2->Image = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\x.png"));

				SetLabel("Winner!", label3);

				Console::WriteLine("Computer has won!");
			}
			else if (detection::check() == 0 && pause_thread == false) {
				pause_thread = true;
				isWon = true;

				pictureBox2->SizeMode = PictureBoxSizeMode::StretchImage;
				pictureBox2->Image = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\o.png"));

				SetLabel("Winner!", label3);

				Console::WriteLine("User has won!");
			}
			else if (detection::check() == 6 && pause_thread == false) {
				pause_thread = true;
				isWon = true;

				pictureBox2->SizeMode = PictureBoxSizeMode::StretchImage;
				pictureBox2->Image = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\tie.png"));

				SetLabel("Tie!", label3);

				Console::WriteLine("Tie!");
			}
			else if (detection::check() == 9)
				pause_thread = false;

			t->Sleep(10);
		}
	}

	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		btns->Add(button1);
		btns->Add(button2);
		btns->Add(button3);
		btns->Add(button4);
		btns->Add(button5);
		btns->Add(button6);
		btns->Add(button7);
		btns->Add(button8);
		btns->Add(button9);

		t = gcnew Thread(gcnew ParameterizedThreadStart(this, &MyForm2::thread_method));
		try {
			if (!t->IsAlive) {
				t->IsBackground = true;
				t->Start();
			}
			else {
				t->IsBackground = true;
			}
		}
		catch (Exception^ ex) {
			Console::WriteLine(ex);
		}
	}

		   //RESET
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "";
		isWon = false;


		pictureBox2->Image = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\blank.png"));

		for (int i = 0; i < 9; i++)
			ctrl.reset_data(btns[i]);
	}

		   //INPUT HANDLERS
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isWon == false) {
			int usr_set = usr.set_button(button1, 1);

			if (usr_set == 10)
				return;
			else if (usr_set == 11)
				return;
			else {
				btns[usr_set]->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\x.png"));
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isWon == false) {
			int usr_set = usr.set_button(button2, 2);

			if (usr_set == 10)
				return;
			else if (usr_set == 11)
				return;
			else {
				btns[usr_set]->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\x.png"));
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isWon == false) {
			int usr_set = usr.set_button(button3, 3);

			if (usr_set == 10)
				return;
			else if (usr_set == 11)
				return;
			else {
				btns[usr_set]->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\x.png"));
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isWon == false) {
			int usr_set = usr.set_button(button4, 4);

			if (usr_set == 10)
				return;
			else if (usr_set == 11)
				return;
			else {
				btns[usr_set]->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\x.png"));
			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isWon == false) {
			int usr_set = usr.set_button(button5, 5);

			if (usr_set == 10)
				return;
			else if (usr_set == 11)
				return;
			else {
				btns[usr_set]->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\x.png"));
			}
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isWon == false) {
			int usr_set = usr.set_button(button6, 6);

			if (usr_set == 10)
				return;
			else if (usr_set == 11)
				return;
			else {
				btns[usr_set]->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\x.png"));
			}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isWon == false) {
			int usr_set = usr.set_button(button7, 7);

			if (usr_set == 10)
				return;
			else if (usr_set == 11)
				return;
			else {
				btns[usr_set]->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\x.png"));
			}
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isWon == false) {
			int usr_set = usr.set_button(button8, 8);

			if (usr_set == 10)
				return;
			else if (usr_set == 11)
				return;
			else {
				btns[usr_set]->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\x.png"));
			}
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isWon == false) {
			int usr_set = usr.set_button(button9, 9);

			if (usr_set == 10)
				return;
			else if (usr_set == 11)
				return;
			else {
				btns[usr_set]->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\x.png"));
			}
		}
	}
};
}
