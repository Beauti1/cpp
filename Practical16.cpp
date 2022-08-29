#include<iostream>
#include<cstdio>
using namespace std;

class rational
{
	int x;
	int y;
public:
	void getdata()
	{
		int m;
		cout<<"Enter the numerator:";
		cin>>x;
		cout<<"Enter the denominator:";
		cin>>y;
		try
		{
			if(x==0)
			{
				cout<<"\n The rational no is "<<x<<endl;
				exit(1);
			}
			if(y==0)
				throw y;
		}

		catch (int m)
		{
			m=1;
			cout<<"The rational no is "<<x<<"/"<<m<<endl;
			exit(1);
		}

	}
	void display()
	{
		cout<<"The rational no is "<<x<<"/"<<y<<endl;
	}
};

main()
{
	rational ob;
	ob.getdata();
	ob.display();
}
