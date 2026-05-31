#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    //Non parameterized Constructor
    Teacher(){
        cout<<"Constructor invoked\n";
        dept="Computer Science";
    }
    // Parameterized Constructor
    Teacher(string name, string dept, string subject, double salary){
       this->name=name;//this->name is parameter/property from object and name is from function parameter
       this->dept=dept;
       this->subject=subject;
       this->salary=salary;
    }

    //copy Constructor
    Teacher(Teacher &orgObj){//pass by reference
        cout<<"Copy Constuctor...\n";
        this->name=orgObj.name;
        this->subject=orgObj.subject;
        this->dept=orgObj.dept;


    }
    //properties/attributes
    string name;
    string dept;
    string subject;
  
    //methods
    void changeDept(string newDept){
        dept=newDept;
    }

    void getInfo(){
        cout<< "name: " << name << endl;
        cout<< "subject: " << subject << endl;
    }
};


int main(){
    Teacher t1("Shradha","Computer Science","C++", 250000);
    //t1.name="Shradha";
    //t1.subject="C++";
    //t1.dept="Computer Science";
    //t1.setSalary(25000);
    
    cout << t1.dept <<endl;//By default all attributes are private 
    t1.getInfo();
    Teacher t2(t1);//Custom copy constructor -invoked
    t2.getInfo();

    return 0;
}