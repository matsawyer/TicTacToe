#pragma once

#include <string>

using std::string;

class Player
{
public:
	Player(void);
	Player(string name);
	Player(char synbol);
	Player(string name, string icon, char symbol);

	~Player(void);

	string getName();
	void setName(string name);

	string getIcon();
	void setIcon(string icon);
	char getSymbol();
	void setSymbol(char symbol);

private:
	string name;
	string icon;
	char symbol;

};

