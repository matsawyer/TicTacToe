#include "GameMenu.h"

using namespace System::Windows::Forms;

using namespace My122PA8;


[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew GameMenu());
	return 0;
}


void GameMenu::validatePlayers(void){
	if (this->ticTacToe->player1->getName() == "") this->ticTacToe->player1->setName("Player 1");
	if (this->ticTacToe->player1->getIcon() == "") this->ticTacToe->player1->setIcon("icon/Ghost.png");

	if (this->ticTacToe->player2->getName() == "") this->ticTacToe->player2->setName("Player 2");
	if (this->ticTacToe->player2->getIcon() == "") this->ticTacToe->player2->setIcon("icon/Firefox.png");
}
