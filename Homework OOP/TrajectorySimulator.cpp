#include <iostream>
#include <cmath>
#define G 9.81
#define PI 3.1415926535
using namespace std;

float to_radians(float degrees) {
    return degrees * (PI / 180);
}

float t_flight(float speed, float launchangle_degree) {
    float angle = to_radians(launchangle_degree);
    return 2 * speed * sin(angle) / G;
}

float max_height(float speed, float launchangle_degree) {
    float angle = to_radians(launchangle_degree);
    return (speed * speed) * (sin(angle) * sin(angle)) / (2 * G);
}

float horizontal_range(float speed, float launchangle_degree) {
    float angle = to_radians(launchangle_degree);
    return (speed * speed) * sin(2 * angle) / G;
}


float vertical_range(float speed, float launchangle_degree, float x) {
    float angle = to_radians(launchangle_degree);
    return x * tan(angle) - (G * x * x) / (2 * speed * speed * cos(angle) * cos(angle));
}

int main() {
    float speed = 25.0f;
    float launch_angle = 45.0f;
    float x = 15.0f; 

    cout << "Time of Flight:   " << t_flight(speed, launch_angle) << " s" << endl;
    cout << "Maximum Height:   " << max_height(speed, launch_angle) << " m" << endl;
    cout << "Horizontal Range: " << horizontal_range(speed, launch_angle) << " m" << endl;
    cout << "Vertical Range:   " << vertical_range(speed, launch_angle, x) << " m" << endl;

    return 0;
}
