#include<iostream>
#include<string.h>
using namespace std;

struct MovieData
{
	string title;
	string director;       //structure members.
	int released;
};
MovieData createMovieData(MovieData x , int y)     //function declaration with struct name.
{
	cout<<"Enter the name of the movie "<<y<<" = ";
	getline ( cin,x.title);
	cout<<"Enter the name of the director = ";
	getline(cin,x.director);
	cout<<"Enter the Movie released year = ";
	cin>>x.released;
	cin.ignore(25,'\n');
	return x;    //returning function.
}
void displayMovieData (MovieData display,int y1)   //displaying output through function.
{
	cout<<"Enter the name of the movie "<<y1 <<" = "<<display.title<<endl;
	cout<<"Enter the name of the director = "<<display.director<<endl;
	cout<<"Enter the Movie released year = "<<display.released<<endl;
}
int main()
{
	int y=1,y1=1;
    
    cout<<"Welcome To My Programme :)"<<endl<<"------------------------------------------------------------------------------------------------------------------------";
    
	 MovieData data1,data2,movie1,movie2;   //declaring the structure variables.
	 
	 movie1=createMovieData(data1,y);   //storing data.
	 cout<<endl;
	 movie2=createMovieData(data2,++y);
	 
	 cout<<endl<<endl;
	 
	 cout<<"Now displaying data :"<<endl;
	 cout<<endl;
	 displayMovieData(movie1,y1);   //displaying output.
	 cout<<endl;
	 displayMovieData(movie2,++y1);
}
