//build custom class that can be used to display as many holiday greeting cards as needed, for any holiday
//Build one class and make many objects of that class--one for each greeting card.

#include <iostream>
#include <string>
using namespace std;
#include "p4classes.h"

    GreetingCards::GreetingCards(int date, string holiday){
    void GreetingCards::setDate(){
        date = d;
    }
    int GreetingCards::getDate(){
        return date;
    }
    void GreetingCards::setHoliday(string h){
        holiday;
    }
    string GreetingCards::getHoliday(){
        return holiday;
    }
    }
    
    //constructor without parameters (have default values)
    GreetingCards::GreetingCards(){
        setMessage("Merry Christmas! May you and your loved ones enjoy this holiday season.");
        setSender("Victoria Le");
    }
    void GreetingCards::setMessage(string m){
        message = m;
    }
    string GreetingCards::getMessage(){
        return message;
    }

    void GreetingCards::setSender (string s){
        sender = s;
    }
    string GreetingCards::getSender(){
        return sender;
    }

    //function to print out all card info
    void printCard(){
        int getDate;
        string getHoliday;
        string getMessage;
        string getSender;
    }

};


