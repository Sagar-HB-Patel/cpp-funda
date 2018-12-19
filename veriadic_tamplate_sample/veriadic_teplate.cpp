#include<stdio.h>
#include<iostream>
using namespace std;

template <typename T, typename... RestOfTs>
double sumf_v3(T a , RestOfTs... ts);
template <typename T>
double sumf_v3(T a)
{
	return a;
}

template <typename T, typename... RestOfTs>
double sumf_v3(T a , RestOfTs... ts)
{
	return a + sumf_v3(ts...);
}

int main()
{
	double  theSumOfTwo   = sumf_v3(1.5,2);
	double  theSumOfThree = sumf_v3(1.5,2,3,8);
	cout << "the sum of two is: " 
	  << theSumOfTwo
	  << " The sum of three is: "
	  << theSumOfThree 
	  << endl;
	return 0;
}
