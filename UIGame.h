#pragma once

#include <string>
#include "TicTacToe.h"
#include "About.h"
#include "Rules.h"



using std::string;

namespace My122PA8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UIGame
	/// </summary>
	public ref class UIGame : public System::Windows::Forms::Form
	{
	public:
		UIGame(System::Windows::Forms::Form ^ gameMenu, TicTacToe *ticTacToe)
		{
			this->gameMenu = gameMenu;//
			InitializeComponent();
		    this->ticTacToe = ticTacToe;//new TicTacToe(vsCPU);//tell the system if it is PvP or PvC
			this->lblCurrPlayer->Text = gcnew String(this->ticTacToe->getCurrPlayerName().c_str());//Set the name of the user's turn
		}
		void static showMessage(string msg, string title);
		void setSymbol(Windows::Forms::Button^ bt, int btNumber, bool isCPU);
		Button^ getButtonInstance(int btNumber);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UIGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: TicTacToe *ticTacToe;
	private: System::Windows::Forms::Button^  bt1;
	private: System::Windows::Forms::Button^  bt2;
	private: System::Windows::Forms::Button^  bt3;
	private: System::Windows::Forms::Button^  bt6;
	private: System::Windows::Forms::Button^  bt5;
	private: System::Windows::Forms::Button^  bt4;
	private: System::Windows::Forms::Button^  bt9;
	private: System::Windows::Forms::Button^  bt8;
	private: System::Windows::Forms::Button^  bt7;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Label^  lblCurrPlayer;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemHome;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemExit;
	private: System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemRestart;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemRules;
	private: System::Windows::Forms::ToolStripMenuItem^  menuItemAbout;

	public: System::Windows::Forms::Form ^ gameMenu;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UIGame::typeid));
			this->bt1 = (gcnew System::Windows::Forms::Button());
			this->bt2 = (gcnew System::Windows::Forms::Button());
			this->bt3 = (gcnew System::Windows::Forms::Button());
			this->bt6 = (gcnew System::Windows::Forms::Button());
			this->bt5 = (gcnew System::Windows::Forms::Button());
			this->bt4 = (gcnew System::Windows::Forms::Button());
			this->bt9 = (gcnew System::Windows::Forms::Button());
			this->bt8 = (gcnew System::Windows::Forms::Button());
			this->bt7 = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lblCurrPlayer = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemHome = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemRestart = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemRules = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// bt1
			// 
			this->bt1->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->bt1, L"bt1");
			this->bt1->Name = L"bt1";
			this->bt1->UseVisualStyleBackColor = true;
			this->bt1->Click += gcnew System::EventHandler(this, &UIGame::bt1_Click);
			// 
			// bt2
			// 
			resources->ApplyResources(this->bt2, L"bt2");
			this->bt2->Name = L"bt2";
			this->bt2->UseVisualStyleBackColor = true;
			this->bt2->Click += gcnew System::EventHandler(this, &UIGame::bt2_Click);
			// 
			// bt3
			// 
			resources->ApplyResources(this->bt3, L"bt3");
			this->bt3->Name = L"bt3";
			this->bt3->UseVisualStyleBackColor = true;
			this->bt3->Click += gcnew System::EventHandler(this, &UIGame::bt3_Click);
			// 
			// bt6
			// 
			resources->ApplyResources(this->bt6, L"bt6");
			this->bt6->Name = L"bt6";
			this->bt6->UseVisualStyleBackColor = true;
			this->bt6->Click += gcnew System::EventHandler(this, &UIGame::bt6_Click);
			// 
			// bt5
			// 
			resources->ApplyResources(this->bt5, L"bt5");
			this->bt5->Name = L"bt5";
			this->bt5->UseVisualStyleBackColor = true;
			this->bt5->Click += gcnew System::EventHandler(this, &UIGame::bt5_Click);
			// 
			// bt4
			// 
			resources->ApplyResources(this->bt4, L"bt4");
			this->bt4->Name = L"bt4";
			this->bt4->UseVisualStyleBackColor = true;
			this->bt4->Click += gcnew System::EventHandler(this, &UIGame::bt4_Click);
			// 
			// bt9
			// 
			resources->ApplyResources(this->bt9, L"bt9");
			this->bt9->Name = L"bt9";
			this->bt9->UseVisualStyleBackColor = true;
			this->bt9->Click += gcnew System::EventHandler(this, &UIGame::bt9_Click);
			// 
			// bt8
			// 
			resources->ApplyResources(this->bt8, L"bt8");
			this->bt8->Name = L"bt8";
			this->bt8->UseVisualStyleBackColor = true;
			this->bt8->Click += gcnew System::EventHandler(this, &UIGame::bt8_Click);
			// 
			// bt7
			// 
			resources->ApplyResources(this->bt7, L"bt7");
			this->bt7->Name = L"bt7";
			this->bt7->UseVisualStyleBackColor = true;
			this->bt7->Click += gcnew System::EventHandler(this, &UIGame::bt7_Click);
			// 
			// lbl1
			// 
			resources->ApplyResources(this->lbl1, L"lbl1");
			this->lbl1->BackColor = System::Drawing::Color::Transparent;
			this->lbl1->Name = L"lbl1";
			// 
			// lblCurrPlayer
			// 
			resources->ApplyResources(this->lblCurrPlayer, L"lblCurrPlayer");
			this->lblCurrPlayer->BackColor = System::Drawing::Color::Transparent;
			this->lblCurrPlayer->Name = L"lblCurrPlayer";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->gameToolStripMenuItem, this->helpToolStripMenuItem});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->menuItemHome, 
				this->menuItemExit});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			resources->ApplyResources(this->fileToolStripMenuItem, L"fileToolStripMenuItem");
			// 
			// menuItemHome
			// 
			this->menuItemHome->Name = L"menuItemHome";
			resources->ApplyResources(this->menuItemHome, L"menuItemHome");
			this->menuItemHome->Click += gcnew System::EventHandler(this, &UIGame::menuItemHome_Click);
			// 
			// menuItemExit
			// 
			this->menuItemExit->Name = L"menuItemExit";
			resources->ApplyResources(this->menuItemExit, L"menuItemExit");
			this->menuItemExit->Click += gcnew System::EventHandler(this, &UIGame::menuItemExit_Click);
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->menuItemRestart});
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			resources->ApplyResources(this->gameToolStripMenuItem, L"gameToolStripMenuItem");
			// 
			// menuItemRestart
			// 
			this->menuItemRestart->Name = L"menuItemRestart";
			resources->ApplyResources(this->menuItemRestart, L"menuItemRestart");
			this->menuItemRestart->Click += gcnew System::EventHandler(this, &UIGame::menuItemRestart_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->menuItemRules, 
				this->menuItemAbout});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			resources->ApplyResources(this->helpToolStripMenuItem, L"helpToolStripMenuItem");
			// 
			// menuItemRules
			// 
			this->menuItemRules->Name = L"menuItemRules";
			resources->ApplyResources(this->menuItemRules, L"menuItemRules");
			this->menuItemRules->Click += gcnew System::EventHandler(this, &UIGame::menuItemRules_Click);
			// 
			// menuItemAbout
			// 
			this->menuItemAbout->Name = L"menuItemAbout";
			resources->ApplyResources(this->menuItemAbout, L"menuItemAbout");
			this->menuItemAbout->Click += gcnew System::EventHandler(this, &UIGame::menuItemAbout_Click);
			// 
			// UIGame
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lblCurrPlayer);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->bt7);
			this->Controls->Add(this->bt8);
			this->Controls->Add(this->bt9);
			this->Controls->Add(this->bt4);
			this->Controls->Add(this->bt5);
			this->Controls->Add(this->bt6);
			this->Controls->Add(this->bt3);
			this->Controls->Add(this->bt2);
			this->Controls->Add(this->bt1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"UIGame";
			this->Opacity = 0.95;
			this->Load += gcnew System::EventHandler(this, &UIGame::UIGame_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void bt1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->setSymbol(this->bt1, 1, false);
		 }
private: System::Void bt2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->setSymbol(this->bt2, 2, false);		
		 }
private: System::Void bt3_Click(System::Object^  sender, System::EventArgs^  e) {
			this->setSymbol(this->bt3, 3, false);		
		 }
private: System::Void bt4_Click(System::Object^  sender, System::EventArgs^  e) {
			this->setSymbol(this->bt4, 4, false);
		 }
private: System::Void bt5_Click(System::Object^  sender, System::EventArgs^  e) {
			this->setSymbol(this->bt5, 5, false);
		 }
private: System::Void bt6_Click(System::Object^  sender, System::EventArgs^  e) {
			this->setSymbol(this->bt6, 6, false);
		 }
private: System::Void bt7_Click(System::Object^  sender, System::EventArgs^  e) {
			this->setSymbol(this->bt7, 7, false);
		 }
private: System::Void bt8_Click(System::Object^  sender, System::EventArgs^  e) {
			this->setSymbol(this->bt8, 8, false);
		 }
private: System::Void bt9_Click(System::Object^  sender, System::EventArgs^  e) {
		    this->setSymbol(this->bt9, 9, false);
		 }
private: System::Void menuItemHome_Click(System::Object^  sender, System::EventArgs^  e) {
			UIGame::Hide();
			this->ticTacToe->restart();
			gameMenu->Show();
		 }
private: System::Void menuItemExit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void menuItemRestart_Click(System::Object^  sender, System::EventArgs^  e) {
		this->ticTacToe->restart();
		UIGame^ link = gcnew UIGame(gameMenu, this->ticTacToe);
		this->Hide();
		link->Show();
    }
private: System::Void menuItemAbout_Click(System::Object^  sender, System::EventArgs^  e) {
			 About ^about = gcnew About();
			 about->Show();
		 }
private: System::Void menuItemRules_Click(System::Object^  sender, System::EventArgs^  e) {
			 Rules^ rule = gcnew Rules(this);
			 rule->Show();
		 }
private: System::Void UIGame_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
