#pragma once
#include "MainForm.h"
#include "CreateAccount.h"
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
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::TextBox^ txtPassword;


	private: System::Windows::Forms::Button^ btnCreateAccount;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnCreateAccount = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(383, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(581, 96);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CAMPUS FACILITY AND EQUIPMENT\r\nBOOKING SYSTEM";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// txtEmail
			// 
			this->txtEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(479, 311);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(386, 34);
			this->txtEmail->TabIndex = 0;
			// 
			// btnLogin
			// 
			this->btnLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLogin->BackColor = System::Drawing::Color::Gainsboro;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(496, 527);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(350, 38);
			this->btnLogin->TabIndex = 1;
			this->btnLogin->Text = L"LOG IN";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(479, 411);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(386, 34);
			this->txtPassword->TabIndex = 2;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// btnCreateAccount
			// 
			this->btnCreateAccount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCreateAccount->BackColor = System::Drawing::Color::Gainsboro;
			this->btnCreateAccount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreateAccount->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreateAccount->Location = System::Drawing::Point(496, 602);
			this->btnCreateAccount->Name = L"btnCreateAccount";
			this->btnCreateAccount->Size = System::Drawing::Size(350, 38);
			this->btnCreateAccount->TabIndex = 3;
			this->btnCreateAccount->Text = L"CREATE ACCOUNT";
			this->btnCreateAccount->UseVisualStyleBackColor = false;
			this->btnCreateAccount->Click += gcnew System::EventHandler(this, &Login::CreateAccount_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(474, 383);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password:";
			this->label2->Click += gcnew System::EventHandler(this, &Login::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(474, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Email:";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(569, 579);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Don\'t have an account yet\?";
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Location = System::Drawing::Point(479, 451);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(148, 24);
			this->checkBox1->TabIndex = 27;
			this->checkBox1->Text = L"Show Password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Login::checkBox1_CheckedChanged);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MidnightBlue;
			this->ClientSize = System::Drawing::Size(1344, 712);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnCreateAccount);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label1);
			this->Name = L"Login";
			this->Text = L" ";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CreateAccount_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateAccount^ regForm = gcnew CreateAccount();
	regForm->ShowDialog(); // Bubuksan nito ang registration form bilang isang pop-up window
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		txtPassword->UseSystemPasswordChar = false; // Ipakita ang password
	}
	else {
		txtPassword->UseSystemPasswordChar = true; // Itago ang password
	}
}
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. I-tsek kung may bakanteng input ang user
	if (txtEmail->Text == "" || txtPassword->Text == "") {
		MessageBox::Show("Please enter your Email and Password.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// 2. I-convert ang Form Inputs para maging Standard C++ string
	std::string inputEmail = msclr::interop::marshal_as<std::string>(txtEmail->Text->Trim());
	std::string inputPassword = msclr::interop::marshal_as<std::string>(txtPassword->Text->Trim());

	// 3. Buksan ang users.txt para sa pagbasa (ifstream)
	std::ifstream userFile("users.txt");
	std::string line;

	bool loginSuccess = false;
	String^ foundName = "";
	String^ foundID = "";
	String^ foundRole = "";
	String^ foundDepartment = "";

	if (userFile.is_open()) {
		while (std::getline(userFile, line)) {
			std::stringstream ss(line);
			std::string id, password, firstName, lastName, role, email, dept;

			// Hatiin ang bawat linya gamit ang kuwit (comma) base sa pagkakasave sa Register
			std::getline(ss, id, ',');
			std::getline(ss, password, ',');
			std::getline(ss, firstName, ',');
			std::getline(ss, lastName, ',');
			std::getline(ss, role, ',');       // <--- Dito mahuhuli kung "Admin" o "Student"
			std::getline(ss, email, ',');
			std::getline(ss, dept, ',');

			// 4. I-tsek kung nag-match ang tinype na Email at Password sa rekord ng file
			if (email == inputEmail && password == inputPassword) {
				loginSuccess = true;

				// I-convert pabalik sa System::String^ para maipasa natin sa MainForm
				foundName = gcnew String((firstName + " " + lastName).c_str());
				foundID = gcnew String(id.c_str());
				foundRole = gcnew String(role.c_str());          // <--- Domino effect para sa Role
				foundDepartment = gcnew String(dept.c_str());
				break; // Hinto na ang loop dahil nahanap na ang account
			}
		}
		userFile.close(); // Laging isara ang file pagkatapos basahin
	}
	else {
		MessageBox::Show("Account not found.\nPlease create an account first.", "System Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// 5. Pagpapasya kung papasukin ang user sa system
	if (loginSuccess) {
		// I-tago ang Login screen
		this->Hide();

		// 🚀 TRANSMISSION: Ipinapasa ang apat na nahanap na detalye sa constructor ng MainForm!
		MainForm^ mainSystem = gcnew MainForm(foundName, foundID, foundRole, foundDepartment);
		mainSystem->ShowDialog();

		// Kapag tuluyan nang isinara ng user ang MainForm, isasara na rin ang app na ito
		this->Close();
	}
	else {
		MessageBox::Show("Incorrect Email or Password. Please try again.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
