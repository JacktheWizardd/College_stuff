#include <iostream>
using namespace std;

int main(){
    //const variable
    const double PIE = 3.14;

    int userInput;
    
    bool isTrue = false;
    while(!isTrue){
        cout << endl;
        cout << "///////////////////////" << endl;
        cout << "Area of things" << endl;
        cout << "1 - Rectangle" << endl;
        cout << "2 - triangle" << endl;
        cout << "3 - circle" << endl;
        cout << "type on other key to exit" << endl;

        cout << endl;
        cout << "You enter: ";
        cin >> userInput;
        if(userInput == 1){
            //Variables of Area of a rectangle
            int length, height;
            //asking user input
            cout << "Give me length and height for area of a rectangle" << endl;
            cout << "The Length is: "; 
            cin >> length;
            cout << "The height is: "; 
            cin >> height;
        
            int areaOfRectangle = length * height;
            cout << "The area of rectangle is " << areaOfRectangle << endl;
        } else if(userInput == 2){
            //the area of a triangle
            double base;
            double heightOfTriangle;
            //asking user input
            cout << "Give me base and height for area of a triangle" << endl;
            cout << "The base is: "; 
            cin >> base;
            cout << "The height is: "; 
            cin >> heightOfTriangle;

        
            double areaOfTriangle = ((1 / 2.0) * base) * heightOfTriangle;
            cout << "The area of triangle is " << areaOfTriangle << endl;

        } else if(userInput == 3){
            //the area of circle
            double r;
            //asking user input
            cout << "Give me length for area of circle" << endl;

            cin >> r;
            double area = PIE * ( r * r);
            cout << "The circle is " << area << endl; 

        } else{
            cout << endl;
            cout << "!!!!!!!!!!!!!              !!!!!!!!!!" << endl;
            cout << "       You exit the program" << endl;
            cout << "!!!!!!!!!!!!!              !!!!!!!!!!" << endl;
            isTrue = true;
        }
    }
    
    return 0;
}