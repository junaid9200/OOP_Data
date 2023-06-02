#include <iostream>
using namespace std;
class account
{
	public:
		int balance;
		static int remain;
		
		
		void setbalance(int b)
		{
			balance=b;
		}
		//declaring a static member function.
		static void setremain(int r)
		{
			remain=r;
			cout<<"remain :"<<remain;
		}
	};
		//initialization of static member variable.
		int account::remain = 3;
		int main()
		{
			account::setremain(2);
		}
