#include<iostream>
using namespace std;

class DOB  {
      int day;
      int month;
      int year;
      public:
      	
		int getday(){
			return day;
			 
			 
		}
		int getmonth(){
			return month;
			
		}
		int getyear(){
			return year;
			
		}
		void setday(int day){
			this -> day=day;
		}
		void setmonth(int month){
			this -> month=month;
			
		}
		void setyear(int year){
			this -> year=year;}
		

	
	
};

class contact{
	DOB date;

	string name;
	int phone_no;
	string mail;
	
	public:
		
		void setname(string name){
			    this->name =name;
	                    	}
		string  getname(){
			    return name;}
	    
	    void setPhone(int phone_no){
	    	this -> phone_no=phone_no;
		}
		int getphone(){
			return phone_no;
		}
		void setmail(string mail){
		
		    this->mail=mail;
		}
	    string getmail(){
	    	return mail;
		}
			void setdata(int day ,int month , int year){
		
		   this-> date.setmonth(month);
		   this-> date.setday(day);
		   this-> date.setyear(year);
		} 
		int getmonth(){
			
			return date.getmonth();
		}
			string getdata(){
			return 
			to_string(date.getday())+ "/" +
			to_string(date.getmonth())+ "/" +
			to_string(date.getyear());
		}
};
class contactbook{
	
		contact *numberofcontacts;
        int totalcontacts=0;
	    public:
       contactbook( ){
//       	
	   }	
	   void addcontact(){
	   	    contact *add=new contact[totalcontacts+1];
	   	    for(int i=0;i<totalcontacts;i++){
	   		
	   		add[i]=numberofcontacts[i];
		   }
		   cout<<"\nEnter name of you contact : ";
		   string tempname;
		   cin>>tempname;
		   add[totalcontacts].setname(tempname);
		   
		   string tempmail;
		   cout<<"\nEnter your email : ";
		   cin>>tempmail;
		   add[totalcontacts].setmail(tempmail);
		   int tempphoneno;
		   cout<<"\nEnter your phonenumber : ";
		   cin>>tempphoneno;
		   add[totalcontacts].setPhone(tempphoneno);
		   cout<<"\nEnter your day : ";
		   int day;
		   cin>>day;
		   int month;
		   cout<<"\nEnter your month : ";
		   cin>>month;
		   int year;
		   cout<<"\nEnter your year : ";
		   cin>>year;
		    add[totalcontacts].setdata(day,month,year);
		   numberofcontacts =add;
		   totalcontacts++;
//		   contact.
	}
	   void showdata(){
	   	
	   	for(int i=0;i<totalcontacts;i++){
	   		cout<<numberofcontacts[i].getname()<<endl;
	   		
		    cout<<numberofcontacts[i].getmail()<<endl;
		    cout<<numberofcontacts[i].getphone()<<endl;
		    cout<<numberofcontacts[i].getdata()<<endl;
		   }
		   
	   }
	   void showspecific(int spec){
	   	for(int i=0;i<totalcontacts;i++){
	   		
	   	    if(numberofcontacts[i].getmonth()==spec)
	   	    
	   	    {
			cout<<numberofcontacts[i].getname()<<endl;	
		    cout<<numberofcontacts[i].getmail()<<endl;
		    cout<<numberofcontacts[i].getphone()<<endl;
		    cout<<numberofcontacts[i].getdata()<<endl;
	   	    	
	   	    	
	   	    	
	   	    	
	   	    	
			   }
	   	    
		   }
	   	
	   }
		    
		   
		   
		   
	       
		   
	   	
	   	
	   
};
int main(){
	
	contactbook a1;
	
	int input;
	do{
	
	cout<<"Press 1 to add contact ";
	cout<<"\npress 2 to print all data";
	cout<<"\npress 3 to show data of specific month \n";
	cin>>input;
	if(input==1){
		a1.addcontact();
	
	}
	else if(input==2){
			a1.showdata();
	}else if(input==3){
		
		int specific;
		cout<<"\nEnter the specific month to be seen :";
		cin>>specific;
		a1.showspecific(specific);
		
	}
	
	

}while(input!=4);
 
       }
