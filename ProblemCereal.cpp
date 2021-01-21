/*
 * Name: Luis Rivas
 * ID: 2365948
 * Assignment 1 - Problem1(cereal)
*/
#include <iostream>

using namespace std;

int main () {
  double weightInOunces;
  double weightInTons;
  int boxesToWeighOneTon;

  cout << "Enter weight of package of breakfast cereal in ounces: ";
  cin >> weightInOunces;

  weightInTons = weightInOunces / 35273.92; // A metric ton is 35,273.92 ounces
  boxesToWeighOneTon = (1 / weightInTons) + 1; // assigning a double value to an int truncates the decimal(representing a partial box) so 1 box is added to pass the 1 ton weight.

  cout << "Weight in metric tons: " << weightInTons << endl;
  cout << "Boxes needed to weigh one metric ton: " << boxesToWeighOneTon << endl;

  return 0;
}
