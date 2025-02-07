#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <vector>       
using namespace std;

class Employee{
    public:
    Employee(string name, string title, double wage){     //Constuctor
        this->name = name;
        this->title = title;
        this->wage = wage;
    }
    string getName(){return name;}
    string getTitle(){return title;}
    double getWage(){return wage;}

    private:
    string name;
    string title;
    double wage;
};
class EmployeeApps{
    public:
    vector<Employee> employees;
    void createEmployees(){
        employees.push_back(Employee("Bob","Manager", 40));
        employees.push_back(Employee("John","Line Cook", 20));
        employees.push_back(Employee("Mark","Cashier", 8));
        employees.push_back(Employee("Matthew","Cashier", 10));
        employees.push_back(Employee("Sarah", "Cashier", 7.25));
    }
    void calculateTotalWages(){
        int employeeHours;
        vector<double> hours; //Creates a vector to hold employee's hours
        for (size_t i = 1; i <= employees.size(); i++){
            cout << "Enter the amount of hours worked for employee #" << i + 1 << " (" << employees[i].getName() << "):\n";
            cin >> employeeHours;
            hours.push_back(employeeHours);
        }
        double totalWages = 0;
        for (size_t i = 0; i < employees.size(); i++){
            totalWages += hours[i] * employees[i].getWage();
        }

        cout << "The total wages for all employees is: $" << totalWages << endl;
        system("pause");
    }
    void printEmployees(){
        for (size_t i = 0; i < employees.size(); i++){
            cout << "Employee #" << i + 1 << ": " << employees[i].getName() << ", Title: " << employees[i].getTitle() << ", Wage: $" << employees[i].getWage() << "/hr\n";
        }
        system("pause");
    }
};



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
    EmployeeApps apps;
    desc();
    string input;
    while (true)
    {
        options();
        cin >> input;
        int userSelection = atoi(input.c_str());
        switch (userSelection){
        case 1: //Print employees in list.
            apps.printEmployees();
            break;
        case 2: // Calc total wages.
            apps.calculateTotalWages();
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
