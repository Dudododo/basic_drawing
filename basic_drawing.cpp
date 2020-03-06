#include <opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	cv::Mat img = Mat::zeros(Size(500, 500), CV_8UC3);//创建画布

	//画圆
	cv::Point pt;
	pt.x = 100;
	pt.y = 100;
	circle(img, pt, 55, CV_RGB(255, 0, 0), 1, 8, 0);
	//画线段
	cv::Point pt1;
	cv::Point pt2;
	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 200;
	pt2.y = 200;
	line(img, pt1, pt2, CV_RGB(0, 255, 0), 1, 8, 0);
	//画矩形框
	cv::Rect rect;
	rect.x = 100;
	rect.y = 100;
	rect.width = 100;
	rect.height = 100;
	rectangle(img, rect, CV_RGB(0, 0, 255), 1, 8, 0);

	imshow("img", img);//显示上述图像
	waitKey(0);
	//imshow("dispMat", dispMat);
	return 0;
}
