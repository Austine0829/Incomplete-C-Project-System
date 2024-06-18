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
	/// Summary for teacher
	/// </summary>
	public ref class teacher : public System::Windows::Forms::Form
	{
	public:
		teacher(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			panelAddTeacher->Hide();
			panelUpdateTeacher->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~teacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panelAddTeacher;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnSaveTeacher;
	private: System::Windows::Forms::TextBox^ txtFirstNameTeacher;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Button^ btnExitAddTeacher;
	private: System::Windows::Forms::DataGridView^ dataGridTeacher;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnDeleteTeacher;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnEditTeacher;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAddTeacher;
	private: System::Windows::Forms::PictureBox^ btnExitTeacher;
	private: System::Windows::Forms::TextBox^ txtContactTeacher;



	private: System::Windows::Forms::TextBox^ txtLastNameTeacher;

	private: System::Windows::Forms::TextBox^ txtMiddleNameTeacher;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtEmailTeacher;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtAddressTeacher;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panelUpdateTeacher;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtUpdateEmailTeacher;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtUpdateAddressTeacher;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtUpdateContactTeacher;

	private: System::Windows::Forms::TextBox^ txtUpdateLastNameTeacher;

	private: System::Windows::Forms::TextBox^ txtUpdateMiddleNameTeacher;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ btnUpdateTeacher;
	private: System::Windows::Forms::TextBox^ txtUpdateFirstNameTeacher;



	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnExitUpdateTeacher;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(teacher::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelUpdateTeacher = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateEmailTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateAddressTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateContactTeacher = (gcnew System::Windows::Forms::TextBox());
			this->txtUpdateLastNameTeacher = (gcnew System::Windows::Forms::TextBox());
			this->txtUpdateMiddleNameTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->btnUpdateTeacher = (gcnew System::Windows::Forms::Button());
			this->txtUpdateFirstNameTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnExitUpdateTeacher = (gcnew System::Windows::Forms::Button());
			this->panelAddTeacher = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtEmailTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtAddressTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtContactTeacher = (gcnew System::Windows::Forms::TextBox());
			this->txtLastNameTeacher = (gcnew System::Windows::Forms::TextBox());
			this->txtMiddleNameTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSaveTeacher = (gcnew System::Windows::Forms::Button());
			this->txtFirstNameTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->btnExitAddTeacher = (gcnew System::Windows::Forms::Button());
			this->dataGridTeacher = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteTeacher = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnEditTeacher = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAddTeacher = (gcnew System::Windows::Forms::Button());
			this->btnExitTeacher = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelUpdateTeacher->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panelAddTeacher->SuspendLayout();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridTeacher))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitTeacher))->BeginInit();
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
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelUpdateTeacher);
			this->tabPage1->Controls->Add(this->panelAddTeacher);
			this->tabPage1->Controls->Add(this->dataGridTeacher);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(689, 422);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Teacher";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelUpdateTeacher
			// 
			this->panelUpdateTeacher->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelUpdateTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelUpdateTeacher->Controls->Add(this->label10);
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateEmailTeacher);
			this->panelUpdateTeacher->Controls->Add(this->label11);
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateAddressTeacher);
			this->panelUpdateTeacher->Controls->Add(this->label12);
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateContactTeacher);
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateLastNameTeacher);
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateMiddleNameTeacher);
			this->panelUpdateTeacher->Controls->Add(this->label13);
			this->panelUpdateTeacher->Controls->Add(this->label14);
			this->panelUpdateTeacher->Controls->Add(this->btnUpdateTeacher);
			this->panelUpdateTeacher->Controls->Add(this->txtUpdateFirstNameTeacher);
			this->panelUpdateTeacher->Controls->Add(this->label15);
			this->panelUpdateTeacher->Controls->Add(this->panel3);
			this->panelUpdateTeacher->Location = System::Drawing::Point(338, 46);
			this->panelUpdateTeacher->Name = L"panelUpdateTeacher";
			this->panelUpdateTeacher->Size = System::Drawing::Size(327, 234);
			this->panelUpdateTeacher->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(45, 174);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Email :";
			// 
			// txtUpdateEmailTeacher
			// 
			this->txtUpdateEmailTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateEmailTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUpdateEmailTeacher->Location = System::Drawing::Point(93, 174);
			this->txtUpdateEmailTeacher->Name = L"txtUpdateEmailTeacher";
			this->txtUpdateEmailTeacher->Size = System::Drawing::Size(225, 22);
			this->txtUpdateEmailTeacher->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(31, 146);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 13);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Address :";
			// 
			// txtUpdateAddressTeacher
			// 
			this->txtUpdateAddressTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateAddressTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUpdateAddressTeacher->Location = System::Drawing::Point(93, 146);
			this->txtUpdateAddressTeacher->Name = L"txtUpdateAddressTeacher";
			this->txtUpdateAddressTeacher->Size = System::Drawing::Size(225, 22);
			this->txtUpdateAddressTeacher->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(23, 120);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Contact # :";
			// 
			// txtUpdateContactTeacher
			// 
			this->txtUpdateContactTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateContactTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUpdateContactTeacher->Location = System::Drawing::Point(93, 118);
			this->txtUpdateContactTeacher->Name = L"txtUpdateContactTeacher";
			this->txtUpdateContactTeacher->Size = System::Drawing::Size(225, 22);
			this->txtUpdateContactTeacher->TabIndex = 11;
			// 
			// txtUpdateLastNameTeacher
			// 
			this->txtUpdateLastNameTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateLastNameTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUpdateLastNameTeacher->Location = System::Drawing::Point(93, 90);
			this->txtUpdateLastNameTeacher->Name = L"txtUpdateLastNameTeacher";
			this->txtUpdateLastNameTeacher->Size = System::Drawing::Size(225, 22);
			this->txtUpdateLastNameTeacher->TabIndex = 10;
			// 
			// txtUpdateMiddleNameTeacher
			// 
			this->txtUpdateMiddleNameTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateMiddleNameTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUpdateMiddleNameTeacher->Location = System::Drawing::Point(93, 62);
			this->txtUpdateMiddleNameTeacher->Name = L"txtUpdateMiddleNameTeacher";
			this->txtUpdateMiddleNameTeacher->Size = System::Drawing::Size(225, 22);
			this->txtUpdateMiddleNameTeacher->TabIndex = 9;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(18, 92);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(68, 13);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Last Name :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(3, 64);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(84, 13);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Middle Name :";
			// 
			// btnUpdateTeacher
			// 
			this->btnUpdateTeacher->BackColor = System::Drawing::Color::DimGray;
			this->btnUpdateTeacher->FlatAppearance->BorderSize = 0;
			this->btnUpdateTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateTeacher->Location = System::Drawing::Point(262, 202);
			this->btnUpdateTeacher->Name = L"btnUpdateTeacher";
			this->btnUpdateTeacher->Size = System::Drawing::Size(56, 23);
			this->btnUpdateTeacher->TabIndex = 5;
			this->btnUpdateTeacher->Text = L"Update";
			this->btnUpdateTeacher->UseVisualStyleBackColor = false;
			this->btnUpdateTeacher->Click += gcnew System::EventHandler(this, &teacher::btnUpdateTeacher_Click);
			// 
			// txtUpdateFirstNameTeacher
			// 
			this->txtUpdateFirstNameTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateFirstNameTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUpdateFirstNameTeacher->Location = System::Drawing::Point(93, 34);
			this->txtUpdateFirstNameTeacher->Name = L"txtUpdateFirstNameTeacher";
			this->txtUpdateFirstNameTeacher->Size = System::Drawing::Size(225, 22);
			this->txtUpdateFirstNameTeacher->TabIndex = 4;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(18, 36);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(69, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"First Name :";
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel3->Controls->Add(this->btnExitUpdateTeacher);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(326, 28);
			this->panel3->TabIndex = 2;
			// 
			// btnExitUpdateTeacher
			// 
			this->btnExitUpdateTeacher->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitUpdateTeacher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitUpdateTeacher.BackgroundImage")));
			this->btnExitUpdateTeacher->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitUpdateTeacher->FlatAppearance->BorderSize = 0;
			this->btnExitUpdateTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitUpdateTeacher->Location = System::Drawing::Point(302, 0);
			this->btnExitUpdateTeacher->Name = L"btnExitUpdateTeacher";
			this->btnExitUpdateTeacher->Size = System::Drawing::Size(23, 28);
			this->btnExitUpdateTeacher->TabIndex = 0;
			this->btnExitUpdateTeacher->UseVisualStyleBackColor = false;
			this->btnExitUpdateTeacher->Click += gcnew System::EventHandler(this, &teacher::btnExitUpdateTeacher_Click);
			// 
			// panelAddTeacher
			// 
			this->panelAddTeacher->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelAddTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddTeacher->Controls->Add(this->label9);
			this->panelAddTeacher->Controls->Add(this->txtEmailTeacher);
			this->panelAddTeacher->Controls->Add(this->label8);
			this->panelAddTeacher->Controls->Add(this->txtAddressTeacher);
			this->panelAddTeacher->Controls->Add(this->label7);
			this->panelAddTeacher->Controls->Add(this->txtContactTeacher);
			this->panelAddTeacher->Controls->Add(this->txtLastNameTeacher);
			this->panelAddTeacher->Controls->Add(this->txtMiddleNameTeacher);
			this->panelAddTeacher->Controls->Add(this->label6);
			this->panelAddTeacher->Controls->Add(this->label5);
			this->panelAddTeacher->Controls->Add(this->btnSaveTeacher);
			this->panelAddTeacher->Controls->Add(this->txtFirstNameTeacher);
			this->panelAddTeacher->Controls->Add(this->label4);
			this->panelAddTeacher->Controls->Add(this->panelTop);
			this->panelAddTeacher->Location = System::Drawing::Point(5, 46);
			this->panelAddTeacher->Name = L"panelAddTeacher";
			this->panelAddTeacher->Size = System::Drawing::Size(327, 234);
			this->panelAddTeacher->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(45, 174);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Email :";
			// 
			// txtEmailTeacher
			// 
			this->txtEmailTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEmailTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmailTeacher->Location = System::Drawing::Point(93, 174);
			this->txtEmailTeacher->Name = L"txtEmailTeacher";
			this->txtEmailTeacher->Size = System::Drawing::Size(225, 22);
			this->txtEmailTeacher->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(31, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Address :";
			// 
			// txtAddressTeacher
			// 
			this->txtAddressTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtAddressTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAddressTeacher->Location = System::Drawing::Point(93, 146);
			this->txtAddressTeacher->Name = L"txtAddressTeacher";
			this->txtAddressTeacher->Size = System::Drawing::Size(225, 22);
			this->txtAddressTeacher->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(23, 120);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Contact # :";
			// 
			// txtContactTeacher
			// 
			this->txtContactTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtContactTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtContactTeacher->Location = System::Drawing::Point(93, 118);
			this->txtContactTeacher->Name = L"txtContactTeacher";
			this->txtContactTeacher->Size = System::Drawing::Size(225, 22);
			this->txtContactTeacher->TabIndex = 11;
			// 
			// txtLastNameTeacher
			// 
			this->txtLastNameTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtLastNameTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLastNameTeacher->Location = System::Drawing::Point(93, 90);
			this->txtLastNameTeacher->Name = L"txtLastNameTeacher";
			this->txtLastNameTeacher->Size = System::Drawing::Size(225, 22);
			this->txtLastNameTeacher->TabIndex = 10;
			// 
			// txtMiddleNameTeacher
			// 
			this->txtMiddleNameTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtMiddleNameTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMiddleNameTeacher->Location = System::Drawing::Point(93, 62);
			this->txtMiddleNameTeacher->Name = L"txtMiddleNameTeacher";
			this->txtMiddleNameTeacher->Size = System::Drawing::Size(225, 22);
			this->txtMiddleNameTeacher->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(18, 92);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Last Name :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(3, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Middle Name :";
			// 
			// btnSaveTeacher
			// 
			this->btnSaveTeacher->BackColor = System::Drawing::Color::DimGray;
			this->btnSaveTeacher->FlatAppearance->BorderSize = 0;
			this->btnSaveTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveTeacher->Location = System::Drawing::Point(279, 202);
			this->btnSaveTeacher->Name = L"btnSaveTeacher";
			this->btnSaveTeacher->Size = System::Drawing::Size(39, 23);
			this->btnSaveTeacher->TabIndex = 5;
			this->btnSaveTeacher->Text = L"Save";
			this->btnSaveTeacher->UseVisualStyleBackColor = false;
			this->btnSaveTeacher->Click += gcnew System::EventHandler(this, &teacher::btnSaveTeacher_Click);
			// 
			// txtFirstNameTeacher
			// 
			this->txtFirstNameTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtFirstNameTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFirstNameTeacher->Location = System::Drawing::Point(93, 34);
			this->txtFirstNameTeacher->Name = L"txtFirstNameTeacher";
			this->txtFirstNameTeacher->Size = System::Drawing::Size(225, 22);
			this->txtFirstNameTeacher->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"First Name :";
			// 
			// panelTop
			// 
			this->panelTop->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panelTop->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panelTop->Controls->Add(this->btnExitAddTeacher);
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(326, 28);
			this->panelTop->TabIndex = 2;
			// 
			// btnExitAddTeacher
			// 
			this->btnExitAddTeacher->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitAddTeacher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitAddTeacher.BackgroundImage")));
			this->btnExitAddTeacher->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitAddTeacher->FlatAppearance->BorderSize = 0;
			this->btnExitAddTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitAddTeacher->Location = System::Drawing::Point(302, 0);
			this->btnExitAddTeacher->Name = L"btnExitAddTeacher";
			this->btnExitAddTeacher->Size = System::Drawing::Size(23, 28);
			this->btnExitAddTeacher->TabIndex = 0;
			this->btnExitAddTeacher->UseVisualStyleBackColor = false;
			this->btnExitAddTeacher->Click += gcnew System::EventHandler(this, &teacher::btnExitAddTeacher_Click);
			// 
			// dataGridTeacher
			// 
			this->dataGridTeacher->AllowUserToAddRows = false;
			this->dataGridTeacher->AllowUserToDeleteRows = false;
			this->dataGridTeacher->AllowUserToOrderColumns = true;
			this->dataGridTeacher->AllowUserToResizeColumns = false;
			this->dataGridTeacher->AllowUserToResizeRows = false;
			this->dataGridTeacher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridTeacher->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridTeacher->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridTeacher->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridTeacher->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridTeacher->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridTeacher->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridTeacher->Location = System::Drawing::Point(1, 42);
			this->dataGridTeacher->MultiSelect = false;
			this->dataGridTeacher->Name = L"dataGridTeacher";
			this->dataGridTeacher->ReadOnly = true;
			this->dataGridTeacher->RowHeadersVisible = false;
			this->dataGridTeacher->Size = System::Drawing::Size(689, 380);
			this->dataGridTeacher->TabIndex = 1;
			this->dataGridTeacher->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &teacher::dataGridTeacher_CellClick);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->btnDeleteTeacher);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btnEditTeacher);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnAddTeacher);
			this->panel1->Controls->Add(this->btnExitTeacher);
			this->panel1->Location = System::Drawing::Point(1, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(690, 39);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(603, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 15);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Delete";
			// 
			// btnDeleteTeacher
			// 
			this->btnDeleteTeacher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteTeacher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteTeacher.BackgroundImage")));
			this->btnDeleteTeacher->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnDeleteTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteTeacher->Location = System::Drawing::Point(574, 3);
			this->btnDeleteTeacher->Name = L"btnDeleteTeacher";
			this->btnDeleteTeacher->Size = System::Drawing::Size(30, 32);
			this->btnDeleteTeacher->TabIndex = 6;
			this->btnDeleteTeacher->UseVisualStyleBackColor = true;
			this->btnDeleteTeacher->Click += gcnew System::EventHandler(this, &teacher::btnDeleteTeacher_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(537, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Edit";
			// 
			// btnEditTeacher
			// 
			this->btnEditTeacher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnEditTeacher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditTeacher.BackgroundImage")));
			this->btnEditTeacher->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEditTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditTeacher->Location = System::Drawing::Point(508, 3);
			this->btnEditTeacher->Name = L"btnEditTeacher";
			this->btnEditTeacher->Size = System::Drawing::Size(30, 32);
			this->btnEditTeacher->TabIndex = 4;
			this->btnEditTeacher->UseVisualStyleBackColor = true;
			this->btnEditTeacher->Click += gcnew System::EventHandler(this, &teacher::btnEditTeacher_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Add Teacher";
			// 
			// btnAddTeacher
			// 
			this->btnAddTeacher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddTeacher.BackgroundImage")));
			this->btnAddTeacher->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnAddTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddTeacher->Location = System::Drawing::Point(0, 3);
			this->btnAddTeacher->Name = L"btnAddTeacher";
			this->btnAddTeacher->Size = System::Drawing::Size(30, 32);
			this->btnAddTeacher->TabIndex = 2;
			this->btnAddTeacher->UseVisualStyleBackColor = true;
			this->btnAddTeacher->Click += gcnew System::EventHandler(this, &teacher::btnAddTeacher_Click);
			// 
			// btnExitTeacher
			// 
			this->btnExitTeacher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitTeacher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitTeacher.BackgroundImage")));
			this->btnExitTeacher->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnExitTeacher->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitTeacher->Location = System::Drawing::Point(658, -4);
			this->btnExitTeacher->Name = L"btnExitTeacher";
			this->btnExitTeacher->Size = System::Drawing::Size(29, 33);
			this->btnExitTeacher->TabIndex = 1;
			this->btnExitTeacher->TabStop = false;
			this->btnExitTeacher->Click += gcnew System::EventHandler(this, &teacher::btnExitTeacher_Click);
			// 
			// teacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 450);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"teacher";
			this->Text = L"teacher";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &teacher::teacher_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelUpdateTeacher->ResumeLayout(false);
			this->panelUpdateTeacher->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panelAddTeacher->ResumeLayout(false);
			this->panelAddTeacher->PerformLayout();
			this->panelTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridTeacher))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitTeacher))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = elementary_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridTeacher() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ teacherAdapter = gcnew MySqlDataAdapter("SELECT teacher_id, first_name, middle_name, last_name, contact_number, address, email, section, level FROM tbl_teacher LEFT JOIN tbl_section ON tbl_teacher.teacher_id = tbl_section.adviser_id", conn);
		DataTable^ teacherTable = gcnew DataTable();

		teacherAdapter->Fill(teacherTable);

		dataGridTeacher->DataSource = teacherTable;

		conn->Close();
	}
	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Been Occured While Populating The Grid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

void clearTeacherFields() {

	txtUpdateFirstNameTeacher->Clear();
	txtUpdateMiddleNameTeacher->Clear();
	txtUpdateLastNameTeacher->Clear();
	txtUpdateContactTeacher->Clear();
	txtUpdateAddressTeacher->Clear();
	txtUpdateEmailTeacher->Clear();
}

private: System::Void teacher_Load(System::Object^ sender, System::EventArgs^ e) {

	populateGridTeacher();
}

private: System::Void btnAddTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddTeacher->Show();
	
}

private: System::Void btnExitAddTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddTeacher->Hide();
}

private: System::Void btnSaveTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ getTeacherName = txtFirstNameTeacher->Text;
	String^ getTeacherMiddleName = txtMiddleNameTeacher->Text;
	String^ getTeacherLastName = txtLastNameTeacher->Text;
	String^ getTeacherContact = txtContactTeacher->Text;
	String^ getTeacherAddress = txtAddressTeacher->Text;
	String^ getTeacherEmail = txtEmailTeacher->Text;
	bool isValid = true;

	if (txtFirstNameTeacher->Text->Trim()->Length < 3 || txtMiddleNameTeacher->Text->Trim()->Length < 3 || txtLastNameTeacher->Text->Trim()->Length < 3 || txtContactTeacher->Text->Trim()->Length < 11 || txtAddressTeacher->Text->Trim()->Length < 3 || txtEmailTeacher->Text->Trim()->Length < 3)
	{
		isValid = false;
	}

	if (isValid)
	{
		try
		{
			conn->Open();

			String^ commandStringTeacher = "INSERT INTO tbl_teacher(first_name, middle_name, last_name, contact_number, address, email) VALUES(@first_name, @middle_name, @last_name, @contact_number, @address, @email)";
			MySqlCommand^ commandTeacher = gcnew MySqlCommand(commandStringTeacher, conn);

			commandTeacher->Parameters->AddWithValue("@first_name", getTeacherName);
			commandTeacher->Parameters->AddWithValue("@middle_name", getTeacherMiddleName);
			commandTeacher->Parameters->AddWithValue("@last_name", getTeacherLastName);
			commandTeacher->Parameters->AddWithValue("@contact_number", getTeacherContact);
			commandTeacher->Parameters->AddWithValue("@address", getTeacherAddress);
			commandTeacher->Parameters->AddWithValue("@email", getTeacherEmail);

			commandTeacher->ExecuteNonQuery();

			MessageBox::Show("Teacher Details Has Been Added", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();

			txtFirstNameTeacher->Clear();
			txtMiddleNameTeacher->Clear();
			txtLastNameTeacher->Clear();
			txtContactTeacher->Clear();
			txtAddressTeacher->Clear();
			txtEmailTeacher->Clear();

			populateGridTeacher();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Been Occured While Adding New Teacher Details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	else
	{
		MessageBox::Show("Please Fill Out The Form Before Adding It In Database", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	
}

private: System::Void btnEditTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	panelUpdateTeacher->Show();
}

private: System::Void btnExitUpdateTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	panelUpdateTeacher->Hide();

	clearTeacherFields();
}

private: System::Void dataGridTeacher_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ cuurentTeacherID = dataGridTeacher->Rows[dataGridTeacher->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ teacherUpdateAdapter = gcnew MySqlDataAdapter("SELECT * FROM tbl_teacher WHERE teacher_id = " + cuurentTeacherID, conn);
		DataTable^ teacherUpdateTable = gcnew DataTable();

		teacherUpdateAdapter->Fill(teacherUpdateTable);

		txtUpdateFirstNameTeacher->Text = teacherUpdateTable->Rows[0]->ItemArray[1]->ToString();
		txtUpdateMiddleNameTeacher->Text = teacherUpdateTable->Rows[0]->ItemArray[2]->ToString();
		txtUpdateLastNameTeacher->Text = teacherUpdateTable->Rows[0]->ItemArray[3]->ToString();
		txtUpdateContactTeacher->Text = teacherUpdateTable->Rows[0]->ItemArray[4]->ToString();
		txtUpdateAddressTeacher->Text = teacherUpdateTable->Rows[0]->ItemArray[5]->ToString();
		txtUpdateEmailTeacher->Text = teacherUpdateTable->Rows[0]->ItemArray[6]->ToString();

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void btnUpdateTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ cuurentTeacherID = dataGridTeacher->Rows[dataGridTeacher->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ getUpdateTeacherName = txtUpdateFirstNameTeacher->Text;
	String^ getUpdateTeacherMiddleName = txtUpdateMiddleNameTeacher->Text;
	String^ getUpdateTeacherLastName = txtUpdateLastNameTeacher->Text;
	String^ getUpdateTeacherContact = txtUpdateContactTeacher->Text;
	String^ getUpdateTeacherAddress = txtUpdateAddressTeacher->Text;
	String^ getUpdateTeacherEmail = txtUpdateEmailTeacher->Text;
	bool isValid = true;

	if (txtUpdateFirstNameTeacher->Text->Trim()->Length < 3 || txtUpdateMiddleNameTeacher->Text->Trim()->Length < 3 || txtUpdateLastNameTeacher->Text->Trim()->Length < 3 || txtUpdateContactTeacher->Text->Trim()->Length < 11 || txtUpdateAddressTeacher->Text->Trim()->Length < 3 || txtUpdateEmailTeacher->Text->Trim()->Length < 3)
	{
		isValid = false;
	}

	try
	{
		if (isValid)
		{
			if (MessageBox::Show("Are You Sure You Want To Update This Teacher Details?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
			{
				conn->Open();

				MySqlCommand^ commandUpdateTeacher = gcnew MySqlCommand("UPDATE tbl_teacher SET first_name = @first_name, middle_name = @middle_name, last_name = @last_name, contact_number = @contact_number, address = @address, email = @email WHERE teacher_id = " + cuurentTeacherID, conn);

				commandUpdateTeacher->Parameters->AddWithValue("@first_name", getUpdateTeacherName);
				commandUpdateTeacher->Parameters->AddWithValue("@middle_name", getUpdateTeacherMiddleName);
				commandUpdateTeacher->Parameters->AddWithValue("@last_name", getUpdateTeacherLastName);
				commandUpdateTeacher->Parameters->AddWithValue("@contact_number", getUpdateTeacherContact);
				commandUpdateTeacher->Parameters->AddWithValue("@address", getUpdateTeacherAddress);
				commandUpdateTeacher->Parameters->AddWithValue("@email", getUpdateTeacherEmail);

				commandUpdateTeacher->ExecuteNonQuery();

				MessageBox::Show("Teacher Details Has Been Updated", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

				conn->Close();

				clearTeacherFields();

				populateGridTeacher();
			}
		}

		else
		{
			MessageBox::Show("Please Fill Out The Form Before Updating It", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	catch (Exception^ e)
	{
		(void)e;
		MessageBox::Show("Error Has Been Occured While Updating Teacher Details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnDeleteTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ cuurentTeacherID = dataGridTeacher->Rows[dataGridTeacher->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Delete This Teacher Details?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commandDeleteTeacher = gcnew MySqlCommand("DELETE FROM tbl_teacher WHERE teacher_id = " + cuurentTeacherID, conn);

			commandDeleteTeacher->ExecuteNonQuery();

			MessageBox::Show("Teacher Details Has Been Deleted", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();

			clearTeacherFields();

			populateGridTeacher();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Been Occured While Deleting Teacher Details Or The Teacher Is Appointed To A Section", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

}

private: System::Void btnExitTeacher_Click(System::Object^ sender, System::EventArgs^ e) {

	teacher::Close();
}

};

}
