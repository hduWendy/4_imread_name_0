// 4_imread_name_0.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	//��ȡ���ص�һ��ͼƬ����imread("1.jpg",0)������ʾ����!
	//imread������ļ�·�����Ը����Լ���ʵ��·���޸ġ�
	Mat img = imread("C:/Users/lenovo/Desktop/����/1.jpg",0);
	imshow("test", img);
	//�ȴ��û�����
	waitKey(0);
	return 0;
}


