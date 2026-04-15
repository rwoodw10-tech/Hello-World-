#include <iostream>
#include <cmath>

using namespace std;

int main() {
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
  accel_DueToGrav_= 32.17405;
  double VertVelocityPow2;
  VertVelocityPow2 = pow(verticalVelocity, 2);
  double timeBikeInAir;
  timeBikeInAir = verticalVelocity + sqrt(VertVelocityPow2 + (2 * accel_DueToGrav_));
  cout << heightOfRamp << " " << horizontalVelocity << end
}
