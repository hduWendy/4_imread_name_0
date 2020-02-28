// 4_imread_name_0.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	//读取本地的一张图片处理imread("1.jpg",0)，并显示出来!
	//imread后面的文件路径可以根据自己的实际路径修改。
	Mat img = imread("C:/Users/lenovo/Desktop/推文/1.jpg",0);
	imshow("test", img);
	//等待用户按键
	waitKey(0);
	return 0;
}


