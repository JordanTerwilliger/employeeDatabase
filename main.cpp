#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>       
using namespace std;

const int EMPLOYEE_COUNT = 5;  
class Employee{
    public:
    string name;
    string title;
    double wage;
};

double getWages(){

    return 0;
}
void setWages(){

}
void calculateTotalWages(){
    for (size_t i = 1; i <= EMPLOYEE_COUNT; i++)
    {
         cout << "Enter the amount of hours worked for employee #" << i << "\n";
         vector<int> hours = {};
    }
    double wages = getWages();
}
void printEmployees(){
    for (int i = 0; i < EMPLOYEE_COUNT; i++)
    {
        cout << "printEmployees";
    }
    
}
void desc(){
    cout << "\nHello, this application is designed to manage employees and their wages.\n" << 
            "Please select an option to start. \n\n" << 
            "1. Print Employees. \n" <<
            "2. Calculate Total Wages. \n" << 
            "3. Exit Application";
}
int main(){
    desc();
    string input;
    while (true)
    {
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
