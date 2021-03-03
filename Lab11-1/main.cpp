//==========================================================
//
// Title:       Employee Type
// Course:      CSC 2111
// Lab Number:  11-1
// Author:      Oke Amuwha
// Date:        3/2/21
// Description:
//   <brief description of application including its inputs,
// processing, and outputs>
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <cmath> // For math
#include "EmployeeType.h" // Header file
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

    // Show application header
    cout << "Welcome to Employee Database!" << endl;
    cout << "-----------------------------" << endl << endl;
    
    // Call class
    employeeType employee("Jon Jacobson", "Clark", 23, 14.40);
    employee.print();
    
    
    // Show application close
    cout << "\nEnd of Employee Database" << endl;

}
