#pragma once
#include <opencv2/opencv.hpp> 
#include <iostream> 
#define WORD_THRESHOLD 0.4

std::vector< int > getWords( cv::Mat image );