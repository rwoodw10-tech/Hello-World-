#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
 /*cout << fixed << setprecision(2);
 cout << "Month" << "\t";
 cout << "Int." << "\t";
 cout << "Pay" << "\t";
 cout << "Balance" << endl;*/
 int month;
 double interestRate;
 double amountPayed;
 double accountBalance;
 cin >> accountBalance;
 cout << "Enter Account Balance: ";
 cout << "Enter Payment: ";
 cin >> amountPayed;
 cin >> interestRate;
 for (month = 0; accountBalance <= 0; ++month){
  cout << fixed << setprecision(2);
  cout << "Month" << "\t";
  cout << "Int." << "\t";
  cout << "Pay" << "\t";
  cout << "Balance" << endl;
  double APR = interestRate / 12;
  cout << APR << endl;
  double calculation = (accountBalance + interestRate) - 150;
  cout << calculation << endl;
  //cout << month << "\t";
  //cout << interestRate << "\t";
  //cout << amountPayed << "\t";
  //cout << accountBalance << "\t";

 }
}
