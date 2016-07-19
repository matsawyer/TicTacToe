#pragma once
#include "Player.h"
#include "time.h"

class TicTacToe
{
public:

	TicTacToe(bool vsCPU);
	TicTacToe(void);
	~TicTacToe(void);

	Player *player1;
	Player *player2;
	bool done;

	void setTurn(void);
	void setTurn(int turn);
	int getTurn(void);
	void setVsCPU(bool vsCPU);
	bool isVsCPU(void);

	void sortTurn(void);
	string getPlayerTurnIcon();
	char getPlayerTurnSymbol();
	string getCurrPlayerName();
	void setSymbolOnBoard(char symbol, int pos);
	int checkWin();
	void initBoard(void);
	char getBoardPos(int pos);
	int cpuPlays(void);
	void restart(void);
	int TicTacToe::checkTie(void);

private:
	int turn;
	char board[9];
	bool vsCPU;
};

