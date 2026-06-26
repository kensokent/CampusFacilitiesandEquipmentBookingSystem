#pragma once
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>

namespace CampusBookingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateAccount
	/// </summary>
	public ref class CreateAccount : public System::Windows::Forms::Form
	{
	public:
		CreateAccount(void)
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
		~CreateAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtLastName;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtIDNumber;


	private: System::Windows::Forms::ComboBox^ cmbRole;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtConfirmPassword;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnLogin;


	private: System::Windows::Forms::Button^ btnRegister;



	private: System::Windows::Forms::ComboBox^ cmbDept;




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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtIDNumber = (gcnew System::Windows::Forms::TextBox());
			this->cmbRole = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->cmbDept = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(312, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"First Name:";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFirstName->Location = System::Drawing::Point(317, 204);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(300, 34);
			this->txtFirstName->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(533, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 45);
			this->label1->TabIndex = 8;
			this->label1->Text = L"CREATE ACCOUNT";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(750, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 25);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Last Name:";
			// 
			// txtLastName
			// 
			this->txtLastName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtLastName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLastName->Location = System::Drawing::Point(755, 204);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(300, 34);
			this->txtLastName->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(312, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"School ID No.";
			// 
			// txtIDNumber
			// 
			this->txtIDNumber->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtIDNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIDNumber->Location = System::Drawing::Point(317, 307);
			this->txtIDNumber->Name = L"txtIDNumber";
			this->txtIDNumber->Size = System::Drawing::Size(300, 34);
			this->txtIDNumber->TabIndex = 11;
			// 
			// cmbRole
			// 
			this->cmbRole->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmbRole->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbRole->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbRole->FormattingEnabled = true;
			this->cmbRole->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Student", L"Faculty / Teacher", L"School Organizer Representative",
					L"School Staff / Personel", L"Admin"
			});
			this->cmbRole->Location = System::Drawing::Point(755, 305);
			this->cmbRole->Name = L"cmbRole";
			this->cmbRole->Size = System::Drawing::Size(300, 36);
			this->cmbRole->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(750, 277);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 25);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Role:";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(312, 376);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 25);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Email:";
			// 
			// txtEmail
			// 
			this->txtEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(317, 404);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(300, 34);
			this->txtEmail->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(312, 480);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(104, 25);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Password:";
			// 
			// txtPassword
			// 
			this->txtPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(317, 508);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(300, 34);
			this->txtPassword->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(750, 480);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(177, 25);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Confirm Password:";
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtConfirmPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtConfirmPassword->Location = System::Drawing::Point(755, 508);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->Size = System::Drawing::Size(300, 34);
			this->txtConfirmPassword->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(750, 376);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(202, 25);
			this->label9->TabIndex = 22;
			this->label9->Text = L"College / Department:";
			// 
			// btnLogin
			// 
			this->btnLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLogin->BackColor = System::Drawing::Color::Gainsboro;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(417, 623);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(200, 38);
			this->btnLogin->TabIndex = 23;
			this->btnLogin->Text = L"LOG IN";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &CreateAccount::button1_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnRegister->BackColor = System::Drawing::Color::Gainsboro;
			this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->Location = System::Drawing::Point(755, 623);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(200, 38);
			this->btnRegister->TabIndex = 24;
			this->btnRegister->Text = L"REGISTER";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &CreateAccount::btnRegister_Click);
			// 
			// cmbDept
			// 
			this->cmbDept->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmbDept->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbDept->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbDept->FormattingEnabled = true;
			this->cmbDept->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"CoTED", L"CAS", L"CBA", L"ISHTM", L"TVD", L"CCS",
					L"CoEDT", L"CoCA", L"Admin"
			});
			this->cmbDept->Location = System::Drawing::Point(755, 404);
			this->cmbDept->Name = L"cmbDept";
			this->cmbDept->Size = System::Drawing::Size(300, 36);
			this->cmbDept->TabIndex = 27;
			// 
			// CreateAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MidnightBlue;
			this->ClientSize = System::Drawing::Size(1344, 712);
			this->Controls->Add(this->cmbDept);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtConfirmPassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cmbRole);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtIDNumber);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtFirstName);
			this->Name = L"CreateAccount";
			this->Text = L"CreateAccount";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &CreateAccount::CreateAccount_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. VALIDATION: Siguraduhing walang bakanteng fields at may napiling Role
	if (txtIDNumber->Text->Trim() == "" || txtPassword->Text->Trim() == "" ||
		txtFirstName->Text->Trim() == "" || txtLastName->Text->Trim() == "" ||
		txtEmail->Text->Trim() == "" || cmbRole->SelectedIndex == -1) {

		MessageBox::Show("Please fill in all fields.",
			"Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	try {
		// 2. I-convert ang Managed Strings (System::String^) papuntang Standard C++ Strings (std::string)
		std::string reg_id = msclr::interop::marshal_as<std::string>(txtIDNumber->Text->Trim());
		std::string reg_pass = msclr::interop::marshal_as<std::string>(txtPassword->Text->Trim());
		std::string reg_first = msclr::interop::marshal_as<std::string>(txtFirstName->Text->Trim());
		std::string reg_last = msclr::interop::marshal_as<std::string>(txtLastName->Text->Trim());
		std::string reg_role = msclr::interop::marshal_as<std::string>(cmbRole->SelectedItem->ToString()); // "Admin" o "Student"
		std::string reg_email = msclr::interop::marshal_as<std::string>(txtEmail->Text->Trim());

		// Automatic na itinatakda ang Department base sa Role na pinili
		std::string reg_dept = (reg_role == "Admin") ? "Administration" : "CCS";

		// 3. Buksan ang users.txt sa "Append" mode (std::ios::app) para maidagdag sa dulo ng file
		std::ofstream regFile("users.txt", std::ios::app);

		if (regFile.is_open()) {
			// SAKTO SA FORMAT NG LOGIN: id,password,firstName,lastName,role,email,dept
			regFile << reg_id << ","
				<< reg_pass << ","
				<< reg_first << ","
				<< reg_last << ","
				<< reg_role << ","
				<< reg_email << ","
				<< reg_dept << "\n";

			regFile.close(); // Isara ang file pagkatapos isulat ang bagong account

			// 4. Magpakita ng tagumpay na mensahe
			MessageBox::Show("The account for " + txtFirstName->Text + " has been successfully registered as a " + cmbRole->SelectedItem->ToString() + "!",
				"Registration Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// 5. Linisin ang mga Textboxes at ComboBox para sa susunod na gagamit
			txtIDNumber->Clear();
			txtPassword->Clear();
			txtFirstName->Clear();
			txtLastName->Clear();
			txtEmail->Clear();
			cmbRole->SelectedIndex = -1; // Ibalik sa walang nakapili
		}
		else {
			MessageBox::Show("Unable to open the database file for writing.", "System Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred while saving the account: " + ex->Message, "System Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void CreateAccount_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
