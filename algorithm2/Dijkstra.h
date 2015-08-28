#ifndef DIJKSTRA_H
#define DIJKSTRA_H
#include<iostream>
#include"Eigen\Dense"
#include<vector>
#include"file1.h"
#include"min.h"
using namespace std;

using Eigen::MatrixXd;


void    dijkstra()
{
	//MatrixXd m = MatrixXd::Constant(MAX, MAX, 1000);
	MatrixXd m(MAX, MAX);
	//for (int i = 0; i < m.rows(); i++)
	//	for (int j = 0; j < m.cols(); j++)
	//	{
	//		if (i == j)
	//			m(i, j) = 0;
	//	}
	//while (1)  
	//{
	//	cout << "��������Ҫ����������Կո�ָ�,��������������ֵ��" << endl;
	//	int i = 0, j = 0, k = 0;
	//	cin >> i >> j >> k;
	//	if (i>m.rows() || j>m.cols())
	//		break;
	//	else
	//	{
	//		m(i, j) = k;
	//	}
	//}
	//cout << m << endl;



	readfiletomatrixxd("matrix.txt", m);
	cout << m << endl;
	cout << "---------------------------------------" << endl;


	// ------------------------����Ĺ���--------------------------------------------------//
	vector<AB>b(m.cols());
	for (int i = 0; i < m.rows(); i++)
	{
		b[i].data = 1000;
	}
	for (int i = 0; i < m.rows(); i++)
	{
		b[i].data = m(0, i);
		b[i].flag = 0;
	}
	b[0].flag = 1;




	cout << "�տ�ʼû�н����㷨��ʱ������Ĺ���" << endl;
	for (int i = 0; i < m.rows(); i++)
	{
		cout << b[i].data << "\t";
    }
	cout << endl;
	for (int i = 0; i < m.rows(); i++)
	{
		cout << b[i].flag << "\t";
	}
	cout << endl;


	cout << "//--------------��ʼ�㷨---------------------------//" << endl;

	for (unsigned int i = 1; i < b.size(); i++)
	{
		int k = min1(b);
		for ( unsigned  int j = 1; j < b.size(); j++)
		{
			if (b[j].data > b[k].data + m(k, j))
			{
				b[j].data = b[k].data + m(k, j);
			}
		}
	}

	// -----------------------------�㷨����-----------------------------//


	cout << "�����㷨֮������Ĺ���" << endl;
	for (unsigned int i = 0; i < b.size(); i++)
	{
		cout << b[i].data << "\t";
	}
	cout << endl;
	for (unsigned int i = 0; i < b.size(); i++)
	{
		cout << b[i].flag<< "\t";
	}	
}


#endif