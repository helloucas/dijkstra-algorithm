#ifndef SPLIT_H
#define SPLIT_H
#include<vector>
#include<string>
#include<stdlib.h>
#include<iostream>
using namespace std;

//这个算法没怎么搞   有空可以多搞搞这个

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