#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(int argc, char **argv){


     // transposing the matrix or matrix transposition
    Eigen: :MatrixXd m1(2,2);
    m1 << 1,2,3,4;
    std:: cout << "\n m1 = \n1" << m1 << std::endl;

    // m1 = m1.transpose();
    m1.transposeInPlace().eval();
    std:: cout << "\n m1 = \n1" << m1 << std::endl;

    //matrix multiplication
    Eigen:: MatrixXd m2 (2,2);
    m2 << 5,6,8,9;

    Eigen:: MatrixXd m3 (3,2);
    m3 << 1,2,3,4,5,6;

    Eigen:: MatrixXd m5 (2,2);
    m3 << 1,2,3,4;

    m2 = m2 * m3;
    std:: cout << "\n m2 = \n" << m2 << std::endl;

    Eigen:: MatrixXd m4(3,2);
    m4.noaliases() = m3 * m2;
    std:: cout << "\n m4 = \n" << m4 << std::endl;

    //element and by element operations
    m3 = 0.5 *m3
    std:: cout << "\n 0.5*m3 = \n" << m3 << std::endl;

    m5 = m5 + Eigen::MatrixXd::Identity(2,2);
    std:: cout << "\n m5 = \n" << m5 << std::endl;

    // Matrix Inversion operation

    std:: cout "\n m1.inverse() = \n" << m1.inverse() << std::endl;


    return 0;

}

