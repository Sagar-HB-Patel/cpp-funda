#include<iostream>
#include<stdio.h>
using namespace std;

template <typename T>
void log(T first)
{
	cout << first << endl;
}

template <typename T , typename ...Args>

void log(T first,Args... args)
{
	cout << first <<  ",";
	log(args...);
}


int main()
{
	log("sagar",10,"test");
	return 0;
}
