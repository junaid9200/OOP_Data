#include<iostream>
using namespace std;
int main()
{
	int odd=1;
	for(int i=1;i<=15;i++)
	{
		if(i%2!=0)
		{
			odd=odd*i;
		}
	}
		cout<<"The product of the odd integers from 1 to 15 is : "<<odd<<endl;
	
}

