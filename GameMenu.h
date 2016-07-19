#pragma once

#include "Rules.h"
#include "TicTacToe.h"
#include "UIGame.h"
#include "EditPlayer.h"
//#include"Player.h"
#include <string>

using std::string;

namespace My122PA8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GameMenu
	/// </summary>
	public ref class GameMenu : public System::Windows::Forms::Form
	{
	public:
		GameMenu(void)
		{
			InitializeComponent();
			this->ticTacToe = new TicTacToe();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GameMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: TicTacToe *ticTacToe;
	//Windows Forms
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemExit;
	private: System::Windows::Forms::ToolStripMenuItem^  playToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemPvp;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemPvc;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemAbout;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemRules;
	private: System::Windows::Forms::Label^  lblWelcome;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ToolStripMenuItem^  playersSettingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemPlayer1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemPlayer2;
	//End of Windows Forms
	public: void validatePlayers(void);
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GameMenu::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemPvp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemPvc = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playersSettingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemPlayer1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemPlayer2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemRules = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->playToolStripMenuItem, this->aboutToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(616, 28);
			this->menuStrip1->TabIndex = 5;
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
			this->menuItemExit->Click += gcnew System::EventHandler(this, &GameMenu::menuItemExit_Click);
			// 
			// playToolStripMenuItem
			// 
			this->playToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->menuItemPvp, 
				this->menuItemPvc, this->playersSettingsToolStripMenuItem});
			this->playToolStripMenuItem->Name = L"playToolStripMenuItem";
			this->playToolStripMenuItem->Size = System::Drawing::Size(48, 24);
			this->playToolStripMenuItem->Text = L"Play";
			// 
			// menuItemPvp
			// 
			this->menuItemPvp->Name = L"menuItemPvp";
			this->menuItemPvp->Size = System::Drawing::Size(184, 24);
			this->menuItemPvp->Text = L"PvP";
			this->menuItemPvp->Click += gcnew System::EventHandler(this, &GameMenu::menuItemPvp_Click);
			// 
			// menuItemPvc
			// 
			this->menuItemPvc->Name = L"menuItemPvc";
			this->menuItemPvc->Size = System::Drawing::Size(184, 24);
			this->menuItemPvc->Text = L"PvC";
			this->menuItemPvc->Click += gcnew System::EventHandler(this, &GameMenu::menuItemPvc_Click);
			// 
			// playersSettingsToolStripMenuItem
			// 
			this->playersSettingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->menuItemPlayer1, 
				this->menuItemPlayer2});
			this->playersSettingsToolStripMenuItem->Name = L"playersSettingsToolStripMenuItem";
			this->playersSettingsToolStripMenuItem->Size = System::Drawing::Size(184, 24);
			this->playersSettingsToolStripMenuItem->Text = L"Player\'s Settings";
			// 
			// menuItemPlayer1
			// 
			this->menuItemPlayer1->Name = L"menuItemPlayer1";
			this->menuItemPlayer1->Size = System::Drawing::Size(130, 24);
			this->menuItemPlayer1->Text = L"Player 1";
			this->menuItemPlayer1->Click += gcnew System::EventHandler(this, &GameMenu::menuItemPlayer1_Click);
			// 
			// menuItemPlayer2
			// 
			this->menuItemPlayer2->Name = L"menuItemPlayer2";
			this->menuItemPlayer2->Size = System::Drawing::Size(130, 24);
			this->menuItemPlayer2->Text = L"Player 2";
			this->menuItemPlayer2->Click += gcnew System::EventHandler(this, &GameMenu::menuItemPlayer2_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->menuItemRules, 
				this->menuItemAbout});
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(53, 24);
			this->aboutToolStripMenuItem->Text = L"Help";
			// 
			// menuItemRules
			// 
			this->menuItemRules->Name = L"menuItemRules";
			this->menuItemRules->Size = System::Drawing::Size(119, 24);
			this->menuItemRules->Text = L"Rules";
			this->menuItemRules->Click += gcnew System::EventHandler(this, &GameMenu::menuItemRules_Click);
			// 
			// menuItemAbout
			// 
			this->menuItemAbout->Name = L"menuItemAbout";
			this->menuItemAbout->Size = System::Drawing::Size(119, 24);
			this->menuItemAbout->Text = L"About";
			this->menuItemAbout->Click += gcnew System::EventHandler(this, &GameMenu::menuItemAbout_Click);
			// 
			// lblWelcome
			// 
			this->lblWelcome->AutoSize = true;
			this->lblWelcome->BackColor = System::Drawing::Color::Transparent;
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Georgia", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWelcome->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblWelcome->Location = System::Drawing::Point(162, 88);
			this->lblWelcome->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(139, 136);
			this->lblWelcome->TabIndex = 6;
			this->lblWelcome->Text = L"T";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(214, 224);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 51);
			this->label1->TabIndex = 7;
			this->label1->Text = L"i";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(207, 288);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 51);
			this->label2->TabIndex = 8;
			this->label2->Text = L"c";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(289, 211);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 51);
			this->label3->TabIndex = 9;
			this->label3->Text = L"a";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Georgia", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(375, 288);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 51);
			this->label4->TabIndex = 10;
			this->label4->Text = L"c";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Georgia", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(287, 143);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 51);
			this->label5->TabIndex = 11;
			this->label5->Text = L"o";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Georgia", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(374, 143);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 51);
			this->label6->TabIndex = 12;
			this->label6->Text = L"e";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 31.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(358, 211);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 74);
			this->label7->TabIndex = 13;
			this->label7->Text = L"X";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 31.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(283, 288);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 74);
			this->label8->TabIndex = 14;
			this->label8->Text = L"O";
			this->label8->UseMnemonic = false;
			// 
			// GameMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(616, 523);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblWelcome);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(634, 570);
			this->Name = L"GameMenu";
			this->Opacity = 0.95;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic Tac Toe - Start";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void menuItemRules_Click(System::Object^  sender, System::EventArgs^  e) {
			 Rules^ rule = gcnew Rules(this);
			 rule->Show();
		 }
private: System::Void menuItemPvp_Click(System::Object^  sender, System::EventArgs^  e) {
		this->ticTacToe->sortTurn();
		this->validatePlayers();
		this->ticTacToe->setVsCPU(false);
		UIGame^ link = gcnew UIGame(this, this->ticTacToe);
		GameMenu::Hide();
		link->Show();
	}
private: System::Void menuItemExit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void menuItemPvc_Click(System::Object^  sender, System::EventArgs^  e) {
			this->ticTacToe->setTurn(1);//player 1 starts
			this->ticTacToe->setVsCPU(true);
			this->validatePlayers();
			this->ticTacToe->player2->setName("CPU");
			this->ticTacToe->player2->setIcon("icon/CPU.png");
			UIGame^ link = gcnew UIGame(this, this->ticTacToe);
			GameMenu::Hide();
			link->Show();
		 }
private: System::Void menuItemPlayer1_Click(System::Object^  sender, System::EventArgs^  e) {
			EditPlayer^ editPlayer =  gcnew EditPlayer(this, &(this->ticTacToe)->player1);
			GameMenu::Hide();
			editPlayer->Show();
		 }
private: System::Void menuItemPlayer2_Click(System::Object^  sender, System::EventArgs^  e) {
			EditPlayer^ editPlayer =  gcnew EditPlayer(this, &(this->ticTacToe)->player2);
			GameMenu::Hide();
			editPlayer->Show();
		 }
private: System::Void menuItemAbout_Click(System::Object^  sender, System::EventArgs^  e) {
			 About ^about = gcnew About();
			 about->Show();
		 }
};
}