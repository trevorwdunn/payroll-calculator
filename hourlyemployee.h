#ifndef _HourlyEmployee_H_
#define _HourlyEmployee_H_
#include <string>
#include "employee.h"

class HourlyEmployee : public Employee
{
private:
    double hourlyWage;
    
public:
    // Constructor
    HourlyEmployee(std::string empID, std::string firstName, std::string lastName, double hourlyWage);
    double calculatePay(double hours = 0) override; // override calculatePay
};
#endif // !_HOURLYEMPLOYEE_H_#endif