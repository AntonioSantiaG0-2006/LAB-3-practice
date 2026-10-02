#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

using namespace std;

class Employee {
private:
    string eFullName;
    double eHourlySalary;
    int hoursWeekly;
    int yearService;
    bool workStatus;
    int warnings;

public:
    Employee(string fullName, double hourlySalary, int hoursWeekly,
             int years, bool status, int warnings);

    // Getters
    string getFullName();
    double getHourlySalary();
    int getHoursPerWeek();
    int getYearsOfService();
    bool getStatus();
    int getWarnings();
    double getYearlySalary();

    // Setters
    void setFullName(string fullName);
    void setHourlySalary(double hourlySalary);
    void setHoursPerWeek(int hours);
    void setYearsOfService(int years);
    void setStatus(bool status);
    void setWarnings(int warnings);

    int seniorityLevel();
};

#endif