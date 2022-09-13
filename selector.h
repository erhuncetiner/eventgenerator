#ifndef SELECTOR_H
#define SELECTOR_H
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <fstream>

using namespace std;
class selector
{
	public:
		int event_id;
		string event_id_str;
		selector();
		void chooseEvent();
		void showEvent();
	protected:
};

#endif
