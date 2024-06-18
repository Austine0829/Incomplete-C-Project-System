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
	/// Summary for fees
	/// </summary>
	public ref class fees : public System::Windows::Forms::Form
	{
	public:
		fees(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			panelAddFees->Hide();
			panelUpdateFees->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~fees()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panelAddFees;

	private: System::Windows::Forms::Button^ btnSaveFees;
	private: System::Windows::Forms::TextBox^ txtFeesDesc;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Button^ btnExitAddFees;
	private: System::Windows::Forms::DataGridView^ dataGridFees;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnDeleteFees;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnEditFees;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAddFees;
	private: System::Windows::Forms::PictureBox^ btnExitFees;
	private: System::Windows::Forms::Panel^ panelUpdateFees;



	private: System::Windows::Forms::NumericUpDown^ nudUpdateAmount;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnUpdateFees;
	private: System::Windows::Forms::TextBox^ txtUpdateFees;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnExitEditFees;
	private: System::Windows::Forms::NumericUpDown^ nudAmount;



	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(fees::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelUpdateFees = (gcnew System::Windows::Forms::Panel());
			this->nudUpdateAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnUpdateFees = (gcnew System::Windows::Forms::Button());
			this->txtUpdateFees = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnExitEditFees = (gcnew System::Windows::Forms::Button());
			this->panelAddFees = (gcnew System::Windows::Forms::Panel());
			this->nudAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSaveFees = (gcnew System::Windows::Forms::Button());
			this->txtFeesDesc = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->btnExitAddFees = (gcnew System::Windows::Forms::Button());
			this->dataGridFees = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteFees = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnEditFees = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAddFees = (gcnew System::Windows::Forms::Button());
			this->btnExitFees = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelUpdateFees->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudUpdateAmount))->BeginInit();
			this->panel3->SuspendLayout();
			this->panelAddFees->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAmount))->BeginInit();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFees))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitFees))->BeginInit();
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
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelUpdateFees);
			this->tabPage1->Controls->Add(this->panelAddFees);
			this->tabPage1->Controls->Add(this->dataGridFees);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(689, 422);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Fees";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelUpdateFees
			// 
			this->panelUpdateFees->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelUpdateFees->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelUpdateFees->Controls->Add(this->nudUpdateAmount);
			this->panelUpdateFees->Controls->Add(this->label6);
			this->panelUpdateFees->Controls->Add(this->btnUpdateFees);
			this->panelUpdateFees->Controls->Add(this->txtUpdateFees);
			this->panelUpdateFees->Controls->Add(this->label7);
			this->panelUpdateFees->Controls->Add(this->panel3);
			this->panelUpdateFees->Location = System::Drawing::Point(6, 177);
			this->panelUpdateFees->Name = L"panelUpdateFees";
			this->panelUpdateFees->Size = System::Drawing::Size(327, 125);
			this->panelUpdateFees->TabIndex = 3;
			// 
			// nudUpdateAmount
			// 
			this->nudUpdateAmount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudUpdateAmount->Location = System::Drawing::Point(107, 65);
			this->nudUpdateAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->nudUpdateAmount->Name = L"nudUpdateAmount";
			this->nudUpdateAmount->Size = System::Drawing::Size(211, 22);
			this->nudUpdateAmount->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(45, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Amount :";
			// 
			// btnUpdateFees
			// 
			this->btnUpdateFees->BackColor = System::Drawing::Color::DimGray;
			this->btnUpdateFees->FlatAppearance->BorderSize = 0;
			this->btnUpdateFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateFees->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateFees->Location = System::Drawing::Point(264, 93);
			this->btnUpdateFees->Name = L"btnUpdateFees";
			this->btnUpdateFees->Size = System::Drawing::Size(54, 23);
			this->btnUpdateFees->TabIndex = 5;
			this->btnUpdateFees->Text = L"Update";
			this->btnUpdateFees->UseVisualStyleBackColor = false;
			this->btnUpdateFees->Click += gcnew System::EventHandler(this, &fees::btnUpdateFees_Click);
			// 
			// txtUpdateFees
			// 
			this->txtUpdateFees->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUpdateFees->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUpdateFees->Location = System::Drawing::Point(107, 34);
			this->txtUpdateFees->Name = L"txtUpdateFees";
			this->txtUpdateFees->Size = System::Drawing::Size(211, 22);
			this->txtUpdateFees->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Fees Description :";
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panel3->Controls->Add(this->btnExitEditFees);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(326, 28);
			this->panel3->TabIndex = 2;
			// 
			// btnExitEditFees
			// 
			this->btnExitEditFees->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitEditFees->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitEditFees.BackgroundImage")));
			this->btnExitEditFees->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitEditFees->FlatAppearance->BorderSize = 0;
			this->btnExitEditFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitEditFees->Location = System::Drawing::Point(302, 0);
			this->btnExitEditFees->Name = L"btnExitEditFees";
			this->btnExitEditFees->Size = System::Drawing::Size(23, 28);
			this->btnExitEditFees->TabIndex = 0;
			this->btnExitEditFees->UseVisualStyleBackColor = false;
			this->btnExitEditFees->Click += gcnew System::EventHandler(this, &fees::btnExitEditFees_Click);
			// 
			// panelAddFees
			// 
			this->panelAddFees->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelAddFees->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddFees->Controls->Add(this->nudAmount);
			this->panelAddFees->Controls->Add(this->label5);
			this->panelAddFees->Controls->Add(this->btnSaveFees);
			this->panelAddFees->Controls->Add(this->txtFeesDesc);
			this->panelAddFees->Controls->Add(this->label4);
			this->panelAddFees->Controls->Add(this->panelTop);
			this->panelAddFees->Location = System::Drawing::Point(5, 46);
			this->panelAddFees->Name = L"panelAddFees";
			this->panelAddFees->Size = System::Drawing::Size(327, 125);
			this->panelAddFees->TabIndex = 2;
			// 
			// nudAmount
			// 
			this->nudAmount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nudAmount->Location = System::Drawing::Point(107, 65);
			this->nudAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->nudAmount->Name = L"nudAmount";
			this->nudAmount->Size = System::Drawing::Size(211, 22);
			this->nudAmount->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(45, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Amount :";
			// 
			// btnSaveFees
			// 
			this->btnSaveFees->BackColor = System::Drawing::Color::DimGray;
			this->btnSaveFees->FlatAppearance->BorderSize = 0;
			this->btnSaveFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveFees->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveFees->Location = System::Drawing::Point(279, 93);
			this->btnSaveFees->Name = L"btnSaveFees";
			this->btnSaveFees->Size = System::Drawing::Size(39, 23);
			this->btnSaveFees->TabIndex = 5;
			this->btnSaveFees->Text = L"Save";
			this->btnSaveFees->UseVisualStyleBackColor = false;
			this->btnSaveFees->Click += gcnew System::EventHandler(this, &fees::btnSaveFees_Click);
			// 
			// txtFeesDesc
			// 
			this->txtFeesDesc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtFeesDesc->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFeesDesc->Location = System::Drawing::Point(107, 34);
			this->txtFeesDesc->Name = L"txtFeesDesc";
			this->txtFeesDesc->Size = System::Drawing::Size(211, 22);
			this->txtFeesDesc->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Fees Description :";
			// 
			// panelTop
			// 
			this->panelTop->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panelTop->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panelTop->Controls->Add(this->btnExitAddFees);
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(326, 28);
			this->panelTop->TabIndex = 2;
			// 
			// btnExitAddFees
			// 
			this->btnExitAddFees->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExitAddFees->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitAddFees.BackgroundImage")));
			this->btnExitAddFees->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExitAddFees->FlatAppearance->BorderSize = 0;
			this->btnExitAddFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExitAddFees->Location = System::Drawing::Point(302, 0);
			this->btnExitAddFees->Name = L"btnExitAddFees";
			this->btnExitAddFees->Size = System::Drawing::Size(23, 28);
			this->btnExitAddFees->TabIndex = 0;
			this->btnExitAddFees->UseVisualStyleBackColor = false;
			this->btnExitAddFees->Click += gcnew System::EventHandler(this, &fees::btnExitAddFees_Click);
			// 
			// dataGridFees
			// 
			this->dataGridFees->AllowUserToAddRows = false;
			this->dataGridFees->AllowUserToDeleteRows = false;
			this->dataGridFees->AllowUserToOrderColumns = true;
			this->dataGridFees->AllowUserToResizeColumns = false;
			this->dataGridFees->AllowUserToResizeRows = false;
			this->dataGridFees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridFees->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridFees->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridFees->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridFees->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridFees->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridFees->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridFees->Location = System::Drawing::Point(1, 42);
			this->dataGridFees->MultiSelect = false;
			this->dataGridFees->Name = L"dataGridFees";
			this->dataGridFees->ReadOnly = true;
			this->dataGridFees->RowHeadersVisible = false;
			this->dataGridFees->Size = System::Drawing::Size(689, 380);
			this->dataGridFees->TabIndex = 1;
			this->dataGridFees->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &fees::dataGridFees_CellClick);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->btnDeleteFees);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btnEditFees);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnAddFees);
			this->panel1->Controls->Add(this->btnExitFees);
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
			// btnDeleteFees
			// 
			this->btnDeleteFees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteFees->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteFees.BackgroundImage")));
			this->btnDeleteFees->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnDeleteFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteFees->Location = System::Drawing::Point(574, 3);
			this->btnDeleteFees->Name = L"btnDeleteFees";
			this->btnDeleteFees->Size = System::Drawing::Size(30, 32);
			this->btnDeleteFees->TabIndex = 6;
			this->btnDeleteFees->UseVisualStyleBackColor = true;
			this->btnDeleteFees->Click += gcnew System::EventHandler(this, &fees::btnDeleteFees_Click);
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
			// btnEditFees
			// 
			this->btnEditFees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnEditFees->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditFees.BackgroundImage")));
			this->btnEditFees->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnEditFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditFees->Location = System::Drawing::Point(508, 3);
			this->btnEditFees->Name = L"btnEditFees";
			this->btnEditFees->Size = System::Drawing::Size(30, 32);
			this->btnEditFees->TabIndex = 4;
			this->btnEditFees->UseVisualStyleBackColor = true;
			this->btnEditFees->Click += gcnew System::EventHandler(this, &fees::btnEditFees_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Add Fees";
			// 
			// btnAddFees
			// 
			this->btnAddFees->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddFees.BackgroundImage")));
			this->btnAddFees->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnAddFees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddFees->Location = System::Drawing::Point(0, 3);
			this->btnAddFees->Name = L"btnAddFees";
			this->btnAddFees->Size = System::Drawing::Size(30, 32);
			this->btnAddFees->TabIndex = 2;
			this->btnAddFees->UseVisualStyleBackColor = true;
			this->btnAddFees->Click += gcnew System::EventHandler(this, &fees::btnAddFees_Click);
			// 
			// btnExitFees
			// 
			this->btnExitFees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitFees->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitFees.BackgroundImage")));
			this->btnExitFees->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnExitFees->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitFees->Location = System::Drawing::Point(658, -4);
			this->btnExitFees->Name = L"btnExitFees";
			this->btnExitFees->Size = System::Drawing::Size(29, 33);
			this->btnExitFees->TabIndex = 1;
			this->btnExitFees->TabStop = false;
			this->btnExitFees->Click += gcnew System::EventHandler(this, &fees::btnExitFees_Click);
			// 
			// fees
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 450);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"fees";
			this->Text = L"fees";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &fees::fees_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelUpdateFees->ResumeLayout(false);
			this->panelUpdateFees->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudUpdateAmount))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panelAddFees->ResumeLayout(false);
			this->panelAddFees->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAmount))->EndInit();
			this->panelTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridFees))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitFees))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = elementary_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridFees() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ feesAdapter = gcnew MySqlDataAdapter("SELECT * FROM tbl_fees", conn);
		DataTable^ feesTable = gcnew DataTable();

		feesAdapter->Fill(feesTable);

		dataGridFees->DataSource = feesTable;

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Been Occured While Populating The Grid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

void clearFeesFields() {

	txtUpdateFees->Clear();
	nudUpdateAmount->Value = 0;
}

private: System::Void fees_Load(System::Object^ sender, System::EventArgs^ e) {

	populateGridFees();
}

private: System::Void btnAddFees_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddFees->Show();
}

private: System::Void btnExitAddFees_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddFees->Hide();
}

private: System::Void btnSaveFees_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ getFeesDesc = txtFeesDesc->Text;
	int getAmount = Convert::ToInt32(nudAmount->Value);
	bool isValid = true;

	if (txtFeesDesc->Text->Trim()->Length <= 5 || nudAmount->Value <= 0)
	{
		isValid = false;
	}

	try
	{
		if (isValid)
		{
			conn->Open();

			String^ commandStringAddFees = "INSERT INTO tbl_fees(fees, amount) VALUES(@fees, @amount)";
			MySqlCommand^ commandAddFees = gcnew MySqlCommand(commandStringAddFees, conn);

			commandAddFees->Parameters->AddWithValue("@fees", getFeesDesc);
			commandAddFees->Parameters->AddWithValue("@amount", getAmount);

			commandAddFees->ExecuteNonQuery();

			MessageBox::Show("New Fees Details Has Been Added", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();

			txtFeesDesc->Clear();
			nudAmount->Value = 0;

			populateGridFees();
		}

		else
		{
			MessageBox::Show("Please Fill Out The Form Before Adding It In Database", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Been Occured While Adding New Fees", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnEditFees_Click(System::Object^ sender, System::EventArgs^ e) {

	panelUpdateFees->Show();
}

private: System::Void btnExitEditFees_Click(System::Object^ sender, System::EventArgs^ e) {

	panelUpdateFees->Hide();

	clearFeesFields();
}

private: System::Void dataGridFees_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ cuurentFeesID = dataGridFees->Rows[dataGridFees->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{
		conn->Open();

		MySqlDataAdapter^ feesUpdateAdapter = gcnew MySqlDataAdapter("SELECT fees, amount FROM tbl_fees WHERE fees_id = " + cuurentFeesID, conn);
		DataTable^ feesUpdateTable = gcnew DataTable();

		feesUpdateAdapter->Fill(feesUpdateTable);

		txtUpdateFees->Text = feesUpdateTable->Rows[0]->ItemArray[0]->ToString();
		nudUpdateAmount->Value = Convert::ToInt32(feesUpdateTable->Rows[0]->ItemArray[1]->ToString());

		conn->Close();
	}

	catch (Exception^ e)
	{
		(void) e;
	}
}

private: System::Void btnUpdateFees_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ cuurentFeesID = dataGridFees->Rows[dataGridFees->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ getUpdateFees = txtUpdateFees->Text;
	int getUpdateAmount = Convert::ToInt32(nudUpdateAmount->Value);
	bool isValid = true;

	if (txtUpdateFees->Text->Trim()->Length <= 5)
	{
		isValid = false;
	}

	try
	{
		if (isValid)
		{

			if (MessageBox::Show("Are You Sure You Want To Update This Fees Details?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
			{
				conn->Open();

				MySqlCommand^ commandUpdateFees = gcnew MySqlCommand("UPDATE tbl_fees SET fees = @fees, amount = @amount WHERE fees_id = " + cuurentFeesID, conn);

				commandUpdateFees->Parameters->AddWithValue("@fees", getUpdateFees);
				commandUpdateFees->Parameters->AddWithValue("@amount", getUpdateAmount);

				commandUpdateFees->ExecuteNonQuery();

				MessageBox::Show("Fees Details Has Been Updated", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

				conn->Close();

				clearFeesFields();

				populateGridFees();
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
		MessageBox::Show("Error Has Been Occured While Updating Fees Details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnDeleteFees_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ cuurentFeesID = dataGridFees->Rows[dataGridFees->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Delete This Fees Details?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commnadDeleteFees = gcnew MySqlCommand("DELETE FROM tbl_fees WHERE fees_id = " + cuurentFeesID, conn);

			commnadDeleteFees->ExecuteNonQuery();

			MessageBox::Show("Fees Details Has Been Deleted", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();

			clearFeesFields();
;
			populateGridFees();
		}

		catch (Exception^ e)
		{
			(void)e;
			MessageBox::Show("Error Has Been Occured While Deleting Fees Details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

private: System::Void btnExitFees_Click(System::Object^ sender, System::EventArgs^ e) {

	fees::Close();
}

};

}
