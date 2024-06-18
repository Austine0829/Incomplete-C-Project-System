#pragma once

#include "academicYear.h"
#include "fees.h"
#include "teacher.h"
#include "section.h"
#include "student.h"
#include "enrollment.h"
#include "billing.h"

namespace ProjectSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelTop;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblPosition;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnSection;
	private: System::Windows::Forms::Button^ btnStudent;


	private: System::Windows::Forms::Button^ btnFees;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnBilling;

	private: System::Windows::Forms::Button^ btnEnrollment;

	private: System::Windows::Forms::Button^ btnAcademicYear;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ btnTeacher;

	private: System::Windows::Forms::Panel^ panelMain;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->btnTeacher = (gcnew System::Windows::Forms::Button());
			this->btnSection = (gcnew System::Windows::Forms::Button());
			this->btnStudent = (gcnew System::Windows::Forms::Button());
			this->btnFees = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnBilling = (gcnew System::Windows::Forms::Button());
			this->btnEnrollment = (gcnew System::Windows::Forms::Button());
			this->btnAcademicYear = (gcnew System::Windows::Forms::Button());
			this->lblPosition = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panelTop->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panelTop->Controls->Add(this->button12);
			this->panelTop->Controls->Add(this->button5);
			this->panelTop->Controls->Add(this->button1);
			this->panelTop->Controls->Add(this->label3);
			this->panelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(1200, 28);
			this->panelTop->TabIndex = 0;
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button12->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(1114, 0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(31, 28);
			this->button12->TabIndex = 3;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(1141, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(31, 28);
			this->button5->TabIndex = 2;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1169, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(31, 28);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(-1, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 15);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Enrollment Management System";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->BackColor = System::Drawing::Color::DimGray;
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->btnTeacher);
			this->panel1->Controls->Add(this->btnSection);
			this->panel1->Controls->Add(this->btnStudent);
			this->panel1->Controls->Add(this->btnFees);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->btnBilling);
			this->panel1->Controls->Add(this->btnEnrollment);
			this->panel1->Controls->Add(this->btnAcademicYear);
			this->panel1->Controls->Add(this->lblPosition);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(283, 674);
			this->panel1->TabIndex = 1;
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->Location = System::Drawing::Point(4, 640);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(276, 30);
			this->button11->TabIndex = 13;
			this->button11->Text = L"   Log Out";
			this->button11->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(4, 532);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(276, 30);
			this->button10->TabIndex = 12;
			this->button10->Text = L"   User Account";
			this->button10->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(4, 496);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(276, 30);
			this->button9->TabIndex = 11;
			this->button9->Text = L"   Reports";
			this->button9->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// btnTeacher
			// 
			this->btnTeacher->FlatAppearance->BorderSize = 0;
			this->btnTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTeacher->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnTeacher.Image")));
			this->btnTeacher->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTeacher->Location = System::Drawing::Point(4, 460);
			this->btnTeacher->Name = L"btnTeacher";
			this->btnTeacher->Size = System::Drawing::Size(276, 30);
			this->btnTeacher->TabIndex = 10;
			this->btnTeacher->Text = L"   Teacher";
			this->btnTeacher->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnTeacher->UseVisualStyleBackColor = true;
			this->btnTeacher->Click += gcnew System::EventHandler(this, &mainForm::btnTeacher_Click);
			// 
			// btnSection
			// 
			this->btnSection->FlatAppearance->BorderSize = 0;
			this->btnSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSection->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSection->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSection.Image")));
			this->btnSection->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSection->Location = System::Drawing::Point(4, 424);
			this->btnSection->Name = L"btnSection";
			this->btnSection->Size = System::Drawing::Size(276, 30);
			this->btnSection->TabIndex = 9;
			this->btnSection->Text = L"   Section";
			this->btnSection->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSection->UseVisualStyleBackColor = true;
			this->btnSection->Click += gcnew System::EventHandler(this, &mainForm::btnSection_Click);
			// 
			// btnStudent
			// 
			this->btnStudent->FlatAppearance->BorderSize = 0;
			this->btnStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStudent->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStudent.Image")));
			this->btnStudent->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStudent->Location = System::Drawing::Point(3, 388);
			this->btnStudent->Name = L"btnStudent";
			this->btnStudent->Size = System::Drawing::Size(276, 30);
			this->btnStudent->TabIndex = 8;
			this->btnStudent->Text = L"   Student";
			this->btnStudent->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnStudent->UseVisualStyleBackColor = true;
			this->btnStudent->Click += gcnew System::EventHandler(this, &mainForm::btnStudent_Click);
			// 
			// btnFees
			// 
			this->btnFees->FlatAppearance->BorderSize = 0;
			this->btnFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFees->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFees->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFees.Image")));
			this->btnFees->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFees->Location = System::Drawing::Point(4, 352);
			this->btnFees->Name = L"btnFees";
			this->btnFees->Size = System::Drawing::Size(276, 30);
			this->btnFees->TabIndex = 7;
			this->btnFees->Text = L"   Fees";
			this->btnFees->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnFees->UseVisualStyleBackColor = true;
			this->btnFees->Click += gcnew System::EventHandler(this, &mainForm::btnFees_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(3, 316);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(276, 30);
			this->button4->TabIndex = 6;
			this->button4->Text = L"   Payment";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// btnBilling
			// 
			this->btnBilling->FlatAppearance->BorderSize = 0;
			this->btnBilling->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBilling->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBilling->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBilling.Image")));
			this->btnBilling->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBilling->Location = System::Drawing::Point(3, 280);
			this->btnBilling->Name = L"btnBilling";
			this->btnBilling->Size = System::Drawing::Size(276, 30);
			this->btnBilling->TabIndex = 5;
			this->btnBilling->Text = L"   Billing";
			this->btnBilling->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnBilling->UseVisualStyleBackColor = true;
			this->btnBilling->Click += gcnew System::EventHandler(this, &mainForm::btnBilling_Click);
			// 
			// btnEnrollment
			// 
			this->btnEnrollment->FlatAppearance->BorderSize = 0;
			this->btnEnrollment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnrollment->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnrollment->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEnrollment.Image")));
			this->btnEnrollment->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEnrollment->Location = System::Drawing::Point(3, 244);
			this->btnEnrollment->Name = L"btnEnrollment";
			this->btnEnrollment->Size = System::Drawing::Size(276, 30);
			this->btnEnrollment->TabIndex = 4;
			this->btnEnrollment->Text = L"   Enrollment";
			this->btnEnrollment->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnEnrollment->UseVisualStyleBackColor = true;
			this->btnEnrollment->Click += gcnew System::EventHandler(this, &mainForm::btnEnrollment_Click);
			// 
			// btnAcademicYear
			// 
			this->btnAcademicYear->FlatAppearance->BorderSize = 0;
			this->btnAcademicYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAcademicYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAcademicYear->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAcademicYear.Image")));
			this->btnAcademicYear->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAcademicYear->Location = System::Drawing::Point(4, 208);
			this->btnAcademicYear->Name = L"btnAcademicYear";
			this->btnAcademicYear->Size = System::Drawing::Size(276, 30);
			this->btnAcademicYear->TabIndex = 3;
			this->btnAcademicYear->Text = L"   Academic Year";
			this->btnAcademicYear->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAcademicYear->UseVisualStyleBackColor = true;
			this->btnAcademicYear->Click += gcnew System::EventHandler(this, &mainForm::btnAcademicYear_Click);
			// 
			// lblPosition
			// 
			this->lblPosition->AutoSize = true;
			this->lblPosition->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblPosition->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPosition->Location = System::Drawing::Point(89, 169);
			this->lblPosition->Name = L"lblPosition";
			this->lblPosition->Size = System::Drawing::Size(97, 20);
			this->lblPosition->TabIndex = 2;
			this->lblPosition->Text = L"Administrator";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(79, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Austine Tuazon";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(73, 17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(128, 128);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panelMain
			// 
			this->panelMain->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelMain->Location = System::Drawing::Point(283, 28);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(917, 674);
			this->panelMain->TabIndex = 2;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 700);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelTop);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"mainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btnAcademicYear_Click(System::Object^ sender, System::EventArgs^ e) {
    
	if (lblPosition->Text == "Administrator")
	{
		academicYear^ openAcademicYear = gcnew academicYear();
		openAcademicYear->TopLevel = false;
		panelMain->Controls->Add(openAcademicYear);
		openAcademicYear->Show();
	}

	else
	{
		MessageBox::Show("You Need To Be Administrator Level To Access This Function", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	
}

private: System::Void btnFees_Click(System::Object^ sender, System::EventArgs^ e) {

	fees^ openFees = gcnew fees();
	openFees->TopLevel = false;
	panelMain->Controls->Add(openFees);
	openFees->Show();
}

private: System::Void btnTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	teacher^ openTeacher = gcnew teacher();
	openTeacher->TopLevel = false;
	panelMain->Controls->Add(openTeacher);
	openTeacher->Show();
}

private: System::Void btnSection_Click(System::Object^ sender, System::EventArgs^ e) {

	section^ openSection = gcnew section();
	openSection->TopLevel = false;
	panelMain->Controls->Add(openSection);
	openSection->Show();
}
private: System::Void btnStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	student^ openStudent = gcnew student();
	openStudent->TopLevel = false;
	panelMain->Controls->Add(openStudent);
	openStudent->Show();
}

private: System::Void btnEnrollment_Click(System::Object^ sender, System::EventArgs^ e) {

	enrollment^ openEnrollment = gcnew enrollment();
	openEnrollment->TopLevel = false;
	panelMain->Controls->Add(openEnrollment);
	openEnrollment->Show();
}

private: System::Void btnBilling_Click(System::Object^ sender, System::EventArgs^ e) {

	billing^ openBilling = gcnew billing();
	openBilling->TopLevel = false;
	panelMain->Controls->Add(openBilling);
	openBilling->Show();
}

};

}
