#include <iostream>

//structs
struct person{
    std::string name;
    std::string address;
    int age{};
};

struct employee{
    person personalInfo;
    int employee_id;
    std::string department;
};

//functions
void print_persona_by_value(person x){
    x.age += 10;
    x.address = "in earth";
    x.name = "John";
}

void print_person_by_reference(person &x){
    x.name = "John Marston";
    x.address = "Beecher's Hope";
    x.age = 38;
}

void print_employee(employee &x){
    using namespace std;

    cout << x.personalInfo.name << endl;
    cout << x.personalInfo.address << endl;
    cout << x.personalInfo.age << endl;

    cout << x.employee_id << endl;
    cout << x.department << endl;

}

void value_change_employee_two(employee &x){
    using namespace std;

    x.personalInfo.name = "Diana Burnwood";
    x.personalInfo.age = 48;
    x.personalInfo.address = "Surrey, England";

    x.department = "Handlers";
    x.employee_id = 29;
}

int main(){
    using namespace std;

    person someone;
    someone.name = "bob";
    someone.address = "out of space";
    someone.age = 22;

    //debug - output ogirnal date
    cout << "Original Values" << endl;
    cout << someone.name << endl;
    cout << someone.age << endl;
    cout << someone.address << endl;

    //line
    cout << endl;;

    print_persona_by_value(someone);
    //debug - output new memory location value
    cout << "function called by value" << endl;
    cout << someone.name << endl;
    cout << someone.age << endl;
    cout << someone.address << endl;

    //line
    cout << endl;;

    print_person_by_reference(someone);
    //debug - output new memory location value
    cout << "function called by reference" << endl;
    cout << someone.name << endl;
    cout << someone.age << endl;
    cout << someone.address << endl;

    //line
    cout << endl;;
    
    employee an_employee;
    an_employee.employee_id = 47;
    an_employee.department = "International Contract Agency (ICA)";
    //person info
        an_employee.personalInfo.name = "Mr.47";
        an_employee.personalInfo.age = 61;
        an_employee.personalInfo.address = "Institute for Human Betterment";


    print_employee(an_employee);
    cout << endl;
    value_change_employee_two(an_employee);
    print_employee(an_employee);
    return 0;
}