#ifndef  FILE1_H
#define FILE1_H
#include<fstream>
#include"Eigen\Dense"
#include<string>
#include<stdio.h>
#include<iostream>
#include<sstream>
using Eigen::MatrixXd;
using namespace std;

//const * char c_str()
//һ����stringת��Ϊ const* char�ĺ�����
vector<int>split(string str, char delimiter)
{
	vector<int>temp;
	stringstream ss(str);                       // Turn the string into a stream.
	string  tok;
	while (getline(ss, tok, delimiter)) {
		int p = atoi(tok.c_str());           // c_str()һ����stringת��Ϊ const* char�ĺ�����
		temp.push_back(p);
	}
	return temp;
}



void readfiletomatrixxd(string filename,  MatrixXd &m)
{
	ifstream  infile;                 //��������������
	infile.open(filename, ios::in | _IOS_Nocreate);
	if (!infile)
	{
		cerr << "sorry  the file can't open , please check it again" << endl;
		exit(1);
	}
	string  str;
	
	for (int i = 0; i< m.rows(); i++)
	{
		getline(infile, str);
		vector<int>temp = split(str, ',');
		for (unsigned int j = 0; j < temp.size(); j++)
		{
			m(i, j) = temp[j];
		}
	}




}



#endif