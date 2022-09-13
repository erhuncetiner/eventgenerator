#include "early_game.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string> 
early_game::early_game()
{
	chooseEvent();
	showEvent();
}

void early_game::chooseEvent(){
	event_id = rand()%5 + 6;
}

void early_game::showEvent(){
	string sum ;
    string x;
	ifstream inFile;
	
	if (event_id == 6){
    inFile.open("event_6.txt");
    if (!inFile) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
}
	if (event_id == 7){
    inFile.open("event_7.txt");
    if (!inFile) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
}
	if (event_id == 8){
    inFile.open("event_8.txt");
    if (!inFile) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
}
	if (event_id == 9){
    inFile.open("event_9.txt");
    if (!inFile) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
}
	if (event_id == 10){
    inFile.open("event_10.txt");
    if (!inFile) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
}
    while (getline (inFile,sum)){
    cout << sum << endl; 
	}
	inFile.close();
//	karadeniz.liberals.upper.voteperc = karadeniz.liberals.upper.voteperc+0.02;
}
