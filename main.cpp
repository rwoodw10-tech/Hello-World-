#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double rampHeight;
  cout << "Enter Ramp Height: " << endl;
  cin >> rampHeight;
  
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
  double timeBikeInAir_1;
  timeBikeInAir_1 = verticalVelocity + sqrt(VertVelocityPow2 + (2 * accel_DueToGrav_ * rampHeight));
  //cout << timeBikeInAir_1 << endl;
  double timeBikeInAir_2;
  timeBikeInAir_2 = timeBikeInAir_1 / accel_DueToGrav_;
  //cout << timeBikeInAir_2 << endl;
  //cout << rampHeight << " " << horizontalVelocity << endl;
  
  double maxHeight;
  maxHeight = rampHeight + (VertVelocityPow2 / (2 * accel_DueToGrav_));
  //cout << maxHeight << endl;

  double horizontalDist;
  horizontalDist = horizontalVelocity * timeBikeInAir_2;
  double landSpeed;
  landSpeed = sqrt(pow(horizontalVelocity, 2) + (VertVelocityPow2 + (2 * accel_DueToGrav_ * rampHeight));

}
