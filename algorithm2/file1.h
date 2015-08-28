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
//一个将string转换为 const* char的函数。
vector<int>split(string str, char delimiter)
{
	vector<int>temp;
	stringstream ss(str);                       // Turn the string into a stream.
	string  tok;
	while (getline(ss, tok, delimiter)) {
		int p = atoi(tok.c_str());           // c_str()一个将string转换为 const* char的函数。
		temp.push_back(p);
	}
	return temp;
}



void readfiletomatrixxd(string filename,  MatrixXd &m)
{
	ifstream  infile;                 //定义输入流对象
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