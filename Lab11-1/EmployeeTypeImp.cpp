//
//  EmployeeTypeImp.cpp
//  Lab11-1
//
//  Created by Oke-Oghene Amuwha on 3/2/21.
//

#include <cstdlib> // For several general-purpose functions
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <stdio.h>
#include "EmployeeType.h" // Header file
using namespace std; // So "std::cout" may be abbreviated to "cout"

void employeeType::print() const
{
    cout << name << " "
    << department << " "
    << age << " "
    << pay << endl;
}

void employeeType::setData(string n, string d, int a, double p)
{
    name = n;
    department = d;
    age = a;
    pay = p;
}

void employeeType::setName(string n)
{
    name = n;
}

void employeeType::setDepartment(string d)
{
    department = d;
}

void employeeType::setAge(int a)
{
    age = a;
}

void employeeType::setPay(double p)
{
    pay = p;
}

string employeeType::getName() const
{
    return name;
}

string employeeType::getDepartment() const
{
    return department;
}

int employeeType::getAge() const
{
    return age;
}

double employeeType::getPay() const
{
    return pay;
}

// Constructor
employeeType::employeeType(string n, string d, int a, double p)
{
    name = n;
    department = d;
    age = a;
    pay = p;
}
