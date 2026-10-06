#include <iostream>
#include <string>
using namespace std;


class Person
{
public:
    string name;
    int age;

    void getPersonData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonData()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};


class Employee : public Person
{
public:
    int empId;
    float salary;

    void getEmployeeData()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployeeData()
    {
        displayPersonData();

        cout << "\nEmployee ID: " << empId;
        cout << "\nSalary: " << salary;
    }
};


class Manager : public Employee
{
public:
    string department;

    void getManagerData()
    {
        cout << "Enter Department: ";
        cin >> department;
    }

    void displayManagerData()
    {
        displayEmployeeData();

        cout << "\nDepartment: " << department;
    }
};

int main()
{
    Manager m;

    cout << "Enter Manager Details:\n";

    m.getPersonData();
    m.getEmployeeData();
    m.getManagerData();

    cout << "\n--- Manager Information ---";
    m.displayManagerData();

    return 0;
}
