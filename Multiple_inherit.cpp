#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int rollno;
    Student(string name, int rollno){
        this->name=name;
        this->rollno=rollno;
        cout << "Parent1 Constructor" << endl;
    }
    
    
    ~Student(){
        cout << "Parent1 Destructor" << endl;
    }

};

//Inherit in public mode from class Person

class Teacher{

public:
    string subject;
    double salary;

    Teacher(string subject, double salary){
        this->subject=subject;
        this->salary=salary;
        cout << "Parent2 Constructor" << endl;
    
    }
    ~Teacher(){
        cout << "Parent2 Destructor" << endl;
    }
};


// Inherit in public mode from class Student and Student is child class of Person class.
//So GradStudent is grand child class of Person class and child class of Student class.
class TA: public Student, public Teacher {
public:
    string researchTopic;

    TA(string name, int rollno, string subject, double salary, string researchTopic): Student(name, rollno), Teacher(subject, salary){
        this->researchTopic=researchTopic;
        cout << "Grand Child Constructor" << endl;
    }

    ~TA(){
        cout << "Grand Child Destructor" << endl;
    }

    void getInfo(){
        cout<< "Name: "<< name<< endl;
        cout<< "Roll no: "<< rollno<< endl;
        cout<< "Subject: "<< subject<< endl;
        cout<< "Salary: "<< salary<< endl;
        cout<< "Research Topic: "<< researchTopic<< endl;
    }
};

int main(){
    
    TA T1("Shaswat Raya Chhetri", 1, "Mathematics", 50000, "Machine Learning");
    T1.getInfo();
    return 0;
}

// Base-Parent class constructor gets called first and then derived class constructor gets called.
// Child class destructor gets called first and then parent class destructor gets called.