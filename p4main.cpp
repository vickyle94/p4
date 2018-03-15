//main function should create and object your greeting card class for a holiday greeting card (you choose the holiday) that uses one of the constructors and functions
//create another object of the greeting card class for another holiday card (different holiday) that uses the other constructor (not previously used) as well as its functions.
#include <iostream>
#include <string>
#include "p4classes.h"
using namespace std;

int main(){
    //make object
    GreetingCards CardObject (1225,"Christmas");
    //call printCard function to display card info
    cout << CardObject.printCard();
}

