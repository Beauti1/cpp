#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
 
int main()
{
	int x,y;
	cout<<"Enter first number:";
	cin>>x;
	cout<<"Enter second number:";
	cin>>y;
	cout<< "Before swap:" <<endl;
	cout<< "x=" <<x <<endl;
	cout<< "y=" <<y <<endl;
	swap(x,y);
	cout<<"After swapping"<<endl<<"x= " << x <<endl <<"y= "<< y<<endl;
}


	
	
