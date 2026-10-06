#include <iostream>
#include <string>
using namespace std;


class Person
{
public:
    string name;
    int age;
    string contact;

    void getPersonData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Contact Number: ";
        cin >> contact;
    }

    void displayPersonData()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nContact: " << contact;
    }
};


class Student : public Person
{
public:
    int rollNo;
    string branch;

    void getStudentData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Branch: ";
        cin >> branch;
    }

    void displayStudentData()
    {
        displayPersonData();

        cout << "\nRoll Number: " << rollNo;
        cout << "\nBranch: " << branch;
    }
};

int main()
{
    Student s;

    cout << "Enter Student Details:\n";
    s.getPersonData();      
    s.getStudentData();

    cout << "\n--- Student Information ---";
    s.displayStudentData();

    return 0;
}
