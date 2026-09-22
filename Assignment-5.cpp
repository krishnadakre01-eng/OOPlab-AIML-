#include<iostream>
#include<string>

using namespace std;

class student
{
private :
    int rollno;
    string stream;
    int division;

    public:
    student(int rollno ,string stream ,int division)
    {
        this->rollno=rollno;
        this->stream=stream;
        this->division=division;
    }

    
void display()
{
    cout<<"Roll no. of student is :"<< rollno <<endl;
    cout<<"Stream of student is : "<< stream <<endl;
    cout<<"Division of student :"<< division <<endl;

}
};
int main()
{
    student s1(24,"AIML",1);

s1.display();
return 0;

}
