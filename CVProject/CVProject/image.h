#pragma once
#ifndef IMAGE_H
#define IMAGE_H

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <iostream>

class Image
{
private:
	int width;
	int height;
	int size;
	int brightness;
	cv::Mat image;
	//Add parameters for other functions here
public:
	Image();
	Image(cv::Mat image);
	void resizeImage();
	void brightnessImage();

	void erosionImage();  // GUI-based erosion function

	void showImage();
	void saveImage();
	cv::Mat getImage();
};


#endif
