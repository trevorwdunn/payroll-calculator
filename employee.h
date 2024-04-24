#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include <string>

// Abstract base class because it has a pure virtual function
class Employee
{
private:
    std::string empID;
    std::string firstName;
    std::string lastName;

public:
    // Constructor
    Employee(std::string empID, std::string firstName, std::string lastName);

    // Getters
    std::string getEmpID() const;
    std::string getFirstName() const;
    std::string getLastName() const;

    bool operator==(const Employee &rhs) const;
    bool operator!=(const Employee &rhs) const;
    bool operator<(const Employee &rhs) const;
    // bool operator>(const Employee &rhs) const; // not needed for this

    virtual double calculatePay(double hours = 0) = 0; // pure virtual function

    // Setters
};

#endif // !_EMPLOYEE_H_