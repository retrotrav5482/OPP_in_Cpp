#include<iostream>
#include<string>
using namespace std;

//class is a blueprint for creating objects that has user defined datatypes, attributes and methods
class Teacher{

//by default all attributes are private
private:                                    
    double salary;

public:

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


int main(){

    // creating object instance of class Teacher using default constructor
    //Default constructor is a constructor that takes no parameters and is provided by the compiler if 
    //no other constructors are defined in the class. It initializes the object with default values.
    Teacher t1;

    //You can assign values to each attribute separately as well but it is not recommended as it can lead to errors and is not efficient
    t1.name="Shradha";
    t1.subject="C++";
    t1.dept="Computer Science";
    t1.setSalary(25000);
    cout<<"Salary: " << t1.getSalary() << endl;

    return 0;
}