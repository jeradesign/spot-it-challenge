#include "SpotIt.h"

using namespace cv;

Mat SpotIt::processMat(Mat& mat) {
    int centerX = mat.cols/2;
    
    Scalar blue(255, 0, 0);
    line(mat, Point(centerX, 0), Point(centerX, mat.cols), blue);
    
    return mat;
}