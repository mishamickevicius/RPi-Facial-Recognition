#include <iostream>
#include "faceDetect.hpp"

#include <opencv2/imgcodecs.hpp>
#include <opencv2/core/mat.hpp>


int main() {
    // const std::string filename = "/home/misha/Desktop/data/test_images/face.jpeg";
    std::string filename;
    std::cin >> filename;

    // Read in file
    try {
        cv::Mat input_image = cv::imread(filename, cv::IMREAD_COLOR);
    if (input_image.empty()){
        throw (0);
    }

    std::cout << isFaceDetected(input_image) << std::endl;
    } catch (...) {
        std::cout << "Image Not Found" << std::endl;
    }
}