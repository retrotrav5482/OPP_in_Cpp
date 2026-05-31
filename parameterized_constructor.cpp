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
    //Parameterized Constructor
    Teacher(string name, string dept, string subject, double salary){
       this->name=name;//this->name is parameter/property from object and name is from constructor function parameter
       this->dept=dept;
       this->subject=subject;
       this->salary=salary;

       // this-> method is similar to say as self.x=x in python. 
       // It is used to differentiate between parameter and property of object when they have same name.
    
        dept="Computer Science";

    } 


    // copy Constructor-pass by reference
    // A copy constructor is a special type of constructor that is used to create a new object as a copy of an existing object.
    //Any changes in the copy object will also affect the origianl object in pass by reference, But pass by value doenot affect the origianl object.
    Teacher(Teacher &orgObj){
        cout<<"Copy Constuctor...\n";
        this->name=orgObj.name;//this->name is parameter/property from object and name is from constructor function parameter
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
        this->salary=orgObj.salary;
    }
    

    //properties/attributes
    string name;
    string dept;
    string subject;

    
  
    //methods are member function inside class
    void changeDept(string newDept){
        dept=newDept;
    }

    void getInfo(){
        cout<< "Name: " << name << endl;
        cout<< "Subject: " << subject << endl;
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
    
    Teacher t1("Sashwat", "Computer Science", "C++", 25000); //constructoer call. Objects gets initialized.
    //Teacher t2("Sailesh", "Computer Science", "CS229N", 30000);//Constructor gets called again for t2 object.

    Teacher t2(t1);//Default copy constructor -invoked

    // Memory allocation happens at this point when object is created and constructor is called.

    //Default constructor is a constructor called by default as soon as an object of class is creatred that takes no parameters and 
    //is provided by the compiler if no other constructors are defined in the class. It initializes the object with default values.

    //This is problematic and can be solved by parameterized constructor. You can assign values to each attribute separately as well but it is not recommended as it can lead to errors and is not efficient. 
    cout<<"Salary: " << t1.getSalary() << endl;
   
    cout<<"Department of " <<t2.name <<" : " << t2.dept << endl;
    //t1.getInfo();
    t2.getInfo();
    return 0;
}

// What is the first line on the output?
// Answer: Custom Constructor "Teacher()" by programmer is invoked. so output: Conmstructor wake up

// Note: You should never assign constructor to private access modifier.

// This is a non parameterized constructor example as it doesnot have any parameters.