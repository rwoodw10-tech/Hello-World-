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
 cout << "Enter APR: ";
 cin >> interestRate;
 cin >> amountPayed;
 cin >> accountBalance;
 for (month = 0; accountBalance <= 0; ++month){
  cout << fixed << setprecision(2);
  cout << "Month" << "\t";
  cout << "Int." << "\t";
  cout << "Pay" << "\t";
  cout << "Balance" << endl;
  //cout << month << "\t";
  //cout << interestRate << "\t";
  //cout << amountPayed << "\t";
  //cout << accountBalance << "\t";
 }
}
