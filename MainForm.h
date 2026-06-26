#pragma once
#include <fstream>
#include <string>
#include <sstream>
#include <msclr/marshal_cppstd.h>


namespace CampusBookingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		// DITO NATIN SILA IDE-DECLARE PARA MAWALA ANG MGA ERROR SA CONSTRUCTOR AT LOAD EVENT!
		String^ currentUserName;
		String^ currentUserID;
		String^ currentUserRole;
	private: System::Windows::Forms::Panel^ panelPendingBookings;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::DataGridView^ dgvPending;



	private: System::Windows::Forms::Button^ btnDecline;
	private: System::Windows::Forms::Button^ btnApprove;








	private: System::Windows::Forms::Button^ btnLogout;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panelReports;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::ComboBox^ cmbStatusFilter;

	private: System::Windows::Forms::TextBox^ txtSearchHistory;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ btnAdminLogout;

	private: System::Windows::Forms::DataGridView^ dgvHistory;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;


	public:
		String^ currentUserDepartment;

		// Ito ang iyong constructor
		MainForm(String^ name, String^ idNumber, String^ role, String^ department)
		{
			InitializeComponent();

			currentUserName = name;
			currentUserID = idNumber;
			currentUserRole = role;
			currentUserDepartment = department;
		}
	private: System::Windows::Forms::Panel^ panelNewRequest;
	public:

	public:
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtRequesterName;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtDepartment;
	private: System::Windows::Forms::TextBox^ txtResourceToBook;


	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ txtPurpose;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::DateTimePicker^ dtpEndTime;

	private: System::Windows::Forms::DateTimePicker^ dtpStartTime;

	private: System::Windows::Forms::DateTimePicker^ dtpEventDate;


	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ btnSubmitRequest;


	private: System::Windows::Forms::Panel^ panelResources;
	public:

	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cmbStatus;

	private: System::Windows::Forms::ComboBox^ cmbType;
	private: System::Windows::Forms::TextBox^ txtSearch;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dgvResources;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::Button^ btnbookNow;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelContainer;
	private: System::Windows::Forms::Button^ btnDashboard;
	private: System::Windows::Forms::Button^ btnResources;
	private: System::Windows::Forms::Button^ btnNewRequest;
	private: System::Windows::Forms::Button^ btnPendingBookings;
private: System::Windows::Forms::Button^ btnHistory;

	protected:








	private: System::Windows::Forms::Label^ lblHeaderName;
	private: System::Windows::Forms::Label^ txtIDDisplay;
	private: System::Windows::Forms::Label^ txtRoleDisplay;









	private: System::Windows::Forms::Panel^ panelDashboard;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ lblApprovedToday;

private: System::Windows::Forms::Label^ lblPendingRequest;

private: System::Windows::Forms::Label^ lblTotalFacilities;

private: System::Windows::Forms::DataGridView^ dgvActiveBookings;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panelContainer = (gcnew System::Windows::Forms::Panel());
			this->panelReports = (gcnew System::Windows::Forms::Panel());
			this->dgvHistory = (gcnew System::Windows::Forms::DataGridView());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->cmbStatusFilter = (gcnew System::Windows::Forms::ComboBox());
			this->txtSearchHistory = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panelDashboard = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dgvActiveBookings = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblApprovedToday = (gcnew System::Windows::Forms::Label());
			this->lblPendingRequest = (gcnew System::Windows::Forms::Label());
			this->lblTotalFacilities = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panelResources = (gcnew System::Windows::Forms::Panel());
			this->btnbookNow = (gcnew System::Windows::Forms::Button());
			this->dgvResources = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbStatus = (gcnew System::Windows::Forms::ComboBox());
			this->cmbType = (gcnew System::Windows::Forms::ComboBox());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelNewRequest = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnSubmitRequest = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->dtpEndTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpStartTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpEventDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtResourceToBook = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtPurpose = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtDepartment = (gcnew System::Windows::Forms::TextBox());
			this->txtRequesterName = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panelPendingBookings = (gcnew System::Windows::Forms::Panel());
			this->btnDecline = (gcnew System::Windows::Forms::Button());
			this->btnApprove = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->dgvPending = (gcnew System::Windows::Forms::DataGridView());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btnDashboard = (gcnew System::Windows::Forms::Button());
			this->btnResources = (gcnew System::Windows::Forms::Button());
			this->btnNewRequest = (gcnew System::Windows::Forms::Button());
			this->btnPendingBookings = (gcnew System::Windows::Forms::Button());
			this->btnHistory = (gcnew System::Windows::Forms::Button());
			this->lblHeaderName = (gcnew System::Windows::Forms::Label());
			this->txtIDDisplay = (gcnew System::Windows::Forms::Label());
			this->txtRoleDisplay = (gcnew System::Windows::Forms::Label());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->btnAdminLogout = (gcnew System::Windows::Forms::Button());
			this->panelContainer->SuspendLayout();
			this->panelReports->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHistory))->BeginInit();
			this->panelDashboard->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvActiveBookings))->BeginInit();
			this->panelResources->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvResources))->BeginInit();
			this->panelNewRequest->SuspendLayout();
			this->panelPendingBookings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPending))->BeginInit();
			this->SuspendLayout();
			// 
			// panelContainer
			// 
			this->panelContainer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelContainer->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panelContainer->Controls->Add(this->panelReports);
			this->panelContainer->Controls->Add(this->panelPendingBookings);
			this->panelContainer->Controls->Add(this->panelNewRequest);
			this->panelContainer->Controls->Add(this->panelResources);
			this->panelContainer->Controls->Add(this->panelDashboard);
			this->panelContainer->Location = System::Drawing::Point(387, 12);
			this->panelContainer->Name = L"panelContainer";
			this->panelContainer->Size = System::Drawing::Size(945, 688);
			this->panelContainer->TabIndex = 0;
			// 
			// panelReports
			// 
			this->panelReports->Controls->Add(this->dgvHistory);
			this->panelReports->Controls->Add(this->label23);
			this->panelReports->Controls->Add(this->cmbStatusFilter);
			this->panelReports->Controls->Add(this->txtSearchHistory);
			this->panelReports->Controls->Add(this->label24);
			this->panelReports->Controls->Add(this->label9);
			this->panelReports->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelReports->Location = System::Drawing::Point(0, 0);
			this->panelReports->Name = L"panelReports";
			this->panelReports->Size = System::Drawing::Size(945, 688);
			this->panelReports->TabIndex = 9;
			// 
			// dgvHistory
			// 
			this->dgvHistory->AllowUserToAddRows = false;
			this->dgvHistory->AllowUserToDeleteRows = false;
			this->dgvHistory->AllowUserToResizeColumns = false;
			this->dgvHistory->AllowUserToResizeRows = false;
			this->dgvHistory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvHistory->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvHistory->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvHistory->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvHistory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvHistory->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column16,
					this->Column17, this->Column18, this->Column19, this->Column20, this->Column21
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvHistory->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgvHistory->Location = System::Drawing::Point(49, 225);
			this->dgvHistory->MultiSelect = false;
			this->dgvHistory->Name = L"dgvHistory";
			this->dgvHistory->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvHistory->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvHistory->RowHeadersVisible = false;
			this->dgvHistory->RowHeadersWidth = 62;
			this->dgvHistory->RowTemplate->Height = 28;
			this->dgvHistory->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvHistory->Size = System::Drawing::Size(851, 418);
			this->dgvHistory->TabIndex = 12;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"ID";
			this->Column16->MinimumWidth = 8;
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Requester";
			this->Column17->MinimumWidth = 8;
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Resource";
			this->Column18->MinimumWidth = 8;
			this->Column18->Name = L"Column18";
			this->Column18->ReadOnly = true;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Date";
			this->Column19->MinimumWidth = 8;
			this->Column19->Name = L"Column19";
			this->Column19->ReadOnly = true;
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"Time";
			this->Column20->MinimumWidth = 8;
			this->Column20->Name = L"Column20";
			this->Column20->ReadOnly = true;
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"Status";
			this->Column21->MinimumWidth = 8;
			this->Column21->Name = L"Column21";
			this->Column21->ReadOnly = true;
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(616, 114);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(74, 25);
			this->label23->TabIndex = 11;
			this->label23->Text = L"Status:";
			this->label23->Click += gcnew System::EventHandler(this, &MainForm::label23_Click);
			// 
			// cmbStatusFilter
			// 
			this->cmbStatusFilter->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->cmbStatusFilter->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbStatusFilter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbStatusFilter->FormattingEnabled = true;
			this->cmbStatusFilter->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"All", L"Pending", L"Approved", L"Declined" });
			this->cmbStatusFilter->Location = System::Drawing::Point(612, 142);
			this->cmbStatusFilter->Name = L"cmbStatusFilter";
			this->cmbStatusFilter->Size = System::Drawing::Size(200, 36);
			this->cmbStatusFilter->TabIndex = 10;
			this->cmbStatusFilter->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::cmbStatusFilter_SelectedIndexChanged);
			// 
			// txtSearchHistory
			// 
			this->txtSearchHistory->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->txtSearchHistory->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtSearchHistory->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearchHistory->Location = System::Drawing::Point(126, 143);
			this->txtSearchHistory->Name = L"txtSearchHistory";
			this->txtSearchHistory->Size = System::Drawing::Size(351, 34);
			this->txtSearchHistory->TabIndex = 9;
			this->txtSearchHistory->TextChanged += gcnew System::EventHandler(this, &MainForm::txtSearchHistory_TextChanged);
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(121, 115);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(192, 25);
			this->label24->TabIndex = 8;
			this->label24->Text = L"Search Code/Name:";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(286, 32);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(358, 48);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Reports and History";
			// 
			// panelDashboard
			// 
			this->panelDashboard->Controls->Add(this->label11);
			this->panelDashboard->Controls->Add(this->dgvActiveBookings);
			this->panelDashboard->Controls->Add(this->lblApprovedToday);
			this->panelDashboard->Controls->Add(this->lblPendingRequest);
			this->panelDashboard->Controls->Add(this->lblTotalFacilities);
			this->panelDashboard->Controls->Add(this->label7);
			this->panelDashboard->Controls->Add(this->label6);
			this->panelDashboard->Controls->Add(this->label5);
			this->panelDashboard->Controls->Add(this->label4);
			this->panelDashboard->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDashboard->Location = System::Drawing::Point(0, 0);
			this->panelDashboard->Name = L"panelDashboard";
			this->panelDashboard->Size = System::Drawing::Size(945, 688);
			this->panelDashboard->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(44, 290);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(241, 28);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Today\'s Active Bookings";
			// 
			// dgvActiveBookings
			// 
			this->dgvActiveBookings->AllowUserToAddRows = false;
			this->dgvActiveBookings->AllowUserToDeleteRows = false;
			this->dgvActiveBookings->AllowUserToResizeColumns = false;
			this->dgvActiveBookings->AllowUserToResizeRows = false;
			this->dgvActiveBookings->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvActiveBookings->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvActiveBookings->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvActiveBookings->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dgvActiveBookings->ColumnHeadersHeight = 34;
			this->dgvActiveBookings->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvActiveBookings->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvActiveBookings->DefaultCellStyle = dataGridViewCellStyle8;
			this->dgvActiveBookings->Location = System::Drawing::Point(49, 321);
			this->dgvActiveBookings->MultiSelect = false;
			this->dgvActiveBookings->Name = L"dgvActiveBookings";
			this->dgvActiveBookings->ReadOnly = true;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvActiveBookings->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dgvActiveBookings->RowHeadersVisible = false;
			this->dgvActiveBookings->RowHeadersWidth = 62;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgvActiveBookings->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->dgvActiveBookings->RowTemplate->Height = 28;
			this->dgvActiveBookings->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvActiveBookings->Size = System::Drawing::Size(851, 322);
			this->dgvActiveBookings->TabIndex = 7;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Resource";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Requester";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Time Slot";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Status";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// lblApprovedToday
			// 
			this->lblApprovedToday->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblApprovedToday->AutoSize = true;
			this->lblApprovedToday->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblApprovedToday->Location = System::Drawing::Point(736, 191);
			this->lblApprovedToday->Name = L"lblApprovedToday";
			this->lblApprovedToday->Size = System::Drawing::Size(69, 54);
			this->lblApprovedToday->TabIndex = 6;
			this->lblApprovedToday->Text = L"00";
			// 
			// lblPendingRequest
			// 
			this->lblPendingRequest->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblPendingRequest->AutoSize = true;
			this->lblPendingRequest->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPendingRequest->Location = System::Drawing::Point(453, 191);
			this->lblPendingRequest->Name = L"lblPendingRequest";
			this->lblPendingRequest->Size = System::Drawing::Size(69, 54);
			this->lblPendingRequest->TabIndex = 5;
			this->lblPendingRequest->Text = L"00";
			this->lblPendingRequest->Click += gcnew System::EventHandler(this, &MainForm::label9_Click);
			// 
			// lblTotalFacilities
			// 
			this->lblTotalFacilities->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblTotalFacilities->AutoSize = true;
			this->lblTotalFacilities->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalFacilities->Location = System::Drawing::Point(161, 191);
			this->lblTotalFacilities->Name = L"lblTotalFacilities";
			this->lblTotalFacilities->Size = System::Drawing::Size(69, 54);
			this->lblTotalFacilities->TabIndex = 4;
			this->lblTotalFacilities->Text = L"00";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(683, 143);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(166, 28);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Approved Today";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(393, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 28);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Pending Request";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(122, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 28);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Total Facilities";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(299, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(372, 48);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Dashboard Overview";
			// 
			// panelResources
			// 
			this->panelResources->Controls->Add(this->btnbookNow);
			this->panelResources->Controls->Add(this->dgvResources);
			this->panelResources->Controls->Add(this->label12);
			this->panelResources->Controls->Add(this->label3);
			this->panelResources->Controls->Add(this->cmbStatus);
			this->panelResources->Controls->Add(this->cmbType);
			this->panelResources->Controls->Add(this->txtSearch);
			this->panelResources->Controls->Add(this->label2);
			this->panelResources->Controls->Add(this->label1);
			this->panelResources->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelResources->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelResources->Location = System::Drawing::Point(0, 0);
			this->panelResources->Name = L"panelResources";
			this->panelResources->Size = System::Drawing::Size(945, 688);
			this->panelResources->TabIndex = 9;
			// 
			// btnbookNow
			// 
			this->btnbookNow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnbookNow->BackColor = System::Drawing::Color::Gainsboro;
			this->btnbookNow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnbookNow->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnbookNow->Location = System::Drawing::Point(709, 625);
			this->btnbookNow->Name = L"btnbookNow";
			this->btnbookNow->Size = System::Drawing::Size(200, 38);
			this->btnbookNow->TabIndex = 10;
			this->btnbookNow->Text = L"Book Now";
			this->btnbookNow->UseVisualStyleBackColor = false;
			this->btnbookNow->Click += gcnew System::EventHandler(this, &MainForm::btnbookNow_Click);
			// 
			// dgvResources
			// 
			this->dgvResources->AllowUserToAddRows = false;
			this->dgvResources->AllowUserToDeleteRows = false;
			this->dgvResources->AllowUserToResizeColumns = false;
			this->dgvResources->AllowUserToResizeRows = false;
			this->dgvResources->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvResources->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvResources->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvResources->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dgvResources->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvResources->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column6,
					this->Column7, this->Column8, this->Column9
			});
			this->dgvResources->Location = System::Drawing::Point(36, 225);
			this->dgvResources->Name = L"dgvResources";
			this->dgvResources->ReadOnly = true;
			this->dgvResources->RowHeadersVisible = false;
			this->dgvResources->RowHeadersWidth = 62;
			this->dgvResources->RowTemplate->Height = 28;
			this->dgvResources->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvResources->Size = System::Drawing::Size(873, 375);
			this->dgvResources->TabIndex = 8;
			this->dgvResources->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dgvResources_CellContentClick);
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Code";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Resource Name";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Type";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Status";
			this->Column9->MinimumWidth = 8;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(704, 141);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(68, 25);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Status";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(448, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Type:";
			this->label3->Click += gcnew System::EventHandler(this, &MainForm::label3_Click);
			// 
			// cmbStatus
			// 
			this->cmbStatus->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->cmbStatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbStatus->FormattingEnabled = true;
			this->cmbStatus->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"All", L"Available", L"Reserved", L"Under Maintenance",
					L"Temporarily Unavailable"
			});
			this->cmbStatus->Location = System::Drawing::Point(709, 167);
			this->cmbStatus->Name = L"cmbStatus";
			this->cmbStatus->Size = System::Drawing::Size(200, 36);
			this->cmbStatus->TabIndex = 5;
			this->cmbStatus->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::cmbStatus_SelectedIndexChanged);
			// 
			// cmbType
			// 
			this->cmbType->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->cmbType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbType->FormattingEnabled = true;
			this->cmbType->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"All", L"Lecture Halls", L"Laboratories", L"Sports Facilities",
					L"Event Spaces", L"Electronic Equipments", L"Academic Resources"
			});
			this->cmbType->Location = System::Drawing::Point(453, 168);
			this->cmbType->Name = L"cmbType";
			this->cmbType->Size = System::Drawing::Size(200, 36);
			this->cmbType->TabIndex = 4;
			this->cmbType->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::cmbType_SelectedIndexChanged);
			// 
			// txtSearch
			// 
			this->txtSearch->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->txtSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearch->Location = System::Drawing::Point(36, 168);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(351, 34);
			this->txtSearch->TabIndex = 3;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &MainForm::txtSearch_TextChanged);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Search Code/Name:";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(354, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 48);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Resources List";
			// 
			// panelNewRequest
			// 
			this->panelNewRequest->Controls->Add(this->label8);
			this->panelNewRequest->Controls->Add(this->btnSubmitRequest);
			this->panelNewRequest->Controls->Add(this->label20);
			this->panelNewRequest->Controls->Add(this->label19);
			this->panelNewRequest->Controls->Add(this->label18);
			this->panelNewRequest->Controls->Add(this->dtpEndTime);
			this->panelNewRequest->Controls->Add(this->dtpStartTime);
			this->panelNewRequest->Controls->Add(this->dtpEventDate);
			this->panelNewRequest->Controls->Add(this->txtResourceToBook);
			this->panelNewRequest->Controls->Add(this->label17);
			this->panelNewRequest->Controls->Add(this->label16);
			this->panelNewRequest->Controls->Add(this->txtPurpose);
			this->panelNewRequest->Controls->Add(this->label15);
			this->panelNewRequest->Controls->Add(this->txtDepartment);
			this->panelNewRequest->Controls->Add(this->txtRequesterName);
			this->panelNewRequest->Controls->Add(this->label14);
			this->panelNewRequest->Controls->Add(this->label13);
			this->panelNewRequest->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelNewRequest->Location = System::Drawing::Point(0, 0);
			this->panelNewRequest->Name = L"panelNewRequest";
			this->panelNewRequest->Size = System::Drawing::Size(945, 688);
			this->panelNewRequest->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(96, 580);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(744, 20);
			this->label8->TabIndex = 20;
			this->label8->Text = L"IMPORTANT NOTE: Request must be summitted at least 3 days before the event for pr"
				L"oper preparation.\r\n";
			// 
			// btnSubmitRequest
			// 
			this->btnSubmitRequest->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSubmitRequest->BackColor = System::Drawing::Color::Gainsboro;
			this->btnSubmitRequest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSubmitRequest->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmitRequest->Location = System::Drawing::Point(641, 618);
			this->btnSubmitRequest->Name = L"btnSubmitRequest";
			this->btnSubmitRequest->Size = System::Drawing::Size(200, 38);
			this->btnSubmitRequest->TabIndex = 19;
			this->btnSubmitRequest->Text = L"Submit Request";
			this->btnSubmitRequest->UseVisualStyleBackColor = false;
			this->btnSubmitRequest->Click += gcnew System::EventHandler(this, &MainForm::btnSubmitRequest_Click);
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(636, 467);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(102, 25);
			this->label20->TabIndex = 17;
			this->label20->Text = L"End Time:";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(369, 467);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(108, 25);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Start Time:";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(92, 467);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(114, 25);
			this->label18->TabIndex = 15;
			this->label18->Text = L"Event Date:";
			// 
			// dtpEndTime
			// 
			this->dtpEndTime->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dtpEndTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpEndTime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dtpEndTime->Location = System::Drawing::Point(641, 495);
			this->dtpEndTime->Name = L"dtpEndTime";
			this->dtpEndTime->Size = System::Drawing::Size(200, 30);
			this->dtpEndTime->TabIndex = 14;
			// 
			// dtpStartTime
			// 
			this->dtpStartTime->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dtpStartTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpStartTime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dtpStartTime->Location = System::Drawing::Point(374, 495);
			this->dtpStartTime->Name = L"dtpStartTime";
			this->dtpStartTime->Size = System::Drawing::Size(200, 30);
			this->dtpStartTime->TabIndex = 13;
			// 
			// dtpEventDate
			// 
			this->dtpEventDate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dtpEventDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpEventDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpEventDate->Location = System::Drawing::Point(97, 495);
			this->dtpEventDate->Name = L"dtpEventDate";
			this->dtpEventDate->Size = System::Drawing::Size(200, 30);
			this->dtpEventDate->TabIndex = 12;
			// 
			// txtResourceToBook
			// 
			this->txtResourceToBook->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtResourceToBook->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtResourceToBook->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResourceToBook->Location = System::Drawing::Point(97, 394);
			this->txtResourceToBook->Name = L"txtResourceToBook";
			this->txtResourceToBook->Size = System::Drawing::Size(744, 34);
			this->txtResourceToBook->TabIndex = 11;
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(92, 366);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(225, 25);
			this->label17->TabIndex = 10;
			this->label17->Text = L"Resource / Item to Book:";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(92, 237);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(188, 25);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Purpose of Booking:";
			// 
			// txtPurpose
			// 
			this->txtPurpose->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPurpose->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPurpose->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPurpose->Location = System::Drawing::Point(97, 265);
			this->txtPurpose->Multiline = true;
			this->txtPurpose->Name = L"txtPurpose";
			this->txtPurpose->Size = System::Drawing::Size(744, 68);
			this->txtPurpose->TabIndex = 8;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(485, 141);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(196, 25);
			this->label15->TabIndex = 7;
			this->label15->Text = L"College / Department";
			// 
			// txtDepartment
			// 
			this->txtDepartment->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtDepartment->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDepartment->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDepartment->Location = System::Drawing::Point(490, 169);
			this->txtDepartment->Name = L"txtDepartment";
			this->txtDepartment->Size = System::Drawing::Size(351, 34);
			this->txtDepartment->TabIndex = 6;
			// 
			// txtRequesterName
			// 
			this->txtRequesterName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtRequesterName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtRequesterName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRequesterName->Location = System::Drawing::Point(97, 170);
			this->txtRequesterName->Name = L"txtRequesterName";
			this->txtRequesterName->Size = System::Drawing::Size(351, 34);
			this->txtRequesterName->TabIndex = 5;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(92, 142);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(200, 25);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Requester Full Name:";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(366, 32);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(241, 48);
			this->label13->TabIndex = 2;
			this->label13->Text = L"New Request";
			// 
			// panelPendingBookings
			// 
			this->panelPendingBookings->Controls->Add(this->btnDecline);
			this->panelPendingBookings->Controls->Add(this->btnApprove);
			this->panelPendingBookings->Controls->Add(this->label22);
			this->panelPendingBookings->Controls->Add(this->dgvPending);
			this->panelPendingBookings->Controls->Add(this->label21);
			this->panelPendingBookings->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelPendingBookings->Location = System::Drawing::Point(0, 0);
			this->panelPendingBookings->Name = L"panelPendingBookings";
			this->panelPendingBookings->Size = System::Drawing::Size(945, 688);
			this->panelPendingBookings->TabIndex = 20;
			// 
			// btnDecline
			// 
			this->btnDecline->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnDecline->BackColor = System::Drawing::Color::Gainsboro;
			this->btnDecline->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDecline->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecline->Location = System::Drawing::Point(237, 605);
			this->btnDecline->Name = L"btnDecline";
			this->btnDecline->Size = System::Drawing::Size(200, 38);
			this->btnDecline->TabIndex = 12;
			this->btnDecline->Text = L"Decline";
			this->btnDecline->UseVisualStyleBackColor = false;
			this->btnDecline->Click += gcnew System::EventHandler(this, &MainForm::btnDecline_Click);
			// 
			// btnApprove
			// 
			this->btnApprove->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnApprove->BackColor = System::Drawing::Color::Gainsboro;
			this->btnApprove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnApprove->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnApprove->Location = System::Drawing::Point(548, 605);
			this->btnApprove->Name = L"btnApprove";
			this->btnApprove->Size = System::Drawing::Size(200, 38);
			this->btnApprove->TabIndex = 11;
			this->btnApprove->Text = L"Approve";
			this->btnApprove->UseVisualStyleBackColor = false;
			this->btnApprove->Click += gcnew System::EventHandler(this, &MainForm::btnApprove_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(56, 138);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(235, 28);
			this->label22->TabIndex = 9;
			this->label22->Text = L"List of Pending Request";
			// 
			// dgvPending
			// 
			this->dgvPending->AllowUserToAddRows = false;
			this->dgvPending->AllowUserToDeleteRows = false;
			this->dgvPending->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvPending->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvPending->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvPending->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dgvPending->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPending->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column10,
					this->Column11, this->Column12, this->Column13, this->Column14, this->Column15
			});
			this->dgvPending->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dgvPending->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dgvPending->Location = System::Drawing::Point(56, 169);
			this->dgvPending->MultiSelect = false;
			this->dgvPending->Name = L"dgvPending";
			this->dgvPending->ReadOnly = true;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvPending->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dgvPending->RowHeadersVisible = false;
			this->dgvPending->RowHeadersWidth = 62;
			this->dgvPending->RowTemplate->Height = 28;
			this->dgvPending->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvPending->Size = System::Drawing::Size(844, 411);
			this->dgvPending->TabIndex = 4;
			this->dgvPending->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dgvPending_CellContentClick);
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"ID";
			this->Column10->MinimumWidth = 8;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Requester Name";
			this->Column11->MinimumWidth = 8;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Resource";
			this->Column12->MinimumWidth = 8;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Event Date";
			this->Column13->MinimumWidth = 8;
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Time Duration";
			this->Column14->MinimumWidth = 8;
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Purpose";
			this->Column15->MinimumWidth = 8;
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(316, 32);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(325, 48);
			this->label21->TabIndex = 3;
			this->label21->Text = L"Pending Bookings";
			// 
			// btnDashboard
			// 
			this->btnDashboard->BackColor = System::Drawing::SystemColors::Control;
			this->btnDashboard->FlatAppearance->BorderSize = 0;
			this->btnDashboard->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->btnDashboard->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDashboard->Location = System::Drawing::Point(52, 231);
			this->btnDashboard->Name = L"btnDashboard";
			this->btnDashboard->Size = System::Drawing::Size(290, 45);
			this->btnDashboard->TabIndex = 2;
			this->btnDashboard->Text = L"Dashboard";
			this->btnDashboard->UseVisualStyleBackColor = false;
			this->btnDashboard->Click += gcnew System::EventHandler(this, &MainForm::btnDashboard_Click);
			// 
			// btnResources
			// 
			this->btnResources->BackColor = System::Drawing::SystemColors::Control;
			this->btnResources->FlatAppearance->BorderSize = 0;
			this->btnResources->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->btnResources->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnResources->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnResources->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResources->Location = System::Drawing::Point(52, 303);
			this->btnResources->Name = L"btnResources";
			this->btnResources->Size = System::Drawing::Size(290, 45);
			this->btnResources->TabIndex = 3;
			this->btnResources->Text = L"Resources List";
			this->btnResources->UseVisualStyleBackColor = false;
			this->btnResources->Click += gcnew System::EventHandler(this, &MainForm::bntResources_Click);
			// 
			// btnNewRequest
			// 
			this->btnNewRequest->BackColor = System::Drawing::SystemColors::Control;
			this->btnNewRequest->FlatAppearance->BorderSize = 0;
			this->btnNewRequest->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->btnNewRequest->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnNewRequest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNewRequest->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewRequest->Location = System::Drawing::Point(52, 373);
			this->btnNewRequest->Name = L"btnNewRequest";
			this->btnNewRequest->Size = System::Drawing::Size(290, 45);
			this->btnNewRequest->TabIndex = 4;
			this->btnNewRequest->Text = L"New Request";
			this->btnNewRequest->UseVisualStyleBackColor = false;
			this->btnNewRequest->Click += gcnew System::EventHandler(this, &MainForm::btnNewRequest_Click);
			// 
			// btnPendingBookings
			// 
			this->btnPendingBookings->BackColor = System::Drawing::SystemColors::Control;
			this->btnPendingBookings->FlatAppearance->BorderSize = 0;
			this->btnPendingBookings->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->btnPendingBookings->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnPendingBookings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPendingBookings->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPendingBookings->Location = System::Drawing::Point(52, 444);
			this->btnPendingBookings->Name = L"btnPendingBookings";
			this->btnPendingBookings->Size = System::Drawing::Size(290, 45);
			this->btnPendingBookings->TabIndex = 5;
			this->btnPendingBookings->Text = L"Pending Bookings";
			this->btnPendingBookings->UseVisualStyleBackColor = false;
			this->btnPendingBookings->Click += gcnew System::EventHandler(this, &MainForm::btnPendingBookings_Click);
			// 
			// btnHistory
			// 
			this->btnHistory->BackColor = System::Drawing::SystemColors::Control;
			this->btnHistory->FlatAppearance->BorderSize = 0;
			this->btnHistory->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->btnHistory->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnHistory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHistory->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHistory->Location = System::Drawing::Point(52, 519);
			this->btnHistory->Name = L"btnHistory";
			this->btnHistory->Size = System::Drawing::Size(290, 45);
			this->btnHistory->TabIndex = 6;
			this->btnHistory->Text = L"Reports and History";
			this->btnHistory->UseVisualStyleBackColor = false;
			this->btnHistory->Click += gcnew System::EventHandler(this, &MainForm::btnHistory_Click);
			// 
			// lblHeaderName
			// 
			this->lblHeaderName->AutoSize = true;
			this->lblHeaderName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHeaderName->ForeColor = System::Drawing::SystemColors::Control;
			this->lblHeaderName->Location = System::Drawing::Point(43, 57);
			this->lblHeaderName->Name = L"lblHeaderName";
			this->lblHeaderName->Size = System::Drawing::Size(195, 45);
			this->lblHeaderName->TabIndex = 9;
			this->lblHeaderName->Text = L"USERNAME";
			this->lblHeaderName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtIDDisplay
			// 
			this->txtIDDisplay->AutoSize = true;
			this->txtIDDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIDDisplay->ForeColor = System::Drawing::SystemColors::Control;
			this->txtIDDisplay->Location = System::Drawing::Point(46, 106);
			this->txtIDDisplay->Name = L"txtIDDisplay";
			this->txtIDDisplay->Size = System::Drawing::Size(133, 25);
			this->txtIDDisplay->TabIndex = 10;
			this->txtIDDisplay->Text = L"00000000000";
			this->txtIDDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->txtIDDisplay->Click += gcnew System::EventHandler(this, &MainForm::txtIDDisplay_Click);
			// 
			// txtRoleDisplay
			// 
			this->txtRoleDisplay->AutoSize = true;
			this->txtRoleDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRoleDisplay->ForeColor = System::Drawing::SystemColors::Control;
			this->txtRoleDisplay->Location = System::Drawing::Point(46, 140);
			this->txtRoleDisplay->Name = L"txtRoleDisplay";
			this->txtRoleDisplay->Size = System::Drawing::Size(89, 25);
			this->txtRoleDisplay->TabIndex = 11;
			this->txtRoleDisplay->Text = L"0000000";
			this->txtRoleDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnLogout
			// 
			this->btnLogout->BackColor = System::Drawing::SystemColors::Control;
			this->btnLogout->FlatAppearance->BorderSize = 0;
			this->btnLogout->FlatAppearance->CheckedBackColor = System::Drawing::Color::Red;
			this->btnLogout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(51, 518);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(290, 45);
			this->btnLogout->TabIndex = 12;
			this->btnLogout->Text = L"Log Out";
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &MainForm::btnLogout_Click);
			// 
			// btnAdminLogout
			// 
			this->btnAdminLogout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnAdminLogout->BackColor = System::Drawing::Color::Gainsboro;
			this->btnAdminLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdminLogout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdminLogout->Location = System::Drawing::Point(123, 633);
			this->btnAdminLogout->Name = L"btnAdminLogout";
			this->btnAdminLogout->Size = System::Drawing::Size(150, 35);
			this->btnAdminLogout->TabIndex = 20;
			this->btnAdminLogout->Text = L"Log Out";
			this->btnAdminLogout->UseVisualStyleBackColor = false;
			this->btnAdminLogout->Click += gcnew System::EventHandler(this, &MainForm::btnAdminLogout_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MidnightBlue;
			this->ClientSize = System::Drawing::Size(1344, 712);
			this->Controls->Add(this->btnAdminLogout);
			this->Controls->Add(this->txtRoleDisplay);
			this->Controls->Add(this->txtIDDisplay);
			this->Controls->Add(this->lblHeaderName);
			this->Controls->Add(this->btnHistory);
			this->Controls->Add(this->btnPendingBookings);
			this->Controls->Add(this->btnNewRequest);
			this->Controls->Add(this->btnResources);
			this->Controls->Add(this->btnDashboard);
			this->Controls->Add(this->panelContainer);
			this->Controls->Add(this->btnLogout);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panelContainer->ResumeLayout(false);
			this->panelReports->ResumeLayout(false);
			this->panelReports->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHistory))->EndInit();
			this->panelDashboard->ResumeLayout(false);
			this->panelDashboard->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvActiveBookings))->EndInit();
			this->panelResources->ResumeLayout(false);
			this->panelResources->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvResources))->EndInit();
			this->panelNewRequest->ResumeLayout(false);
			this->panelNewRequest->PerformLayout();
			this->panelPendingBookings->ResumeLayout(false);
			this->panelPendingBookings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPending))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	// 1. I-display ang account data sa sidebar
	lblHeaderName->Text = currentUserName;
	txtIDDisplay->Text = currentUserID;
	txtRoleDisplay->Text = currentUserRole;

	// 2. DYNAMIC SIDEBAR CONTROL BASE SA ROLE
	if (currentUserRole == "Admin") {
		// --- KUNG ADMIN ---
		btnNewRequest->Visible = true;
		btnPendingBookings->Visible = true;

		// Ipakita ang History, itago ang regular logout
		btnHistory->Visible = true;
		btnLogout->Visible = false;      // Itago ang regular Logout
		btnAdminLogout->Visible = true;  // Ipakita ang Admin Logout
	}
	else {
		// --- KUNG STUDENT/USER ---
		btnNewRequest->Visible = true;
		btnPendingBookings->Visible = true;

		// Itago ang History, ipakita ang regular logout
		btnHistory->Visible = false;
		btnLogout->Visible = true;       // Ipakita ang regular Logout
		btnAdminLogout->Visible = false; // Itago ang Admin Logout
	}

	// 3. I-setup ang default view pagkabukas ng Form
	panelDashboard->Visible = true;
	panelResources->Visible = false;
	panelNewRequest->Visible = false;
	panelPendingBookings->Visible = false;
	panelReports->Visible = false;

	// Kargahan agad ang mga counters at table sa Dashboard
	CalculateAndLoadDashboard();
}
private: void LoadHistory() {
	dgvHistory->Rows->Clear();

	if (!System::IO::File::Exists("bookings.txt")) return;

	try {
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("bookings.txt");
		String^ linya;

		String^ searchKey = txtSearchHistory->Text->Trim();
		String^ searchKeyLower = searchKey->ToLower();
		String^ filterStatus = (cmbStatusFilter->SelectedItem != nullptr) ? cmbStatusFilter->SelectedItem->ToString() : "All";

		while ((linya = sr->ReadLine()) != nullptr) {
			if (String::IsNullOrWhiteSpace(linya)) continue;
			array<String^>^ detalye = linya->Split(',');
			if (detalye->Length < 8) continue;

			String^ id = detalye[0]->Trim();
			String^ requester = detalye[1]->Trim();
			String^ resource = detalye[3]->Trim();
			String^ date = detalye[4]->Trim();
			String^ time = detalye[5]->Trim();
			String^ status = detalye[7]->Trim();

			bool matchStatus = (filterStatus == "All" || status->Equals(filterStatus, StringComparison::OrdinalIgnoreCase));
			bool matchSearch = (searchKey == "" ||
				requester->ToLower()->Contains(searchKeyLower) ||
				id->ToLower()->Contains(searchKeyLower));

			if (matchStatus && matchSearch) {
				dgvHistory->Rows->Add(id, requester, resource, date, time, status);
			}
		}
		sr->Close();
	}
	catch (Exception^ ex) {
		// Silent error
	}
}
private:
	void LoadResources() {
		// 1. Linisin ang table bago magkarga
		dgvResources->Rows->Clear();

		try {
			// 2. Kunin ang eksaktong lokasyon ng text file sa tabi ng app
			String^ exePath = AppDomain::CurrentDomain->BaseDirectory + "resources.txt";
			std::string fullPath = msclr::interop::marshal_as<std::string>(exePath);

			std::ifstream file(fullPath);
			std::string line;

			if (!file.is_open()) {
				MessageBox::Show("Resource file not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// 3. Kunin ang input sa Search bar at gawing lowercase (para hindi seloso sa malaking titik)
			std::string searchInput = msclr::interop::marshal_as<std::string>(txtSearch->Text->ToLower());

			// 4. Kunin ang mga pinili sa ComboBoxes para sa filtering
			std::string selectedType = msclr::interop::marshal_as<std::string>(cmbType->SelectedItem ? cmbType->SelectedItem->ToString() : "All");
			std::string selectedStatus = msclr::interop::marshal_as<std::string>(cmbStatus->SelectedItem ? cmbStatus->SelectedItem->ToString() : "All");

			// 5. Basahin ang file kada linya
			while (std::getline(file, line)) {
				if (line.empty()) continue; // Laktawan kung may blangkong linya sa dulo ng notepad

				std::stringstream ss(line);
				std::string code, name, type, status;

				// Paghiwalayin gamit ang kuwit (comma)
				std::getline(ss, code, ',');
				std::getline(ss, name, ',');
				std::getline(ss, type, ',');
				std::getline(ss, status, ',');

				// =========================================================================
				// 🔍 LOGIC NG FILTERING AT SEARCH (DITO SILA CHINE-TSEK)
				// =========================================================================
				bool matchesType = (selectedType == "All" || selectedType == type);
				bool matchesStatus = (selectedStatus == "All" || selectedStatus == status);

				// Gawing lowercase ang code at pangalan para tumugma sa search bar
				std::string codeLower = code;
				std::string nameLower = name;
				for (char& c : codeLower) c = tolower(c);
				for (char& c : nameLower) c = tolower(c);

				bool matchesSearch = (searchInput == "" ||
					codeLower.find(searchInput) != std::string::npos ||
					nameLower.find(searchInput) != std::string::npos);

				// 6. KUNG PASOK SA FILTERS, I-DISPLAY SA DATA GRID VIEW
				if (matchesType && matchesStatus && matchesSearch) {
					String^ sysCode = gcnew String(code.c_str());
					String^ sysName = gcnew String(name.c_str());
					String^ sysType = gcnew String(type.c_str());
					String^ sysStatus = gcnew String(status.c_str());

					dgvResources->Rows->Add(sysCode, sysName, sysType, sysStatus);
				}
			}
			file.close();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Error loading data: " + ex->Message, "System Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private:
	void SetupBookingConstraints() {
		// Kunin ang oras ngayon
		DateTime ngayon = DateTime::Now;

		// Dagdagan ng 3 araw para sa minimum advance booking rule
		DateTime minDate = ngayon.AddDays(3);

		// I-set ang kalendaryo para HINDI mapindot ang mga nakaraang araw o ang susunod na 1-2 araw
		// (Palitan ang dtpEventDate base sa totoong name ng DateTimePicker mo para sa petsa)
		dtpEventDate->MinDate = minDate;

		// Setup din para sa Start at End Time pickers para maging Orasan lang (walang kalendaryo)
		dtpStartTime->Format = DateTimePickerFormat::Time;
		dtpStartTime->ShowUpDown = true;

		dtpEndTime->Format = DateTimePickerFormat::Time;
		dtpEndTime->ShowUpDown = true;
	}
private: System::Void txtIDDisplay_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	LoadResources(); // I-refresh ang DataGridView tuwing may binago sa Search Bar	
}
private: System::Void cmbType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	LoadResources(); // I-refresh ang DataGridView tuwing may binago sa Type ComboBox
}
private: System::Void cmbStatus_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	LoadResources(); // I-refresh ang DataGridView tuwing may binago sa Status ComboBox	
}
private: System::Void bntResources_Click(System::Object^ sender, System::EventArgs^ e) {
	panelDashboard->Visible = false;
	panelNewRequest->Visible = false;
	panelResources->Visible = true;
	panelPendingBookings->Visible = false;
	panelReports->Visible = false;
	panelReports->Visible = false;
	LoadResources(); // Para mag-refresh ang table pagka-click
}
private: System::Void btnDashboard_Click(System::Object^ sender, System::EventArgs^ e) {
	panelDashboard->Visible = true;
	panelResources->Visible = false;
	panelNewRequest->Visible = false;
	panelPendingBookings->Visible = false;

	CalculateAndLoadDashboard();
}
private: void CalculateAndLoadDashboard() {
	int totalFacilities = 15;
	int pendingCount = 0;
	int approvedTodayCount = 0;

	// 1. Clear agad ang table para fresh ang load
	dgvActiveBookings->Rows->Clear();

	// 2. Kunin ang petsa ngayon (yyyy-MM-dd)
	String^ todayDate = DateTime::Now.ToString("yyyy-MM-dd");

	lblTotalFacilities->Text = totalFacilities.ToString("D2");

	if (!System::IO::File::Exists("bookings.txt")) {
		lblPendingRequest->Text = "00";
		lblApprovedToday->Text = "00";
		return;
	}

	try {
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("bookings.txt");
		String^ linya;

		while ((linya = sr->ReadLine()) != nullptr) {
			if (String::IsNullOrWhiteSpace(linya)) continue;
			array<String^>^ detalye = linya->Split(',');
			if (detalye->Length < 8) continue; // 🛡️ Panangga laban sa Index error

			String^ dateOfEvent = detalye[4]->Trim();
			String^ currentStatus = detalye[7]->Trim();

			// Bilangin ang lahat ng Pending sa system
			if (currentStatus->Equals("Pending", StringComparison::OrdinalIgnoreCase)) {
				pendingCount++;
			}

			// Bilangin ang Approved na gaganapin NGAYON
			if (currentStatus->Equals("Approved", StringComparison::OrdinalIgnoreCase) &&
				dateOfEvent->Equals(todayDate, StringComparison::OrdinalIgnoreCase)) {
				approvedTodayCount++;
			}

			// KONTROL 3 (Ibinalik sa Today Only):
			// Ipakita lang sa Dashboard kung para ngayong araw ang booking
			if (dateOfEvent->Equals(todayDate, StringComparison::OrdinalIgnoreCase)) {
				dgvActiveBookings->Rows->Add(detalye[0], detalye[3], detalye[1], detalye[5], currentStatus);
			}
		}
		sr->Close();

		// Update labels
		lblPendingRequest->Text = pendingCount.ToString("D2");
		lblApprovedToday->Text = approvedTodayCount.ToString("D2");
	}
	catch (Exception^ ex) {
		// Silent error handling para walang istorbo sa UI
	}
}
private: void LoadAllPendingBookings() {
	// 1. Linisin muna ang DataGridView ng Pending Bookings para walang duplicate
	// (Siguraduhing 'dgvPending' ang pangalan ng grid mo sa panel na 'yan)
	dgvPending->Rows->Clear();

	if (!System::IO::File::Exists("bookings.txt")) {
		return;
	}

	try {
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("bookings.txt");
		String^ linya;

		while ((linya = sr->ReadLine()) != nullptr) {
			// 🛡️ PANANGGA 1: Kung ang linya ay blangko (whitespace o enter lang), laktawan!
			if (String::IsNullOrWhiteSpace(linya)) {
				continue;
			}

			array<String^>^ detalye = linya->Split(',');

			// 🛡️ PANANGGA 2: Siguraduhing may sapat na kolum (8 columns) bago basahin ang index [7]
			if (detalye->Length < 8) {
				continue;
			}

			String^ status = detalye[7]->Trim();

			// 2. Filter: Dahil Admin ito, ipapakita lang natin lahat ng NAKA-PENDING
			if (status == "Pending") {
				// Isalpak sa DataGridView: ID, Requester Name, Resource Code, Event Date, Time Duration, Purpose
				dgvPending->Rows->Add(detalye[0], detalye[1], detalye[3], detalye[4], detalye[5], detalye[6]);
			}
		}
		sr->Close();
	}
	catch (Exception^ ex) {
		// Iniwanang blangko ang catch para walang pop-up box na lumabas kung walang laman ang file
	}
}
private: System::Void dgvResources_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnNewRequest_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. LIPAT PANEL: Ilitaw ang New Request panel, itago ang lahat ng iba pa
	panelDashboard->Visible = false;
	panelResources->Visible = false;
	panelPendingBookings->Visible = false;
	panelReports->Visible = false;
	// Siguraduhing tugma ito sa eksaktong Name ng panel mo sa designer (bale ito yung nakikita sa screenshot)
	panelNewRequest->Visible = true;

	// 2. Kusa nitong isusulat ang pangalan at detalye ng naka-login na user sa TextBoxes
	// (I-tsek ang design name ng textboxes mo at palitan ito kung iba ang pinangalan mo)
	txtRequesterName->Text = currentUserName;
	txtDepartment->Text = currentUserDepartment;

	// 3. I-setup ang 3 days advance rule para sa mga kalendaryo at oras
	SetupBookingConstraints();
}
private: System::Void btnbookNow_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Siguraduhing may napiling linya o hilera sa DataGridView
	if (dgvResources->SelectedRows->Count > 0) {

		// 2. Kunin ang Code at Name mula sa napiling row ng table
		// Cells[0] ay ang Resource Code, Cells[1] ay ang Resource Name
		String^ resCode = dgvResources->SelectedRows[0]->Cells[0]->Value->ToString();
		String^ resName = dgvResources->SelectedRows[0]->Cells[1]->Value->ToString();

		// 3. Pagsamahin sila para sa iyong Resource/Item to Book TextBox
		// (Siguraduhing 'txtResourceToBook' ang totoong pangalan ng TextBox mo sa New Request Form)
		txtResourceToBook->Text = resCode + " - " + resName;

		// 4. Awtomatiko na rin nating isulat ang detalye ng User para bawas-trabaho
		txtRequesterName->Text = currentUserName;
		txtDepartment->Text = currentUserDepartment; // O kung anong department variable mo

		// 5. I-setup ang 3-days advance restriction sa kalendaryo
		SetupBookingConstraints();

		// 6. LIPAT PANEL: Itago ang listahan, ilitaw ang New Request Form!
		panelResources->Visible = false;
		panelNewRequest->Visible = true;
	}
	else {
		// Kung nagmamadali si user at hindi pumili ng row, paalalahanan natin
		MessageBox::Show("Please select a resource from the list before booking.",
			"Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: void LoadUserBookings() {
	try {
		dgvPending->Rows->Clear(); // Linisin muna ang table bago mag-load

		// Kung wala pang bookings.txt, huwag muna mag-load ng anuman
		if (!System::IO::File::Exists("bookings.txt")) return;

		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("bookings.txt");
		String^ linya;

		while ((linya = sr->ReadLine()) != nullptr) {
			array<String^>^ detalye = linya->Split(',');

			// detalye[1] ay ang Requester Name. I-filter natin para pangalan lang niya ang lumitaw!
			if (detalye[1] == currentUserName) {
				// I-add sa table ang: ID, Requester Name, Resource Code, Event Date, Time Duration, Purpose
				dgvPending->Rows->Add(detalye[0], detalye[1], detalye[3], detalye[4], detalye[5], detalye[6]);
			}
		}
		sr->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to load bookings. Please try again: " + ex->Message, "System Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnPendingBookings_Click(System::Object^ sender, System::EventArgs^ e) {
	panelDashboard->Visible = false;
	panelResources->Visible = false;
	panelNewRequest->Visible = false;
	panelReports->Visible = false;
	panelPendingBookings->Visible = true; // Buksan ang Pending Panel

	// Ipakita ang Approve at Decline buttons para kay Admin
	if (currentUserRole == "Admin") {
		btnApprove->Visible = true;
		btnDecline->Visible = true;
	}
	else {
		btnApprove->Visible = false;
		btnDecline->Visible = false;
	}

	// 🌟 TAWAGIN ANG BAGONG CODES PARA MAGALAM ANG TABLE
	LoadAllPendingBookings();
}
private: System::Void dgvPending_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnSubmitRequest_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. VALIDATION: I-tsek kung may kulang na field ang user
	if (txtPurpose->Text->Trim() == "" || txtResourceToBook->Text->Trim() == "") {
		MessageBox::Show("Please provide the purpose of your booking.",
			"Missing Information", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	try {
		// 2. KUNIN ANG MGA DETALYE MULA SA UI CONTROLS
		// Gumawa ng kakaibang Request ID gamit ang oras
		String^ refID = "REQ-" + DateTime::Now.Ticks.ToString()->Substring(11);
		String^ name = txtRequesterName->Text;
		String^ dept = txtDepartment->Text;
		String^ resource = txtResourceToBook->Text;
		String^ purpose = txtPurpose->Text;

		// Kuhanin ang Petsa at Oras sa tamang pormat
		String^ eventDate = dtpEventDate->Value.ToString("yyyy-MM-dd");
		String^ timeDuration = dtpStartTime->Value.ToString("hh:mm tt") + " - " + dtpEndTime->Value.ToString("hh:mm tt");

		String^ status = "Pending"; // Laging "Pending" ang panimula ng bagong request

		// 3. ISULAT SA TEXT FILE (I-append sa dulo gamit ang comma ',' bilang separator)
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("bookings.txt", true);
		sw->WriteLine(refID + "," + name + "," + dept + "," + resource + "," + eventDate + "," + timeDuration + "," + purpose + "," + status);
		sw->Close();

		// 4. MAGPAKITA NG SUCCESS MESSAGE
		MessageBox::Show("Your booking request has been successfully submitted.",
			"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// 5. LINISIN ANG FORM AT AUTOMATIC NA LIPAT SA PENDING PANEL
		txtPurpose->Clear();

		// Tawagin ang click ng sidebar button para automatic lumipat ng panel at mag-load ang data
		btnPendingBookings_Click(sender, e);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to save booking: " + ex->Message, "System Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Magtanong muna sa user para iwas aksidenteng pagpindot
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"Are you sure you want to log out?",
		"Confirm Log Out",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question
	);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		// 2. Isasara ang MainForm para bumalik sa Login Window 
		// (Siguraduhing sa Login Form mo, gumamit ka ng Show() at hindi Application::Exit() sa pagbukas nito)
		this->Close();
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDecline_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Tiyaking may napiling row sa DataGridView (dgvPending)
	if (dgvPending->SelectedRows->Count == 0) {
		MessageBox::Show("Please select a booking from the list to decline.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// 2. Kunin ang Booking ID mula sa unang kolum (Index 0) ng napiling row
	String^ targetID = dgvPending->SelectedRows[0]->Cells[0]->Value->ToString();

	// 3. Mag-confirm kay Admin kung sigurado talaga siya
	if (MessageBox::Show("Are you sure you want to decline this booking. " + targetID + "?", "Confirm Decline", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::No) {
		return;
	}

	try {
		System::Collections::Generic::List<String^>^ mgaLinya = gcnew System::Collections::Generic::List<String^>();

		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("bookings.txt");
		String^ linya;

		while ((linya = sr->ReadLine()) != nullptr) {
			if (String::IsNullOrWhiteSpace(linya)) continue;

			array<String^>^ detalye = linya->Split(',');
			if (detalye->Length < 8) {
				mgaLinya->Add(linya);
				continue;
			}

			// Kung ito ang Booking ID na hinahanap natin, palitan ang status (detalye[7]) ng "Declined"
			if (detalye[0]->Trim() == targetID->Trim()) {
				String^ bagongLinya = detalye[0] + "," + detalye[1] + "," + detalye[2] + "," +
					detalye[3] + "," + detalye[4] + "," + detalye[5] + "," +
					detalye[6] + ",Declined";
				mgaLinya->Add(bagongLinya);
			}
			else {
				mgaLinya->Add(linya);
			}
		}
		sr->Close();

		// 4. Isulat muli ang lahat ng na-update na linya pabalik sa bookings.txt
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("bookings.txt", false);
		for each (String ^ l in mgaLinya) {
			sw->WriteLine(l);
		}
		sw->Close();

		MessageBox::Show("The booking " + targetID + " has been declined.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// 5. I-refresh ang data sa Screen para mawala na ang na-decline na request
		LoadAllPendingBookings();
		CalculateAndLoadDashboard();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to decline booking: " + ex->Message, "System Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnApprove_Click(System::Object ^ sender, System::EventArgs ^ e) {
	// 1. Tiyaking may napiling row sa DataGridView (dgvPending)
	if (dgvPending->SelectedRows->Count == 0) {
		MessageBox::Show("Please select a booking from the list to approve.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// 2. Kunin ang Booking ID mula sa unang kolum (Index 0) ng napiling row
	String^ targetID = dgvPending->SelectedRows[0]->Cells[0]->Value->ToString();

	// 3. Mag-confirm kay Admin kung sigurado talaga siya
	if (MessageBox::Show("Are you sure you want to approve this booking. " + targetID + "?", "Confirm Approval", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::No) {
		return;
	}

	try {
		// Mag-create ng temporary list para i-store ang mga linyang babasahin
		System::Collections::Generic::List<String^>^ mgaLinya = gcnew System::Collections::Generic::List<String^>();

		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("bookings.txt");
		String^ linya;

		while ((linya = sr->ReadLine()) != nullptr) {
			if (String::IsNullOrWhiteSpace(linya)) continue;

			array<String^>^ detalye = linya->Split(',');
			if (detalye->Length < 8) {
				mgaLinya->Add(linya);
				continue;
			}

			// Kung ito ang Booking ID na hinahanap natin, palitan ang status (detalye[7]) ng "Approved"
			if (detalye[0]->Trim() == targetID->Trim()) {
				String^ bagongLinya = detalye[0] + "," + detalye[1] + "," + detalye[2] + "," +
					detalye[3] + "," + detalye[4] + "," + detalye[5] + "," +
					detalye[6] + ",Approved";
				mgaLinya->Add(bagongLinya);
			}
			else {
				mgaLinya->Add(linya); // Iwanan sa dating status kung hindi naman ito ang target
			}
		}
		sr->Close();

		// 4. Isulat muli ang lahat ng na-update na linya pabalik sa bookings.txt
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("bookings.txt", false); // 'false' para i-overwrite ang file
		for each (String ^ l in mgaLinya) {
			sw->WriteLine(l);
		}
		sw->Close();

		MessageBox::Show("The booking " + targetID + " has been approved.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// 5. I-refresh ang data sa Screen para mawala na ang na-approve na request
		LoadAllPendingBookings();
		CalculateAndLoadDashboard();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to approve booking: " + ex->Message, "System Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtSearchHistory_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	LoadHistory(); // I-refresh ang History table tuwing may binago sa Search Bar ng History
}
private: System::Void cmbStatusFilter_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	LoadHistory(); // I-refresh ang History table tuwing may binago sa Status Filter ComboBox ng History
}
private: System::Void btnHistory_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Itago ang lahat ng ibang panels na nakabukas
	panelDashboard->Visible = false;
	panelResources->Visible = false;
	panelNewRequest->Visible = false;
	panelPendingBookings->Visible = false;

	// 2. Ipakita ang Reports and History panel
	panelReports->Visible = true;
	panelReports->BringToFront(); // Siguraduhing nasa harap siya

	// 3. I-set ang default filter sa "All" para makita lahat agad
	cmbStatusFilter->SelectedItem = "All";

	// 4. Tawagin ang function para mag-load ang data sa dgvHistory
	LoadHistory();
}
private: System::Void btnAdminLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"Are you sure you want to log out?",
		"Confirm Log Out",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question
	);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		// 2. Isasara ang MainForm para bumalik sa Login Window 
		// (Siguraduhing sa Login Form mo, gumamit ka ng Show() at hindi Application::Exit() sa pagbukas nito)
		this->Close();
	}
}
};
}
