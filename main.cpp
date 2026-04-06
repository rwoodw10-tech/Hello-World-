#include <iostream>

using namespace std;

int main()
{
  int teaspoons;
  int tablespoons;
  int cups;
  int remainingTeaspoons;
  cout << "Enter a measurement in teaspoons:" << endl;
  cin >> teaspoons;
  cups = teaspoons / 48;
  remainingTeaspoons = teaspoons % 48;
  tablespoons = remainingTeaspoons / 3;
  teaspoons = remainingTeaspoons % 3;
  cout << 


}
