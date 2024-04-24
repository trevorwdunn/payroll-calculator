#include "hourlyemployee.h"

HourlyEmployee::HourlyEmployee(std::string empID, std::string firstName, std::string lastName, double hourlyWage) : Employee(empID, firstName, lastName), hourlyWage(hourlyWage)
{
}

// Calculate pay for hourly employee
double HourlyEmployee::calculatePay(double hours)
{
    return hourlyWage * hours;
}