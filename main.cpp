#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <vector>       
using namespace std;

class Employee{
    public:
    string getName(){return name;}
    string getTitle(){return title;}
    double getWage(){return wage;};

    Employee(string name, string title, double wage){     //Constuctor
        this -> name = name;
        this -> title = title;
        this -> wage = wage;
    }

    private:
    string name;
    string title;
    double wage;
};

    
void calculateTotalWages(int employeeCount, vector<Employee>& employees){
    double employeeHours;
    vector<double> hours; //Creates a vector to hold employee's hours.
    for (size_t i = 0; i < employeeCount; i++){
        cout << "Enter the amount of hours worked for employee #" << i + 1 << " (" << employees[i].getName() << "):\n";
        while(!(cin >> employeeHours)){
            cout << "Please enter a valid input, if the employee did not work this week, please enter 0. \n";
            cin.clear();
            cin.ignore();
        }
        if (employeeHours >= 0){ //Positive double.
            hours.push_back(employeeHours);
        }else{ //Negative double case.
            cout << "Please enter a valid input, if the employee did not work this week, please enter 0. \n";
            i--; //Prevents the for loop for interating on a bad input;
        }
    }
    
    double totalWages = 0;
    for (size_t i = 0; i < employeeCount; i++){
        totalWages += hours[i] * employees[i].getWage(); //Total wages = hour of the employee * the hours the employee worked ( user inputted)
    }

    cout << "The total wages for all employees is: $" << totalWages << endl;
    system("pause");
}   


void printEmployees(int employeeCount, vector<Employee>& employees){
    for (size_t i = 0; i < employeeCount; i++){
        cout << "Employee #" << i + 1 << ": " << employees[i].getName() << ", Job Title: " << employees[i].getTitle() << ", Wage: $" << employees[i].getWage() << "/hr\n";
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
    vector<Employee> employees = {
        Employee("Bob","Manager", 40),
        Employee("John","Line Cook", 20),
        Employee("Mark","Cashier", 8),
        Employee("Matthew","Cashier", 10),
        Employee("Sarah", "Cashier", 7.25),
    };
    desc();
    int userSelection;
    options();
    while (!(cin >> userSelection)){
        cout << "Invalid input, please select 1, 2, or 3. \n";
        cin.clear();
        cin.ignore();
    }
    switch (userSelection){
        case 1: //Print employees in list.
            printEmployees(employees.size(), employees);
            break;
        case 2: // Calc total wages.
            calculateTotalWages(employees.size(),employees);
            break;
        case 3: //Exit application.
            return 0;
        default:
            cout << "Invalid input, please select 1, 2, or 3. \n";
        }
            
    return 0;
    }

