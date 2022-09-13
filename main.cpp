#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

#include "selector.h"
#include "early_game.h"
using namespace std;
int main(){
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
	int remainingEvents = 2;
	while (remainingEvents > 0){
	
	cout << "Remaining Events:" << remainingEvents << endl;	
	selector();
	remainingEvents = 1;
	cout << "Remaining Events:" << remainingEvents << endl;
	early_game();
	remainingEvents = 0;
}
	return 0;
}
