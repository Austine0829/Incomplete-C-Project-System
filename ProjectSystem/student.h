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
	/// Summary for student
	/// </summary>
	public ref class student : public System::Windows::Forms::Form
	{
	public:
		student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			panelAddStudent->Hide();
			panelUpdateStudent->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panelAddStudent;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtFirstNameStudent;








	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnSaveStudent;


	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Button^ btnExitAddStudent;
	private: System::Windows::Forms::DataGridView^ dataGridStudent;






	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnDeleteStudent;







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAddStudent;


	private: System::Windows::Forms::PictureBox^ btnExitStudent;













	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtFatherStudent;
	private: System::Windows::Forms::TextBox^ txtBirthDataStudent;
	private: System::Windows::Forms::TextBox^ txtAddressStudent;
	private: System::Windows::Forms::TextBox^ txtLastNameStudent;
	private: System::Windows::Forms::TextBox^ txtMiddleNameStudent;















	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label11;



















private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Button^ btnEditStudent;
private: System::Windows::Forms::Panel^ panelUpdateStudent;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::ComboBox^ cbUpdateStatusStudent;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ txtUpdateMotherNameStudent;
private: System::Windows::Forms::NumericUpDown^ nudUpdateAgeStudent;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ txtUpdateFatherNameStudent;
private: System::Windows::Forms::TextBox^ txtUpdateBirthDateStudent;
private: System::Windows::Forms::TextBox^ txtUpdateAddressStudent;
private: System::Windows::Forms::TextBox^ txtUpdateLastNameStudent;
private: System::Windows::Forms::TextBox^ txtUpdateMiddleNameStudent;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ txtUpdateFirstNameStudent;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ btnUpdateStudent;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ btnExitUpdateStudent;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ txtMotherStudent;
private: System::Windows::Forms::NumericUpDown^ nudAgeStudent;












































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(student::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelAddStudent = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtFatherStudent = (gcnew System::Windows::Forms::TextBox());
			this->txtBirthDataStudent = (gcnew System::Windows::Forms::TextBox());
			this->txtAddressStudent = (gcnew System::Windows::Forms::TextBox());
			this->txtLastNameStudent = (gcnew System::Windows::Forms::TextBox());
			this->txtMiddleNameStudent = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtFirstNameStudent = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSaveStudent = (gcnew System::Windows::Forms::Button());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->btnExitAddStudent = (gcnew System::Windows::Forms::Button());
			this->dataGridStudent = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteStudent = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAddStudent = (gcnew System::Windows::Forms::Button());
			this->btnExitStudent = (gcnew System::Windows::Forms::PictureBox());
			this->btnEditStudent = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nudAgeStudent = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtMotherStudent = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btnUpdateStudent = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateFirstNameStudent = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtUpdateMiddleNameStudent = (gcnew System::Windows::Forms::TextBox());
			this->txtUpdateLastNameStudent = (gcnew System::Windows::Forms::TextBox());
			this->txtUpdateAddressStudent = (gcnew System::Windows::Forms::TextBox());
			this->txtUpdateBirthDateStudent = (gcnew System::Windows::Forms::TextBox());
			this->txtUpdateFatherNameStudent = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->nudUpdateAgeStudent = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtUpdateMotherNameStudent = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->cbUpdateStatusStudent = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panelUpdateStudent = (gcnew System::Windows::Forms::Panel());
			this->btnExitUpdateStudent = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelAddStudent->SuspendLayout();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStudent))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitStudent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAgeStudent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudUpdateAgeStudent))->BeginInit();
			this->panelUpdateStudent->SuspendLayout();
			this->panel3->SuspendLayout();
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
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelUpdateStudent);
			this->tabPage1->Controls->Add(this->panelAddStudent);
			this->tabPage1->Controls->Add(this->dataGridStudent);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(689, 422);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Student";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelAddStudent
			// 
			this->panelAddStudent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelAddStudent->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddStudent->Controls->Add(this->label12);
			this->panelAddStudent->Controls->Add(this->label11);
			this->panelAddStudent->Controls->Add(this->txtMotherStudent);
			this->panelAddStudent->Controls->Add(this->nudAgeStudent);
			this->panelAddStudent->Controls->Add(this->label10);
			this->panelAddStudent->Controls->Add(this->label9);
			this->panelAddStudent->Controls->Add(this->txtFatherStudent);
			this->panelAddStudent->Controls->Add(this->txtBirthDataStudent);
			this->panelAddStudent->Controls->Add(this->txtAddressStudent);
			this->panelAddStudent->Controls->Add(this->txtLastNameStudent);
			this->panelAddStudent->Controls->Add(this->txtMiddleNameStudent);
			this->panelAddStudent->Controls->Add(this->label8);
			this->panelAddStudent->Controls->Add(this->label7);
			this->panelAddStudent->Controls->Add(this->txtFirstNameStudent);
			this->panelAddStudent->Controls->Add(this->label6);
			this->panelAddStudent->Controls->Add(this->label5);
			this->panelAddStudent->Controls->Add(this->btnSaveStudent);
			this->panelAddStudent->Controls->Add(this->panelTop);
			this->panelAddStudent->Location = System::Drawing::Point(5, 46);
			this->panelAddStudent->Name = L"panelAddStudent";
			this->panelAddStudent->Size = System::Drawing::Size(318, 290);
			this->panelAddStudent->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 207);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Father Name :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(58, 178);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Age :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(27, 151);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Birth Date :";
			// 
			// txtFatherStudent
			// 
			this->txtFatherStudent->Location = System::Drawing::Point(98, 204);
			this->txtFatherStudent->Name = L"txtFatherStudent";
			this->txtFatherStudent->Size = System::Drawing::Size(207, 22);
			this->txtFatherStudent->TabIndex = 20;
			// 
			// txtBirthDataStudent
			// 
			this->txtBirthDataStudent->Location = System::Drawing::Point(98, 148);
			this->txtBirthDataStudent->Name = L"txtBirthDataStudent";
			this->txtBirthDataStudent->Size = System::Drawing::Size(207, 22);
			this->txtBirthDataStudent->TabIndex = 18;
			// 
			// txtAddressStudent
			// 
			this->txtAddressStudent->Location = System::Drawing::Point(98, 120);
			this->txtAddressStudent->Name = L"txtAddressStudent";
			this->txtAddressStudent->Size = System::Drawing::Size(207, 22);
			this->txtAddressStudent->TabIndex = 17;
			// 
			// txtLastNameStudent
			// 
			this->txtLastNameStudent->Location = System::Drawing::Point(98, 92);
			this->txtLastNameStudent->Name = L"txtLastNameStudent";
			this->txtLastNameStudent->Size = System::Drawing::Size(207, 22);
			this->txtLastNameStudent->TabIndex = 16;
			// 
			// txtMiddleNameStudent
			// 
			this->txtMiddleNameStudent->Location = System::Drawing::Point(98, 64);
			this->txtMiddleNameStudent->Name = L"txtMiddleNameStudent";
			this->txtMiddleNameStudent->Size = System::Drawing::Size(207, 22);
			this->txtMiddleNameStudent->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(37, 123);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Address :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(24, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Last Name :";
			// 
			// txtFirstNameStudent
			// 
			this->txtFirstNameStudent->Location = System::Drawing::Point(98, 36);
			this->txtFirstNameStudent->Name = L"txtFirstNameStudent";
			this->txtFirstNameStudent->Size = System::Drawing::Size(207, 22);
			this->txtFirstNameStudent->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(8, 67);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Middle Name :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(23, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"First Name :";
			// 
			// btnSaveStudent
			// 
			this->btnSaveStudent->BackColor = System::Drawing::Color::DimGray;
			this->btnSaveStudent->FlatAppearance->BorderSize = 0;
			this->btnSaveStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveStudent->Location = System::Drawing::Point(266, 259);
			this->btnSaveStudent->Name = L"btnSaveStudent";
			this->btnSaveStudent->Size = System::Drawing::Size(39, 23);
			this->btnSaveStudent->TabIndex = 5;
			this->btnSaveStudent->Text = L"Save";
			this->btnSaveStudent->UseVisualStyleBackColor = false;
			this->btnSaveStudent->Click += gcnew System::EventHandler(this, &student::btnSaveStudent_Click);
			// 
			// panelTop
			// 
			this->panelTop->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panelTop->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panelTop->Controls->Add(this->btnExitAddStudent);
			this->panelTop->Location = System::Drawing::Point(-4, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(326, 28);
			this->panelTop->TabIndex = 2;
			// 
			// btnExitAddStudent
			// 
			this->btnExitAddStudent->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitAddStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitAddStudent.BackgroundImage")));
			this->btnExitAddStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitAddStudent->FlatAppearance->BorderSize = 0;
			this->btnExitAddStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitAddStudent->Location = System::Drawing::Point(293, 0);
			this->btnExitAddStudent->Name = L"btnExitAddStudent";
			this->btnExitAddStudent->Size = System::Drawing::Size(23, 28);
			this->btnExitAddStudent->TabIndex = 0;
			this->btnExitAddStudent->UseVisualStyleBackColor = false;
			this->btnExitAddStudent->Click += gcnew System::EventHandler(this, &student::btnExitAddStudent_Click);
			// 
			// dataGridStudent
			// 
			this->dataGridStudent->AllowUserToAddRows = false;
			this->dataGridStudent->AllowUserToDeleteRows = false;
			this->dataGridStudent->AllowUserToOrderColumns = true;
			this->dataGridStudent->AllowUserToResizeColumns = false;
			this->dataGridStudent->AllowUserToResizeRows = false;
			this->dataGridStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridStudent->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridStudent->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridStudent->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridStudent->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridStudent->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridStudent->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridStudent->Location = System::Drawing::Point(1, 42);
			this->dataGridStudent->MultiSelect = false;
			this->dataGridStudent->Name = L"dataGridStudent";
			this->dataGridStudent->ReadOnly = true;
			this->dataGridStudent->RowHeadersVisible = false;
			this->dataGridStudent->Size = System::Drawing::Size(689, 380);
			this->dataGridStudent->TabIndex = 1;
			this->dataGridStudent->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &student::dataGridStudent_CellClick);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->btnDeleteStudent);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btnEditStudent);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnAddStudent);
			this->panel1->Controls->Add(this->btnExitStudent);
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
			// btnDeleteStudent
			// 
			this->btnDeleteStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteStudent.BackgroundImage")));
			this->btnDeleteStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnDeleteStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteStudent->Location = System::Drawing::Point(574, 3);
			this->btnDeleteStudent->Name = L"btnDeleteStudent";
			this->btnDeleteStudent->Size = System::Drawing::Size(30, 32);
			this->btnDeleteStudent->TabIndex = 6;
			this->btnDeleteStudent->UseVisualStyleBackColor = true;
			this->btnDeleteStudent->Click += gcnew System::EventHandler(this, &student::btnDeleteStudent_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Add Student";
			// 
			// btnAddStudent
			// 
			this->btnAddStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddStudent.BackgroundImage")));
			this->btnAddStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnAddStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddStudent->Location = System::Drawing::Point(0, 3);
			this->btnAddStudent->Name = L"btnAddStudent";
			this->btnAddStudent->Size = System::Drawing::Size(30, 32);
			this->btnAddStudent->TabIndex = 2;
			this->btnAddStudent->UseVisualStyleBackColor = true;
			this->btnAddStudent->Click += gcnew System::EventHandler(this, &student::btnAddStudent_Click);
			// 
			// btnExitStudent
			// 
			this->btnExitStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitStudent.BackgroundImage")));
			this->btnExitStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnExitStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitStudent->Location = System::Drawing::Point(658, -4);
			this->btnExitStudent->Name = L"btnExitStudent";
			this->btnExitStudent->Size = System::Drawing::Size(29, 33);
			this->btnExitStudent->TabIndex = 1;
			this->btnExitStudent->TabStop = false;
			this->btnExitStudent->Click += gcnew System::EventHandler(this, &student::btnExitStudent_Click);
			// 
			// btnEditStudent
			// 
			this->btnEditStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnEditStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditStudent.BackgroundImage")));
			this->btnEditStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEditStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditStudent->Location = System::Drawing::Point(508, 3);
			this->btnEditStudent->Name = L"btnEditStudent";
			this->btnEditStudent->Size = System::Drawing::Size(30, 32);
			this->btnEditStudent->TabIndex = 4;
			this->btnEditStudent->UseVisualStyleBackColor = true;
			this->btnEditStudent->Click += gcnew System::EventHandler(this, &student::btnEditStudent_Click);
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
			// nudAgeStudent
			// 
			this->nudAgeStudent->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudAgeStudent->Location = System::Drawing::Point(98, 176);
			this->nudAgeStudent->Name = L"nudAgeStudent";
			this->nudAgeStudent->Size = System::Drawing::Size(207, 22);
			this->nudAgeStudent->TabIndex = 23;
			// 
			// txtMotherStudent
			// 
			this->txtMotherStudent->Location = System::Drawing::Point(98, 232);
			this->txtMotherStudent->Name = L"txtMotherStudent";
			this->txtMotherStudent->Size = System::Drawing::Size(207, 22);
			this->txtMotherStudent->TabIndex = 24;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(6, 235);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(86, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Mother Name :";
			// 
			// btnUpdateStudent
			// 
			this->btnUpdateStudent->BackColor = System::Drawing::Color::DimGray;
			this->btnUpdateStudent->FlatAppearance->BorderSize = 0;
			this->btnUpdateStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateStudent->Location = System::Drawing::Point(240, 285);
			this->btnUpdateStudent->Name = L"btnUpdateStudent";
			this->btnUpdateStudent->Size = System::Drawing::Size(65, 23);
			this->btnUpdateStudent->TabIndex = 5;
			this->btnUpdateStudent->Text = L"Update";
			this->btnUpdateStudent->UseVisualStyleBackColor = false;
			this->btnUpdateStudent->Click += gcnew System::EventHandler(this, &student::btnUpdateStudent_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(24, 38);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(69, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"First Name :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(9, 66);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(84, 13);
			this->label19->TabIndex = 8;
			this->label19->Text = L"Middle Name :";
			// 
			// txtUpdateFirstNameStudent
			// 
			this->txtUpdateFirstNameStudent->Location = System::Drawing::Point(99, 35);
			this->txtUpdateFirstNameStudent->Name = L"txtUpdateFirstNameStudent";
			this->txtUpdateFirstNameStudent->Size = System::Drawing::Size(207, 22);
			this->txtUpdateFirstNameStudent->TabIndex = 12;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(25, 94);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(68, 13);
			this->label18->TabIndex = 13;
			this->label18->Text = L"Last Name :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(38, 122);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 13);
			this->label17->TabIndex = 14;
			this->label17->Text = L"Address :";
			// 
			// txtUpdateMiddleNameStudent
			// 
			this->txtUpdateMiddleNameStudent->Location = System::Drawing::Point(99, 63);
			this->txtUpdateMiddleNameStudent->Name = L"txtUpdateMiddleNameStudent";
			this->txtUpdateMiddleNameStudent->Size = System::Drawing::Size(207, 22);
			this->txtUpdateMiddleNameStudent->TabIndex = 15;
			// 
			// txtUpdateLastNameStudent
			// 
			this->txtUpdateLastNameStudent->Location = System::Drawing::Point(99, 91);
			this->txtUpdateLastNameStudent->Name = L"txtUpdateLastNameStudent";
			this->txtUpdateLastNameStudent->Size = System::Drawing::Size(207, 22);
			this->txtUpdateLastNameStudent->TabIndex = 16;
			// 
			// txtUpdateAddressStudent
			// 
			this->txtUpdateAddressStudent->Location = System::Drawing::Point(99, 119);
			this->txtUpdateAddressStudent->Name = L"txtUpdateAddressStudent";
			this->txtUpdateAddressStudent->Size = System::Drawing::Size(207, 22);
			this->txtUpdateAddressStudent->TabIndex = 17;
			// 
			// txtUpdateBirthDateStudent
			// 
			this->txtUpdateBirthDateStudent->Location = System::Drawing::Point(99, 147);
			this->txtUpdateBirthDateStudent->Name = L"txtUpdateBirthDateStudent";
			this->txtUpdateBirthDateStudent->Size = System::Drawing::Size(207, 22);
			this->txtUpdateBirthDateStudent->TabIndex = 18;
			// 
			// txtUpdateFatherNameStudent
			// 
			this->txtUpdateFatherNameStudent->Location = System::Drawing::Point(99, 203);
			this->txtUpdateFatherNameStudent->Name = L"txtUpdateFatherNameStudent";
			this->txtUpdateFatherNameStudent->Size = System::Drawing::Size(207, 22);
			this->txtUpdateFatherNameStudent->TabIndex = 20;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(28, 150);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 13);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Birth Date :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(59, 177);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 13);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Age :";
			// 
			// nudUpdateAgeStudent
			// 
			this->nudUpdateAgeStudent->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudUpdateAgeStudent->Location = System::Drawing::Point(99, 175);
			this->nudUpdateAgeStudent->Name = L"nudUpdateAgeStudent";
			this->nudUpdateAgeStudent->Size = System::Drawing::Size(207, 22);
			this->nudUpdateAgeStudent->TabIndex = 23;
			// 
			// txtUpdateMotherNameStudent
			// 
			this->txtUpdateMotherNameStudent->Location = System::Drawing::Point(99, 231);
			this->txtUpdateMotherNameStudent->Name = L"txtUpdateMotherNameStudent";
			this->txtUpdateMotherNameStudent->Size = System::Drawing::Size(207, 22);
			this->txtUpdateMotherNameStudent->TabIndex = 24;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(13, 206);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Father Name :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(7, 234);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(86, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Mother Name :";
			// 
			// cbUpdateStatusStudent
			// 
			this->cbUpdateStatusStudent->FormattingEnabled = true;
			this->cbUpdateStatusStudent->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Enrolled", L"Not Enrolled", L"Graduated" });
			this->cbUpdateStatusStudent->Location = System::Drawing::Point(99, 258);
			this->cbUpdateStatusStudent->Name = L"cbUpdateStatusStudent";
			this->cbUpdateStatusStudent->Size = System::Drawing::Size(207, 21);
			this->cbUpdateStatusStudent->TabIndex = 27;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(48, 261);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(45, 13);
			this->label22->TabIndex = 28;
			this->label22->Text = L"Status :";
			// 
			// panelUpdateStudent
			// 
			this->panelUpdateStudent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelUpdateStudent->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelUpdateStudent->Controls->Add(this->label22);
			this->panelUpdateStudent->Controls->Add(this->cbUpdateStatusStudent);
			this->panelUpdateStudent->Controls->Add(this->label13);
			this->panelUpdateStudent->Controls->Add(this->label14);
			this->panelUpdateStudent->Controls->Add(this->txtUpdateMotherNameStudent);
			this->panelUpdateStudent->Controls->Add(this->nudUpdateAgeStudent);
			this->panelUpdateStudent->Controls->Add(this->label15);
			this->panelUpdateStudent->Controls->Add(this->label16);
			this->panelUpdateStudent->Controls->Add(this->txtUpdateFatherNameStudent);
			this->panelUpdateStudent->Controls->Add(this->txtUpdateBirthDateStudent);
			this->panelUpdateStudent->Controls->Add(this->txtUpdateAddressStudent);
			this->panelUpdateStudent->Controls->Add(this->txtUpdateLastNameStudent);
			this->panelUpdateStudent->Controls->Add(this->txtUpdateMiddleNameStudent);
			this->panelUpdateStudent->Controls->Add(this->label17);
			this->panelUpdateStudent->Controls->Add(this->label18);
			this->panelUpdateStudent->Controls->Add(this->txtUpdateFirstNameStudent);
			this->panelUpdateStudent->Controls->Add(this->label19);
			this->panelUpdateStudent->Controls->Add(this->label20);
			this->panelUpdateStudent->Controls->Add(this->btnUpdateStudent);
			this->panelUpdateStudent->Controls->Add(this->panel3);
			this->panelUpdateStudent->Location = System::Drawing::Point(334, 47);
			this->panelUpdateStudent->Name = L"panelUpdateStudent";
			this->panelUpdateStudent->Size = System::Drawing::Size(319, 317);
			this->panelUpdateStudent->TabIndex = 3;
			// 
			// btnExitUpdateStudent
			// 
			this->btnExitUpdateStudent->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitUpdateStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitUpdateStudent.BackgroundImage")));
			this->btnExitUpdateStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitUpdateStudent->FlatAppearance->BorderSize = 0;
			this->btnExitUpdateStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitUpdateStudent->Location = System::Drawing::Point(293, 0);
			this->btnExitUpdateStudent->Name = L"btnExitUpdateStudent";
			this->btnExitUpdateStudent->Size = System::Drawing::Size(23, 28);
			this->btnExitUpdateStudent->TabIndex = 0;
			this->btnExitUpdateStudent->UseVisualStyleBackColor = false;
			this->btnExitUpdateStudent->Click += gcnew System::EventHandler(this, &student::btnExitUpdateStudent_Click);
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel3->Controls->Add(this->btnExitUpdateStudent);
			this->panel3->Location = System::Drawing::Point(-4, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(326, 28);
			this->panel3->TabIndex = 2;
			// 
			// student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 450);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"student";
			this->Text = L"student";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &student::student_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelAddStudent->ResumeLayout(false);
			this->panelAddStudent->PerformLayout();
			this->panelTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStudent))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitStudent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAgeStudent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudUpdateAgeStudent))->EndInit();
			this->panelUpdateStudent->ResumeLayout(false);
			this->panelUpdateStudent->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = elementary_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridStudent(){

	try
	{
		conn->Open();

		MySqlDataAdapter^ studentAdapter = gcnew MySqlDataAdapter("SELECT * FROM tbl_student", conn);
		DataTable^ studentTable = gcnew DataTable();

		studentAdapter->Fill(studentTable);

		dataGridStudent->DataSource = studentTable;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Been Occured While Populating The Grid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

void clearFields(){

	txtUpdateFirstNameStudent->Clear();
	txtUpdateMiddleNameStudent->Clear();
	txtUpdateLastNameStudent->Clear();
	txtUpdateAddressStudent->Clear();
	txtUpdateBirthDateStudent->Clear();
	nudUpdateAgeStudent->Value = 0;
	txtUpdateFatherNameStudent->Clear();
	txtUpdateMotherNameStudent->Clear();
	cbUpdateStatusStudent->Text = "";

}

private: System::Void student_Load(System::Object^ sender, System::EventArgs^ e) {

	populateGridStudent();
}

private: System::Void btnAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddStudent->Show();
}

private: System::Void btnExitAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddStudent->Hide();
}

private: System::Void btnSaveStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ getStudentName = txtFirstNameStudent->Text;
	String^ getStudentMiddleName = txtMiddleNameStudent->Text;
	String^ getStudentLastName = txtLastNameStudent->Text;
	String^ getStudentAddress = txtAddressStudent->Text;
	String^ getStudentBirthDate = txtBirthDataStudent->Text;
	int getStudentAge = Convert::ToInt16(nudAgeStudent->Value);
	String^ getStudentFatherName = txtFatherStudent->Text;
	String^ getStudentMotherName = txtMotherStudent->Text;
	bool isValid = true;

	if ( txtFirstNameStudent->Text->Trim()->Length <= 3 || txtMiddleNameStudent->Text->Trim()->Length <= 3 || txtLastNameStudent->Text->Trim()->Length <= 3 || txtAddressStudent->Text->Trim()->Length <= 3 || txtBirthDataStudent->Text->Trim()->Length <=3 || nudAgeStudent->Value <= 0 || txtFatherStudent->Text->Trim()->Length <=3 || txtMotherStudent->Text->Trim()->Length <= 3)
	{
		isValid = false;
	}

	if (isValid)
	{
		try
		{
			conn->Open();

			String^ commandStringStudent = "INSERT INTO tbl_student(first_name, middle_name, last_name, address, birth_date, age, father_name, mother_name) VALUES(@first_name, @middle_name, @last_name, @address, @birth_date, @age, @father_name, @mother_name)";
			MySqlCommand^ commandStudent = gcnew MySqlCommand(commandStringStudent, conn);

			commandStudent->Parameters->AddWithValue("@first_name", getStudentName);
			commandStudent->Parameters->AddWithValue("@middle_name", getStudentMiddleName);
			commandStudent->Parameters->AddWithValue("@last_name", getStudentLastName);
			commandStudent->Parameters->AddWithValue("@address", getStudentAddress);
			commandStudent->Parameters->AddWithValue("@birth_date", getStudentBirthDate);
			commandStudent->Parameters->AddWithValue("@age", getStudentAge);
			commandStudent->Parameters->AddWithValue("@father_name", getStudentFatherName);
			commandStudent->Parameters->AddWithValue("@mother_name", getStudentMotherName);

			commandStudent->ExecuteNonQuery();

			MessageBox::Show("Studetn Details Has Been Added", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();

			txtFirstNameStudent->Clear();
			txtMiddleNameStudent->Clear();
			txtLastNameStudent->Clear();
			txtAddressStudent->Clear();
			txtBirthDataStudent->Clear();
			nudAgeStudent->Value = 0;
			txtFatherStudent->Clear();
			txtMotherStudent->Clear();

			populateGridStudent();

		}

		catch (Exception^ e)
		{
			(void) e;
			MessageBox::Show("Error Has Been Occured While Adding Student Details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	
	else
	{
		MessageBox::Show("Please Fill Out The Form Before Adding It In Database", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	
}

private: System::Void btnEditStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	panelUpdateStudent->Show();
}

private: System::Void btnExitUpdateStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	panelUpdateStudent->Hide();

	clearFields();
}

private: System::Void dataGridStudent_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ currentStudentID = dataGridStudent->Rows[dataGridStudent->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ studentUpdateAdapter = gcnew MySqlDataAdapter("SELECT * FROM tbl_student WHERE student_id = " + currentStudentID, conn);
		DataTable^ studentUpdateTable = gcnew DataTable();

		studentUpdateAdapter->Fill(studentUpdateTable);

		txtUpdateFirstNameStudent->Text = studentUpdateTable->Rows[0]->ItemArray[1]->ToString();
		txtUpdateMiddleNameStudent->Text = studentUpdateTable->Rows[0]->ItemArray[2]->ToString();
		txtUpdateLastNameStudent->Text = studentUpdateTable->Rows[0]->ItemArray[3]->ToString();
		txtUpdateAddressStudent->Text = studentUpdateTable->Rows[0]->ItemArray[4]->ToString();
		txtUpdateBirthDateStudent->Text = studentUpdateTable->Rows[0]->ItemArray[5]->ToString();
		nudUpdateAgeStudent->Value = Convert::ToInt16(studentUpdateTable->Rows[0]->ItemArray[6]->ToString());
		txtUpdateFatherNameStudent->Text = studentUpdateTable->Rows[0]->ItemArray[7]->ToString();
		txtUpdateMotherNameStudent->Text = studentUpdateTable->Rows[0]->ItemArray[8]->ToString();
		cbUpdateStatusStudent->Text = studentUpdateTable->Rows[0]->ItemArray[9]->ToString();

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void btnUpdateStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentStudentID = dataGridStudent->Rows[dataGridStudent->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ getUpdateStudentName = txtUpdateFirstNameStudent->Text;
	String^ getUpdateStudentMiddleName = txtUpdateMiddleNameStudent->Text;
	String^ getUpdateStudentLastName = txtUpdateLastNameStudent->Text;
	String^ getUpdateStudentAddress = txtUpdateAddressStudent->Text;
	String^ getUpdateStudentBirthDate = txtUpdateBirthDateStudent->Text;
	int getUpdateStudentAge = Convert::ToInt16(nudUpdateAgeStudent->Value);
	String^ getUpdateStudentFatherName = txtUpdateFatherNameStudent->Text;
	String^ getUpdateStudentMotherName = txtUpdateMotherNameStudent->Text;
	String^ getUpdateStudentStatus = cbUpdateStatusStudent->Text;
	bool isValid = true;

	if (txtUpdateFirstNameStudent->Text->Trim()->Length <= 3 || txtUpdateMiddleNameStudent->Text->Trim()->Length <= 3 || txtUpdateLastNameStudent->Text->Trim()->Length <= 3 || txtUpdateAddressStudent->Text->Trim()->Length <= 3 || txtUpdateBirthDateStudent->Text->Trim()->Length <= 3 || nudUpdateAgeStudent->Value <= 0 || txtUpdateFatherNameStudent->Text->Trim()->Length <= 3 || txtUpdateMotherNameStudent->Text->Trim()->Length <= 3 || cbUpdateStatusStudent->Text->Trim()->Length <= 0)
	{
		isValid = false;
	}

	
	try
	{  
		if (isValid)
		{
			if (MessageBox::Show("Are You Sure You Want To Update This Student Details?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
			{
				conn->Open();

				MySqlCommand^ commandUpdateStudent = gcnew MySqlCommand("UPDATE tbl_student SET first_name = @first_name, middle_name = @middle_name, last_name = @last_name, address = @address, birth_date = @birth_date, age = @age, father_name = @father_name, mother_name = @mother_name, status = @status WHERE student_id = " + currentStudentID, conn);

				commandUpdateStudent->Parameters->AddWithValue("@first_name", getUpdateStudentName);
				commandUpdateStudent->Parameters->AddWithValue("@middle_name", getUpdateStudentMiddleName);
				commandUpdateStudent->Parameters->AddWithValue("@last_name", getUpdateStudentLastName);
				commandUpdateStudent->Parameters->AddWithValue("@address", getUpdateStudentAddress);
				commandUpdateStudent->Parameters->AddWithValue("@birth_date", getUpdateStudentBirthDate);
				commandUpdateStudent->Parameters->AddWithValue("@age", getUpdateStudentAge);
				commandUpdateStudent->Parameters->AddWithValue("@father_name", getUpdateStudentFatherName);
				commandUpdateStudent->Parameters->AddWithValue("@mother_name", getUpdateStudentMotherName);
				commandUpdateStudent->Parameters->AddWithValue("@status", getUpdateStudentStatus);

				commandUpdateStudent->ExecuteNonQuery();

				MessageBox::Show("Student Details Has Been Updated", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

				conn->Close();

				clearFields();

				populateGridStudent();
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
		MessageBox::Show("Error Has Been Occured While Updating Student Details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnDeleteStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentStudentID = dataGridStudent->Rows[dataGridStudent->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Delete This Student Details?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commandDeleteStudent = gcnew MySqlCommand("DELETE FROM tbl_student WHERE student_id = " + currentStudentID, conn);

			commandDeleteStudent->ExecuteNonQuery();

			MessageBox::Show("Student Details Has Been Deleted", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();

			clearFields();

			populateGridStudent();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Been Occured While Deleting Student Details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void btnExitStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	student::Close();
}

};

}
