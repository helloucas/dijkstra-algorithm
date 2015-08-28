#ifndef MIN_H
#define MIN_H
#include<vector>
#include<iostream>
using namespace std;



// 在一个数组中求最小值  其中flag=1的话说明不在此次比较之列
int min1(vector<AB> &a)
{
	int k=0, min=1000000;
	for (unsigned int i = 1; i < a.size(); i++)
	{
		while (i<a.size()&&a[i].flag==1)
		{
			i++;                          //当i=6时候  第6位flag为1的时候会进行i++  此时i=7  会出现vector  out of range的问题
		}
		if (i<a.size()&&a[i].data < min)//为什么要加i<a.size()调试的时候出现的问题 因为会出现i=7  a[7].data and a[7].flag的问题越界
			{
				min = a[i].data;
				k = i;
			}
		
	}
	a[k].flag = 1;
	return k;
}
#endif