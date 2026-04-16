#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double RrmpHeight;
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
  //cout << 
  timeBikeInAir_2 = timeBikeInAir_1 / accel_DueToGrav_;
  //cout << rampHeight << " " << horizontalVelocity << endl;
  //cout << timeBikeInAir << endl;
  
  double maxHeight;
  maxHeight = rampHeight + (VertVelocityPow2 / (2 * ))
}
