#ifndef EARLY_GAME_H
#define EARLY_GAME_H
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <fstream>

using namespace std;
class early_game
{
	public:
		int event_id;
		string event_id_str;
		early_game();
		void chooseEvent();
		void showEvent();
	protected:
};

#endif
