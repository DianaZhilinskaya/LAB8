#pragma once
#include <stdlib.h>
//#include <except>
#include<iostream>
#include <exception> 
using namespace std;

class memory :public exception
{ 
public:
	virtual void print()
	{
		cout << "Exception1. Have not memory.\n Now is OK\n";
	}

};
class leng :public memory
{
public:
	void print()
	{
		cout << "Exception2. Error index.\n Now is OK\n";
	}
};

class empty :public leng
{public:
	void print()
	{
		cout << "Exception3. Empty SET.}\n Now is OK\n";
	}
};

class same :public empty
{
	int tutu;
public:
	same()
	{

	}
	same(int m)
	{
		tutu = m;
	}
	void print()
	{
		cout << "Exception4. The same insert "<<tutu<<".\n Now is OK\n";
	}
};
//class maxkol :public same
//{
//	int uzenetutu;
//
//public:
//	void print()
//	{
//		cout << "Exception5. Overflow.Max size "<<uzenetutu<<"\n Now is OK\n";
//	}
//
//	maxkol(){}
//	maxkol(int t)
//	{
//		uzenetutu = t;
//	}
//
//};