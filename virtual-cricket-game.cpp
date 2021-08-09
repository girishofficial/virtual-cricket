#include "game.h"
using namespace std;

int main() {
	Game game;
	game.welcome();

	cout << "\n\nPress enter to continue\n";
	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	game.showAllPlayers();

	cout << "\nPress enter to continue\n";
	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	game.selectPlayers();

	game.showTeamPlayers();

	cout << "\nPress Enter to toss";
	cin.ignore(numeric_limits<streamsize>::max(),'\n');



	game.toss();

	game.startFirstInnings();
	game.startSecondInnings();
	game.showMatchSummary();

	return 0;
}
