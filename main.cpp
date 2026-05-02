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
 cout << "Enter Payment: ";
 cout << "Enter Account Balance: ";
 cout << "Enter APR: ";
 cin >> amountPayed;
 cin >> accountBalance;
 cin >> interestRate;
 for (month = 0; accountBalance <= 0; ++month){
  cout << fixed << setprecision(2);
  cout << "Month" << "\t";
  cout << "Int." << "\t";
  cout << "Pay" << "\t";
  cout << "Balance" << endl;
  double calculation = accountBalance - 150
  //double APR / 12; is interest
  //cout << month << "\t";
  //cout << interestRate << "\t";
  //cout << amountPayed << "\t";
  //cout << accountBalance << "\t";
 }
}
