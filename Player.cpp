#include "Player.h"

Player::Player(){
}

Player::Player(string name){
	this->name = name;
}

Player::Player(char symbol){
	this->symbol = symbol;
}

Player::Player(string name, string icon, char symbol){
	this->name = name;
	this->icon = icon;
	this->symbol = symbol;
}

Player::~Player(void){
}

string Player::getName(){
	return this->name;
}

void Player::setName(string name){
	this->name = name;
}

string Player::getIcon(){
	return this->icon;
}
void Player::setIcon(string icon){
	this->icon = icon;
}

char Player::getSymbol(){
	return this->symbol;
}
void Player::setSymbol(char symbol){
	this->symbol = symbol;
}
