//build custom class that can be used to display as many holiday greeting cards as needed, for any holiday
//Build one class and make many objects of that class--one for each greeting card.

#include <iostream>
#include <string>
using namespace std;

class GreetingCards{
    //define functions and constructors 
    public:
    //contructor w/ parameters (can assign values)
    GreetingCards(int date, string holiday){
        setDate(date);
        setHoliday(holiday);
    }
    void setDate(int x){
        date = x;
    }
    int getDate(){
        return date;
    }

    void setHoliday(string h){
        holiday = h;
    }
    string getHoliday(){
        return holiday;
    }
    //constructor without parameters (have default values)
    GreetingCards(){
        setMessage("Merry Christmas! May you and your loved ones enjoy this holiday season.");
        setSender("Victoria Le");
    }
    void setMessage(string m){
        message = m;
    }
    string getMessage(){
        return message;
    }

    void setSender (string s){
        sender = s;
    }
    string getSender(){
        return sender;
    }

    //function to print out all card info
    void printCard(){
        int getDate;
        string getHoliday;
        string getMessage;
        string getSender;
    }
    //declare private variables
    private:
    int date;
    string holiday;
    string message;
    string sender;
};


