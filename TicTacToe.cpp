#include "TicTacToe.h"


TicTacToe::TicTacToe(void){
	this->done = false;
	player1 = new Player('X');
	player2 = new Player('O');
	this->initBoard();
}

TicTacToe::~TicTacToe(void){

}

void TicTacToe::sortTurn(){
	this->turn = rand() % 2 + 1;
}

string TicTacToe::getPlayerTurnIcon(){
	if(this->turn == 1)
		return this->player1->getIcon();
	else
		return this->player2->getIcon();
}

char TicTacToe::getPlayerTurnSymbol(){
	if(this->turn == 1)
		return this->player1->getSymbol();
	else
		return this->player2->getSymbol();
}

void TicTacToe::initBoard(){
	for (int i = 0; i < 9; i++){
		this->board[i] = '~';
	}
}

string TicTacToe::getCurrPlayerName(){
	if(this->turn == 1)
		return this->player1->getName();
	else
		return this->player2->getName();
}

void TicTacToe::setTurn(){
	if(this->turn == 1){
		this->turn = 2;
	}else{
		this->turn = 1;
	}
}

void TicTacToe::setTurn(int turn){
	this->turn = turn;
}

int TicTacToe::getTurn(){
	return this->turn;
}

void TicTacToe::setSymbolOnBoard(char symbol, int pos){
	this->board[pos] = symbol;
}

int TicTacToe::cpuPlays(){
	int cpuPlays = 0;
	do{
		cpuPlays = rand() % 9;
	} while (this->board[cpuPlays] != '~');//if it tries to set a place already filled, try again.
	return cpuPlays + 1;//return the selected button
}

void TicTacToe::restart(void){
	this->initBoard();
	this->done = false;
}

int TicTacToe::checkWin(){
	int win = 0;
	//horizontal
	if(this->board[0] == this->board[1] && this->board[0] == this->board[2] && this->board[0] != '~'){
		win = 1;
	}
	if(this->board[3] == this->board[4] && this->board[3] == this->board[5] && this->board[3] != '~'){
		win = 1;
	}
	if(this->board[6] == this->board[7] && this->board[6] == this->board[8] && this->board[6] != '~'){
		win = 1;
	}
	//vertical
	if(this->board[0] == this->board[3] && this->board[0] == this->board[6] && this->board[0] != '~'){
		win = 1;
	}
	if(this->board[1] == this->board[4] && this->board[1] == this->board[7] && this->board[1] != '~'){
		win = 1;
	}
	if(this->board[2] == this->board[5] && this->board[2] == this->board[8] && this->board[2] != '~'){
		win = 1;
	}
	//crossed
	if(this->board[0] == this->board[4] && this->board[0] == this->board[8] && this->board[0] != '~'){
		win = 1;
	}
	if(this->board[6] == this->board[4] && this->board[6] == this->board[2] && this->board[6] != '~'){
		win = 1;
	}
	if(win == 0){
		win = checkTie();
	}
	return win;
}

int TicTacToe::checkTie(){
	for (int i = 0; i < 9; i++){
		if(this->board[i] == '~'){
			return 0;
		}
	}
	return 2;
}

char TicTacToe::getBoardPos(int pos){
	return this->board[pos];
}

void TicTacToe::setVsCPU(bool vsCPU){
	this->vsCPU = vsCPU;
}
bool TicTacToe::isVsCPU(void){
	return this->vsCPU;
}