#include<iostream>
using namespace std;
class Animal
{
		public:
		string name;
		int age;
			Animal(string name,int age)
			{
				this->name=name;
				this->age=age;
			
			}
		void speak()
		{
			cout<<"My name is :"<<name<<endl<<"My age is :"<<age<<endl;
			}	
		
};
class bird:private Animal
{
     private:
	 int winglength;
	 public:
	 	bird(string name , int age , int winglength):Animal(name,age)
	 	{
	 		this->winglength=winglength;
		 }
		 void speak()
		 {
		 Animal::speak();
		 cout<<"wing length is : "<<winglength<<endl;
		cout<<"I am a bird I can sing ......"<<endl;
		cout<<endl;
		 }
};
class reptile:private Animal
{
	private:
		string habitate;
		public:
			reptile(string name , int age ,string habitate):Animal(name,age)
			{
				this->habitate=habitate;
			}
			void speak()
			{
				Animal::speak();
				cout<<"habitate is : "<<habitate<<endl;
				cout<<"I am a reptile. I can Creep...."<<endl;
			}
};
int main()
{
	bird b("sparrow",2,6);
	reptile r("crocodile",5,"water");
	b.speak();
	r.speak();
}

