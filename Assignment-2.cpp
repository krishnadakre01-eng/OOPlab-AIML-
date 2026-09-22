#include<iostream>
#include<string>
using namespace std;

class employee
{
    public:
    string name;
    int empID;
    string depart;
    void display()
    {
        cout<<"Employer name : "<<name<<endl;
        cout<<"Employee ID : "<<empID<<endl;
        cout<<"Department name : "<<depart<<endl;
        cout<<"--------------------------"<<endl;

    }
};

int main()
{
    employee e1,e2;

    //About first Employee
    cout<<"About first Employee"<<endl;

    cin.ignore();
    cout<<"Enter the name of first Employee :-"<<endl;
    getline(cin,e1.name);
    cout<<"Enter Emlpoyer ID :-"<<endl;
    cin>>e1.empID;
    cin.ignore();
    cout<<"Enter Department of Employee :-"<<endl;
    getline(cin,e1.depart);


    //About second Empioyee
    cout<<"About second Employee"<<endl;

    cin.ignore();
    cout<<"Enter the second of first Employee :-"<<endl;
    getline(cin,e2.name);
    cout<<"Enter Emlpoyer ID :-"<<endl;
    cin>>e2.empID;
    cin.ignore();
    cout<<"Enter Department of Employee :-"<<endl;
    getline(cin,e2.depart);

   
    cout << "\n=== First Employee ===\n";
    cout << "The name of first Employee :-"<<e1.name<< "\n";
    cout << "Emlpoyer ID :-" <<e1.empID<< "\n";
    cout << "Department of Employee :-"<<e1.depart<< "\n";
    



    cout << "\n=== Second Employee ===\n";
    cout << "The name of first Employee :-" <<e2.name<< "\n";
    cout << "Emlpoyer ID :-"<<e2.empID<< "\n";
    cout << "Department of Employee :-" <<e2.depart<< "\n";
    

    return 0;

}
