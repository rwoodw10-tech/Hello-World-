#include <iostream>

using namespace std;

int main()
{
  int teaspoons;
  int tablespoons;
  int cups;
  int quart;
  int remainingTeaspoons;
  cout << "Enter a measurement in teaspoons:" << endl;
  cin >> teaspoons;
  quart = teaspoons / 192;
  remainingTeaspoons = teaspoons % 192;
  cups = remainingTeaspoons / 48;
  remainingTeaspoons = teaspoons % 48;
  tablespoons = remainingTeaspoons / 3;
  teaspoons = remainingTeaspoons % 3;
  cout << quart << "quart(s)" << endl;
  cout << cups << "cups(s)" << endl;
  cout << tablespoons << "ta(s)" << endl;
}
