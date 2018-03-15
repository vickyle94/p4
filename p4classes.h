#ifndef P4ClASSES_H
#define P4ClASSES_H
#include <string>
using namespace std;

//define header class
class GreetingCards
{
  
    public:     //function protype here
        GreetingCards(int, string);
        void setDate();
        int getDate();
        void setHoliday();
        string getHoliday();
        void setMessage();
        string getMessage();
        void setSender();
        string getSender();
        void printCard();

    private:
    int date;
    string holiday;
    string message;
    string sender;

};

#endif