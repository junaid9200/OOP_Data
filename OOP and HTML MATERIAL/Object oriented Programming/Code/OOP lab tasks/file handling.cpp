#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;
    ofstream fout;//fout is the object of ofstream class. to make the file.
    fout.open("sectiona.txt");
    while (true)
    {
    	cout<<"Enter the data for the line :"<<endl;
    	getline(cin,line);
    	if(line!="-1")
    	{
    		fout<<line;
		}
		else
		{
			break;
		}
	}
    fout.close();
    
    fstream fin;//fout is the object of ofstream class. to read  the file.
    fin.open("sectiona.txt");
    while(getline(fin,line))
    {
    	cout<<line;
	}
    fin.close();
}
