#include "early_game.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string> 
early_game::early_game(double &x, int &y)
{
	chooseEvent();
	showEvent(x ,y);
}

void early_game::chooseEvent(){
	event_id = rand()%5 + 6;
}

void early_game::showEvent(double &x, int &y){
	string eve, res ;
	ifstream event;
	ifstream response;
	
	if (event_id == 6){
    event.open("event_6.txt");
    response.open("response_6.txt"); 
    if (!event || !response) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
    x = x + 6;
}
	if (event_id == 7){
    event.open("event_7.txt");
    response.open("response_7.txt"); 
    if (!event || !response) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
    x = x + 7;
}
	if (event_id == 8){
    event.open("event_8.txt");
    response.open("response_8.txt"); 
    if (!event || !response) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
    x = x + 8;
}
	if (event_id == 9){
    event.open("event_9.txt");
    response.open("response_9.txt"); 
    if (!event || !response) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
    x = x + 9;
}
	if (event_id == 10){
    event.open("event_10.txt");
    response.open("response_10.txt"); 
    if (!event || !response) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }
    x = x + 10;
}
    while (getline (event,eve)){
    cout << eve << endl; 
	}
	event.close();
	while (getline (response,res)){
    cout << res << endl; 
	}
	cout << "Vote after early game class: " << x << endl;
	cout << "PP after early game class: " << y << endl;
	response.close();
//	karadeniz.liberals.upper.voteperc = karadeniz.liberals.upper.voteperc+0.02;
}
