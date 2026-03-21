#include <iostream>
using namespace std;

int main(){

    //variables
    int userYear;
    bool userRetry;

        //user input
        cout << "What is your birth Year?" << endl;
        cin >> userYear;
        
        //calculate user sign
        int userSign = (userYear - 4) % 12;

        enum Zodiac {rat, ox, tiger, rabbit, dragon, snake, horse, goat, monkey, rooster, dog, pig };

         //debug
        //cout << "User year is " << userYear << ", and user sign is " << userSign << endl;
        
        switch(userSign){
        case rat:
            cout << "Rat 🐀" << endl;
            break;
        case ox:
            cout << "Ox" << endl;
            break;
        case tiger:
            cout << "Tiger" << endl;
            break;
        case rabbit:
            cout << "Rabbit" << endl;
            break;
        case dragon:
            cout << "Dragon" << endl;
            break;
        case snake:
            cout << "Snake" << endl;
            break;
        case horse:
            cout << "Horse" << endl;
            break;
        case goat:
            cout << "Goat or Ram" << endl;
            break;
        case monkey: 
            cout << "Monkey" << endl;
            break;
        case rooster:
            cout << "Rooster" << endl;
            break;
        case dog:
            cout << "Dog" << endl;
            break;
        case pig:
            cout << "Pig" << endl;
            break;
        }

    return 0;
}