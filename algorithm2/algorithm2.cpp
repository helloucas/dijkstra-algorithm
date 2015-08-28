// algorithm2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include"Dijkstra.h"
#include"Eigen\Dense"
#include<vector>
#include"min.h"
#include"file1.h"
#include<string>
using namespace  std;
using Eigen::MatrixXd;

int _tmain(int argc, _TCHAR* argv[])
{
	clock_t  start, finish;
	double totaltime;
	start = clock();

	dijkstra();

	cout << endl;
	
	finish = clock();
	totaltime = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "此算法的运行总时间为：" << totaltime << "s"<<endl;
	return 0;
}

