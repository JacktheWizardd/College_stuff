#include <iostream>
using namespace std;

int main(){

    cout << "`x^2+y_1+z_12^34`" << endl;
    string termA, termB, termC;
    string negativeTerm;
    double a, b, c;
    cin >> a >> b >> c;
    
    bool isAPositive = a > 0;
    bool isBPositive = b > 0;
    bool isCPositive = c > 0;
    
    if (!(isAPositive == true)){
        termA = to_string(a);
    } else{
        termA = "+" + to_string(a);
    }
    if (!(isBPositive == true)){
        termB = to_string(b);
    } else{
        termB = "+ " + to_string(b);
    }
    if (!(isCPositive == true)){
        termC = to_string(c);
    } else{
        termC = "+ " + to_string(c);
    }

    cout << "Your Quadratic Equation is this :" << endl;
    cout << termA << "x²" << " " << termB << " " << termC << endl; 

    double quadraticMinusB = -1 * b;
    cout << quadraticMinusB << endl;
    double quadarticRightSide = (b * b) - 4 * a * c;
    cout << quadarticRightSide << endl;
    
    double denominator = 2 * a;
    // cout << denominator << endl;

    double denominatorFirstOne = quadraticMinusB / denominator;

    if(!(quadarticRightSide > 0)){
        double negativeDenomiantor = quadarticRightSide * -1;
        cout << negativeDenomiantor << endl;
        negativeDenomiantor = sqrt(negativeDenomiantor);
        cout << negativeDenomiantor << endl;
        negativeDenomiantor = negativeDenomiantor / denominator;
        cout << negativeDenomiantor <<  endl;
        negativeTerm = to_string(negativeDenomiantor) + "i";
        cout << denominatorFirstOne << "+- " << negativeTerm;
    } else{
        double squareRootPositive = sqrt(quadarticRightSide);
        squareRootPositive = squareRootPositive / denominator;
        cout << denominatorFirstOne << "+- " << squareRootPositive;
    }

    return 0;
}