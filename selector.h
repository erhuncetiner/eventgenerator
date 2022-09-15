#ifndef SELECTOR_H
#define SELECTOR_H
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <fstream>

#include "game.h"
using namespace std;
class selector 
{
	public:
		int event_id;
		string event_id_str;
		selector(double &x, int &y);
		void chooseEvent();
		void showEvent(double &x, int &y);
	protected:
};

#endif
