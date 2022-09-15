#ifndef PARTYSELECTOR_H
#define PARTYSELECTOR_H
#include <iostream>
using namespace std;
class partySelector
{
	public:
		int partyNumber;
		double initialVote;
		int initialPP;
		int remainingEvents;
		bool selectionDone;
		partySelector();
		void chosen();
	protected:
};

#endif
