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
	/// Summary for academicYear
	/// </summary>
	public ref class academicYear : public System::Windows::Forms::Form
	{
	public:
		academicYear(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			panelAddAcademicYear->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~academicYear()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ btnExitAcademicYear;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAddAcademicYear;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnOpenAcademicYear;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnCloseAcademicYear;

	private: System::Windows::Forms::DataGridView^ dataGridAcademicYear;


	private: System::Windows::Forms::Panel^ panelAddAcademicYear;

	private: System::Windows::Forms::TextBox^ txtAcademicYear;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Button^ btnSaveAcademicYear;

	private: System::Windows::Forms::Button^ btnExiAddAcademicYear;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(academicYear::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panelAddAcademicYear = (gcnew System::Windows::Forms::Panel());
			this->btnSaveAcademicYear = (gcnew System::Windows::Forms::Button());
			this->txtAcademicYear = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->btnExiAddAcademicYear = (gcnew System::Windows::Forms::Button());
			this->dataGridAcademicYear = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnCloseAcademicYear = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnOpenAcademicYear = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAddAcademicYear = (gcnew System::Windows::Forms::Button());
			this->btnExitAcademicYear = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panelAddAcademicYear->SuspendLayout();
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridAcademicYear))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitAcademicYear))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(697, 448);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->panelAddAcademicYear);
			this->tabPage1->Controls->Add(this->dataGridAcademicYear);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(689, 422);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Academic Year";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// panelAddAcademicYear
			// 
			this->panelAddAcademicYear->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelAddAcademicYear->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddAcademicYear->Controls->Add(this->btnSaveAcademicYear);
			this->panelAddAcademicYear->Controls->Add(this->txtAcademicYear);
			this->panelAddAcademicYear->Controls->Add(this->label4);
			this->panelAddAcademicYear->Controls->Add(this->panelTop);
			this->panelAddAcademicYear->Location = System::Drawing::Point(5, 46);
			this->panelAddAcademicYear->Name = L"panelAddAcademicYear";
			this->panelAddAcademicYear->Size = System::Drawing::Size(248, 93);
			this->panelAddAcademicYear->TabIndex = 2;
			// 
			// btnSaveAcademicYear
			// 
			this->btnSaveAcademicYear->BackColor = System::Drawing::Color::DimGray;
			this->btnSaveAcademicYear->FlatAppearance->BorderSize = 0;
			this->btnSaveAcademicYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveAcademicYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveAcademicYear->Location = System::Drawing::Point(201, 62);
			this->btnSaveAcademicYear->Name = L"btnSaveAcademicYear";
			this->btnSaveAcademicYear->Size = System::Drawing::Size(39, 23);
			this->btnSaveAcademicYear->TabIndex = 5;
			this->btnSaveAcademicYear->Text = L"Save";
			this->btnSaveAcademicYear->UseVisualStyleBackColor = false;
			this->btnSaveAcademicYear->Click += gcnew System::EventHandler(this, &academicYear::btnSaveAcademicYear_Click);
			// 
			// txtAcademicYear
			// 
			this->txtAcademicYear->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtAcademicYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAcademicYear->Location = System::Drawing::Point(97, 34);
			this->txtAcademicYear->Name = L"txtAcademicYear";
			this->txtAcademicYear->Size = System::Drawing::Size(143, 22);
			this->txtAcademicYear->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Academic Year :";
			// 
			// panelTop
			// 
			this->panelTop->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panelTop->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->panelTop->Controls->Add(this->btnExiAddAcademicYear);
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(246, 28);
			this->panelTop->TabIndex = 2;
			// 
			// btnExiAddAcademicYear
			// 
			this->btnExiAddAcademicYear->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnExiAddAcademicYear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExiAddAcademicYear.BackgroundImage")));
			this->btnExiAddAcademicYear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExiAddAcademicYear->FlatAppearance->BorderSize = 0;
			this->btnExiAddAcademicYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExiAddAcademicYear->Location = System::Drawing::Point(223, 0);
			this->btnExiAddAcademicYear->Name = L"btnExiAddAcademicYear";
			this->btnExiAddAcademicYear->Size = System::Drawing::Size(23, 28);
			this->btnExiAddAcademicYear->TabIndex = 0;
			this->btnExiAddAcademicYear->UseVisualStyleBackColor = false;
			this->btnExiAddAcademicYear->Click += gcnew System::EventHandler(this, &academicYear::btnExiAddAcademicYear_Click);
			// 
			// dataGridAcademicYear
			// 
			this->dataGridAcademicYear->AllowUserToAddRows = false;
			this->dataGridAcademicYear->AllowUserToDeleteRows = false;
			this->dataGridAcademicYear->AllowUserToOrderColumns = true;
			this->dataGridAcademicYear->AllowUserToResizeColumns = false;
			this->dataGridAcademicYear->AllowUserToResizeRows = false;
			this->dataGridAcademicYear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridAcademicYear->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridAcademicYear->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridAcademicYear->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridAcademicYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridAcademicYear->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleVertical;
			this->dataGridAcademicYear->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridAcademicYear->Location = System::Drawing::Point(1, 42);
			this->dataGridAcademicYear->MultiSelect = false;
			this->dataGridAcademicYear->Name = L"dataGridAcademicYear";
			this->dataGridAcademicYear->ReadOnly = true;
			this->dataGridAcademicYear->RowHeadersVisible = false;
			this->dataGridAcademicYear->Size = System::Drawing::Size(689, 380);
			this->dataGridAcademicYear->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->btnCloseAcademicYear);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->btnOpenAcademicYear);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnAddAcademicYear);
			this->panel1->Controls->Add(this->btnExitAcademicYear);
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
			this->label3->Location = System::Drawing::Point(612, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 15);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Close";
			// 
			// btnCloseAcademicYear
			// 
			this->btnCloseAcademicYear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnCloseAcademicYear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCloseAcademicYear.BackgroundImage")));
			this->btnCloseAcademicYear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnCloseAcademicYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCloseAcademicYear->Location = System::Drawing::Point(583, 3);
			this->btnCloseAcademicYear->Name = L"btnCloseAcademicYear";
			this->btnCloseAcademicYear->Size = System::Drawing::Size(30, 32);
			this->btnCloseAcademicYear->TabIndex = 6;
			this->btnCloseAcademicYear->UseVisualStyleBackColor = true;
			this->btnCloseAcademicYear->Click += gcnew System::EventHandler(this, &academicYear::btnCloseAcademicYear_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(547, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Open";
			// 
			// btnOpenAcademicYear
			// 
			this->btnOpenAcademicYear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnOpenAcademicYear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOpenAcademicYear.BackgroundImage")));
			this->btnOpenAcademicYear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnOpenAcademicYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOpenAcademicYear->Location = System::Drawing::Point(518, 3);
			this->btnOpenAcademicYear->Name = L"btnOpenAcademicYear";
			this->btnOpenAcademicYear->Size = System::Drawing::Size(30, 32);
			this->btnOpenAcademicYear->TabIndex = 4;
			this->btnOpenAcademicYear->UseVisualStyleBackColor = true;
			this->btnOpenAcademicYear->Click += gcnew System::EventHandler(this, &academicYear::btnOpenAcademicYear_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Add Academic Year";
			// 
			// btnAddAcademicYear
			// 
			this->btnAddAcademicYear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddAcademicYear.BackgroundImage")));
			this->btnAddAcademicYear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnAddAcademicYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddAcademicYear->Location = System::Drawing::Point(0, 3);
			this->btnAddAcademicYear->Name = L"btnAddAcademicYear";
			this->btnAddAcademicYear->Size = System::Drawing::Size(30, 32);
			this->btnAddAcademicYear->TabIndex = 2;
			this->btnAddAcademicYear->UseVisualStyleBackColor = true;
			this->btnAddAcademicYear->Click += gcnew System::EventHandler(this, &academicYear::btnAddAcademicYear_Click);
			// 
			// btnExitAcademicYear
			// 
			this->btnExitAcademicYear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExitAcademicYear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExitAcademicYear.BackgroundImage")));
			this->btnExitAcademicYear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnExitAcademicYear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExitAcademicYear->Location = System::Drawing::Point(658, -4);
			this->btnExitAcademicYear->Name = L"btnExitAcademicYear";
			this->btnExitAcademicYear->Size = System::Drawing::Size(29, 33);
			this->btnExitAcademicYear->TabIndex = 1;
			this->btnExitAcademicYear->TabStop = false;
			this->btnExitAcademicYear->Click += gcnew System::EventHandler(this, &academicYear::btnExitAcademicYear_Click);
			// 
			// academicYear
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 450);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"academicYear";
			this->Text = L"academicYear";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &academicYear::academicYear_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panelAddAcademicYear->ResumeLayout(false);
			this->panelAddAcademicYear->PerformLayout();
			this->panelTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridAcademicYear))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnExitAcademicYear))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ connString = "Server = localhost; Port = 3306; Database = elementary_db; UID = root; Password = root";
MySqlConnection^ conn = gcnew MySqlConnection(connString);

void populateGridAcademicYear() {

	try
	{
		conn->Open();

		MySqlDataAdapter^ ayAdapter = gcnew MySqlDataAdapter("SELECT * FROM tbl_academic_year", conn);
		DataTable^ ayTable = gcnew DataTable();

		ayAdapter->Fill(ayTable);
        
		dataGridAcademicYear->DataSource = ayTable;
		
		conn->Close();
	}
	catch (Exception^ e)
	{
		(void)e;
		MessageBox::Show("Error Has Occured While Populating The Grid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void academicYear_Load(System::Object^ sender, System::EventArgs^ e) {

	populateGridAcademicYear();
}

private: System::Void btnAddAcademicYear_Click(System::Object^ sender, System::EventArgs^ e) {

	panelAddAcademicYear->Show();
}

private: System::Void btnExiAddAcademicYear_Click(System::Object^ sender, System::EventArgs^ e) {
	
	panelAddAcademicYear->Hide();
}

private: System::Void btnSaveAcademicYear_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ getAcademicYear = txtAcademicYear->Text;
	bool isValid = true;

	if (txtAcademicYear->Text->Trim()->Length <= 7)
	{
		isValid = false;
	}

	try
	{  
		if (isValid == true)
		{   
			conn->Open();

			MySqlCommand^ commandAddAcademicYear = gcnew MySqlCommand("UPDATE tbl_academic_year SET academic_year_status = 'Inactive'", conn);

			commandAddAcademicYear->ExecuteNonQuery();

			conn->Close();

			conn->Open();

			String^ commandStringAddAY = "INSERT INTO tbl_academic_year(academic_year_code) VALUES(@academic_year_code)";
			MySqlCommand^ commandAddAcademicYearTwo = gcnew MySqlCommand(commandStringAddAY, conn);

			commandAddAcademicYearTwo->Parameters->AddWithValue("@academic_year_code", getAcademicYear);
			commandAddAcademicYearTwo->ExecuteNonQuery();

			MessageBox::Show("New Academic Year Has Been Added", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			conn->Close();

			txtAcademicYear->Clear();
			panelAddAcademicYear->Hide();

			populateGridAcademicYear();
		}

		else
		{
			MessageBox::Show("Please Put Academic Year Before Saving It", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Been Occured While Adding New Academic Year", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}

private: System::Void btnOpenAcademicYear_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentAYID = dataGridAcademicYear->Rows[dataGridAcademicYear->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try
	{   
		if (MessageBox::Show("Are You Sure You Want To Open This Academic Year?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
		{
			conn->Open();

		    MySqlCommand^ commandOpenAY = gcnew MySqlCommand("UPDATE tbl_academic_year SET academic_year_status = 'Inactive'", conn);

		    commandOpenAY->ExecuteNonQuery();

		    conn->Close();

		    conn->Open();

		    MySqlCommand^ commandOpenAYTwo = gcnew MySqlCommand("UPDATE tbl_academic_year SET academic_year_status = 'Active' WHERE academic_id = '" + currentAYID + "'", conn);

		    commandOpenAYTwo->ExecuteNonQuery();

		    conn->Close();

		    populateGridAcademicYear();
		}
	}   
	catch (Exception^ e)
	{
		(void) e;
		MessageBox::Show("Error Has Been Occured While Opening Academic Year", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnCloseAcademicYear_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currentAY = dataGridAcademicYear->Rows[dataGridAcademicYear->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	if (MessageBox::Show("Are You Sure You Want To Close This Academic Year?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
	{
		try
		{
			conn->Open();

			MySqlCommand^ commandCloseAY = gcnew MySqlCommand("UPDATE tbl_academic_year SET academic_year_status = 'Inactive' WHERE academic_year_code = '" + currentAY + "'", conn);

			commandCloseAY->ExecuteNonQuery();

			conn->Close();

			populateGridAcademicYear();
		}
		catch (Exception^ e)
		{
			(void)e;
		}
	}
}

private: System::Void btnExitAcademicYear_Click(System::Object^ sender, System::EventArgs^ e) {

	academicYear::Close();
}

};

}
