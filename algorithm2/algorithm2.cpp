// algorithm2.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "���㷨��������ʱ��Ϊ��" << totaltime << "s"<<endl;
	return 0;
}

