#ifndef _SALARYEMPLOYEE_H_
#define _SALARYEMPLOYEE_H_
#include <string>
#include "employee.h"

class SalaryEmployee : public Employee
{
private:
    double weeklySalary;

public:
    SalaryEmployee(std::string empID, std::string firstName, std::string lastName, double weeklySalary);
    double calculatePay(double hours = 0) override;
};

#endif // !_SALARYEMPLOYEE_H_
