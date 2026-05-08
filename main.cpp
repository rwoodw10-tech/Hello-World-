#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
 cout << fixed << setprecision(2);
{
    int month = 12;
    double interest = 0, monthlyInterest = 0, APR = 0, balance = 0, payment = 0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "enter balance" << std::endl;
    std::cin >> balance;
    std::cout << "enter payment" << std::endl;
    std::cin >> payment;
    std::cout << "enter APR" << std::endl;
    std::cin >> APR;

    interest = (APR / 12) / 100;

    // 19.9 / 12 = 1.65833 / 100 = 0.0165833 (interest)
    // balance * interest = 16.5833 (monthlyInterest)
    // calculation = (balance - payment) + monthlyInterest
    std::cout << "interest calculated: " << interest << std::endl;

    std::cout << "Month " << "Interest " << "Payment " << "Balance " << std::endl;

    for (int i = 0; i < month; ++i)
    {

        if (i == 0)
        {
            std::cout << i << '\t';
            std::cout << monthlyInterest << '\t';
            std::cout << payment << '\t';
            std::cout << balance << std::endl;
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

            std::cout << i << '\t';
            std::cout << monthlyInterest << '\t';
            std::cout << payment << '\t';
            std::cout << balance << std::endl;
            if (balance <= 0.005)
            {
                break;
            }
        }
    }

    return 0;
}
}