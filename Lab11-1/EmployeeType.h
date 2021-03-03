//
//  EmployeeType.h
//  Lab11-1
//
//  Created by Oke-Oghene Amuwha on 3/2/21.
//

#ifndef EmployeeType_h
#define EmployeeType_h

#include <string> // For string data type
#include <stdio.h>
using namespace std; // So "std::cout" may be abbreviated to "cout"

class employeeType
{
public:
    void print() const;
    
    void setData(string n = "", string d = "", int a = 0, double p = 0);
    
    void setName(string n);
    
    void setDepartment(string d);
    
    void setAge(int a);
    
    void setPay(double p);

    string getName() const;
    
    string getDepartment() const;
    
    int getAge() const;
    
    double getPay() const;
    
    employeeType(string n = "", string d = "", int a = 0, double p = 0);

private:
    string name; // Stores employee name
    string department; // Stores department
    int age; // Stores employee age
    double pay; // Stores pay
};

#endif /* EmployeeType_h */
