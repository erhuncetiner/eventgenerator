#include "selector.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string> 
selector::selector()
{
	chooseEvent();
	showEvent();
}

void selector::chooseEvent(){
	event_id = rand()%5 + 1;
}

void selector::showEvent(){
	string sum ;
    string x;
	ifstream inFile;
	
	if (event_id == 1){
    inFile.open("event_1.txt");
    if (!inFile) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
}
	else if (event_id == 2){
    inFile.open("event_2.txt");
    if (!inFile) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
}
	else if (event_id == 3){
    inFile.open("event_3.txt");
    if (!inFile) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
}
	else if (event_id == 4){
    inFile.open("event_4.txt");
    if (!inFile) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
}
	else if (event_id == 5){
    inFile.open("event_5.txt");
    if (!inFile) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
}
    while (getline (inFile,sum)){
    cout << sum << endl; 
	}
	inFile.close();
}
