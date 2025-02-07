#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>       
using namespace std;

class Employee{
    private:
    string name;
    string title;
    double wage;
    static int employeeCount;

    public:
    //Constuctor
    Employee(string constructorName, string constructorTitle, double constructorWage);

    void setEmployeeCount(int employeeCount);
    int getEmployeeCount() const;
    void setName(string name);
    string getName() const;
    void setTitle(string name);
    string getTitle() const;
    void setWage(double wage);
    double getWage() const;
};

int Employee::employeeCount = 5;

//Getters and Setters
    void Employee::setEmployeeCount(int newEmployeeCount){
        Employee::employeeCount = newEmployeeCount;
    }
    int Employee::getEmployeeCount() const {
        return Employee::employeeCount;
    }
    void Employee::setName(string name){
        
    }
    string Employee::getName() const {

        return Employee::name;
    }
    void Employee::setTitle(string name){

    }
    string Employee::getTitle() const {
        return Employee::title;
    }
    void Employee::setWage(double wage){

    }
    double Employee::getWage() const {
        return Employee::wage;
    }


void createEmployee(){
    Employee e1("Bob","Manager",40);
    Employee e2("John","Line Cook", 20);
    Employee e3("Mark","Cashier", 8);
    Employee e4("Matthew","Cashier", 10);
    Employee e5("Sarah", "Cashier", 7.25);

}
void calculateTotalWages(){
    int employeeHours;
    int employeeCount = Employee::getEmployeeCount();
    vector<double> hours = {}; //Creates a vector to hold employee's hours
    for (size_t i = 1; i <= employeeCount; i++){
        cout << "Enter the amount of hours worked for employee #" << i << "\n";
        cin >> employeeHours;
        hours.push_back(employeeHours);
    }
    
    system("pause");
}

void printEmployees(){
    int employeeCount = Employee::getEmployeeCount();
    for (int i = 0; i < employeeCount; i++){
        //cout << getTitle;
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
