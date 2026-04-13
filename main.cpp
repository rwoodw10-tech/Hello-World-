#include <iostream>
#include <cmath>
#include <numbers>
#include <cfenv>

using namespace std;

int main()
{
  double heightOfRamp;
  cin >> heightOfRamp;
  double rampAngle;
  cin >> rampAngle;
  double velocityOfBike;
  cin >> velocityOfBike;
  double horizontalVelocity;
  double horizontalVelocity = velocityOfBike * cos<rampAngle>;

}
