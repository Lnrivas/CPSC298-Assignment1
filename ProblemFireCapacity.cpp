/*
 * Name: Luis Rivas
 * ID: 2365948
 * Assignment 1 - Problem 2 (firecapacity)
*/
#include <iostream>

using namespace std;

int main () {
  short maxRoomCapacity;
  short peopleAttendingMeeting;

  cout << "Maximum room capacity: ";
  cin >> maxRoomCapacity;
  cout << "Number of people attending the meeting: ";
  cin >> peopleAttendingMeeting;

  if (peopleAttendingMeeting <= maxRoomCapacity) {
    cout << "It is legal to hold the meeting." << endl;
    cout << (maxRoomCapacity - peopleAttendingMeeting) << " more people may legally attend." << endl;
  } else {
    cout << "The meeting cannot be held due to fire regulations." << endl;
    cout << (peopleAttendingMeeting - maxRoomCapacity) << " people must be excluded in order to meet the fire regulations." << endl;
  }

  return 0;
}
