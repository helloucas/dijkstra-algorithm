#ifndef MIN_H
#define MIN_H
#include<vector>
#include<iostream>
using namespace std;



// ��һ������������Сֵ  ����flag=1�Ļ�˵�����ڴ˴αȽ�֮��
int min1(vector<AB> &a)
{
	int k=0, min=1000000;
	for (unsigned int i = 1; i < a.size(); i++)
	{
		while (i<a.size()&&a[i].flag==1)
		{
			i++;                          //��i=6ʱ��  ��6λflagΪ1��ʱ������i++  ��ʱi=7  �����vector  out of range������
		}
		if (i<a.size()&&a[i].data < min)//ΪʲôҪ��i<a.size()���Ե�ʱ����ֵ����� ��Ϊ�����i=7  a[7].data and a[7].flag������Խ��
			{
				min = a[i].data;
				k = i;
			}
		
	}
	a[k].flag = 1;
	return k;
}
#endif