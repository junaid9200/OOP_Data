#include<iostream>
using namespace std;

class DOB  
{
	
	private:
      int day;
      int month;                                  //private datamembers.
      int year;
      public:
      	
      	void setday(int day)
		{
			this -> day=day;
		}
		void setmonth(int month)
		{
	                                                                            //setting the values.		
			this -> month=month;
			
		}
		void setyear(int year)
		{
			this -> year=year;
			}
		
		int getday()
		{
			return day;
			 
		}
		int getmonth()
		{
			return month;
			
		}
		int getyear()
		{
			return year;
			
		}
	

	
	
};

class contacts
    {
    private:
	DOB dob;           //composition realtionship

	string name;
	int phonenumber;
	string email;
	
	public:
		
		void setname(string name){
			    this->name =name;
	                    	}
		string  getname(){
			    return name;}
	    
	    void setPhone(int phonenumber){
	    	this -> phonenumber=phonenumber;
		}
		int getphone(){
			return phonenumber;
		}
		void setmail(string email){
		
		    this->email=email;
		}
	    string getmail(){
	    	return email;
		}
			void setdata(int day ,int month , int year){
		
		   this-> dob.setmonth(month);
		   this-> dob.setday(day);
		   this-> dob.setyear(year);
		   
		} 
		int getmonth(){
			
			return dob.getmonth();
		}
			string getdata(){
			return 
			to_string(dob.getday())+ "/" +
			to_string(dob.getmonth())+ "/" +
			to_string(dob.getyear());
		}
};
class cbook
{
	
	//	contacts *contact;
        int totalcontacts=0;
	    public:
       contactbook( )
	   {   	
	   }	
	   void addcontact(){
	   	    contacts *add=new contacts[totalcontacts+1];
	   	    for(int i=0;i<totalcontacts;i++){
	   		
	   		add[i]=contact[i];
		   }
		   cout<<"Enter name  : "<<endl;
		   string tempname;
		   cin>>tempname;
		   add[totalcontacts].setname(tempname);
		   
		   string tempmail;
		   cout<<"Enter Email : "<<endl;
		   cin>>tempmail;
		   add[totalcontacts].setmail(tempmail);
		   int tempphoneno;
		   cout<<"Enter phonenumber : "<<endl;
		   cin>>tempphoneno;
		   add[totalcontacts].setPhone(tempphoneno);
		   cout<<"Enter day : "<<endl;
		   int day;
		   cin>>day;
		   int month;
		   cout<<"Enter month : "<<endl;
		   cin>>month;
		   int year;
		   cout<<"Enter year : "<<endl;
		   cin>>year;
		    add[totalcontacts].setdata(day,month,year);
		   contact =add;
		   totalcontacts++;

	}
	   void showdata()                         //function to print all data.
	   {
	   	
	   	for(int i=0;i<totalcontacts;i++){
	   		cout<<contact[i].getname()<<endl;
	   		
		    cout<<contact[i].getmail()<<endl;
		    cout<<contact[i].getphone()<<endl;
		    cout<<contact[i].getdata()<<endl;
		   }
		   
	   }
	   void showmain(int specific)            //function to print the specific month data.
	   {
	   	for(int i=0;i<totalcontacts;i++){
	   		
	   	    if(contact[i].getmonth()==specific)
	   	    
	   	    {
			cout<<contact[i].getname()<<endl;	
		    cout<<contact[i].getmail()<<endl;
		    cout<<contact[i].getphone()<<endl;
		    cout<<contact[i].getdata()<<endl;
	   	    	
	   	    	
	   	    	
	   	    	
	   	    	
			   }
	   	    
		   }
	   	
	   }
		    
		   
		   
		   
	       
		   
	   	
	   	
	   
};
int main(){
	
	cbook a1;
	int check;
	cout<<"WELCOME :)"<<endl<<"------------------------------------------------------------------------------------------------------------------"<<endl;
	do{
	cout<<endl;
	cout<<"1. Add Contacts "<<endl;
	cout<<"2. Print Data "<<endl;
	cout<<"3. Data of specific month "<<endl;
	cout<<"4. Exit"<<endl;
	cout<<endl;
	cout<<"Your Option : ";
	cin>>check;
	if(check==1){
		a1.addcontact();
	
	}
	else if(check==2)
	{
			a1.showdata();
	}
	else if(check==3)
	{
		
		int specific;
		cout<<"--> Enter the month of which data you want : ";
		cin>>specific;
		a1.showmain(specific);
		
	}
	else if(check==4)
	{
		cout<<"Thanks For Using :)"<<endl;
	}
}
         while(check==1||check==2||check==3);
 
    }
