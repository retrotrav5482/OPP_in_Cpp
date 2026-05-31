#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaPtr;

    //parameterized constructor

    Student(string name, double cgpa){
        this->name=name;
        cgpaPtr= new double;
        *cgpaPtr=cgpa;
    }

    //copy constructor for shallow copy

    Student(Student &orgObj){
        this->name=orgObj.name;
        cgpaPtr=new double;
        *cgpaPtr=*(orgObj.cgpaPtr);
    
    }

    // Destructor needs to be defined for dynamically allocated memory created using new.

    ~Student(){
        cout <<"Destructor called for heap memory deallocation\n";
        delete cgpaPtr;
    }

    void getInfo(){
        cout<<"Name: " << name << endl;
        cout<<"CGPA: " << *cgpaPtr << endl;
    }

};

int main(){
    Student s1("Alice", 8.5);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr)=9.0;
    s2.name="Lice";// cgpa gets changed this is the problem with shallow copy as both s1 and s2 are pointing to same memory location of cgpa.
    s2.getInfo();
    return 0;
}