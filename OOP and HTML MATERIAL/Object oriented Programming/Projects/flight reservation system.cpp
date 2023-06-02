/// Flight Reservation System...................


#include<iostream>
#include<fstream>



using namespace std;
int z=0;
int e=0;

void mainmenu();
class Management
{
	public:
		Management()
		{
			mainmenu();
		}
	
};

class Details 
{
   public:
      static string name , gender;
	  int phonenu;
	  int age;
	  string add;   // adress
	  static int cid;	// customer id.
	  char arr[100];
	  
	  void information()
	  {
	  	cout<<"Enter the customer ID :";
	  	cin>>cid;
	  	cout<<"Enter your name : ";
	  	cin.ignore(25,'\n');
	  	getline(cin,name);
	  	cout<<"Enter your Adress : ";
	  	getline(cin,add);
	  	cout << "Contact no.(10 digits):";
	  	cin>>phonenu;
	  	cout<<"Your Gender (Male / Female): ";
	  	cin>>gender;
	  	cout<<endl;
	  	cout<<"Your details are saved with us ."<<endl;
	  	z++;
	  }
};
  
  class payment//class for payment
{
    
public://public members functions
    int choice1,bank,card,date,cvv,user_id;
    char password[10];
    
    void pay_detail()//function declaration and definition for payment method
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3)";
        cout << "\n\nEnter your choice :";
        cin >> choice1;
        switch(choice1)//switch case
        {
        case 1://condition
            cout << "Enter card no.:";
            cin >> card;
            cout << "Enter expiry date:";
            cin >> date;
            cout << "Enter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2://condition
            cout << "Enter card no.:";
            cin >> card;
            cout << "Enter expiry date:";
            cin >> date;
            cout << "Enter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3://condition
            cout << "Banks Available: \1.Bank Alfalah(1) \2.Meezan Bank(2) \3.Punjab Bank(3) \4.Allied Bank(4) \5.Others(5)";
            cout << "Select your bank:";
            cin >> bank;
            cout << "You have selected:" << bank;
            cout << "Enter user id:";
            cin >> user_id;
            cout << "Enter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default://condition
            cout << "\nWrong input entered.\nTry again\n\n";
            mainmenu();
        }
    }

};

int Details::cid;
string Details::name;
string Details::gender;

class registration:public payment
{
	public:
          static int choice;
		  int choice1;
		  int back;
		  static float charges;

		  void flights()
		  {
		  	string flightN[]={"Dubai","Canada","Uk","USA","Australia","Europe"};
		  	for(int i=0;i<6;i++)
		  	{
		  		cout<<(i+1)<<". Flight to "<<flightN[i]<<endl;    // increment in the countries one by one .
			  }
			  cout<<endl;
			  cout<<"Welcome to the Pakistan Airlines!"<<endl;
			  cout<<"Press the number of the country of wich you want to book flight :";
			  cin>>choice;
			  
			  switch(choice)
			  {
			  	case 1:
			  		{
			  			 system("CLS");
			  			cout<<"_____________________Welcome to Dubai Emirates_________________________________"<<endl;
			  			cout<<"Your comfort is our priority , Enjoy the Journey !"<<endl;
			  			cout<<endl;
			  	    	cout << "\t \t \tFlights Found" << endl << endl;
			  			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			  		    cout << "\1.DUB - 498 (1)\t08:00\t\t11:05\t\tRs.50000\tRefundable\n";
                        cout << "\2.DUB - 658(2)\t14:00\t\t17:05\t\tRs.55000\tRefundable\n";
                        cout << "\3.DUB - 508(3)\t19:00\t\t22:05\t\tRs.60000\tRefundable\n";
			  			cout<<endl;
			  			cout<<"Select the flight you want to to book :";
			  			cin>>choice1;
			  			if(choice1==1)
			  			{
			  				charges=50000;
			  				cout<<"Ticket Confirmed : DUB - 498"<<endl;
			  				cout << "Departure Time: 08:00" << endl;
                            cout << "Arrival Time: 11:05" << endl;
			  			
						  }
						  else if(choice1==2)
						  {
						  		charges=55000;
			  				cout<<"Ticket Confirmed : DUB - 658"<<endl;
			  					cout << "Departure Time: 14:00" << endl;
                            cout << "Arrival Time: 17:05" << endl;
			  			
						  }
						   else if(choice1==3)
						  {
						  		charges=60000;
			  				cout<<"Ticket Confirmed : DUB - 508"<<endl;
			  					cout << "Departure Time : 19:00" << endl;
                            cout << "Arrival Time: 22:05" << endl;
			  			
						  }
						  else
						  {
						  	cout<<"Invalid input , shifting to the previous menu "<<endl;
						  	  system("CLS");
						  	flights();
						  }
						  payment::pay_detail();
						  cout<<"You can go back to menu and take the ticket "<<endl;
						  cout<<endl;
						  cout<<"Press any key to go back to the Main Menu :"<<endl;
						  cin>>back;
						  if(back==1)
						  {
						  	system("CLS");
						  	mainmenu();
						  }
						  else
						  {
						  	    system("CLS");
						  		mainmenu();
						  }
					  }
					  
					  case 2:
					  	{
					  		 system("CLS");
					  			cout<<"_____________________Welcome to Canadian Airlines_________________________________"<<endl;
			  			cout<<"Your comfort is our priority , Enjoy the Journey !"<<endl;
			  			cout<<endl;
			  	    	cout << "\t \t \tFlights Found" << endl << endl;
			  			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			  		    cout << "\1.CA - 198 (1)\t08:00\t\t11:05\t\tRs.50000\tRefundable\n";
                        cout << "\2.CA - 158(2)\t14:00\t\t17:05\t\tRs.55000\tRefundable\n";
                        cout << "\3.CA - 208(3)\t19:00\t\t22:05\t\tRs.60000\tRefundable\n";
			  			cout<<endl;
			  			cout<<"Select the flight you want to to book :";
			  			cin>>choice1;
			  			if(choice1==1)
			  			{
			  				charges=50000;
			  				cout<<"Ticket Confirmed : CA - 198"<<endl;
			  				cout << "Departure Time: 08:00" << endl;
                            cout << "Arrival Time: 11:05" << endl;
			  		
						  }
						  else if(choice1==2)
						  {
						  	charges=55000;
			  				cout<<"Ticket Confirmed : CA - 158"<<endl;
			  					cout << "Departure Time: 14:00" << endl;
                            cout << "Arrival Time: 17:05" << endl;
			  			
						  }
						   else if(choice1==3)
						  {
						  	charges=60000;
			  				cout<<"Ticket Confirmed : CA - 208"<<endl;
			  					cout << "Departure Time : 19:00" << endl;
                            cout << "Arrival Time: 22:05" << endl;
						  }
						  else
						  {
						  	cout<<"Invalid input , shifting to the previous menu "<<endl;
						  	  system("CLS");
						  	flights();
						  }
						   payment::pay_detail();
						  cout<<"You can go back to menu and take the ticket "<<endl;
						  cout<<endl;
						  cout<<"Press any key to go back to the Main Menu :"<<endl;
						  cin>>back;
						  if(back==1)
						  {
						  	system("CLS");
						  	mainmenu();
						  }
						  else
						  {
						  	system("CLS");
						  	mainmenu();
						  }
						  }
						  
						  case 3:
						  	{
						  		 system("CLS");
						  			cout<<"_____________________Welcome to UK Airways_________________________________"<<endl;
			  			cout<<"Your comfort is our priority , Enjoy the Journey !"<<endl;
			  			cout<<endl;
			  	    	cout << "\t \t \tFlights Found" << endl << endl;
			  			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			  		    cout << "\1.UK - 798 (1)\t08:00\t\t11:05\t\tRs.50000\tRefundable\n";
			  			cout<<endl;
			  			cout<<"Select the flight you want to to book :";
			  			cin>>choice1;
			  			if(choice1==1)
			  			{
			  				charges=50000;
			  				cout<<"Ticket Confirmed : UK - 798"<<endl;
			  				cout << "Departure Time: 08:00" << endl;
                            cout << "Arrival Time: 11:05" << endl;
						  }
						  else
						  {
						  	cout<<"Invalid input , shifting to the previous menu "<<endl;
						  	  system("CLS");
						  	flights();
						  }
						   payment::pay_detail();
						  cout<<"You can go back to menu and take the ticket "<<endl;
						  cout<<endl;
						  cout<<"Press any key to go back to the Main Menu :"<<endl;
						  cin>>back;
						  if(back==1)
						  {
						  	system("CLS");
						  	mainmenu();
						  }
						  else
						  {
						  	system("CLS");
						  	mainmenu();
						  }
							  }
							  
							case 4:
								{
									 system("CLS");
										cout<<"_____________________Welcome to US Airways_________________________________"<<endl;
			  			cout<<"Your comfort is our priority , Enjoy the Journey !"<<endl;
			  			cout<<endl;
			  	    	cout << "\t \t \tFlights Found" << endl << endl;
			  			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			  		    cout << "\1.US - 367 (1)\t08:00\t\t11:05\t\tRs.50000\tRefundable\n";
                        cout << "\2.US - 458(2)\t14:00\t\t17:05\t\tRs.55000\tRefundable\n";
                        cout << "\3.US - 508(3)\t19:00\t\t22:05\t\tRs.60000\tRefundable\n";
			  			cout<<endl;
			  			cout<<"Select the flight you want to to book :";
			  			cin>>choice1;
			  			if(choice1==1)
			  			{
			  				charges=50000;
			  				cout<<"Ticket Confirmed : US - 367"<<endl;
			  				cout << "Departure Time: 08:00" << endl;
                            cout << "Arrival Time: 11:05" << endl;
						  }
						  else if(choice1==2)
						  {
						  		charges=55000;
			  				cout<<"Ticket Confirmed : US - 458"<<endl;
			  				cout << "Departure Time: 14:00" << endl;
                            cout << "Arrival Time: 17:05" << endl;
						  }
						   else if(choice1==3)
						  {
						  		charges=60000;
			  				cout<<"Ticket Confirmed : US - 508"<<endl;
			  					cout << "Departure Time : 19:00" << endl;
                            cout << "Arrival Time: 22:05" << endl;
						  }
						  else
						  {
						  	cout<<"Invalid input , shifting to the previous menu "<<endl;
						  	  system("CLS");
						  	flights();
						  }
						   payment::pay_detail();
						  cout<<"You can go back to menu and take the ticket "<<endl;
						  cout<<endl;
						  cout<<"Press any key to go back to the Main Menu :"<<endl;
						  cin>>back;
						  if(back==1)
						  {
						  	system("CLS");
						  	mainmenu();
						  }
						  else
						  {
						  	    system("CLS");
						  		mainmenu();
						  }
								}
								case 5:
									{
										   system("CLS");
											cout<<"_____________________Welcome to Australian Airlines_________________________________"<<endl;
			  			cout<<"Your comfort is our priority , Enjoy the Journey !"<<endl;
			  				cout<<endl;
			  	    	cout << "\t \t \tFlights Found" << endl << endl;
			  			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			  		    cout << "\1.AS - 176 (1)\t08:00\t\t11:05\t\tRs.50000\tRefundable\n";
                        cout << "\2.AS - 134(2)\t14:00\t\t17:05\t\tRs.55000\tRefundable\n";
			  			cout<<endl;
			  			cout<<"Select the flight you want to to book :";
			  			cin>>choice1;
			  			if(choice1==1)
			  			{
			  				charges=50000;
			  				cout<<"Ticket Confirmed : AS - 176"<<endl;
			  				cout << "Departure Time: 08:00" << endl;
                            cout << "Arrival Time: 11:05" << endl;
						  }
						  else if(choice1==2)
						  {
						  		charges=55000;
			  				cout<<"Ticket Confirmed : AS - 134"<<endl;
						  }
						  else
						  {
						  	cout<<"Invalid input , shifting to the previous menu "<<endl;
						  	  system("CLS");
						  	flights();
						  }
						   payment::pay_detail();
						  cout<<"You can go back to menu and take the ticket "<<endl;
						  cout<<endl;
						  cout<<"Press any key to go back to the Main Menu :"<<endl;
						  cin>>back;
						  if(back==1)
						  {
						  	mainmenu();
						  }
						  else
						  {
						  		mainmenu();
						  }
									}
						case 6:
							{
								 system("CLS");
									cout<<"_____________________Welcome to Eurpean Airlines_________________________________"<<endl;
			  			cout<<"Your comfort is our priority , Enjoy the Journey !"<<endl;
			  			cout<<endl;
			  	    	cout << "\t \t \tFlights Found" << endl << endl;
			  			cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
			  		    cout << "\1.EU - 898 (1)\t08:00\t\t11:05\t\tRs.50000\tRefundable\n";
                        cout << "\2.EU - 798(2)\t14:00\t\t17:05\t\tRs.55000\tRefundable\n";
                        cout << "\3.EU - 777(3)\t19:00\t\t22:05\t\tRs.60000\tRefundable\n";
			  				cout<<endl;
			  			cout<<"Select the flight you want to to book :";
			  			cin>>choice1;
			  			if(choice1==1)
			  			{
			  				charges=50000;
			  				cout<<"Ticket Confirmed : EU - 898"<<endl;
			  				cout << "Departure Time: 08:00" << endl;
                            cout << "Arrival Time: 11:05" << endl;
						  }
						  else if(choice1==2)
						  {
						  		charges=55000;
			  				cout<<"Ticket Confirmed : EU - 798"<<endl;
			  				cout << "Departure Time: 14:00" << endl;
                            cout << "Arrival Time: 17:05" << endl;
						  }
						   else if(choice1==3)
						  {
						  		charges=60000;
			  				cout<<"Ticket Confirmed : EU - 777"<<endl;
			  				cout << "Departure Time : 19:00" << endl;
                            cout << "Arrival Time: 22:05" << endl;
						  }
						  else
						  {
						  	cout<<"Invalid input , shifting to the previous menu "<<endl;
						  	  system("CLS");
						  	flights();
						  }
						   payment::pay_detail();
						  cout<<"You can go back to menu and take the ticket "<<endl;
						  cout<<endl;
						  cout<<"Press any key to go back to the Main Menu :"<<endl;
						  cin>>back;
						  if(back==1)
						  {
						  	system("CLS");
						  	mainmenu();
						  }
						  else
						  {
						  	    system("CLS");
						  		mainmenu();
						  }
							}
							default:
								{
									cout<<"Invalid Input , shifting to the Main Menu !"<<endl;
									mainmenu();
									break;
								}
			  }
				  }		
			
			
};

float registration::charges;
int registration::choice;

class  ticket : public registration,public Details
{
	public:
		void Bill()
		{    int f=0;
			string destination=" ";
			ofstream outf("records.txt"); //write data of the flights (stored)
			{
				outf<<"________________Ticket_________________________"<<endl;
				outf<<"_______________________________________________"<<endl;
				outf<<"Customer ID : "<<Details::cid<<endl;
					outf<<"Customer Name : "<<Details::name<<endl;
						outf<<"Customer Gender : "<<Details::gender<<endl;
						outf<<"\tDescription"<<endl<<endl;
						
						if(registration::choice==1)
						{
							destination="Dubai";
						}
						else if(registration::choice==2)
						{
							destination="Canada";
						}
							else if(registration::choice==3)
						{
							destination="UK";
						}	else if(registration::choice==4)
						{
							destination="USA";
						}	else if(registration::choice==5)
						{
							destination="Austrailia";
						}	else if(registration::choice==6)
						{
							destination="Europe";
						}
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight Cost : \t\t"<<registration::charges<<"(APPROVED :))"<<endl;
			}
			outf.close();//file closed.
		}
		void cancelticket(int x)//function to cancel ticket
{  
      Details d;
   //ticket t;
    int f=0;
    int backset;
    
   ifstream fout("records.txt");//for reading file
   ofstream fin("records1.txt");//for writing to a new file
   fout.read((char *)&d,sizeof(d));//reading file
   while(fout)
   {
     if(d.cid!=x)
      fin.write((char *)&d,sizeof(d));//writing to file
      else
     {
         dispbill();//display details
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: Rs 45000(fixed)\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&d,sizeof(d));//reading another record from file
   }
   if(f==0)//if f==0,pnr not found
    cout<<"Ticket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("records.txt");//deleting old file
   rename("record1.txt","record.txt");//renaming new file
 	cout<<"Press any key to go back to main menu "<<endl;
							cin>>backset;
							if(backset==1)
							{
								 system("CLS");
								mainmenu();
							}
							else
							{
								 system("CLS");
								mainmenu();
							}
}

		void dispbill()
		{
			ifstream ifs("records.txt");//to read from a file which we created.
			{
				if(!ifs)
				{
					cout<<"File Error!"<<endl;
				}
				while(!ifs.eof()) /// checking all the file till end;
				{
					ifs.getline(arr,100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
 } ;


void mainmenu()
{
	int litchoice;
	int schoice;
	int backset;
	int n;
   	cout << "\n\n \tWelcome To Flight Reservation System  Pakistan" << endl << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>\n";
    cout << "\t   Book your Flight tickets at affordable prices!" << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>";
    
    cout << "\n\n\t\t\t\4.Add Customer Details(1) \n\t\t\t\4.Flight Registration(2) \n\t\t\t\4.Check Ticket(3) \n\t\t\t\4.Cancel Ticket(4)\n\t\t\t\4.Submit Feedback(5) \n\t\t\t\4.Exit(6)" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> litchoice;
    
    Details d;
    registration r;
    ticket t;
    payment p;
	switch(litchoice)
	{
    	case 1:
    		{
    			 system("CLS");
    			cout<<"__________________Customers______________________"<<endl;
    			cout<<endl;
    			d.information();
    			cout<<endl;
    	        cout<<"Press any key to go back to the Main Menu ";
    	        cin>>backset;
    	        if(backset==1)
    	        {
    	        	 system("CLS");
    	        	mainmenu();
				}
				else
				{
					 system("CLS");
						mainmenu();
				}
				break;
			}
			case 2:
				{
					 system("CLS");
					 int again;
					cout<<"______________Book a Flight Using This System__________________________"<<endl;
					cout<<endl;
					if(z == 1)
					{
						e++;
					r.flights();
				}
				else
				{
					cout<<"Firstly Complete the customer details (Thanks) "<<endl;
					cout<<"press 1 to go back to customer detail : ";
					cin>>again;
					if(again==1)
					{
						 system("CLS");
						 cout<<"__________________Customers______________________"<<endl;
							d.information();
							 cout<<"Press any key to go back to the Main Menu ";
    	        cin>>backset;
    	        if(backset==1)
    	        {
    	        	 system("CLS");
    	        	mainmenu();
				}
				else
				{
					 system("CLS");
						mainmenu();
				}
					}
					else
					{
						mainmenu();
					}
				}
					break;
				}
				case 3:
					{
						system("CLS");
						cout<<"_______________Get Your Ticket____________"<<endl;
						cout<<endl;
						if(z==1 && e==1)
						{
						t.Bill();
					}
					else
					{
						cout<<"first complete the data ..........."<<endl;
							cout<<"Press any key to go back to main menu "<<endl;
							cin>>backset;
							if(backset==1)
							{
								 system("CLS");
								mainmenu();
							}
							else
							{
								 system("CLS");
								mainmenu();
							}
						
						break;
					}
						cout<<endl;
						cout<<"Your Ticket is printed , You can collect it "<<endl;
						cout<<"Press 1 to display your ticket :";
						cin>>backset;
						if(backset==1)
						{
							t.dispbill();
						}
						else
						{
							cout<<"ticket not found !"<<endl;
						}
							cout<<endl;
							cout<<"Press any key to go back to main menu "<<endl;
							cin>>backset;
							if(backset==1)
							{
								 system("CLS");
								mainmenu();
							}
							else
							{
								 system("CLS");
								mainmenu();
							}
						
						break;
					}
					case 4:
						{
								 system("CLS");
							        cout<<"______________________________Cancel Ticket__________________________________"<<endl;
							        cout<<endl;
                                     cout << "Please enter your ID :" ;
                                     cin>>n;
                                        t.cancelticket(n);
                                     	cout<<"Press any key to go back to main menu "<<endl;
							cin>>backset;
							if(backset==1)
							{
								 system("CLS");
								mainmenu();
							}
							else
							{
								 system("CLS");
								mainmenu();
							}
                                     break;
						}
						case 5:
							{
									system("CLS");
									string feed;
									 cout<<"______________________________Feedback__________________________________"<<endl;
									 cout<<endl;
                                     cout << "         \n\t\t\t\4 WELCOME TO FEEDBACK BOX \1       \n";
                                     cout<<endl;
                                     cout<<"-------------------------------------------"<<endl;
                                     cout<<"\n\t\t\4 ";
                                     cin.ignore(500,'\n');
                                     getline(cin,feed);
                                     cout<<"-------------------------------------------"<<endl;
                                     cout<<endl;
                                     cout<<"Sucessfully submitted :) "<<endl;
                                     	cout<<"Press any key to go back to main menu "<<endl;
							cin>>backset;
							if(backset==1)
							{
								 system("CLS");
								mainmenu();
							}
							else
							{
								 system("CLS");
								mainmenu();
							}
                                     break;
									 
							}
					case 6:
						{
							system("CLS");
							cout<<"\n\n\t_____________Thank-You_______________"<<endl;
							break;
				        	}
						default:
							{
								cout<<"Invalid Input ! Please try again........."<<endl;
								mainmenu() ; //// user can try for once more.
								break;
							}
}
               while(litchoice==6);
}

int main()
{
	Management mobj;
}
