#include "selector.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string> 
#include "game.h"
selector::selector(double &x, int &y, int &remainingEvents)
{
//	remainingEvents = 5;
//    cout << remainingEvents << endl;
//	double vote = x;
//	int pp = y;
	chooseEvent();
	showEvent(x, y, remainingEvents);
}

void selector::chooseEvent(){
	event_id = rand()%5 + 1;
}

void selector::showEvent(double &x, int &y, int &remainingEvents){
	string eve, res ;
	ifstream event;
	ifstream response;
	game v;
	int proceed = 0;
	if (event_id == 1){
    event.open("event_1.txt");
    response.open("response_1.txt"); 
    if (!event || !response) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }    
    while (getline (event,eve)){
    cout << eve << endl; 
	}
	event.close();
	while (getline (response,res)){
    cout << res << endl; 
	}
    cout << "How should we proceed?" << endl;
    cin >> proceed;
    while ((proceed != 1)&&(proceed != 2)&&(proceed != 3)){
    	cout << "Try again." << endl;
		cin >> proceed;	
	}
	if (proceed == 1){
		x = x + 1;
		y = y - 50;
	}
	else if (proceed == 2){
		x = x + 0;
		y = y + 50;
	}
	else if (proceed == 3){
		x = x + 0.25;
		y = y + 20;
	}
	
}
	if (event_id == 2){
    event.open("event_2.txt");
    response.open("response_2.txt"); 
    if (!event || !response) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }    
    while (getline (event,eve)){
    cout << eve << endl; 
	}
	event.close();
	while (getline (response,res)){
    cout << res << endl; 
	}
    cout << "How should we proceed?" << endl;
    cin >> proceed;
    while ((proceed != 1)&&(proceed != 2)&&(proceed != 3)){
    	cout << "Try again." << endl;
		cin >> proceed;	
	}
	if (proceed == 1){
		x = x + 0;
		y = y + 20;
	}
	else if (proceed == 2){
		x = x + 0.2;
		y = y + 10;
	}
	else if (proceed == 3){
		x = x + 0;
		y = y + 0;
	}

}
	if (event_id == 3){
    event.open("event_3.txt");
    response.open("response_3.txt"); 
    if (!event || !response) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }    
    while (getline (event,eve)){
    cout << eve << endl; 
	}
	event.close();
	while (getline (response,res)){
    cout << res << endl; 
	}
    cout << "How should we proceed?" << endl;
    cin >> proceed;
    while ((proceed != 1)&&(proceed != 2)&&(proceed != 3)){
    	cout << "Try again." << endl;
		cin >> proceed;	
	}
	if (proceed == 1){
		x = x - 0.6;
		y = y + 60;
	}
	else if (proceed == 2){
		x = x + 0;
		y = y - 25;
	}
	else if (proceed == 3){
		x = x - 0.3;
		y = y + 0;
	}

}
	if (event_id == 4){
    event.open("event_4.txt");
    response.open("response_4.txt"); 
    if (!event || !response) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }    
    while (getline (event,eve)){
    cout << eve << endl; 
	}
	event.close();
	while (getline (response,res)){
    cout << res << endl; 
	}
    cout << "How should we proceed?" << endl;
    cin >> proceed;
    while ((proceed != 1)&&(proceed != 2)&&(proceed != 3)){
    	cout << "Try again." << endl;
		cin >> proceed;	
	}
	if (proceed == 1){
		x = x - 0.5;
		y = y - 80;
	}
	else if (proceed == 2){
		x = x - 0.3;
		y = y - 100;
	}
	else if (proceed == 3){
		x = x - 1;
		y = y + 100;
	}

}
	if (event_id == 5){
    event.open("event_5.txt");
    response.open("response_5.txt"); 
    if (!event || !response) {
        cout << "Unable to open file.";
        exit(1); // terminate with error
    }    
    while (getline (event,eve)){
    cout << eve << endl; 
	}
	event.close();
	while (getline (response,res)){
    cout << res << endl; 
	}
    cout << "How should we proceed?" << endl;
    cin >> proceed;
    while ((proceed != 1)&&(proceed != 2)&&(proceed != 3)){
    	cout << "Try again." << endl;
		cin >> proceed;	
	}
	if (proceed == 1){
		x = x + 3;
		y = y - 50;
	}
	else if (proceed == 2){
		x = x + 1;
		y = y + 0;
	}
	else if (proceed == 3){
		x = x + 0.5;
		y = y + 20;
	}

}
	cout << "Inside the class vote: " << x << endl;
	cout << "Inside the class PP: " << y << endl;
	remainingEvents = remainingEvents - 1;
	response.close();
//	x.remainingEvents = x.remainingEvents - 1;
//    cout << "Remaining x: " << x.remainingEvents << endl;
}
