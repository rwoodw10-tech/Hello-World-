#include <iostream>
#include <cmath>

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
  horizontalVelocity = velocityOfBike * cos(rampAngle);
  double verticalVelocity;
  verticalVelocity = velocityOfBike * sin(rampAngle);
  
  double accel_DueToGrav_;
  double timeBikeInAir;
  timeBikeInAir = verticalVelocity + sqrt(pow(verticalVelocity, 2) + (2 * 32.17405 )
}
