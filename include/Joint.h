#pragma once

#include <iostream>
#include <vector>

#include <Eigen/Geometry>
#include <Eigen/Dense>
#include <Eigen/Core>

class Joint {
public:
    Joint();
    fk();
    mJacobian();
    aJacobian();
private:
    double min, max;
    Eigen::Matrix3d inertia_matrix;
}