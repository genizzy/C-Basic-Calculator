#include <iostream>
using namespace std;
// function with input

int GetValueFromUser() { // defines the function
  int newv;
  cout << "Please enter an integer";
  cin >> newv;
  return newv;
}
int main() {
  int number {GetValueFromUser()};
  int number2 {GetValueFromUser()};
  int number3 {GetValueFromUser()};
  cout << "The three numbers added together is " << number+number2+number3;
}
