#ifndef EARLY_GAME_H
#define EARLY_GAME_H
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <fstream>

#include "game.h"
using namespace std;
class early_game 
{
	public:
		int event_id;
		string event_id_str;
		early_game(double &x, int &y);
		void chooseEvent();
		void showEvent(double &x, int &y);
	protected:
};

#endif
