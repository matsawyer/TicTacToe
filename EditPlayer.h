#pragma once

#include <string>
#include "Player.h"
#include "About.h"

namespace My122PA8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditPlayer
	/// </summary>
	public ref class EditPlayer : public System::Windows::Forms::Form
	{
	public:
		EditPlayer(System::Windows::Forms::Form ^ gameMenu, Player **player){
			InitializeComponent();
			this->player = player;
			this->gameMenu = gameMenu;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditPlayer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Player **player;
	private: System::Windows::Forms::Form ^ gameMenu;
	private: string sStringToStdString ( String ^ s);
	private: void EditPlayer::showMessage(string msg, string title);
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemExit;


	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemAbout;

	private: System::Windows::Forms::Button^  btSave;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtPName;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cbIcon;

	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditPlayer::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btSave = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbIcon = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(619, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->menuItemExit});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// menuItemExit
			// 
			this->menuItemExit->Name = L"menuItemExit";
			this->menuItemExit->Size = System::Drawing::Size(102, 24);
			this->menuItemExit->Text = L"Exit";
			this->menuItemExit->Click += gcnew System::EventHandler(this, &EditPlayer::menuItemExit_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->menuItemAbout});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// menuItemAbout
			// 
			this->menuItemAbout->Name = L"menuItemAbout";
			this->menuItemAbout->Size = System::Drawing::Size(119, 24);
			this->menuItemAbout->Text = L"About";
			this->menuItemAbout->Click += gcnew System::EventHandler(this, &EditPlayer::menuItemAbout_Click);
			// 
			// btSave
			// 
			this->btSave->BackColor = System::Drawing::Color::Transparent;
			this->btSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btSave->Font = (gcnew System::Drawing::Font(L"Elephant", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btSave->Location = System::Drawing::Point(224, 316);
			this->btSave->Margin = System::Windows::Forms::Padding(4);
			this->btSave->Name = L"btSave";
			this->btSave->Size = System::Drawing::Size(196, 58);
			this->btSave->TabIndex = 1;
			this->btSave->Text = L"Save";
			this->btSave->UseVisualStyleBackColor = false;
			this->btSave->Click += gcnew System::EventHandler(this, &EditPlayer::btSave_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 144);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Player\'s Name:";
			// 
			// txtPName
			// 
			this->txtPName->Location = System::Drawing::Point(245, 149);
			this->txtPName->Margin = System::Windows::Forms::Padding(4);
			this->txtPName->Name = L"txtPName";
			this->txtPName->Size = System::Drawing::Size(160, 22);
			this->txtPName->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(159, 187);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Icon:";
			// 
			// cbIcon
			// 
			this->cbIcon->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->cbIcon->FormattingEnabled = true;
			this->cbIcon->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Ghost", L"Firefox", L"Chrome", L"Safari", L"WSU"});
			this->cbIcon->Location = System::Drawing::Point(245, 192);
			this->cbIcon->Margin = System::Windows::Forms::Padding(4);
			this->cbIcon->Name = L"cbIcon";
			this->cbIcon->Size = System::Drawing::Size(160, 24);
			this->cbIcon->TabIndex = 5;
			this->cbIcon->SelectedIndexChanged += gcnew System::EventHandler(this, &EditPlayer::cbIcon_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(273, 224);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(110, 84);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// EditPlayer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(619, 534);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->cbIcon);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtPName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btSave);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"EditPlayer";
			this->Opacity = 0.95;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditPlayer";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btSave_Click(System::Object^  sender, System::EventArgs^  e) {
				(*this->player)->setName(sStringToStdString(this->txtPName->Text->ToString()));
				(*this->player)->setIcon(sStringToStdString("icon/"+this->cbIcon->Text+".png"));
				showMessage("Tic Tac Toe", "This data was successfully saved!");
				this->Hide();
				gameMenu->Show();
			 }
private: System::Void cbIcon_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 this->pictureBox1->Image = Image::FromFile("icon/"+this->cbIcon->Text+".png");

		 }

private: System::Void menuItemExit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void menuItemAbout_Click(System::Object^  sender, System::EventArgs^  e) {
			 About ^about = gcnew About();
			 about->Show();
		 }
};
}
