#include<iostream>
#include<string>
using namespace std;

//class is a blueprint for creating objects that has user defined datatypes, attributes and methods
class Teacher{

//by default all attributes are private
// helps in data hiding-Encapsulation
private:                                    
    double salary;

public:
    Teacher()
    {
        cout <<"Constructor wake up\n";
        dept="Computer Science";
    }

    //properties/attributes
    string name;
    string dept;
    string subject;

    
  
    //methods are member function inside class
    void changeDept(string newDept){
        dept=newDept;
    }

    //setter method to set the value of salary
    //This is used to set the value of private attribute salary from outside the class
    void setSalary(double newSalary){
        salary=newSalary;
    }
    //getter method to get the value of salary
    //This is used to get the value of private attribute salary from outside the class
    double getSalary(){
        return salary;
    }
};

//Memory allocation doesnot happen when bluwprint is defined.


int main(){

    // creating object instance of class Teacher using default constructor
    
    Teacher t1; //constructoer call. Objects gets initialized.
    Teacher t2;//Constructor gets called again for t2 object.

    // Memory allocation happens at this point when object is created and constructor is called.

    //Default constructor is a constructor called by default as soon as an object of class is creatred that takes no parameters and 
    //is provided by the compiler if no other constructors are defined in the class. It initializes the object with default values.

    //You can assign values to each attribute separately as well but it is not recommended as it can lead to errors and is not efficient
    t1.name="Sashwat";
    t2.name="Sailesh";
    t1.subject="C++";
    t1.setSalary(25000);
    cout<<"Salary: " << t1.getSalary() << endl;
    cout<<"Department of " <<t1.name <<" : " << t1.dept << endl;
    cout<<"Department of " <<t2.name <<" : " << t2.dept << endl;

    return 0;
}

// What is the first line on the output?
// Answer: Custom Constructor "Teacher()" by programmer is invoked. so output: Conmstructor wake up

// Note: You should never assign constructor to private access modifier.

// This is a non parameterized constructor example as it doesnot have any parameters.