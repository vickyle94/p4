#ifndef P4ClASSES_H
#define P4ClASSES_H

//define header class
class GreetingCards
{
  
    public:     //function protype here
        setDate();
        getDate();
        setHoliday();
        getHoliday();
        setMessage();
        getMessage();
        setSender();
        getSender();

    private:
    int date;
    string holiday;
    string message;
    string sender;


};

#endif //HEADER_H