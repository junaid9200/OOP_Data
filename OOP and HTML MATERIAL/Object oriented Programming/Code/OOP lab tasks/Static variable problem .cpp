#include <iostream>
using namespace std;
class account
{
	public:
		string name;
		int id;
		static float rateofinterset;// static declared.
		account(string name,int id){
	    this->name=name;
	    this->id=id;
		}
		account(){
		}
	
		void display()
		{
			cout<<"Name :"<<name<<endl<<"id :"<<id<<endl<<"rate of interset :"<<rateofinterset<<endl;
		}
}; 
//initialization olr acessing the memeber variable rateofinterset.
float account::rateofinterset=3.5;

int main()
{
     account a1("khan",3);
     account a2("jutt",4);
     //second method for begginner.
     account a3=account("khan",3);
	 a1.display();
   	 a2.display();
     a3.display();
}
