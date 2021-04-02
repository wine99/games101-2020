#include <cmath>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <iostream>

using namespace std;

void assignment0();

int main() {
    // Basic Example of cpp
    std::cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    std::cout << a << std::endl;
    std::cout << a / b << std::endl;
    std::cout << std::sqrt(b) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0 / 180.0 * acos(-1)) << std::endl;

    // Example of vector
    std::cout << "Example of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f, 2.0f, 3.0f);
    Eigen::Vector3f w(1.0f, 0.0f, 0.0f);
    // vector output
    std::cout << "Example of output \n";
    std::cout << v << std::endl;
    // vector add
    std::cout << "Example of add \n";
    std::cout << v + w << std::endl;
    // vector scalar multiply
    std::cout << "Example of scalar multiply \n";
    std::cout << v * 3.0f << std::endl;
    std::cout << 2.0f * v << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i, j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    std::cout << "Example of output \n";
    std::cout << i << std::endl;
    // matrix add i + j
    cout << i + j << endl;
    // matrix scalar multiply i * 2.0
    cout << i * 2.0f << endl;
    // matrix multiply i * j
    cout << i * j << endl;
    // matrix multiply vector i * v
    cout << i * v << endl;

    assignment0();

    return 0;
}

void assignment0() {
    cout << endl << "---assignment0---" << endl;

    // point p(2, 1)
    Eigen::Vector3f p(2, 1, 1);

    Eigen::Matrix3f r, t;
    double alpha = acos(-1) / 4;
    r << cos(alpha), -sin(alpha), 0, sin(alpha), cos(alpha), 0, 0, 0, 1;
    t << 1, 0, 1, 0, 1, 2, 0, 0, 1;
    cout << t * r * p << endl;

    // first rotate, then translate, so this can be done in one transformation
    Eigen::Matrix3f transform;
    transform << cos(alpha), -sin(alpha), 1,
                 sin(alpha), cos(alpha),  2,
                 0,          0,           1;
    cout << transform * p << endl;

    return;
}