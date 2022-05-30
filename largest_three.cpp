#include<iostream>
using namespace std;
int main()
{
	int no1,no2,no3,max;
	cout<< "Enter  first number:";
	cin>> no1;
	cout<< "Enter  second number:";
	cin>> no2;
	cout<< "Enter  third number:";
	cin>> no3;
	if(no1>no2 && no1>no3)
	{
		cout<< "Largest number is= "<<no1 <<endl;
	}
	if(no2>no1 && no2>no3)
	{
		cout<< "Largest number is= "<<no2 <<endl;
	}
	if(no3>no1 && no3>no2)
	{
		cout<< "Largest number is= "<<no3 <<endl;
	}
	return 0;
}
