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
	/// Summary for enrollment
	/// </summary>
	public ref class enrollment : public System::Windows::Forms::Form
	{
	public:
		enrollment(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			panelEnrollStudent->Hide();
			panelEnrollAddStudent->Hide();
			panelEnrollAddSection->Hide();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~enrollment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panelEnrollAddStudent;




















	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnExitEnrollAddStudent;

































	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnDeleteEnrollStudent;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnEnrollStudent;
	private: System::Windows::Forms::PictureBox^ btnExitEnrollStudent;







	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridEnrollAddStudent;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnEnrollAddStudent;





private: System::Windows::Forms::Panel^ panelEnrollAddSection;
private: System::Windows::Forms::TabControl^ tabControl3;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::DataGridView^ dataGridEnrollAddSection;


private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ btnEnrollAddSection;

private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Button^ btnExitEnrollAddSection;
private: System::Windows::Forms::Panel^ panelEnrollStudent;
private: System::Windows::Forms::NumericUpDown^ nudEnrollSectionID;
private: System::Windows::Forms::NumericUpDown^ nudEnrollStudentID;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Button^ btnEnrollSearchStudent;
private: System::Windows::Forms::Button^ btnEnrollSearchSection;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Button^ btnSaveEnrollStudent;
private: System::Windows::Forms::Panel^ panelTop;
private: System::Windows::Forms::Button^ btnExitEnrollStudentTwo;
private: System::Windows::Forms::DataGridView^ dataGridEnrollStudent;
private: System::Windows::Forms::TextBox^ txtEnrollStudentTeacher;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ txtEnrollStudentSection;
private: System::Windows::Forms::TextBox^ txtEnrollStudentLevel;
private: System::Windows::Forms::TextBox^ txtEnrollStudentLastName;
private: System::Windows::Forms::TextBox^ txtEnrollStudentMiddleName;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ txtEnrollStudentFirstNane;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ txtEnrollStudentAY;
private: System::Windows::Forms::NumericUpDown^ nudEnrollAcademicID;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Button^ btnSearchName;
private: System::Windows::Forms::TextBox^ txtSearchName;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(enrollment::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelEnrollAddSection = (gcnew System::Windows::Forms::Panel());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridEnrollAddSection = (gcnew System::Windows::Forms::DataGridView());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btnEnrollAddSection = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnExitEnrollAddSection = (gcnew System::Windows::Forms::Button());
			this->panelEnrollAddStudent = (gcnew System::Windows::Forms::Panel());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->btnSearchName = (gcnew System::Windows::Forms::Button());
			this->txtSearchName = (gcnew System::Windows::Forms::TextBox());
			this->dataGridEnrollAddStudent = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnEnrollAddStudent = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnExitEnrollAddStudent = (gcnew System::Windows::Forms::Button());
			this->panelEnrollStudent = (gcnew System::Windows::Forms::Panel());
			this->nudEnrollAcademicID = (gcnew System::Windows::Forms::NumericUpDown());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtEnrollStudentAY = (gcnew System::Windows::Forms::TextBox());
			this->nudEnrollSectionID = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudEnrollStudentID = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btnEnrollSearchStudent = (gcnew System::Windows::Forms::Button());
			this->btnEnrollSearchSection = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtEnrollStudentTeacher = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtEnrollStudentSection = (gcnew System::Windows::Forms::TextBox());
			this->txtEnrollStudentLevel = (gcnew System::Windows::Forms::TextBox());
			this->txtEnrollStudentLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtEnrollStudentMiddleName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtEnrollStudentFirstNane = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSaveEnrollStudent = (gcnew System::Windows::Forms::Button());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->btnExitEnrollStudentTwo = (gcnew System::Windows::Forms::Button());
			this->dataGridEnrollStudent = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteEnrollStudent = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnEnrollStudent = (gcnew System::Windows::Forms::Button());
			this->btnExitEnrollStudent = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelEnrollAddSection->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollAddSection))->BeginInit();
			this->panel4->SuspendLayout();
			this->panelEnrollAddStudent->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollAddStudent))->BeginInit();
			this->panel3->SuspendLayout();
			this->panelEnrollStudent->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudEnrollAcademicID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudEnrollSectionID))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudEnrollStudentID))->BeginInit();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollStudent))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitEnrollStudent))->BeginInit();
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
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelEnrollAddSection);
			this->tabPage1->Controls->Add(this->panelEnrollAddStudent);
			this->tabPage1->Controls->Add(this->panelEnrollStudent);
			this->tabPage1->Controls->Add(this->dataGridEnrollStudent);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(689, 422);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Enrollment";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelEnrollAddSection
			// 
			this->panelEnrollAddSection->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelEnrollAddSection->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelEnrollAddSection->Controls->Add(this->tabControl3);
			this->panelEnrollAddSection->Controls->Add(this->panel4);
			this->panelEnrollAddSection->Location = System::Drawing::Point(331, 47);
			this->panelEnrollAddSection->Name = L"panelEnrollAddSection";
			this->panelEnrollAddSection->Size = System::Drawing::Size(319, 368);
			this->panelEnrollAddSection->TabIndex = 4;
			// 
			// tabControl3
			// 
			this->tabControl3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl3->Controls->Add(this->tabPage2);
			this->tabControl3->Location = System::Drawing::Point(2, 33);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(315, 331);
			this->tabControl3->TabIndex = 3;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridEnrollAddSection);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->btnEnrollAddSection);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(307, 305);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Section";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridEnrollAddSection
			// 
			this->dataGridEnrollAddSection->AllowUserToAddRows = false;
			this->dataGridEnrollAddSection->AllowUserToDeleteRows = false;
			this->dataGridEnrollAddSection->AllowUserToOrderColumns = true;
			this->dataGridEnrollAddSection->AllowUserToResizeColumns = false;
			this->dataGridEnrollAddSection->AllowUserToResizeRows = false;
			this->dataGridEnrollAddSection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridEnrollAddSection->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridEnrollAddSection->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridEnrollAddSection->BackgroundColor = System::Drawing::Color::White;
			this->dataGridEnrollAddSection->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridEnrollAddSection->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridEnrollAddSection->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridEnrollAddSection->Location = System::Drawing::Point(3, 37);
			this->dataGridEnrollAddSection->MultiSelect = false;
			this->dataGridEnrollAddSection->Name = L"dataGridEnrollAddSection";
			this->dataGridEnrollAddSection->ReadOnly = true;
			this->dataGridEnrollAddSection->RowHeadersVisible = false;
			this->dataGridEnrollAddSection->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridEnrollAddSection->Size = System::Drawing::Size(301, 265);
			this->dataGridEnrollAddSection->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(31, 13);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 15);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Add Section";
			// 
			// btnEnrollAddSection
			// 
			this->btnEnrollAddSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEnrollAddSection.BackgroundImage")));
			this->btnEnrollAddSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEnrollAddSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnrollAddSection->Location = System::Drawing::Point(3, 3);
			this->btnEnrollAddSection->Name = L"btnEnrollAddSection";
			this->btnEnrollAddSection->Size = System::Drawing::Size(30, 32);
			this->btnEnrollAddSection->TabIndex = 8;
			this->btnEnrollAddSection->UseVisualStyleBackColor = true;
			this->btnEnrollAddSection->Click += gcnew System::EventHandler(this, &enrollment::btnEnrollAddSection_Click);
			// 
			// panel4
			// 
			this->panel4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel4->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel4->Controls->Add(this->btnExitEnrollAddSection);
			this->panel4->Location = System::Drawing::Point(-4, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(326, 28);
			this->panel4->TabIndex = 2;
			// 
			// btnExitEnrollAddSection
			// 
			this->btnExitEnrollAddSection->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitEnrollAddSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitEnrollAddSection.BackgroundImage")));
			this->btnExitEnrollAddSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitEnrollAddSection->FlatAppearance->BorderSize = 0;
			this->btnExitEnrollAddSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitEnrollAddSection->Location = System::Drawing::Point(293, 0);
			this->btnExitEnrollAddSection->Name = L"btnExitEnrollAddSection";
			this->btnExitEnrollAddSection->Size = System::Drawing::Size(23, 28);
			this->btnExitEnrollAddSection->TabIndex = 0;
			this->btnExitEnrollAddSection->UseVisualStyleBackColor = false;
			this->btnExitEnrollAddSection->Click += gcnew System::EventHandler(this, &enrollment::btnExitEnrollAddSection_Click);
			// 
			// panelEnrollAddStudent
			// 
			this->panelEnrollAddStudent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelEnrollAddStudent->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelEnrollAddStudent->Controls->Add(this->tabControl2);
			this->panelEnrollAddStudent->Controls->Add(this->panel3);
			this->panelEnrollAddStudent->Location = System::Drawing::Point(330, 48);
			this->panelEnrollAddStudent->Name = L"panelEnrollAddStudent";
			this->panelEnrollAddStudent->Size = System::Drawing::Size(319, 368);
			this->panelEnrollAddStudent->TabIndex = 1;
			// 
			// tabControl2
			// 
			this->tabControl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Location = System::Drawing::Point(2, 33);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(315, 331);
			this->tabControl2->TabIndex = 3;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->btnSearchName);
			this->tabPage3->Controls->Add(this->txtSearchName);
			this->tabPage3->Controls->Add(this->dataGridEnrollAddStudent);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->btnEnrollAddStudent);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(307, 305);
			this->tabPage3->TabIndex = 1;
			this->tabPage3->Text = L"Student";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// btnSearchName
			// 
			this->btnSearchName->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSearchName.BackgroundImage")));
			this->btnSearchName->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnSearchName->FlatAppearance->BorderSize = 0;
			this->btnSearchName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearchName->Location = System::Drawing::Point(277, 9);
			this->btnSearchName->Name = L"btnSearchName";
			this->btnSearchName->Size = System::Drawing::Size(27, 23);
			this->btnSearchName->TabIndex = 34;
			this->btnSearchName->UseVisualStyleBackColor = true;
			this->btnSearchName->Click += gcnew System::EventHandler(this, &enrollment::btnSearchName_Click);
			// 
			// txtSearchName
			// 
			this->txtSearchName->Location = System::Drawing::Point(140, 9);
			this->txtSearchName->Name = L"txtSearchName";
			this->txtSearchName->Size = System::Drawing::Size(135, 22);
			this->txtSearchName->TabIndex = 11;
			// 
			// dataGridEnrollAddStudent
			// 
			this->dataGridEnrollAddStudent->AllowUserToAddRows = false;
			this->dataGridEnrollAddStudent->AllowUserToDeleteRows = false;
			this->dataGridEnrollAddStudent->AllowUserToOrderColumns = true;
			this->dataGridEnrollAddStudent->AllowUserToResizeColumns = false;
			this->dataGridEnrollAddStudent->AllowUserToResizeRows = false;
			this->dataGridEnrollAddStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridEnrollAddStudent->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridEnrollAddStudent->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridEnrollAddStudent->BackgroundColor = System::Drawing::Color::White;
			this->dataGridEnrollAddStudent->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridEnrollAddStudent->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridEnrollAddStudent->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridEnrollAddStudent->Location = System::Drawing::Point(3, 41);
			this->dataGridEnrollAddStudent->MultiSelect = false;
			this->dataGridEnrollAddStudent->Name = L"dataGridEnrollAddStudent";
			this->dataGridEnrollAddStudent->ReadOnly = true;
			this->dataGridEnrollAddStudent->RowHeadersVisible = false;
			this->dataGridEnrollAddStudent->Size = System::Drawing::Size(301, 261);
			this->dataGridEnrollAddStudent->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Add Student";
			// 
			// btnEnrollAddStudent
			// 
			this->btnEnrollAddStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEnrollAddStudent.BackgroundImage")));
			this->btnEnrollAddStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEnrollAddStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnrollAddStudent->Location = System::Drawing::Point(3, 3);
			this->btnEnrollAddStudent->Name = L"btnEnrollAddStudent";
			this->btnEnrollAddStudent->Size = System::Drawing::Size(30, 32);
			this->btnEnrollAddStudent->TabIndex = 8;
			this->btnEnrollAddStudent->UseVisualStyleBackColor = true;
			this->btnEnrollAddStudent->Click += gcnew System::EventHandler(this, &enrollment::btnEnrollAddStudent_Click);
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel3->Controls->Add(this->btnExitEnrollAddStudent);
			this->panel3->Location = System::Drawing::Point(-4, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(326, 28);
			this->panel3->TabIndex = 2;
			// 
			// btnExitEnrollAddStudent
			// 
			this->btnExitEnrollAddStudent->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitEnrollAddStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitEnrollAddStudent.BackgroundImage")));
			this->btnExitEnrollAddStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitEnrollAddStudent->FlatAppearance->BorderSize = 0;
			this->btnExitEnrollAddStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitEnrollAddStudent->Location = System::Drawing::Point(293, 0);
			this->btnExitEnrollAddStudent->Name = L"btnExitEnrollAddStudent";
			this->btnExitEnrollAddStudent->Size = System::Drawing::Size(23, 28);
			this->btnExitEnrollAddStudent->TabIndex = 0;
			this->btnExitEnrollAddStudent->UseVisualStyleBackColor = false;
			this->btnExitEnrollAddStudent->Click += gcnew System::EventHandler(this, &enrollment::btnExitEnrollAddStudent_Click);
			// 
			// panelEnrollStudent
			// 
			this->panelEnrollStudent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelEnrollStudent->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelEnrollStudent->Controls->Add(this->nudEnrollAcademicID);
			this->panelEnrollStudent->Controls->Add(this->label14);
			this->panelEnrollStudent->Controls->Add(this->label13);
			this->panelEnrollStudent->Controls->Add(this->txtEnrollStudentAY);
			this->panelEnrollStudent->Controls->Add(this->nudEnrollSectionID);
			this->panelEnrollStudent->Controls->Add(this->nudEnrollStudentID);
			this->panelEnrollStudent->Controls->Add(this->label12);
			this->panelEnrollStudent->Controls->Add(this->btnEnrollSearchStudent);
			this->panelEnrollStudent->Controls->Add(this->btnEnrollSearchSection);
			this->panelEnrollStudent->Controls->Add(this->label4);
			this->panelEnrollStudent->Controls->Add(this->txtEnrollStudentTeacher);
			this->panelEnrollStudent->Controls->Add(this->label10);
			this->panelEnrollStudent->Controls->Add(this->label9);
			this->panelEnrollStudent->Controls->Add(this->txtEnrollStudentSection);
			this->panelEnrollStudent->Controls->Add(this->txtEnrollStudentLevel);
			this->panelEnrollStudent->Controls->Add(this->txtEnrollStudentLastName);
			this->panelEnrollStudent->Controls->Add(this->txtEnrollStudentMiddleName);
			this->panelEnrollStudent->Controls->Add(this->label8);
			this->panelEnrollStudent->Controls->Add(this->label7);
			this->panelEnrollStudent->Controls->Add(this->txtEnrollStudentFirstNane);
			this->panelEnrollStudent->Controls->Add(this->label6);
			this->panelEnrollStudent->Controls->Add(this->label5);
			this->panelEnrollStudent->Controls->Add(this->btnSaveEnrollStudent);
			this->panelEnrollStudent->Controls->Add(this->panelTop);
			this->panelEnrollStudent->Location = System::Drawing::Point(6, 47);
			this->panelEnrollStudent->Name = L"panelEnrollStudent";
			this->panelEnrollStudent->Size = System::Drawing::Size(318, 346);
			this->panelEnrollStudent->TabIndex = 2;
			// 
			// nudEnrollAcademicID
			// 
			this->nudEnrollAcademicID->Enabled = false;
			this->nudEnrollAcademicID->Location = System::Drawing::Point(98, 146);
			this->nudEnrollAcademicID->Name = L"nudEnrollAcademicID";
			this->nudEnrollAcademicID->ReadOnly = true;
			this->nudEnrollAcademicID->Size = System::Drawing::Size(207, 22);
			this->nudEnrollAcademicID->TabIndex = 33;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(15, 148);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(77, 13);
			this->label14->TabIndex = 32;
			this->label14->Text = L"Academic ID :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 177);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(88, 13);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Academic Year :";
			// 
			// txtEnrollStudentAY
			// 
			this->txtEnrollStudentAY->Enabled = false;
			this->txtEnrollStudentAY->Location = System::Drawing::Point(97, 174);
			this->txtEnrollStudentAY->Name = L"txtEnrollStudentAY";
			this->txtEnrollStudentAY->ReadOnly = true;
			this->txtEnrollStudentAY->Size = System::Drawing::Size(207, 22);
			this->txtEnrollStudentAY->TabIndex = 30;
			// 
			// nudEnrollSectionID
			// 
			this->nudEnrollSectionID->Enabled = false;
			this->nudEnrollSectionID->Location = System::Drawing::Point(97, 202);
			this->nudEnrollSectionID->Name = L"nudEnrollSectionID";
			this->nudEnrollSectionID->ReadOnly = true;
			this->nudEnrollSectionID->Size = System::Drawing::Size(174, 22);
			this->nudEnrollSectionID->TabIndex = 29;
			// 
			// nudEnrollStudentID
			// 
			this->nudEnrollStudentID->Enabled = false;
			this->nudEnrollStudentID->Location = System::Drawing::Point(98, 33);
			this->nudEnrollStudentID->Name = L"nudEnrollStudentID";
			this->nudEnrollStudentID->ReadOnly = true;
			this->nudEnrollStudentID->Size = System::Drawing::Size(174, 22);
			this->nudEnrollStudentID->TabIndex = 5;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(26, 206);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Section ID :";
			// 
			// btnEnrollSearchStudent
			// 
			this->btnEnrollSearchStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEnrollSearchStudent.BackgroundImage")));
			this->btnEnrollSearchStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEnrollSearchStudent->FlatAppearance->BorderSize = 0;
			this->btnEnrollSearchStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnrollSearchStudent->Location = System::Drawing::Point(278, 34);
			this->btnEnrollSearchStudent->Name = L"btnEnrollSearchStudent";
			this->btnEnrollSearchStudent->Size = System::Drawing::Size(27, 23);
			this->btnEnrollSearchStudent->TabIndex = 26;
			this->btnEnrollSearchStudent->UseVisualStyleBackColor = true;
			this->btnEnrollSearchStudent->Click += gcnew System::EventHandler(this, &enrollment::btnEnrollSearchStudent_Click);
			// 
			// btnEnrollSearchSection
			// 
			this->btnEnrollSearchSection->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEnrollSearchSection.BackgroundImage")));
			this->btnEnrollSearchSection->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEnrollSearchSection->FlatAppearance->BorderSize = 0;
			this->btnEnrollSearchSection->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnrollSearchSection->Location = System::Drawing::Point(277, 206);
			this->btnEnrollSearchSection->Name = L"btnEnrollSearchSection";
			this->btnEnrollSearchSection->Size = System::Drawing::Size(27, 23);
			this->btnEnrollSearchSection->TabIndex = 27;
			this->btnEnrollSearchSection->UseVisualStyleBackColor = true;
			this->btnEnrollSearchSection->Click += gcnew System::EventHandler(this, &enrollment::btnEnrollSearchSection_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Student ID :";
			// 
			// txtEnrollStudentTeacher
			// 
			this->txtEnrollStudentTeacher->Location = System::Drawing::Point(97, 286);
			this->txtEnrollStudentTeacher->Name = L"txtEnrollStudentTeacher";
			this->txtEnrollStudentTeacher->ReadOnly = true;
			this->txtEnrollStudentTeacher->Size = System::Drawing::Size(207, 22);
			this->txtEnrollStudentTeacher->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(2, 289);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Adviser  Name :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(39, 262);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Section :";
			// 
			// txtEnrollStudentSection
			// 
			this->txtEnrollStudentSection->Location = System::Drawing::Point(97, 259);
			this->txtEnrollStudentSection->Name = L"txtEnrollStudentSection";
			this->txtEnrollStudentSection->ReadOnly = true;
			this->txtEnrollStudentSection->Size = System::Drawing::Size(207, 22);
			this->txtEnrollStudentSection->TabIndex = 18;
			// 
			// txtEnrollStudentLevel
			// 
			this->txtEnrollStudentLevel->Location = System::Drawing::Point(97, 230);
			this->txtEnrollStudentLevel->Name = L"txtEnrollStudentLevel";
			this->txtEnrollStudentLevel->ReadOnly = true;
			this->txtEnrollStudentLevel->Size = System::Drawing::Size(207, 22);
			this->txtEnrollStudentLevel->TabIndex = 17;
			// 
			// txtEnrollStudentLastName
			// 
			this->txtEnrollStudentLastName->Location = System::Drawing::Point(98, 118);
			this->txtEnrollStudentLastName->Name = L"txtEnrollStudentLastName";
			this->txtEnrollStudentLastName->ReadOnly = true;
			this->txtEnrollStudentLastName->Size = System::Drawing::Size(207, 22);
			this->txtEnrollStudentLastName->TabIndex = 16;
			// 
			// txtEnrollStudentMiddleName
			// 
			this->txtEnrollStudentMiddleName->Location = System::Drawing::Point(98, 90);
			this->txtEnrollStudentMiddleName->Name = L"txtEnrollStudentMiddleName";
			this->txtEnrollStudentMiddleName->ReadOnly = true;
			this->txtEnrollStudentMiddleName->Size = System::Drawing::Size(207, 22);
			this->txtEnrollStudentMiddleName->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(46, 233);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Grade :";
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
			// txtEnrollStudentFirstNane
			// 
			this->txtEnrollStudentFirstNane->Location = System::Drawing::Point(98, 62);
			this->txtEnrollStudentFirstNane->Name = L"txtEnrollStudentFirstNane";
			this->txtEnrollStudentFirstNane->ReadOnly = true;
			this->txtEnrollStudentFirstNane->Size = System::Drawing::Size(207, 22);
			this->txtEnrollStudentFirstNane->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(8, 93);
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
			this->label5->Location = System::Drawing::Point(23, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"First Name :";
			// 
			// btnSaveEnrollStudent
			// 
			this->btnSaveEnrollStudent->BackColor = System::Drawing::Color::DimGray;
			this->btnSaveEnrollStudent->FlatAppearance->BorderSize = 0;
			this->btnSaveEnrollStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveEnrollStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveEnrollStudent->Location = System::Drawing::Point(265, 314);
			this->btnSaveEnrollStudent->Name = L"btnSaveEnrollStudent";
			this->btnSaveEnrollStudent->Size = System::Drawing::Size(39, 23);
			this->btnSaveEnrollStudent->TabIndex = 5;
			this->btnSaveEnrollStudent->Text = L"Save";
			this->btnSaveEnrollStudent->UseVisualStyleBackColor = false;
			this->btnSaveEnrollStudent->Click += gcnew System::EventHandler(this, &enrollment::btnSaveEnrollStudent_Click);
			// 
			// panelTop
			// 
			this->panelTop->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panelTop->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panelTop->Controls->Add(this->btnExitEnrollStudentTwo);
			this->panelTop->Location = System::Drawing::Point(-4, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(326, 28);
			this->panelTop->TabIndex = 2;
			// 
			// btnExitEnrollStudentTwo
			// 
			this->btnExitEnrollStudentTwo->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitEnrollStudentTwo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitEnrollStudentTwo.BackgroundImage")));
			this->btnExitEnrollStudentTwo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitEnrollStudentTwo->FlatAppearance->BorderSize = 0;
			this->btnExitEnrollStudentTwo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitEnrollStudentTwo->Location = System::Drawing::Point(293, 0);
			this->btnExitEnrollStudentTwo->Name = L"btnExitEnrollStudentTwo";
			this->btnExitEnrollStudentTwo->Size = System::Drawing::Size(23, 28);
			this->btnExitEnrollStudentTwo->TabIndex = 0;
			this->btnExitEnrollStudentTwo->UseVisualStyleBackColor = false;
			this->btnExitEnrollStudentTwo->Click += gcnew System::EventHandler(this, &enrollment::btnExitEnrollStudentTwo_Click);
			// 
			// dataGridEnrollStudent
			// 
			this->dataGridEnrollStudent->AllowUserToAddRows = false;
			this->dataGridEnrollStudent->AllowUserToDeleteRows = false;
			this->dataGridEnrollStudent->AllowUserToOrderColumns = true;
			this->dataGridEnrollStudent->AllowUserToResizeColumns = false;
			this->dataGridEnrollStudent->AllowUserToResizeRows = false;
			this->dataGridEnrollStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridEnrollStudent->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridEnrollStudent->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridEnrollStudent->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridEnrollStudent->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridEnrollStudent->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridEnrollStudent->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridEnrollStudent->Location = System::Drawing::Point(1, 42);
			this->dataGridEnrollStudent->MultiSelect = false;
			this->dataGridEnrollStudent->Name = L"dataGridEnrollStudent";
			this->dataGridEnrollStudent->ReadOnly = true;
			this->dataGridEnrollStudent->RowHeadersVisible = false;
			this->dataGridEnrollStudent->Size = System::Drawing::Size(689, 380);
			this->dataGridEnrollStudent->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->btnDeleteEnrollStudent);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnEnrollStudent);
			this->panel1->Controls->Add(this->btnExitEnrollStudent);
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
			// btnDeleteEnrollStudent
			// 
			this->btnDeleteEnrollStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteEnrollStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteEnrollStudent.BackgroundImage")));
			this->btnDeleteEnrollStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnDeleteEnrollStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteEnrollStudent->Location = System::Drawing::Point(574, 3);
			this->btnDeleteEnrollStudent->Name = L"btnDeleteEnrollStudent";
			this->btnDeleteEnrollStudent->Size = System::Drawing::Size(30, 32);
			this->btnDeleteEnrollStudent->TabIndex = 6;
			this->btnDeleteEnrollStudent->UseVisualStyleBackColor = true;
			this->btnDeleteEnrollStudent->Click += gcnew System::EventHandler(this, &enrollment::btnDeleteEnrollStudent_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Enroll Student";
			// 
			// btnEnrollStudent
			// 
			this->btnEnrollStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEnrollStudent.BackgroundImage")));
			this->btnEnrollStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEnrollStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnrollStudent->Location = System::Drawing::Point(0, 3);
			this->btnEnrollStudent->Name = L"btnEnrollStudent";
			this->btnEnrollStudent->Size = System::Drawing::Size(30, 32);
			this->btnEnrollStudent->TabIndex = 2;
			this->btnEnrollStudent->UseVisualStyleBackColor = true;
			this->btnEnrollStudent->Click += gcnew System::EventHandler(this, &enrollment::btnEnrollStudent_Click);
			// 
			// btnExitEnrollStudent
			// 
			this->btnExitEnrollStudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitEnrollStudent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitEnrollStudent.BackgroundImage")));
			this->btnExitEnrollStudent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnExitEnrollStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitEnrollStudent->Location = System::Drawing::Point(658, -4);
			this->btnExitEnrollStudent->Name = L"btnExitEnrollStudent";
			this->btnExitEnrollStudent->Size = System::Drawing::Size(29, 33);
			this->btnExitEnrollStudent->TabIndex = 1;
			this->btnExitEnrollStudent->TabStop = false;
			this->btnExitEnrollStudent->Click += gcnew System::EventHandler(this, &enrollment::btnExitEnrollStudent_Click);
			// 
			// enrollment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 450);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"enrollment";
			this->Text = L"enrollment";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &enrollment::enrollment_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelEnrollAddSection->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollAddSection))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panelEnrollAddStudent->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollAddStudent))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panelEnrollStudent->ResumeLayout(false);
			this->panelEnrollStudent->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudEnrollAcademicID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudEnrollSectionID))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudEnrollStudentID))->EndInit();
			this->panelTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEnrollStudent))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitEnrollStudent))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = elementary_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridEnrollAddStudent() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ enrollAddStudentOneAdapter = gcnew MySqlDataAdapter("SELECT student_id, first_name, middle_name, last_name FROM tbl_student", conn);
		DataTable^ enrollAddStudentTableOne = gcnew DataTable();

		enrollAddStudentOneAdapter->Fill(enrollAddStudentTableOne);

		dataGridEnrollAddStudent->DataSource = enrollAddStudentTableOne;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Been Occured While Populating Grid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

void populateGridEnrollAddSection() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ enrollAddSectionOneAdapter = gcnew MySqlDataAdapter("SELECT section_id, section, level, first_name, last_name FROM tbl_section INNER JOIN tbl_teacher ON tbl_section.adviser_id = tbl_teacher.teacher_id ", conn);
		DataTable^ enrollAddSectionOneTable = gcnew DataTable();

		enrollAddSectionOneAdapter->Fill(enrollAddSectionOneTable);

		dataGridEnrollAddSection->DataSource = enrollAddSectionOneTable;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Been Occured While Populating Grid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

void populateGridEnrollStudent() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ enrollStudentAdapter = gcnew MySqlDataAdapter("SELECT enrollment_id, enrolled_academic_year, enrolled_date, student_id, first_name, last_name, status, section, level, adviser_id FROM tbl_enrollment INNER JOIN tbl_student ON tbl_enrollment.id_student = tbl_student.student_id INNER JOIN tbl_section ON tbl_enrollment.id_section = tbl_section.section_id INNER JOIN tbl_academic_year ON tbl_enrollment.id_academic_year = tbl_academic_year.academic_id WHERE tbl_student.status = 'Enrolled' AND tbl_academic_year.academic_year_status = 'Active'", conn);
		DataTable^ enrollStudentTable = gcnew DataTable();

		enrollStudentAdapter->Fill(enrollStudentTable);

		dataGridEnrollStudent->DataSource = enrollStudentTable;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Been Occured While Populating Grid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void enrollment_Load(System::Object^ sender, System::EventArgs^ e) {

	populateGridEnrollStudent();
	populateGridEnrollAddStudent();
	populateGridEnrollAddSection();

	try
	{
		conn->Open();

		MySqlDataAdapter^ getAYAdapter = gcnew MySqlDataAdapter("SELECT academic_id, academic_year_code FROM tbl_academic_year WHERE academic_year_status = 'Active'", conn);
		DataTable^ getAYTable = gcnew DataTable();

		getAYAdapter->Fill(getAYTable);

		nudEnrollAcademicID->Value = Convert::ToInt16(getAYTable->Rows[0]->ItemArray[0]->ToString());
		txtEnrollStudentAY->Text = getAYTable->Rows[0]->ItemArray[1]->ToString();

		conn->Close();
	}

	catch (Exception^)
	{
		(void) e;
	}
}

private: System::Void btnEnrollStudent_Click(System::Object^ sender, System::EventArgs^ e) {
	
	panelEnrollStudent->Show();
}

private: System::Void btnExitEnrollStudentTwo_Click(System::Object^ sender, System::EventArgs^ e) {

	panelEnrollStudent->Hide();
}

private: System::Void btnSaveEnrollStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	int enrollStudentID = Convert::ToInt16(nudEnrollStudentID->Value);
	int enrollSectionID = Convert::ToInt16(nudEnrollSectionID->Value);
	int enrollAcademicID = Convert::ToInt16(nudEnrollAcademicID->Value);
	String^ enrollAcademicYear = txtEnrollStudentAY->Text;

	try
	{   
		conn->Open();

		String^ commandStringEnrollStudent = "INSERT INTO tbl_enrollment(id_student, id_section, id_academic_year, enrolled_academic_year, enrolled_date) VALUES(@id_student, @id_section, @id_academic_year, @enrolled_academic_year, NOW())";
		MySqlCommand^ commandEnrollStudent = gcnew MySqlCommand(commandStringEnrollStudent, conn);

		commandEnrollStudent->Parameters->AddWithValue("@id_student", enrollStudentID);
		commandEnrollStudent->Parameters->AddWithValue("@id_section", enrollSectionID);
		commandEnrollStudent->Parameters->AddWithValue("@id_academic_year", enrollAcademicID);
		commandEnrollStudent->Parameters->AddWithValue("@enrolled_academic_year", enrollAcademicYear);

		commandEnrollStudent->ExecuteNonQuery();

		MessageBox::Show("Student Has Been Enrolled", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

		conn->Close();

		nudEnrollStudentID->Value = 0;
		txtEnrollStudentFirstNane->Clear();
		txtEnrollStudentMiddleName->Clear();
		txtEnrollStudentLastName->Clear();
		nudEnrollSectionID->Value = 0;
		txtEnrollStudentSection->Clear();
		txtEnrollStudentLevel->Clear();
		txtEnrollStudentTeacher->Clear();

		populateGridEnrollStudent();
	}

	catch (Exception^ e)
	{
		(void)e;
		MessageBox::Show("Error Has Been Occured While Enrolling The Student", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}

private: System::Void btnEnrollSearchStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	panelEnrollAddStudent->Show();
}

private: System::Void btnExitEnrollAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	panelEnrollAddStudent->Hide();
}

private: System::Void btnEnrollAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentEnrollStudentID = dataGridEnrollAddStudent->Rows[dataGridEnrollAddStudent->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ enrollStudentAddTwoAdapter = gcnew MySqlDataAdapter("SELECT * FROM tbl_student WHERE student_id = " + currentEnrollStudentID, conn);
		DataTable^ enrollAddStudentTable = gcnew DataTable();

		enrollStudentAddTwoAdapter->Fill(enrollAddStudentTable);

		nudEnrollStudentID->Value = Convert::ToInt16(enrollAddStudentTable->Rows[0]->ItemArray[0]->ToString());
		txtEnrollStudentFirstNane->Text = enrollAddStudentTable->Rows[0]->ItemArray[1]->ToString();
		txtEnrollStudentMiddleName->Text = enrollAddStudentTable->Rows[0]->ItemArray[2]->ToString();
		txtEnrollStudentLastName->Text = enrollAddStudentTable->Rows[0]->ItemArray[4]->ToString();

		conn->Close();

		panelEnrollAddStudent->Hide();

		txtSearchName->Clear();

		populateGridEnrollAddStudent();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void btnEnrollSearchSection_Click(System::Object^ sender, System::EventArgs^ e) {

	panelEnrollAddSection->Show();
}

private: System::Void btnExitEnrollAddSection_Click(System::Object^ sender, System::EventArgs^ e) {

	panelEnrollAddSection->Hide();
}

private: System::Void btnEnrollAddSection_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentEnrollSectionID = dataGridEnrollAddSection->Rows[dataGridEnrollAddSection->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ enrollAddSectionTwoAdapter = gcnew MySqlDataAdapter("SELECT section_id, section, level, first_name FROM tbl_section INNER JOIN tbl_teacher ON tbl_section.adviser_id = tbl_teacher.teacher_id WHERE section_id = " + currentEnrollSectionID, conn);
		DataTable^ enrollAddSectionTwoTable = gcnew DataTable();

		enrollAddSectionTwoAdapter->Fill(enrollAddSectionTwoTable);

		nudEnrollSectionID->Value = Convert::ToInt16(enrollAddSectionTwoTable->Rows[0]->ItemArray[0]->ToString());
		txtEnrollStudentSection->Text = enrollAddSectionTwoTable->Rows[0]->ItemArray[1]->ToString();
		txtEnrollStudentLevel->Text = enrollAddSectionTwoTable->Rows[0]->ItemArray[2]->ToString();
		txtEnrollStudentTeacher->Text = enrollAddSectionTwoTable->Rows[0]->ItemArray[3]->ToString();

		conn->Close();

		panelEnrollAddSection->Hide();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void btnDeleteEnrollStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentEnrollmentID = dataGridEnrollStudent->Rows[dataGridEnrollStudent->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Delete This Enrollment Details?", "Error", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commandDeleteEnrollStudent = gcnew MySqlCommand("DELETE FROM tbl_enrollment WHERE enrollment_id = " + currentEnrollmentID, conn);

			commandDeleteEnrollStudent->ExecuteNonQuery();

			MessageBox::Show("Enrollment Details Has Been Deleted", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();

			populateGridEnrollStudent();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Been Occured While Deleting Enrollment Details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void btnSearchName_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ enrollStudentSearchName = txtSearchName->Text;

	if (txtSearchName->Text->Trim()->Length != 0)
	{
		try
		{
			conn->Open();

			MySqlDataAdapter^ enrollAddStudentOneAdapter = gcnew MySqlDataAdapter("SELECT student_id, first_name, middle_name, last_name FROM tbl_student WHERE first_name = '" + enrollStudentSearchName + "' || last_name = '" + enrollStudentSearchName + "'", conn);
			DataTable^ enrollAddStudentTableOne = gcnew DataTable();

			enrollAddStudentOneAdapter->Fill(enrollAddStudentTableOne);

			dataGridEnrollAddStudent->DataSource = enrollAddStudentTableOne;

			conn->Close();
		}

		catch (Exception^ e)
		{
			(void)e;
		}
	}

	else
	{
		populateGridEnrollAddStudent();
	}
}

private: System::Void btnExitEnrollStudent_Click(System::Object^ sender, System::EventArgs^ e) {

	enrollment::Close();
}

};

}
