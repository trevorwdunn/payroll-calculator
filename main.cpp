// Libraries
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <stdexcept>
using namespace std;

// Headers
#include "employee.h"
#include "salaryemployee.h"
#include "hourlyemployee.h"

// Global Variables
const int EMPID_LENGTH = 7;      // length of an id is 6
const int FIRSTNAME_LENGTH = 12; // length of first name is less than 12
const int LASTNAME_LENGTH = 12;  // length of last name is less than 12
const string EMPDATA_FILENAME = "employees.dat";
const string TIMEDATA_FILENAME = "emp_time.dat";
const string PAYROLL_REPORT_FILENAME = "payroll.txt"; // might need to provide some special permissions in order to do this with MacOS.

// Data structure for an employee record
struct EmployeeRecord
{
    char employeeType; // H for hourly and S for salary
};

int main()
{
    // Employee *e;
    SalaryEmployee s("0123", "Jack", "Sprat", 600);
    HourlyEmployee h("2468", "Jill", "Hill", 10);
    cout << s.getEmpID() << ": " << s.calculatePay() << endl;
    cout << h.getEmpID() << ": " << h.calculatePay(87) << endl;

    return 0;
}