#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

#include "game.h"
#include "early_game.h"
#include "selector.h"
#include "partySelector.h"

using namespace std;
int main(){
	double globalVote = 0;
	unsigned seed;
	cout << "Enter your lucky number." << endl;
	cin >> seed;
	if (seed == 0){
		while (seed == 0){
		cout << "Choose a number other than 0." << endl;
		cin >> seed;
	}
	}
//	srand (seed);
	srand (seed*time(0));
//	game lmao;
//	selector s2;
//	early_game e2;
//	int remainingEvents = 5;
//	while (remainingEvents > 0){
	partySelector yes;
//	yes.chosen();
////////////////////	while (yes.selectionDone == false){
////////////////////		cout << "Choose a Party!" << endl;
////////////////////		yes;
////////////////////	}
	double a = yes.initialVote;
	int b = yes.initialPP;
	int c = yes.remainingEvents;
	cout << "Vote: " << a << endl;
	cout << "Political Power: " << b << endl;
//	cout << "Remaining Events:" << lmao.remainingEvents << endl;	
while (c > 0){

	selector(a, b, c);
}
//	selector();
//	selector();
//	selector();
//	selector();
	
//	remainingEvents = 1;
//	cout << "Remaining Events:" << remainingEvents << endl;
	early_game(a, b);
//	early_game();
//	early_game();
//	early_game();
//	early_game();
//	remainingEvents = 0;
//}	
	cout << "Final Vote: " << a << endl;
	cout << "Political Power: " << b << endl;
	return 0;
}
