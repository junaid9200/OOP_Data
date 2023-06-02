#include<iostream>
using namespace std;
int main()
{
	int phy,chem,math,bio,eng,urdu,Total_Marks,Obtained_Marks,per;
	//Taking marks enterd by user.
	cout<<"Enter your marks of physics :";
	cin>>phy;
	cout<<"Enter your marks of chemistry :";
	cin>>chem;
	cout<<"Enter your marks of math :";
	cin>>math;
	cout<<"Enter your marks of bio :";
	cin>>bio;
	cout<<"Enter your marks of english :";
	cin>>eng;
	cout<<"Enter your marks of urdu :";
	cin>>urdu;
	//clac the obtained marks .
	Obtained_Marks=phy+chem+math+bio+eng+urdu;
	cout<<"The obtained marks are :"<<Obtained_Marks<<endl;
	//taking total marks entered by user.
	cout<<"Enter your Total Marks:";
	cin>>Total_Marks;
	//clac the percentage.
	per=Obtained_Marks*100/Total_Marks;
	cout<<"The percentage obtained is :"<<per<<"%"<<endl;
	//conditions to check the grades.
	if(per>=80 && per<=100)
	{
	 cout<<"Congrats! you have passed with A grade.";
    }
    else if(per>=60 && per<=70)
	{
	 cout<<"Congrats! you have passed with B grade.";
    }
    else if(per>=50 && per<=60)
	{
	 cout<<"Congrats! you have passed with C grade.";
    }
	else if(per<50)
	{
	 cout<<"sorry! you are fail try harder next time.";
    }
    else;
}
