#ifndef SPLIT_H
#define SPLIT_H
#include<vector>
#include<string>
#include<stdlib.h>
#include<iostream>
using namespace std;

//����㷨û��ô��   �пտ��Զ������

vector<string> split(string& str, const char* c)
{
	char *cstr, *p;
	vector<string> res;
	cstr = new char[str.size() + 1];
	strcpy(cstr, str.c_str());
	p = strtok(cstr, c);
	while (p != NULL)
	{
		res.push_back(p);
		p = strtok(NULL, c);
	}
	return res;
}
#endif