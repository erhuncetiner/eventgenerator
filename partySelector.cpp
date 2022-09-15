#include "partySelector.h"

partySelector::partySelector()
{ 
	selectionDone = false;
	chosen();
	remainingEvents = 3;
}

void partySelector::chosen(){
	
	cout << "Which party do you want to choose? Type in 1 for Conservative Party, 2 for Social Democratic Party, 3 for Minority Rights, " <<
	"4 for Nationalist Party, 5 for Reactionary Party, 6 for Anti - Immigration Party, 7 for Liberal Party and 8 for Communist Party." << endl;
	cin >> partyNumber;

//	{
	
	if (partyNumber == 1){
		initialVote = 35;
		initialPP = 75;
		bool selectionDone = true;
	}
	else if (partyNumber == 2){
		initialVote = 25;
		initialPP = 75;
		bool selectionDone = true;
	}
	else if (partyNumber == 3){
		initialVote = 10;
		initialPP = 50;
		bool selectionDone = true;
	}
	else if (partyNumber == 4){
		initialVote = 10;
		initialPP = 50;
		bool selectionDone = true;
	}
	else if (partyNumber == 5){
		initialVote = 7;
		initialPP = 50;
		bool selectionDone = true;
	}
	else if (partyNumber == 6){
		initialVote = 7;
		initialPP = 30;
		bool selectionDone = true;
	}
	else if (partyNumber == 7){
		initialVote = 4;
		initialPP = 30;
		bool selectionDone = true;
	}
	else if (partyNumber == 8){
		initialVote = 2;
		initialPP = 30;
		bool selectionDone = true;
	}
//	}
//	{
//	if ((partyNumber < 1)||(partyNumber > 8)){
//		selectionDone = false;
//	}
//}
}
