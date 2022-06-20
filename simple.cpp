#include<iostream>
using namespace std;

class item
{
private:
	int number;
	float cost;
public:
	void getdata(int a, float b);
	void putdata(void)
	{
		cout << "Number:" << number;
		cout << "\n" << "Cost:" << cost;
		cout << "\n";
	}
};

void item :: getdata (int a , float b)
{
	number = a;
	cost = b;
}

int main()
{
	item x;
	cout << "\n Object x" << "\n";
	x.getdata(100, 299.55);
	x.putdata();
	item y;
	cout << "\n Object y" << "\n";
	y.getdata(200, 175.00);
	y.putdata();
	
	return 0;
}
	


	
