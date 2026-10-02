#include "employee.hpp"

Employee::Employee(string fullName, double hourlySalary, int hoursWeekly, int years, bool status, int warnings){
    eFullName = fullName;
    eHourlySalary = hourlySalary;
    this->hoursWeekly = hoursWeekly;
    yearService = years;
    workStatus = status;
    this->warnings = warnings;
}

// Getters
string Employee::getFullName() { return eFullName; }
double Employee::getHourlySalary() { return eHourlySalary; }
int Employee::getHoursPerWeek() { return hoursWeekly; }
int Employee::getYearsOfService() { return yearService; }
bool Employee::getStatus() { return workStatus; }
int Employee::getWarnings() { return warnings; }
double Employee::getYearlySalary() { 
    return eHourlySalary * hoursWeekly * 4.5 * 12; 
}

// Setters
void Employee::setFullName(string fullName) { eFullName = fullName; }
void Employee::setHourlySalary(double hourlySalary) { eHourlySalary = hourlySalary; }
void Employee::setHoursPerWeek(int hours) { hoursWeekly = hours; }
void Employee::setYearsOfService(int years) { yearService = years; }
void Employee::setStatus(bool status) { workStatus = status; }
void Employee::setWarnings(int warnings) { this->warnings = warnings; }

int Employee::seniorityLevel(){
    if (yearService >= 15) {
        return 3;
    }
    else if (yearService > 5) {
        return 2;
    }
    else if (yearService > 1) {
        return 1;
    }
    else {
        return 0;
    }
}