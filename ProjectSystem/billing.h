#pragma once

namespace ProjectSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for billing
	/// </summary>
	public ref class billing : public System::Windows::Forms::Form
	{
	public:
		billing(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			panelBilling->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~billing()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panelBilling;

























	private: System::Windows::Forms::NumericUpDown^ nudBillEnrollmentID;




	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtBillSection;



	private: System::Windows::Forms::TextBox^ txtBillLastName;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtBillFirstName;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnBillSave;

	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Button^ btnExitAddBill;
	private: System::Windows::Forms::DataGridView^ dataGridBilling;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ btnExitBilling;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnBilling;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ nudBillAmount;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtBillAcademicYear;

	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridBillHistory;
private: System::Windows::Forms::ComboBox^ cbBillDescription;



private: System::Windows::Forms::TextBox^ txtBillGrade;

private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::NumericUpDown^ nudBillingID;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ btnDeleteStudentBillHistory;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(billing::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelBilling = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->nudBillingID = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtBillGrade = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cbBillDescription = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nudBillAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtBillAcademicYear = (gcnew System::Windows::Forms::TextBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteStudentBillHistory = (gcnew System::Windows::Forms::Button());
			this->dataGridBillHistory = (gcnew System::Windows::Forms::DataGridView());
			this->nudBillEnrollmentID = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtBillSection = (gcnew System::Windows::Forms::TextBox());
			this->txtBillLastName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtBillFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnBillSave = (gcnew System::Windows::Forms::Button());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->btnExitAddBill = (gcnew System::Windows::Forms::Button());
			this->dataGridBilling = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBilling = (gcnew System::Windows::Forms::Button());
			this->btnExitBilling = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelBilling->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBillingID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBillAmount))->BeginInit();
			this->tabControl2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridBillHistory))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBillEnrollmentID))->BeginInit();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridBilling))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitBilling))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(2, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(697, 448);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelBilling);
			this->tabPage1->Controls->Add(this->dataGridBilling);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(689, 422);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Billing";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelBilling
			// 
			this->panelBilling->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelBilling->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelBilling->Controls->Add(this->label10);
			this->panelBilling->Controls->Add(this->nudBillingID);
			this->panelBilling->Controls->Add(this->txtBillGrade);
			this->panelBilling->Controls->Add(this->label8);
			this->panelBilling->Controls->Add(this->cbBillDescription);
			this->panelBilling->Controls->Add(this->label6);
			this->panelBilling->Controls->Add(this->label3);
			this->panelBilling->Controls->Add(this->nudBillAmount);
			this->panelBilling->Controls->Add(this->label2);
			this->panelBilling->Controls->Add(this->txtBillAcademicYear);
			this->panelBilling->Controls->Add(this->tabControl2);
			this->panelBilling->Controls->Add(this->nudBillEnrollmentID);
			this->panelBilling->Controls->Add(this->label4);
			this->panelBilling->Controls->Add(this->label9);
			this->panelBilling->Controls->Add(this->txtBillSection);
			this->panelBilling->Controls->Add(this->txtBillLastName);
			this->panelBilling->Controls->Add(this->label7);
			this->panelBilling->Controls->Add(this->txtBillFirstName);
			this->panelBilling->Controls->Add(this->label5);
			this->panelBilling->Controls->Add(this->btnBillSave);
			this->panelBilling->Controls->Add(this->panelTop);
			this->panelBilling->Location = System::Drawing::Point(6, 47);
			this->panelBilling->Name = L"panelBilling";
			this->panelBilling->Size = System::Drawing::Size(676, 341);
			this->panelBilling->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(32, 36);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 13);
			this->label10->TabIndex = 41;
			this->label10->Text = L"Billing ID :";
			// 
			// nudBillingID
			// 
			this->nudBillingID->Enabled = false;
			this->nudBillingID->Location = System::Drawing::Point(98, 34);
			this->nudBillingID->Name = L"nudBillingID";
			this->nudBillingID->ReadOnly = true;
			this->nudBillingID->Size = System::Drawing::Size(206, 22);
			this->nudBillingID->TabIndex = 40;
			// 
			// txtBillGrade
			// 
			this->txtBillGrade->Enabled = false;
			this->txtBillGrade->Location = System::Drawing::Point(98, 174);
			this->txtBillGrade->Name = L"txtBillGrade";
			this->txtBillGrade->ReadOnly = true;
			this->txtBillGrade->Size = System::Drawing::Size(205, 22);
			this->txtBillGrade->TabIndex = 39;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(48, 177);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Grade :";
			// 
			// cbBillDescription
			// 
			this->cbBillDescription->FormattingEnabled = true;
			this->cbBillDescription->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Tuition Fee - 25000\t", L"Registration Fee - 1500" });
			this->cbBillDescription->Location = System::Drawing::Point(98, 259);
			this->cbBillDescription->Name = L"cbBillDescription";
			this->cbBillDescription->Size = System::Drawing::Size(205, 21);
			this->cbBillDescription->TabIndex = 3;
			this->cbBillDescription->SelectedIndexChanged += gcnew System::EventHandler(this, &billing::cbBillDescription_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(36, 288);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 13);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Amount :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Description :";
			// 
			// nudBillAmount
			// 
			this->nudBillAmount->Enabled = false;
			this->nudBillAmount->Location = System::Drawing::Point(98, 286);
			this->nudBillAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->nudBillAmount->Name = L"nudBillAmount";
			this->nudBillAmount->ReadOnly = true;
			this->nudBillAmount->Size = System::Drawing::Size(205, 22);
			this->nudBillAmount->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(4, 205);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Academic Year :";
			// 
			// txtBillAcademicYear
			// 
			this->txtBillAcademicYear->Enabled = false;
			this->txtBillAcademicYear->Location = System::Drawing::Point(98, 202);
			this->txtBillAcademicYear->Name = L"txtBillAcademicYear";
			this->txtBillAcademicYear->ReadOnly = true;
			this->txtBillAcademicYear->Size = System::Drawing::Size(205, 22);
			this->txtBillAcademicYear->TabIndex = 31;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage2);
			this->tabControl2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl2->Location = System::Drawing::Point(311, 33);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(360, 275);
			this->tabControl2->TabIndex = 30;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->btnDeleteStudentBillHistory);
			this->tabPage2->Controls->Add(this->dataGridBillHistory);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(352, 249);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Student BIlling History";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(29, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 15);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Delete";
			// 
			// btnDeleteStudentBillHistory
			// 
			this->btnDeleteStudentBillHistory->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteStudentBillHistory.BackgroundImage")));
			this->btnDeleteStudentBillHistory->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnDeleteStudentBillHistory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteStudentBillHistory->Location = System::Drawing::Point(0, 0);
			this->btnDeleteStudentBillHistory->Name = L"btnDeleteStudentBillHistory";
			this->btnDeleteStudentBillHistory->Size = System::Drawing::Size(30, 32);
			this->btnDeleteStudentBillHistory->TabIndex = 4;
			this->btnDeleteStudentBillHistory->UseVisualStyleBackColor = true;
			this->btnDeleteStudentBillHistory->Click += gcnew System::EventHandler(this, &billing::btnDeleteStudentBillHistory_Click);
			// 
			// dataGridBillHistory
			// 
			this->dataGridBillHistory->AllowUserToAddRows = false;
			this->dataGridBillHistory->AllowUserToDeleteRows = false;
			this->dataGridBillHistory->AllowUserToResizeColumns = false;
			this->dataGridBillHistory->AllowUserToResizeRows = false;
			this->dataGridBillHistory->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridBillHistory->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridBillHistory->BackgroundColor = System::Drawing::Color::White;
			this->dataGridBillHistory->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridBillHistory->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridBillHistory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridBillHistory->Location = System::Drawing::Point(0, 35);
			this->dataGridBillHistory->MultiSelect = false;
			this->dataGridBillHistory->Name = L"dataGridBillHistory";
			this->dataGridBillHistory->ReadOnly = true;
			this->dataGridBillHistory->RowHeadersVisible = false;
			this->dataGridBillHistory->Size = System::Drawing::Size(352, 214);
			this->dataGridBillHistory->TabIndex = 0;
			// 
			// nudBillEnrollmentID
			// 
			this->nudBillEnrollmentID->Enabled = false;
			this->nudBillEnrollmentID->Location = System::Drawing::Point(98, 62);
			this->nudBillEnrollmentID->Name = L"nudBillEnrollmentID";
			this->nudBillEnrollmentID->ReadOnly = true;
			this->nudBillEnrollmentID->Size = System::Drawing::Size(206, 22);
			this->nudBillEnrollmentID->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(8, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Enrollment ID :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(41, 149);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Section :";
			// 
			// txtBillSection
			// 
			this->txtBillSection->Enabled = false;
			this->txtBillSection->Location = System::Drawing::Point(98, 146);
			this->txtBillSection->Name = L"txtBillSection";
			this->txtBillSection->ReadOnly = true;
			this->txtBillSection->Size = System::Drawing::Size(205, 22);
			this->txtBillSection->TabIndex = 18;
			// 
			// txtBillLastName
			// 
			this->txtBillLastName->Enabled = false;
			this->txtBillLastName->Location = System::Drawing::Point(98, 118);
			this->txtBillLastName->Name = L"txtBillLastName";
			this->txtBillLastName->ReadOnly = true;
			this->txtBillLastName->Size = System::Drawing::Size(205, 22);
			this->txtBillLastName->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(24, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Last Name :";
			// 
			// txtBillFirstName
			// 
			this->txtBillFirstName->Enabled = false;
			this->txtBillFirstName->Location = System::Drawing::Point(98, 90);
			this->txtBillFirstName->Name = L"txtBillFirstName";
			this->txtBillFirstName->ReadOnly = true;
			this->txtBillFirstName->Size = System::Drawing::Size(205, 22);
			this->txtBillFirstName->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(23, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"First Name :";
			// 
			// btnBillSave
			// 
			this->btnBillSave->BackColor = System::Drawing::Color::DimGray;
			this->btnBillSave->FlatAppearance->BorderSize = 0;
			this->btnBillSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBillSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBillSave->Location = System::Drawing::Point(628, 310);
			this->btnBillSave->Name = L"btnBillSave";
			this->btnBillSave->Size = System::Drawing::Size(39, 23);
			this->btnBillSave->TabIndex = 5;
			this->btnBillSave->Text = L"Save";
			this->btnBillSave->UseVisualStyleBackColor = false;
			this->btnBillSave->Click += gcnew System::EventHandler(this, &billing::btnBillSave_Click);
			// 
			// panelTop
			// 
			this->panelTop->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panelTop->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panelTop->Controls->Add(this->btnExitAddBill);
			this->panelTop->Location = System::Drawing::Point(-1, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(676, 28);
			this->panelTop->TabIndex = 2;
			// 
			// btnExitAddBill
			// 
			this->btnExitAddBill->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitAddBill->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitAddBill.BackgroundImage")));
			this->btnExitAddBill->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitAddBill->FlatAppearance->BorderSize = 0;
			this->btnExitAddBill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitAddBill->Location = System::Drawing::Point(652, 0);
			this->btnExitAddBill->Name = L"btnExitAddBill";
			this->btnExitAddBill->Size = System::Drawing::Size(23, 28);
			this->btnExitAddBill->TabIndex = 0;
			this->btnExitAddBill->UseVisualStyleBackColor = false;
			this->btnExitAddBill->Click += gcnew System::EventHandler(this, &billing::btnExitAddBill_Click);
			// 
			// dataGridBilling
			// 
			this->dataGridBilling->AllowUserToAddRows = false;
			this->dataGridBilling->AllowUserToDeleteRows = false;
			this->dataGridBilling->AllowUserToOrderColumns = true;
			this->dataGridBilling->AllowUserToResizeColumns = false;
			this->dataGridBilling->AllowUserToResizeRows = false;
			this->dataGridBilling->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridBilling->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridBilling->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridBilling->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridBilling->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridBilling->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridBilling->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridBilling->Location = System::Drawing::Point(1, 42);
			this->dataGridBilling->MultiSelect = false;
			this->dataGridBilling->Name = L"dataGridBilling";
			this->dataGridBilling->ReadOnly = true;
			this->dataGridBilling->RowHeadersVisible = false;
			this->dataGridBilling->Size = System::Drawing::Size(689, 380);
			this->dataGridBilling->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnBilling);
			this->panel1->Controls->Add(this->btnExitBilling);
			this->panel1->Location = System::Drawing::Point(1, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(690, 39);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Pay Bill";
			// 
			// btnBilling
			// 
			this->btnBilling->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBilling.BackgroundImage")));
			this->btnBilling->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnBilling->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBilling->Location = System::Drawing::Point(0, 3);
			this->btnBilling->Name = L"btnBilling";
			this->btnBilling->Size = System::Drawing::Size(30, 32);
			this->btnBilling->TabIndex = 2;
			this->btnBilling->UseVisualStyleBackColor = true;
			this->btnBilling->Click += gcnew System::EventHandler(this, &billing::btnBilling_Click);
			// 
			// btnExitBilling
			// 
			this->btnExitBilling->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitBilling->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitBilling.BackgroundImage")));
			this->btnExitBilling->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnExitBilling->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitBilling->Location = System::Drawing::Point(658, -4);
			this->btnExitBilling->Name = L"btnExitBilling";
			this->btnExitBilling->Size = System::Drawing::Size(29, 33);
			this->btnExitBilling->TabIndex = 1;
			this->btnExitBilling->TabStop = false;
			this->btnExitBilling->Click += gcnew System::EventHandler(this, &billing::btnExitBilling_Click);
			// 
			// billing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 450);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"billing";
			this->Text = L"billing";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &billing::billing_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelBilling->ResumeLayout(false);
			this->panelBilling->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBillingID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBillAmount))->EndInit();
			this->tabControl2->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridBillHistory))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBillEnrollmentID))->EndInit();
			this->panelTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridBilling))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitBilling))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = elementary_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

private: System::Void billing_Load(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		conn->Open();

		MySqlDataAdapter^ billingAdapter = gcnew MySqlDataAdapter("SELECT enrollment_id, first_name, last_name, section, level, academic_year_code FROM tbl_enrollment INNER JOIN tbl_student ON tbl_enrollment.id_student = tbl_student.student_id INNER JOIN tbl_section ON tbl_enrollment.id_section = tbl_section.section_id INNER JOIN tbl_academic_year ON tbl_enrollment.id_academic_year = tbl_academic_year.academic_id WHERE tbl_student.status = 'Enrolled' AND tbl_academic_year.academic_year_status = 'Active'", conn);
		DataTable^ billTable = gcnew DataTable();

		billingAdapter->Fill(billTable);

		dataGridBilling->DataSource = billTable;

		conn->Close();

	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Populating Grid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnBilling_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentEnrollmentID = dataGridBilling->Rows[dataGridBilling->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{

		conn->Open();

		MySqlDataAdapter^ billingAddEnrollmentIdAdapter = gcnew MySqlDataAdapter("SELECT enrollment_id, first_name, last_name, section, level, academic_year_code FROM tbl_enrollment INNER JOIN tbl_student ON tbl_enrollment.id_student = tbl_student.student_id INNER JOIN tbl_section ON tbl_enrollment.id_section = tbl_section.section_id INNER JOIN tbl_academic_year ON tbl_enrollment.id_academic_year = tbl_academic_year.academic_id WHERE tbl_student.status = 'Enrolled' AND tbl_academic_year.academic_year_status = 'Active' AND tbl_enrollment.enrollment_id = " + currentEnrollmentID, conn);
		DataTable^ billAddEnrollmentIDTable = gcnew DataTable();

		billingAddEnrollmentIdAdapter->Fill(billAddEnrollmentIDTable);

		nudBillingID->Value = Convert::ToInt16(billAddEnrollmentIDTable->Rows[0]->ItemArray[0]->ToString());
		nudBillEnrollmentID->Value = Convert::ToInt16(billAddEnrollmentIDTable->Rows[0]->ItemArray[0]->ToString());
		txtBillFirstName->Text = billAddEnrollmentIDTable->Rows[0]->ItemArray[1]->ToString();
		txtBillLastName->Text = billAddEnrollmentIDTable->Rows[0]->ItemArray[2]->ToString();
		txtBillSection->Text = billAddEnrollmentIDTable->Rows[0]->ItemArray[3]->ToString();
		txtBillGrade->Text = billAddEnrollmentIDTable->Rows[0]->ItemArray[4]->ToString();
		txtBillAcademicYear->Text = billAddEnrollmentIDTable->Rows[0]->ItemArray[5]->ToString();

		conn->Close();

		conn->Open();

		MySqlDataAdapter^ studentHistoryAdapter = gcnew MySqlDataAdapter("SELECT billing_id, fees, amount FROM tbl_billing INNER JOIN tbl_fees ON tbl_billing.id_fees = tbl_fees.fees_id WHERE tbl_billing.billing_id = " + currentEnrollmentID, conn);
		DataTable^ studentHistoryTable = gcnew DataTable();

		studentHistoryAdapter->Fill(studentHistoryTable);

		dataGridBillHistory->DataSource = studentHistoryTable;

		conn->Close();

		panelBilling->Show();
	}

	catch (Exception^ e)
	{
		(void)e;
	}
}

private: System::Void btnExitAddBill_Click(System::Object^ sender, System::EventArgs^ e) {

	panelBilling->Hide();
}

private: System::Void cbBillDescription_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	if (cbBillDescription->SelectedIndex == 0)
	{
		nudBillAmount->Value = 25000;
	}

	else
	{
		nudBillAmount->Value = 1500;
	}
}

private: System::Void btnBillSave_Click(System::Object^ sender, System::EventArgs^ e) {

	int billingID = Convert::ToInt16(nudBillingID->Value);
	int billEnrollmentID = Convert::ToInt16(nudBillEnrollmentID->Value);
	String^ billAcademicYear = txtBillAcademicYear->Text;

	String^ billDescription = cbBillDescription->Text;
	int billAmount = Convert::ToInt32(nudBillAmount->Value);

	bool isValid = true;

	if (cbBillDescription->SelectedIndex == 0)
	{
		billDescription = "Tuition Fee";
		billAmount = 25000;
	}

	else
	{
		billDescription = "Registration Fee";
		billAmount = 1500;
	}

	if (nudBillAmount->Value == 0)
	{
		isValid = false;
	}

	try
	{
		if (isValid)
		{
			if (MessageBox::Show("Are You Sure Want To Enroll This Student?", "Information", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == Windows::Forms::DialogResult::Yes)
			{
				conn->Open();

				String^ commandStringBillFees = "INSERT INTO tbl_fees(fees, amount) VALUES(@fees, @amount)";
				MySqlCommand^ commandBillFees = gcnew MySqlCommand(commandStringBillFees, conn);

				commandBillFees->Parameters->AddWithValue("@fees", billDescription);
				commandBillFees->Parameters->AddWithValue("@amount", billAmount);

				commandBillFees->ExecuteNonQuery();

				conn->Close();

				conn->Open();

				String^ commandStringBill = "INSERT INTO tbl_billing(billing_id, id_enrollment, enrolled_academic_year) VALUES(@billing_id, @id_enrollment, @enrolled_academic_year)";
				MySqlCommand^ commandBill = gcnew MySqlCommand(commandStringBill, conn);

				commandBill->Parameters->AddWithValue("@billing_id", billingID);
				commandBill->Parameters->AddWithValue("@id_enrollment", billEnrollmentID);
				commandBill->Parameters->AddWithValue("@enrolled_academic_year", billAcademicYear);

				commandBill->ExecuteNonQuery();

				MessageBox::Show("Bill Has Been Recorded In Student Billing History", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

				conn->Close();

				panelBilling->Hide();
			}
		}
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Occured While Adding The Amount In Student Bill History", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnDeleteStudentBillHistory_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentBillingID = dataGridBillHistory->Rows[dataGridBillHistory->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Delete This Whole Bill History?", "Information", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commandDeleteHistory = gcnew MySqlCommand("DELETE FROM tbl_billing WHERE billing_id = " + currentBillingID, conn);

			commandDeleteHistory->ExecuteNonQuery();

			MessageBox::Show("Bill History Deleted", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();

			panelBilling->Hide();
		}

		catch (Exception^ e)
		{
			(void) e;
			MessageBox::Show("Error Has Occured While Deleting History", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void btnExitBilling_Click(System::Object^ sender, System::EventArgs^ e) {

	billing::Hide();
}

};

}
