#include<iostream>
#include<fstream>

#include<ctime>
using namespace std;
fstream FileName; 
static int noofpeople;
class dob{
	int day;
	int month;
	
	int year;
	public:
	void set_dob(int day , int month , int year){
		this->day=day;
	
		this->month=month;
		this->year=year;
	}	
	void show_dob(){
	cout<<"\t\t|\t\t"<<day<<"/"<<month<<"/"<<year<<endl;
	}
};
class details:public dob{
	
  string address;
  string country;
  string currentT;
  public:
  	void setadress(string address){
  		  
			this->address=address;
	  }
	string getadress(){
	        
			return address;
	} 
	void set_country(string country){
		this->country=country;
	}
	string get_country(){
		return country;
	}
	void settime(string time){
		currentT=time;
	}
	string getime(){
		return currentT;
	}
};
class person :public details{


	string name;
	string fathername;
	char gender;
	public:
		
	void setname(string name){
		this ->name=name;
		
	}
	string getname(){
		return name;
	}
	void set_fathername(string fathername){
		this->fathername=fathername;
	}
	string get_fathername(){
		return fathername;
	}
	void set_gender(char gender){
		this->gender=gender;
	}
	char get_gender(){
		return gender;
	}
};
class bap:public person{
	
	bap *obj1;
//	static int size;
	public:
			 int size;

		bap(){
			obj1 =new bap[size];
		
		}
		bap(int s){  //constructor overloading
						obj1 =new bap[s];

			
		}
		
	void addstudent(){
		
		noofpeople++;
		bap *tempobj=new bap[size+1];
		for(int i=0;i<size;i++){
			tempobj[i]=obj1[i];

		}
		cout<<"\nEnter you name  :";
		string name ;
		cin>>name;
		cout<<"\nEnter your father name :";
        string tfather;
		cin>>tfather;
		cout<<"\nEnter Your Gender M/F :";
		char tgender;
		cin>>tgender;
		cout<<"\nEnter your country :";
		string tcountry;
		cin>>tcountry;
		cout<<"\nEnter your address :";
		string tadress;
		cin>>tadress;
        int d,m,y;
		cout<<"\nEnter date of birth :";
		cout<<"\nEnter  day";
		cin>>d;
		cout<<"\nEnter month";
		cin>>m;
		cout<<"\nEnter year ";
        cin>>y;
		tempobj[size].setadress(tadress);
		tempobj[size].set_country(tcountry);
		tempobj[size].set_dob(d,m,y);
		tempobj[size].setname(name);
		tempobj[size].set_fathername(tfather);
		tempobj[size].set_gender(tgender);
		 time_t now = time(0);
		 FileName<<"Haseeb";
		 FileName<<name;
		 FileName>>tfather;
		 FileName>>tcountry;
		 FileName>>tadress;

   // convert now to string form
   string date_time = ctime(&now);
   tempobj[size].settime(date_time);

		obj1=tempobj;
		size++;	}	
	

void showdata(){
for(int i=0;i<size;i++){
//int i=0;
	cout<<"\t\t_______________________________________________\n";
   cout<<"\t\t|\t\tName    :"<<obj1[i].getname()<<endl;  
   cout<<"\t\t|\t\tFather  :"<<obj1[i].get_fathername()<<endl;
   cout<<"\t\t|\t\tGender  :"<<obj1[i].get_gender()<<endl;
   cout<<"\t\t|\t\tcountry :"<<obj1[i].get_country()<<endl;
   cout<<"\t\t|\t\tAdress  :"<<obj1[i].getadress()<<endl;
   cout<<"\t\t|\t\tDate of issue  :"<<obj1[i].getime();
   cout<<"\t\t|\t\tDate of Expire : 5/6/2033\n";
   obj1[i].show_dob();
   cout<<"\t\t________________________________________________\n";
   cout<<"Total number of students "<<noofpeople;
   
   }
}


void updatedata(){
 
 cout<<"\nEnter the name of the person you want to update";
 string name ;
 cin>>name;
 for(int i=0;i<size;i++){
	if(name==obj1[i].getname()){
//   obj1[i].showdata();
   cout<<"\npress 1 to update name";
   cout<<"\npress 2 to update father name";
   cout<<"\nPress 3 update adress;";
   cout<<"\nPress 4 to update country";
   cout<<"\npress 5 to update Gender ";
   cout<<"\nPress 6 to update Date of dob";
   cout<<"\nPress 7 to update month of dob";
   cout<<"\nPress 8 to update year of dob";
   int input;
   cin>>input;
   if(input==1){
	cout<<"Enter your new name ";
	string name1;
	cin>>name1;
	obj1[i].setname(name1);
	
   }else if(input==2){
   		
		cout<<"\nEnter your father name :";
        string tfather;
		cin>>tfather;
		obj1[i].set_fathername(tfather);
	}else if(input==3){
	
		cout<<"\nEnter Your Gender M/F :";
		char tgender;
		cin>>tgender;
        obj1[i].set_gender(tgender);
	}else if(input==4){
	
		cout<<"\nEnter your country :";
		string tcountry;
		cin>>tcountry;
        obj1[i].set_country(tcountry);
        }else if(input==5){
		
		cout<<"\nEnter your address :";
		string tadress;
		cin>>tadress;
        obj1[i].setadress(tadress);
        }else if(input ==6){
		
        int d,m,y;
		cout<<"\nEnter date of birth :";
		cout<<"\nEnter  day";
		cin>>d;
		cout<<"\nEnter month";
		cin>>m;
		cout<<"\nEnter year ";
        cin>>y;
   	   obj1[i].set_dob(d,m,y);}
   	
   	
   	
   	
    }
   }


}
void deletedata(){
	
	 cout<<"\nEnter the name of the person you want to update";
     string name ;
     cin>>name;
     for(int i=0;i<size;i++){
	 if(name==obj1[i].getname()){
	 	      for(int j=i;j<size-1;j++){
                    obj1[j] = obj1[j+1];
                }
                size--;
                break;
            }
        }
    }
	
	
	
	
	

};



  
int main(){
	bap p1;
	
	int input;
	
//	 fstream FileName;               
    FileName.open("haseeeb", ios::out);
    FileName<<"haseebe";
//    FileName<<"Haseeb1";
     time_t now = time(0);

   string date_time = ctime(&now);

   cout << "The current date and time is: " << date_time << endl;

	cout<<"\n---------------------Welcome to NADRA---------------- \n";
	do{
	cout<<"\nPress 1 to Add data";
	cout<<"\nPress 2 to search data  ";
	cout<<"\nPress 3 to update data ";
	cout<<"\nPress 4 to delete data ";
	cin>>input;
	if( input==1){
     	p1.addstudent();
 
	}else if (input==2){
        p1.showdata();
	}
	else if (input==3){
		p1.updatedata();}
	else if(input==4){
		
		p1.deletedata();
	}
	}while(input!=6);
	
	
	
}