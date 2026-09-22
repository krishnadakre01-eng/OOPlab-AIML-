#include <iostream>
#include <string>
using namespace std;

class Employee
{
  public:
    Employee(int empid, string name, string designation)
    {
        this->empid = empid;
        this->name = name;
        this->designation = designation;
        cout << "Employee record created for " << name << endl;
    }

    ~Employee()
    {
        cout << "Employee record removed for " << name << endl;
    }

private:
    int empid;
    string name;
    string designation;
};

int main()
{
    {
        Employee employee(101, "Aarav", "Software Engineer");
        cout << "Recruitment processing completed." << endl;
    }

    return 0;
}
