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
	/// Summary for section
	/// </summary>
	public ref class section : public System::Windows::Forms::Form
	{
	public:
		section(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			panelAddTeacher->Hide();
			panelUpdateSection->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~section()
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




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnSaveSection;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Button^ btnExitAddSection;
	private: System::Windows::Forms::DataGridView^ dataGridSection;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnDeleteSection;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnEditSection;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAddSection;
	private: System::Windows::Forms::PictureBox^ btnExitSection;
	private: System::Windows::Forms::Panel^ panelUpdateSection;







	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnUpdateSection;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnExitUpdateSection;
	private: System::Windows::Forms::NumericUpDown^ nudUpdateTeacherID;

	private: System::Windows::Forms::NumericUpDown^ nudTeacherID;
	private: System::Windows::Forms::ComboBox^ cbSection;
	private: System::Windows::Forms::ComboBox^ cbLevel;
	private: System::Windows::Forms::ComboBox^ cbUpdateLevel;
	private: System::Windows::Forms::ComboBox^ cbUpdateSection;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(section::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelUpdateSection = (gcnew System::Windows::Forms::Panel());
			this->cbUpdateLevel = (gcnew System::Windows::Forms::ComboBox());
			this->cbUpdateSection = (gcnew System::Windows::Forms::ComboBox());
			this->nudUpdateTeacherID = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnUpdateSection = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnExitUpdateSection = (gcnew System::Windows::Forms::Button());
			this->panelAddTeacher = (gcnew System::Windows::Forms::Panel());
			this->cbLevel = (gcnew System::Windows::Forms::ComboBox());
			this->cbSection = (gcnew System::Windows::Forms::ComboBox());
			this->nudTeacherID = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSaveSection = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->btnExitAddSection = (gcnew System::Windows::Forms::Button());
			this->dataGridSection = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteSection = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnEditSection = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAddSection = (gcnew System::Windows::Forms::Button());
			this->btnExitSection = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelUpdateSection->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudUpdateTeacherID))->BeginInit();
			this->panel3->SuspendLayout();
			this->panelAddTeacher->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudTeacherID))->BeginInit();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridSection))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitSection))->BeginInit();
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
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelUpdateSection);
			this->tabPage1->Controls->Add(this->panelAddTeacher);
			this->tabPage1->Controls->Add(this->dataGridSection);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(689, 422);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Section";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelUpdateSection
			// 
			this->panelUpdateSection->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelUpdateSection->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelUpdateSection->Controls->Add(this->cbUpdateLevel);
			this->panelUpdateSection->Controls->Add(this->cbUpdateSection);
			this->panelUpdateSection->Controls->Add(this->nudUpdateTeacherID);
			this->panelUpdateSection->Controls->Add(this->label7);
			this->panelUpdateSection->Controls->Add(this->label8);
			this->panelUpdateSection->Controls->Add(this->btnUpdateSection);
			this->panelUpdateSection->Controls->Add(this->label9);
			this->panelUpdateSection->Controls->Add(this->panel3);
			this->panelUpdateSection->Location = System::Drawing::Point(320, 47);
			this->panelUpdateSection->Name = L"panelUpdateSection";
			this->panelUpdateSection->Size = System::Drawing::Size(309, 149);
			this->panelUpdateSection->TabIndex = 3;
			// 
			// cbUpdateLevel
			// 
			this->cbUpdateLevel->FormattingEnabled = true;
			this->cbUpdateLevel->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Grade 1", L"Grade 2", L"Grade 3", L"Grade 4",
					L"Grade 5", L"Grade 6"
			});
			this->cbUpdateLevel->Location = System::Drawing::Point(75, 62);
			this->cbUpdateLevel->Name = L"cbUpdateLevel";
			this->cbUpdateLevel->Size = System::Drawing::Size(225, 21);
			this->cbUpdateLevel->TabIndex = 12;
			// 
			// cbUpdateSection
			// 
			this->cbUpdateSection->FormattingEnabled = true;
			this->cbUpdateSection->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Earth", L"Venus", L"Moon", L"Sun", L"Uranus",
					L"Neptune"
			});
			this->cbUpdateSection->Location = System::Drawing::Point(75, 35);
			this->cbUpdateSection->Name = L"cbUpdateSection";
			this->cbUpdateSection->Size = System::Drawing::Size(225, 21);
			this->cbUpdateSection->TabIndex = 5;
			// 
			// nudUpdateTeacherID
			// 
			this->nudUpdateTeacherID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudUpdateTeacherID->Location = System::Drawing::Point(75, 89);
			this->nudUpdateTeacherID->Name = L"nudUpdateTeacherID";
			this->nudUpdateTeacherID->Size = System::Drawing::Size(225, 22);
			this->nudUpdateTeacherID->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Teacher ID :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(29, 64);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Level :";
			// 
			// btnUpdateSection
			// 
			this->btnUpdateSection->BackColor = System::Drawing::Color::DimGray;
			this->btnUpdateSection->FlatAppearance->BorderSize = 0;
			this->btnUpdateSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateSection->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateSection->Location = System::Drawing::Point(246, 118);
			this->btnUpdateSection->Name = L"btnUpdateSection";
			this->btnUpdateSection->Size = System::Drawing::Size(54, 23);
			this->btnUpdateSection->TabIndex = 5;
			this->btnUpdateSection->Text = L"Update";
			this->btnUpdateSection->UseVisualStyleBackColor = false;
			this->btnUpdateSection->Click += gcnew System::EventHandler(this, &section::btnUpdateSection_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(18, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Section :";
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel3->Controls->Add(this->btnExitUpdateSection);
			this->panel3->Location = System::Drawing::Point(-9, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(326, 28);
			this->panel3->TabIndex = 2;
			// 
			// btnExitUpdateSection
			// 
			this->btnExitUpdateSection->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitUpdateSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitUpdateSection.BackgroundImage")));
			this->btnExitUpdateSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitUpdateSection->FlatAppearance->BorderSize = 0;
			this->btnExitUpdateSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitUpdateSection->Location = System::Drawing::Point(293, 0);
			this->btnExitUpdateSection->Name = L"btnExitUpdateSection";
			this->btnExitUpdateSection->Size = System::Drawing::Size(23, 28);
			this->btnExitUpdateSection->TabIndex = 0;
			this->btnExitUpdateSection->UseVisualStyleBackColor = false;
			this->btnExitUpdateSection->Click += gcnew System::EventHandler(this, &section::btnExitUpdateSection_Click);
			// 
			// panelAddTeacher
			// 
			this->panelAddTeacher->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelAddTeacher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddTeacher->Controls->Add(this->cbLevel);
			this->panelAddTeacher->Controls->Add(this->cbSection);
			this->panelAddTeacher->Controls->Add(this->nudTeacherID);
			this->panelAddTeacher->Controls->Add(this->label6);
			this->panelAddTeacher->Controls->Add(this->label5);
			this->panelAddTeacher->Controls->Add(this->btnSaveSection);
			this->panelAddTeacher->Controls->Add(this->label4);
			this->panelAddTeacher->Controls->Add(this->panelTop);
			this->panelAddTeacher->Location = System::Drawing::Point(5, 46);
			this->panelAddTeacher->Name = L"panelAddTeacher";
			this->panelAddTeacher->Size = System::Drawing::Size(309, 149);
			this->panelAddTeacher->TabIndex = 2;
			// 
			// cbLevel
			// 
			this->cbLevel->FormattingEnabled = true;
			this->cbLevel->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Grade 1", L"Grade 2", L"Grade 3", L"Grade 4", L"Grade 5",
					L"Grade 6"
			});
			this->cbLevel->Location = System::Drawing::Point(75, 62);
			this->cbLevel->Name = L"cbLevel";
			this->cbLevel->Size = System::Drawing::Size(225, 21);
			this->cbLevel->TabIndex = 11;
			// 
			// cbSection
			// 
			this->cbSection->FormattingEnabled = true;
			this->cbSection->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Earth", L"Venus", L"Moon", L"Sun", L"Uranus",
					L"Neptune"
			});
			this->cbSection->Location = System::Drawing::Point(75, 35);
			this->cbSection->Name = L"cbSection";
			this->cbSection->Size = System::Drawing::Size(225, 21);
			this->cbSection->TabIndex = 4;
			// 
			// nudTeacherID
			// 
			this->nudTeacherID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudTeacherID->Location = System::Drawing::Point(75, 90);
			this->nudTeacherID->Name = L"nudTeacherID";
			this->nudTeacherID->Size = System::Drawing::Size(225, 22);
			this->nudTeacherID->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 92);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Teacher ID :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(29, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Level :";
			// 
			// btnSaveSection
			// 
			this->btnSaveSection->BackColor = System::Drawing::Color::DimGray;
			this->btnSaveSection->FlatAppearance->BorderSize = 0;
			this->btnSaveSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveSection->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveSection->Location = System::Drawing::Point(261, 118);
			this->btnSaveSection->Name = L"btnSaveSection";
			this->btnSaveSection->Size = System::Drawing::Size(39, 23);
			this->btnSaveSection->TabIndex = 5;
			this->btnSaveSection->Text = L"Save";
			this->btnSaveSection->UseVisualStyleBackColor = false;
			this->btnSaveSection->Click += gcnew System::EventHandler(this, &section::btnSaveSection_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Section :";
			// 
			// panelTop
			// 
			this->panelTop->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panelTop->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panelTop->Controls->Add(this->btnExitAddSection);
			this->panelTop->Location = System::Drawing::Point(-9, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(326, 28);
			this->panelTop->TabIndex = 2;
			// 
			// btnExitAddSection
			// 
			this->btnExitAddSection->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitAddSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitAddSection.BackgroundImage")));
			this->btnExitAddSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitAddSection->FlatAppearance->BorderSize = 0;
			this->btnExitAddSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitAddSection->Location = System::Drawing::Point(293, 0);
			this->btnExitAddSection->Name = L"btnExitAddSection";
			this->btnExitAddSection->Size = System::Drawing::Size(23, 28);
			this->btnExitAddSection->TabIndex = 0;
			this->btnExitAddSection->UseVisualStyleBackColor = false;
			this->btnExitAddSection->Click += gcnew System::EventHandler(this, &section::btnExitAddSection_Click);
			// 
			// dataGridSection
			// 
			this->dataGridSection->AllowUserToAddRows = false;
			this->dataGridSection->AllowUserToDeleteRows = false;
			this->dataGridSection->AllowUserToOrderColumns = true;
			this->dataGridSection->AllowUserToResizeColumns = false;
			this->dataGridSection->AllowUserToResizeRows = false;
			this->dataGridSection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridSection->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridSection->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridSection->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridSection->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridSection->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridSection->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridSection->Location = System::Drawing::Point(1, 42);
			this->dataGridSection->MultiSelect = false;
			this->dataGridSection->Name = L"dataGridSection";
			this->dataGridSection->ReadOnly = true;
			this->dataGridSection->RowHeadersVisible = false;
			this->dataGridSection->Size = System::Drawing::Size(689, 380);
			this->dataGridSection->TabIndex = 1;
			this->dataGridSection->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &section::dataGridSection_CellClick);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->btnDeleteSection);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btnEditSection);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnAddSection);
			this->panel1->Controls->Add(this->btnExitSection);
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
			// btnDeleteSection
			// 
			this->btnDeleteSection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteSection.BackgroundImage")));
			this->btnDeleteSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnDeleteSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteSection->Location = System::Drawing::Point(574, 3);
			this->btnDeleteSection->Name = L"btnDeleteSection";
			this->btnDeleteSection->Size = System::Drawing::Size(30, 32);
			this->btnDeleteSection->TabIndex = 6;
			this->btnDeleteSection->UseVisualStyleBackColor = true;
			this->btnDeleteSection->Click += gcnew System::EventHandler(this, &section::btnDeleteSection_Click);
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
			// btnEditSection
			// 
			this->btnEditSection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnEditSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditSection.BackgroundImage")));
			this->btnEditSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEditSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditSection->Location = System::Drawing::Point(508, 3);
			this->btnEditSection->Name = L"btnEditSection";
			this->btnEditSection->Size = System::Drawing::Size(30, 32);
			this->btnEditSection->TabIndex = 4;
			this->btnEditSection->UseVisualStyleBackColor = true;
			this->btnEditSection->Click += gcnew System::EventHandler(this, &section::btnEditSection_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Add Section";
			// 
			// btnAddSection
			// 
			this->btnAddSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddSection.BackgroundImage")));
			this->btnAddSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnAddSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddSection->Location = System::Drawing::Point(0, 3);
			this->btnAddSection->Name = L"btnAddSection";
			this->btnAddSection->Size = System::Drawing::Size(30, 32);
			this->btnAddSection->TabIndex = 2;
			this->btnAddSection->UseVisualStyleBackColor = true;
			this->btnAddSection->Click += gcnew System::EventHandler(this, &section::btnAddSection_Click);
			// 
			// btnExitSection
			// 
			this->btnExitSection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitSection.BackgroundImage")));
			this->btnExitSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnExitSection->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitSection->Location = System::Drawing::Point(658, -4);
			this->btnExitSection->Name = L"btnExitSection";
			this->btnExitSection->Size = System::Drawing::Size(29, 33);
			this->btnExitSection->TabIndex = 1;
			this->btnExitSection->TabStop = false;
			this->btnExitSection->Click += gcnew System::EventHandler(this, &section::btnExitSection_Click);
			// 
			// section
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(700, 450);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"section";
			this->Text = L"section";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &section::section_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelUpdateSection->ResumeLayout(false);
			this->panelUpdateSection->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudUpdateTeacherID))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panelAddTeacher->ResumeLayout(false);
			this->panelAddTeacher->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudTeacherID))->EndInit();
			this->panelTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridSection))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitSection))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = elementary_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridSection() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ sectionAdapter = gcnew MySqlDataAdapter("SELECT section_id, section, level, teacher_id, first_name, middle_name, last_name, contact_number, email FROM tbl_section INNER JOIN tbl_teacher ON tbl_section.adviser_id = tbl_teacher.teacher_id", conn);
		DataTable^ sectionTable = gcnew DataTable();

		sectionAdapter->Fill(sectionTable);

		dataGridSection->DataSource = sectionTable;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

void clearFields() {

	cbUpdateSection->Text = "";
	cbUpdateLevel->Text = "";
	nudUpdateTeacherID->Value = 0;
}

private: System::Void section_Load(System::Object^ sender, System::EventArgs^ e) {

	populateGridSection();
}

private: System::Void btnAddSection_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddTeacher->Show();
}

private: System::Void btnExitAddSection_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddTeacher->Hide();
}

private: System::Void btnSaveSection_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ getSection = cbSection->Text;
	String^ getLevel = cbLevel->Text;
	int getAdviserID = Convert::ToInt16(nudTeacherID->Value);
	bool isValid = true;

	if (cbSection->Text->Trim()->Length < 3 || cbLevel->Text->Trim()->Length < 0)
	{
		isValid = false;
	}

	if (isValid)
	{
		try
		{
			conn->Open();

			String^ commandStringSection = "INSERT INTO tbl_section(section, level, adviser_id) VALUES(@section, @level, @adviser_id)";
			MySqlCommand^ commandSection = gcnew MySqlCommand(commandStringSection, conn);

			commandSection->Parameters->AddWithValue("@section", getSection);
			commandSection->Parameters->AddWithValue("@level", getLevel);
			commandSection->Parameters->AddWithValue("@adviser_id", getAdviserID);

			commandSection->ExecuteNonQuery();

			MessageBox::Show("Section Details Has Been Added", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();

			cbSection->Text = "";
			cbUpdateLevel->Text = "";
			nudTeacherID->Value = 0;

			populateGridSection();
		}

		catch (Exception^ e)
		{
			(void) e;
			MessageBox::Show("No Teacher ID Found Or Teacher ID Has Been Already Appointed To A Section", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	else
	{
		MessageBox::Show("Please Fill The Form Before Adding It In Database", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	
	
}

private: System::Void btnEditSection_Click(System::Object^ sender, System::EventArgs^ e) {

	panelUpdateSection->Show();
}

private: System::Void btnExitUpdateSection_Click(System::Object^ sender, System::EventArgs^ e) {

	panelUpdateSection->Hide();

	clearFields();
}

private: System::Void dataGridSection_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ currentSectionID = dataGridSection->Rows[dataGridSection->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ sectionUpdateAdapter = gcnew MySqlDataAdapter("SELECT * FROM tbl_section WHERE section_id = " + currentSectionID, conn);
		DataTable^ sectionUpdateTable = gcnew DataTable();

		sectionUpdateAdapter->Fill(sectionUpdateTable);

		cbUpdateSection->Text = sectionUpdateTable->Rows[0]->ItemArray[1]->ToString();
		cbUpdateLevel->Text = sectionUpdateTable->Rows[0]->ItemArray[2]->ToString();
		nudUpdateTeacherID->Value = Convert::ToInt16(sectionUpdateTable->Rows[0]->ItemArray[3]->ToString());

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void btnUpdateSection_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentSectionID = dataGridSection->Rows[dataGridSection->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ getUpdateSection = cbUpdateSection->Text;
	String^ getUpdateLevel = cbUpdateLevel->Text;
	int getUpdateAdviserID = Convert::ToInt16(nudUpdateTeacherID->Value);
	bool isValid = true;

	if (cbUpdateSection->Text->Trim()->Length < 3 || cbUpdateLevel->Text->Trim()->Length < 0)
	{
		isValid = false;
	}

	try
	{
		if (isValid)
		{

			if (MessageBox::Show("Are You Sure You Want To Update This Section Details?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
			{
				conn->Open();

				MySqlCommand^ commandUpdateSection = gcnew MySqlCommand("UPDATE tbl_section SET section = @section, level = @level, adviser_id = @adviser_id WHERE section_id = " + currentSectionID, conn);

				commandUpdateSection->Parameters->AddWithValue("@section", getUpdateSection);
				commandUpdateSection->Parameters->AddWithValue("@level", getUpdateLevel);
				commandUpdateSection->Parameters->AddWithValue("@adviser_id", getUpdateAdviserID);

				commandUpdateSection->ExecuteNonQuery();

				MessageBox::Show("Section Details Has Been Updated", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

				conn->Close();

				clearFields();

				populateGridSection();
			}
		}

		else
		{
			MessageBox::Show("Please Fill Out The Form Before Updating It", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Been Occured While Updating Section Details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnDeleteSection_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentSectionID = dataGridSection->Rows[dataGridSection->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{

		if (MessageBox::Show("Are You Sure You Want To Delete This Section Details?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
		{
			conn->Open();

			MySqlCommand^ commandDeleteSection = gcnew MySqlCommand("DELETE FROM tbl_section WHERE section_id = " + currentSectionID, conn);

			commandDeleteSection->ExecuteNonQuery();

			MessageBox::Show("Section Details Has Been Delete", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();

			clearFields();

			populateGridSection();
		}
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Been Occured While Deleting Section Details", "Erron", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnExitSection_Click(System::Object^ sender, System::EventArgs^ e) {

	section::Close();
}

};

}
