#pragma once

#include "HelloPanel.h"

#include "Wood1.h"

namespace IZNT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void);
		void SetForm(System::Windows::Forms::Panel^, System::Windows::Forms::Control^);
	protected:
		~MainForm();
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ wood_group;
	private: System::Windows::Forms::Button^ steel_group;


	private: System::Windows::Forms::Button^ btnWood;
	private: System::Windows::Forms::Button^ btnWoodBalk;
	private: System::Windows::Forms::Button^ btnWoodTwoBalk;


	private: System::Windows::Forms::Button^ btnWoodPack;


	private: System::Windows::Forms::Button^ btnWoodUnderwater;
	private: System::Windows::Forms::Button^ btnWoodNoncontact;
	private: System::Windows::Forms::Button^ btnWoodNoncontactUnderwater;


	private: System::Windows::Forms::Button^ btnSteelPlate;

	private: System::Windows::Forms::Button^ btnSteelBalk;
	private: System::Windows::Forms::Button^ btnSteelTube;
	private: System::Windows::Forms::Button^ btnSteelRod;
	private: System::Windows::Forms::Button^ btnSteelCable;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

	public:
#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->wood_group = (gcnew System::Windows::Forms::Button());
			this->btnWood = (gcnew System::Windows::Forms::Button());
			this->btnWoodBalk = (gcnew System::Windows::Forms::Button());
			this->btnWoodTwoBalk = (gcnew System::Windows::Forms::Button());
			this->btnWoodPack = (gcnew System::Windows::Forms::Button());
			this->btnWoodUnderwater = (gcnew System::Windows::Forms::Button());
			this->btnWoodNoncontact = (gcnew System::Windows::Forms::Button());
			this->btnWoodNoncontactUnderwater = (gcnew System::Windows::Forms::Button());
			this->steel_group = (gcnew System::Windows::Forms::Button());
			this->btnSteelPlate = (gcnew System::Windows::Forms::Button());
			this->btnSteelBalk = (gcnew System::Windows::Forms::Button());
			this->btnSteelTube = (gcnew System::Windows::Forms::Button());
			this->btnSteelRod = (gcnew System::Windows::Forms::Button());
			this->btnSteelCable = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(719, 591);
			this->panel1->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->wood_group);
			this->flowLayoutPanel1->Controls->Add(this->btnWood);
			this->flowLayoutPanel1->Controls->Add(this->btnWoodBalk);
			this->flowLayoutPanel1->Controls->Add(this->btnWoodTwoBalk);
			this->flowLayoutPanel1->Controls->Add(this->btnWoodPack);
			this->flowLayoutPanel1->Controls->Add(this->btnWoodUnderwater);
			this->flowLayoutPanel1->Controls->Add(this->btnWoodNoncontact);
			this->flowLayoutPanel1->Controls->Add(this->btnWoodNoncontactUnderwater);
			this->flowLayoutPanel1->Controls->Add(this->steel_group);
			this->flowLayoutPanel1->Controls->Add(this->btnSteelPlate);
			this->flowLayoutPanel1->Controls->Add(this->btnSteelBalk);
			this->flowLayoutPanel1->Controls->Add(this->btnSteelTube);
			this->flowLayoutPanel1->Controls->Add(this->btnSteelRod);
			this->flowLayoutPanel1->Controls->Add(this->btnSteelCable);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(720, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(199, 591);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// wood_group
			// 
			this->wood_group->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wood_group->Location = System::Drawing::Point(5, 3);
			this->wood_group->Name = L"wood_group";
			this->wood_group->Size = System::Drawing::Size(174, 44);
			this->wood_group->TabIndex = 1;
			this->wood_group->Text = L"������";
			this->wood_group->UseVisualStyleBackColor = true;
			this->wood_group->Click += gcnew System::EventHandler(this, &MainForm::wood_group_Click);
			// 
			// btnWood
			// 
			this->btnWood->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnWood->Location = System::Drawing::Point(24, 53);
			this->btnWood->Name = L"btnWood";
			this->btnWood->Size = System::Drawing::Size(155, 86);
			this->btnWood->TabIndex = 7;
			this->btnWood->Text = L"������";
			this->btnWood->UseVisualStyleBackColor = true;
			this->btnWood->Visible = false;
			this->btnWood->Click += gcnew System::EventHandler(this, &MainForm::btnWood_Click);
			// 
			// btnWoodBalk
			// 
			this->btnWoodBalk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->btnWoodBalk->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnWoodBalk->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnWoodBalk->Location = System::Drawing::Point(24, 145);
			this->btnWoodBalk->Name = L"btnWoodBalk";
			this->btnWoodBalk->Size = System::Drawing::Size(155, 86);
			this->btnWoodBalk->TabIndex = 8;
			this->btnWoodBalk->Text = L"����";
			this->btnWoodBalk->UseVisualStyleBackColor = false;
			this->btnWoodBalk->Visible = false;
			// 
			// btnWoodTwoBalk
			// 
			this->btnWoodTwoBalk->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnWoodTwoBalk->Location = System::Drawing::Point(24, 237);
			this->btnWoodTwoBalk->Name = L"btnWoodTwoBalk";
			this->btnWoodTwoBalk->Size = System::Drawing::Size(155, 86);
			this->btnWoodTwoBalk->TabIndex = 9;
			this->btnWoodTwoBalk->Text = L"���������� ����������� �����";
			this->btnWoodTwoBalk->UseVisualStyleBackColor = true;
			this->btnWoodTwoBalk->Visible = false;
			// 
			// btnWoodPack
			// 
			this->btnWoodPack->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnWoodPack->Location = System::Drawing::Point(24, 329);
			this->btnWoodPack->Name = L"btnWoodPack";
			this->btnWoodPack->Size = System::Drawing::Size(155, 86);
			this->btnWoodPack->TabIndex = 10;
			this->btnWoodPack->Text = L"������ ������ ��� �����";
			this->btnWoodPack->UseVisualStyleBackColor = true;
			this->btnWoodPack->Visible = false;
			// 
			// btnWoodUnderwater
			// 
			this->btnWoodUnderwater->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnWoodUnderwater->Location = System::Drawing::Point(24, 421);
			this->btnWoodUnderwater->Name = L"btnWoodUnderwater";
			this->btnWoodUnderwater->Size = System::Drawing::Size(155, 86);
			this->btnWoodUnderwater->TabIndex = 11;
			this->btnWoodUnderwater->Text = L"��������� ������ ��� �����";
			this->btnWoodUnderwater->UseVisualStyleBackColor = true;
			this->btnWoodUnderwater->Visible = false;
			// 
			// btnWoodNoncontact
			// 
			this->btnWoodNoncontact->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnWoodNoncontact->Location = System::Drawing::Point(24, 513);
			this->btnWoodNoncontact->Name = L"btnWoodNoncontact";
			this->btnWoodNoncontact->Size = System::Drawing::Size(155, 86);
			this->btnWoodNoncontact->TabIndex = 12;
			this->btnWoodNoncontact->Text = L"������ ������������ �������";
			this->btnWoodNoncontact->UseVisualStyleBackColor = true;
			this->btnWoodNoncontact->Visible = false;
			// 
			// btnWoodNoncontactUnderwater
			// 
			this->btnWoodNoncontactUnderwater->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnWoodNoncontactUnderwater->Location = System::Drawing::Point(24, 605);
			this->btnWoodNoncontactUnderwater->Name = L"btnWoodNoncontactUnderwater";
			this->btnWoodNoncontactUnderwater->Size = System::Drawing::Size(155, 86);
			this->btnWoodNoncontactUnderwater->TabIndex = 13;
			this->btnWoodNoncontactUnderwater->Text = L"������ ������������ ������� ��� �����";
			this->btnWoodNoncontactUnderwater->UseVisualStyleBackColor = true;
			this->btnWoodNoncontactUnderwater->Visible = false;
			// 
			// steel_group
			// 
			this->steel_group->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->steel_group->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->steel_group->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->steel_group->Location = System::Drawing::Point(5, 697);
			this->steel_group->Name = L"steel_group";
			this->steel_group->Size = System::Drawing::Size(174, 44);
			this->steel_group->TabIndex = 2;
			this->steel_group->Text = L"�����";
			this->steel_group->UseVisualStyleBackColor = false;
			this->steel_group->Click += gcnew System::EventHandler(this, &MainForm::steel_group_Click);
			// 
			// btnSteelPlate
			// 
			this->btnSteelPlate->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnSteelPlate->Location = System::Drawing::Point(24, 747);
			this->btnSteelPlate->Name = L"btnSteelPlate";
			this->btnSteelPlate->Size = System::Drawing::Size(155, 86);
			this->btnSteelPlate->TabIndex = 14;
			this->btnSteelPlate->Text = L"�������� �����";
			this->btnSteelPlate->UseVisualStyleBackColor = true;
			this->btnSteelPlate->Visible = false;
			// 
			// btnSteelBalk
			// 
			this->btnSteelBalk->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnSteelBalk->Location = System::Drawing::Point(24, 839);
			this->btnSteelBalk->Name = L"btnSteelBalk";
			this->btnSteelBalk->Size = System::Drawing::Size(155, 86);
			this->btnSteelBalk->TabIndex = 15;
			this->btnSteelBalk->Text = L"�������� �����";
			this->btnSteelBalk->UseVisualStyleBackColor = true;
			this->btnSteelBalk->Visible = false;
			// 
			// btnSteelTube
			// 
			this->btnSteelTube->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnSteelTube->Location = System::Drawing::Point(24, 931);
			this->btnSteelTube->Name = L"btnSteelTube";
			this->btnSteelTube->Size = System::Drawing::Size(155, 86);
			this->btnSteelTube->TabIndex = 16;
			this->btnSteelTube->Text = L"�������� �����";
			this->btnSteelTube->UseVisualStyleBackColor = true;
			this->btnSteelTube->Visible = false;
			// 
			// btnSteelRod
			// 
			this->btnSteelRod->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnSteelRod->Location = System::Drawing::Point(24, 1023);
			this->btnSteelRod->Name = L"btnSteelRod";
			this->btnSteelRod->Size = System::Drawing::Size(155, 86);
			this->btnSteelRod->TabIndex = 17;
			this->btnSteelRod->Text = L"�������� �������";
			this->btnSteelRod->UseVisualStyleBackColor = true;
			this->btnSteelRod->Visible = false;
			// 
			// btnSteelCable
			// 
			this->btnSteelCable->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnSteelCable->Location = System::Drawing::Point(24, 1115);
			this->btnSteelCable->Name = L"btnSteelCable";
			this->btnSteelCable->Size = System::Drawing::Size(155, 86);
			this->btnSteelCable->TabIndex = 18;
			this->btnSteelCable->Text = L"�������� �����";
			this->btnSteelCable->UseVisualStyleBackColor = true;
			this->btnSteelCable->Visible = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(919, 591);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MainForm";
			this->Text = L"������ �������";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	

private: System::Void wood_group_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void steel_group_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnWood_Click(System::Object^ sender, System::EventArgs^ e);
};
}
