#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>       
using namespace std;

const int EMPLOYEE_COUNT = 5;  
class Employee{
    private:
    string name;
    string title;
    double wage;

    //Getters and Setters
    void setName(){

    }
    string getName(){

        return 0;
    }
    void setTitle(){

    }
    string getTitle(){

        return 0;
    }
    void setWage(){

    }
    double getWage(){

        return 0;
    }
};

void calculateTotalWages(){
    int employeeHours;
    vector<double> hours = {}; //Creates a vector to hold employee's hours
    for (size_t i = 1; i <= EMPLOYEE_COUNT; i++){
        cout << "Enter the amount of hours worked for employee #" << i << "\n";
        cin >> employeeHours;
        hours.push_back(employeeHours);
    }
    for (size_t i = 0; i < EMPLOYEE_COUNT; i++){
        cout << "Employee #" << i+1 << hours.at(i) << "\n";
    }
    system("pause");
}
void printEmployees(){
    for (int i = 0; i < EMPLOYEE_COUNT; i++){
        cout << "printEmployees \n";
    }
    system("pause");
    
}
void desc(){
    cout << "\nHello, this application is designed to manage employees and their wages.\n"; 
}
void options(){
    cout << "Please select an option to start. \n\n" << 
    "1. Print Employees. \n" <<
    "2. Calculate Total Wages. \n" << 
    "3. Exit Application\n";

}
int main(){
    desc();
    string input;
    while (true)
    {
        options();
        cin >> input;
        int userSelection = atoi(input.c_str());
        switch (userSelection)
        {
        case 1: //Print employees in list.
            printEmployees();
            break;
        case 2: // Calc total wages.
            calculateTotalWages();
            break;
        case 3: //Exit application.
            return 0;
        default:
            cin >> input;
            userSelection = atoi(input.c_str());
            break;
        }
        cout << "\nPlease select another option. Or press exit application to exit.";
    }
    return 0;
}
