#include <iostream>
#include <vector>

#include <opencv2/objdetect.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgproc.hpp>

/*
isFaceDetected() is a function that will take an image as an input and 
will output a 1(true) if a human face is detected 
and output 0(false) if no face is detected 
*/
bool isFaceDetected(cv::Mat& image) {
    // Make instance of classifer
    cv::CascadeClassifier face_cascade;
    if (!face_cascade.load(cv::samples::findFile("haarcascades/haarcascade_frontalface_default.xml", true))) {
        std::cerr << "Error loading face cascade\n";
        return -1;
    }

    // Convert to gray scale
    cv::cvtColor(image, image, cv::COLOR_BGR2GRAY);

    std::vector<cv::Rect> faces; // Vector with rectangles of faces
    // Run classifier
    face_cascade.detectMultiScale(image, faces);

    return !faces.empty();
}