#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string name, int age){
        this->name=name;
        this->age=age;
        cout << "Parent Constructor" << endl;
    }
    
    
    ~Person(){
        cout << "Parent Destructor" << endl;
    }

};

//Inherit in public mode from class Person

class Student: public Person{

public:
    int rollno;

    // Custom constructor for Person-parent classneeds to be called explicitly in Student-child class constructor as Person class doesnot have default constructor.
     Student(string name, int age, int rollno): Person(name, age){  
        this->rollno=rollno;
        cout << "Child Constructor" << endl;
    }
    ~Student(){
        cout << "Child Destructor" << endl;
    }


};

// Inherit in public mode from class Student and Student is child class of Person class.
//So GradStudent is grand child class of Person class and child class of Student class.
class GradStudent: public Student{
public:
    string researchTopic;

    GradStudent(string name, int age, int rollno, string researchTopic): Student(name, age, rollno){
        this->researchTopic=researchTopic;
        cout << "Grand Child Constructor" << endl;
    }

    ~GradStudent(){
        cout << "Grand Child Destructor" << endl;
    }

    void getInfo(){
        cout<< "Name: "<< name<< endl;
        cout<< "Age: "<< age<< endl;
        cout<< "Roll no: "<< rollno<< endl;
        cout<< "Research Topic: "<< researchTopic<< endl;
    }
};

int main(){
    
    GradStudent s1("Shaswat Raya Chhetri", 01, 1, "Machine Learning");
    s1.getInfo();
    return 0;
}

// Base-Parent class constructor gets called first and then derived class constructor gets called.
// Child class destructor gets called first and then parent class destructor gets called.