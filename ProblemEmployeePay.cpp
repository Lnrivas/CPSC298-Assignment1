/*
 * Name: Luis Rivas
 * ID: 2365948
 * Assignment 1 - Problem 3 (employeepay)
*/
#include <iostream>

using namespace std;

int main () {
  short hourlySalary = 16;
  short hourlyOvertimeSalary = 16 * 1.5; // paid 1.5 times as much for overtime
  short hoursWorkedInWeek;
  short grossPay;

  cout << "Hours worked in a week: ";
  cin >> hoursWorkedInWeek;

  if (hoursWorkedInWeek > 40) { // anything over 40 is considered overtime
    hoursWorkedInWeek -= 40;
    grossPay += (hourlySalary * 40) + (hoursWorkedInWeek * hourlyOvertimeSalary);
  } else {
    grossPay += hourlySalary * hoursWorkedInWeek;
  }

  cout << "Gross pay: $" << grossPay << endl;
  cout << "Amount withheld for Social Security tax: $" << (grossPay * 0.06) << endl;
  cout << "Amount withheld for federal income tax: $" << (grossPay * 0.14) << endl;
  cout << "Amount withheld for state income tax: $" << (grossPay * 0.05) << endl;
  cout << "Amount withheld for medical insurance: $" << 10 << endl;
  cout << "Net take-home pay for the week: $" << grossPay - ((grossPay * 0.06) + (grossPay * 0.14) + (grossPay * 0.05) + 10) << endl;

  return 0;
}
