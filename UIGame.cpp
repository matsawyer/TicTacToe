#include "UIGame.h"


using namespace System::Windows::Forms;

using namespace My122PA8;


//[STAThreadAttribute]
//int main(array<System::String ^> ^args)
//{
//	// Enabling Windows XP visual effects before any controls are created
//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false); 
//
//	// Create the main window and run it
//	Application::Run(gcnew UIGame());
//	return 0;
//}

void UIGame::showMessage(string title, string msg){
	String^ _msg = gcnew String(msg.c_str());
	String^ _title = gcnew String(title.c_str());
	MessageBox::Show(_msg,_title, MessageBoxButtons::OK);
}

void UIGame::setSymbol(Windows::Forms::Button^ bt, int btNumber, bool isCPU){
	if(this->ticTacToe->getBoardPos(btNumber - 1) == '~' && this->ticTacToe->done == false){ //if it was not filled or the game is not done
		//bt->Text = Convert::ToString(Convert::ToChar(this->ticTacToe->getPlayerTurnSymbol()));
		bt->Image = Image::FromFile(gcnew String(this->ticTacToe->getPlayerTurnIcon().c_str()));
		this->ticTacToe->setSymbolOnBoard(this->ticTacToe->getPlayerTurnSymbol(), btNumber - 1);
		if(this->ticTacToe->checkWin() == 1){//check if this player won the game
			this->ticTacToe->done = true;
			this->showMessage("Tic Tac Toe", "Congratulations "+this->ticTacToe->getCurrPlayerName()+" you won!!");
		}else if(this->ticTacToe->checkWin() == 0){
			this->ticTacToe->setTurn();
			this->lblCurrPlayer->Text = gcnew String(this->ticTacToe->getCurrPlayerName().c_str());
		}else if(this->ticTacToe->checkWin() == 2){
			this->ticTacToe->done = true;
			this->showMessage("Tic Tac Toe", "It is a tie.");
		}
		if( this->ticTacToe->isVsCPU() == true && this->ticTacToe->getTurn() == 2){//If p1 is playing against CPU
			int bt = this->ticTacToe->cpuPlays();
			this->setSymbol(this->getButtonInstance(bt), bt, true);
		}
	}
}

Button^ UIGame::getButtonInstance(int btNumber){
	switch (btNumber){

	case 1:
		return this->bt1;
	break;
	case 2:
		return this->bt2;
	break;
	case 3:
		return this->bt3;
	break;
	case 4:
		return this->bt4;
	break;
	case 5:
		return this->bt5;
	break;
	case 6:
		return this->bt6;
	break;
	case 7:
		return this->bt7;
	break;
	case 8:
		return this->bt8;
	break;
	case 9:
		return this->bt9;
	break;
	}
}

