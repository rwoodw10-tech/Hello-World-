#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
 cout << fixed << setprecision(2);
 /*cout << "Month" << "\t";
 cout << "Int." << "\t";
 cout << "Pay" << "\t";
 cout << "Balance" << endl;*/
 int month;
 double interestRate;
 double amountPayed;
 double accountBalance;
 cout << "Enter Account Balance: ";
 cin >> accountBalance;
 cout << "Enter Payment: ";
 cin >> amountPayed;
 cout << "Enter APR: ";
 cin >> interestRate;
 //double APR = (interestRate / 12) * 10;
 //cout << APR << endl;
 //double calculation = (accountBalance -150) + APR;
 //cout << "Calculation: " << calculation << endl;
 for (month = 0; accountBalance <= 0; ++month){
  cout << "Month" << "\t";
  cout << "Int." << "\t";
  cout << "Pay" << "\t";
  cout << "Balance" << endl;
  if (month > 0) {
    double APR = (interestRate / 12) * 10;
    double calculation = (accountBalance -150) + APR;
    cout << "Calculation: " << calculation << "\t" << APR << endl;
  }
  if (accountBalance < 150) {
    accountBalance -= accountBalance;
  }
  //cout << month << "\t";
  //cout << interestRate << "\t";
  //cout << amountPayed << "\t";
  //cout << accountBalance << "\t";

 }
}
