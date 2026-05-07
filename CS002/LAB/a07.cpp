#include <iostream>

//this one copy the variable's value, but does not change the orignal value
int add_extra_credit_value(int score){
    score = score + 5;
    return score;
}

//the original value is modefied.
int add_extra_credit_reference(int &score){
    score = score + 5;
    return score;
}

int get_input(){
    int user_input{};
    std::cout << "Please enter an integer: ";
    std::cin >> user_input;
    return user_input;
}

int main(){
    using namespace std;
    

    //ask for input
    int student_score{get_input()};

    //call by value - original value doesnt change but func output new value using student_score value
    cout << add_extra_credit_value(student_score) << endl;
    //debug
    cout << student_score << endl;
    //end of debug
    
    //call by reference - original get changed by calling the function.
    cout << add_extra_credit_reference(student_score) << endl;
    //debug
    cout << student_score << endl;
    //end of debug
    return 0;
}