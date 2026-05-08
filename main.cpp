#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
 cout << fixed << setprecision(2);
{
    int month = 12;
    double interest = 0, monthlyInterest = 0, APR = 0, balance = 0, payment = 0;

    cout << fixed << setprecision(2);
    cout << "enter balance" << endl;
    cin >> balance;
    cout << "enter payment" << endl;
    cin >> payment;
    cout << "enter APR" << endl;
    cin >> APR;

    interest = (APR / 12) / 100;

    // 19.9 / 12 = 1.65833 / 100 = 0.0165833 (interest)
    // balance * interest = 16.5833 (monthlyInterest)
    // calculation = (balance - payment) + monthlyInterest
    cout << "interest calculated: " << interest << endl;

    cout << "Month " << "Interest " << "Payment " << "Balance " << endl;

    for (int i = 0; i < month; ++i)
    {
        if (i == 0)
        {
            cout << i << '\t';
            cout << monthlyInterest << '\t';
            cout << payment << '\t';
            cout << balance << endl;
        }
        else
        {

            monthlyInterest = (balance * interest);
            balance = balance + monthlyInterest;

            if (payment > balance)
            {
                payment = balance;
            }

            balance -= payment;

            cout << i << '\t';
            cout << monthlyInterest << '\t';
            cout << payment << '\t';
            cout << balance << endl;
            //if (balance <= 0.005)
            //{
            //    break;
            //}
            if (balance <= 0.005)
            {
                break;
            }
        }
    }

    return 0;
}
}