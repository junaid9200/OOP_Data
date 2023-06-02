
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

                         //*********************************************************//
                               //*****Library Management System Project*****//
                        //********************************************************//

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

                     
					 //***************************************************************//
                      //**************Header Files used in Project**************//
                    //**************************************************************//
                    
                    
#include "Final_Project.h"    

using namespace std;
                                 //***************************//
                                     //*****Book Class*****// 
                                //***************************//

class BOOK{        

	  						 //****Private Area Of Book Class****//
	private:
	
	string ISBN;
	string Title;
	string First_Author;
	string Second_Author;
	string Publisher;
	string Price;
	string Pages;
	long double Copies_In_Library;
			            
						  //****Public Area Of Book Class****//

	public:
		
		 							 //********************************************//
                                     //*****Add Book Record Function*****// 
                                //********************************************//

		void Add_Record(){
			
			  cout<<"\n\n\n";
			  
		      cout<<"\n\n\t\t\t\t\t\t\t\t\t    \" \'ADD\' BOOK RECORD \"\n";
		      cout<<"\t\t\t\t\t\t\t\t\t       ----------------\n";
    	
    	      cout<<"\n\n\n";
			
			
			string ISBN_1;
			
			{
				
				ifstream BOOK_1("BOOKS.txt",ios::in);
				
				if(!BOOK_1){
				
			  	  cout<<"\n\nBOOKS file NOT open\n\n";
				
			    }
			
			  cout<<"\n\n";
			
			  cout<<"Enter ISBN of the Book : ";
			  cin>>ISBN;
			  
			  while( BOOK_1>>ISBN_1>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			  	if( ISBN_1.compare(ISBN)==0 ){
			  		
			  		cout<<"\n\n\t\t\t\t\t\t\t      \" Sorry Record of this Book \'Already\' Present. \"\n\n";
			  		
				    BOOK_1.close();
				    
				    return;
			  		
				  }
			  	
			  }
			  
			  BOOK_1.close();
				
			}
			
			
			{
			
			  ofstream BOOK_1("BOOKS.txt",ios::app);
			
			  if(!BOOK_1){
				
			  	  cout<<"\n\nBOOKS file NOT open\n\n";
				
			  }
			
			  
			  cout<<"Enter Book Title & must use \'_\' Instead of \'Space\' : ";
			  cin>>Title;
			  cout<<"Enter First Author Name : ";
			  cin>>First_Author;
			  cout<<"Enter Second Author Name : ";
			  cin>>Second_Author;
			  cout<<"Enter Publisher Name : ";
			  cin>>Publisher;
			  cout<<"Enter Book Price : ";
			  cin>>Price;
			  cout<<"Enter Total Number of Pages : ";
			  cin>>Pages;
			  
			  
			      {
			      	
			      	while(1){
			      		
			      		
			      		cout<<"Enter Total Number of Copies in Library : ";
			            cin>>Copies_In_Library;
			      		
			      		
			      		if( Copies_In_Library>=1 ){
			      			
			      			break;
			      			
						  }
						  
						 if( Copies_In_Library<=0 ){
						 	
						 	cout<<"\n\n\n\n";
						 	
						 	cout<<"\t\t\t\t\t\t     \" Invalid Number of Copies Please Enter Only Valid Numbers of Copies. \"\n";
				            
						 	cout<<"\n\n\n\n";
						 	
						 } 
			      		
					  }
			      	
				  }
			  
			  BOOK_1<<left<<setw(12)<<ISBN<<"\t\t"<<setw(60)<<Title<<"\t\t"<<setw(15)<<First_Author<<"\t\t"<<setw(15)<<Second_Author<<"\t\t"<<setw(15)<<Publisher<<"\t\t"<<setw(7)<<Price<<"\t\t"<<setw(7)<<Pages<<"\t\t"<<setw(7)<<Copies_In_Library<<"\n";
			  
			  BOOK_1.close();
			  
			  cout<<"\n\n\n";
			  
		      cout<<"\n\n\t\t\t\t\t\t\t\t     \" Book Record \'ADD\' Successfully \"\n\n";
    	
			  
			}
			
		}
		
		                 //********************************************//
	                       //****Display Book Record Function****// 
	                   //********************************************//

		
		void Display(){
			
			
			  cout<<"\n\n\n";
			  
		      cout<<"\n\n\t\t\t\t\t\t\t\t\t   \" DISPLAY BOOKS RECORD \"\n";
		      cout<<"\t\t\t\t\t\t\t\t\t     --------------------\n";
    	
    	      cout<<"\n\n\n";
			
			
			char character;
			int Count_1=0;
			
			
			{
				
				ifstream BOOK_1("BOOKS.txt",ios::in);
				
				while( BOOK_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
					
					Count_1++;
					
				}
				
				BOOK_1.close();
				
			}
			
			if( Count_1==0 ){
				
				cout<<"\n\n\t\t\t\t\t\t\t\t   \" Sorry \'NO\' any Book Record Available \"";
			    return;
				
			}
			
			
			 {
					
					         ifstream BOOK_1("BOOKS.txt",ios::in);
			
					         if(!BOOK_1){
				
					         	cout<<"\n\nBOOKS file NOT open\n\n";
				
					         }
			
					         cout<<"\n\n\n\n\n";
			
					         cout<<"TOTAL BOOKS IN LIBRARY\n";
					         cout<<"----------------------\n\n\n";
			
					         
					         while( BOOK_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
				
					         	 
					         	cout<<"ISBN                        :    ";
			                    cout<<ISBN<<"\n";
			                    cout<<"Book Title                  :    ";
			                    cout<<Title<<"\n";
			                    cout<<"First Author Name           :    ";
			                    cout<<First_Author<<"\n";
			                    cout<<"Second Author Name          :    ";
			                    cout<<Second_Author<<"\n";
			                    cout<<"Publisher Name              :    ";
			                    cout<<Publisher<<"\n";
			                    cout<<"Book Price                  :    ";
			                    cout<<Price<<"\n";
			                    cout<<"Number of Pages             :    ";
			                    cout<<Pages<<"\n";
			                    cout<<"Number of Copies in Library :    ";
			                    cout<<Copies_In_Library<<"\n\n\n\n\n";
					         	
				
					         }
			
					         cout<<"\n\n";
			
					         BOOK_1.close();
					       
			 } 
			
		}
		
							//********************************************//
					    		//***Search Book Record Function*****//
						  //********************************************// 

		
		void Search(){
    	
    	      
			string ISBN_1;
			string Title_1;
			int Choice_1,Flag_1=0;
			
			while(1){
				
				cout<<"\n\n\n";
			  
		        cout<<"\n\n\t\t\t\t\t\t\t\t\t     \" SEARCH A BOOK \"\n";
		        cout<<"\t\t\t\t\t\t\t\t\t       -------------\n";
			
			            cout<<"\n\n\n\n";
			            cout<<"                                                                1  <================> SEARCH BY ISBN  \n";
	                    cout<<"                                                                2  <======================> SEARCH BY TITLE  \n\n\n\n";
	                    cout<<"Enter Your Choice : ";
	                    cin>>Choice_1;
	                    
	           switch(Choice_1){
			      
				        
	              case 1:
		              {
			
			            cout<<"\n\n\n\n";	
			            cout<<"Enter ISBN of the Book that\'s Record You Want to \'Search\': ";
			            cin>>ISBN_1;
			
			            ifstream BOOK_1("BOOKS.txt",ios::in);
			
			            if(!BOOK_1){
				
				            cout<<"\n\nBOOKS file NOT open\n\n";
				
			            }
			
			            cout<<"\n\n\n\n";
			
			
			            while( BOOK_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
				
				            if(ISBN_1.compare(ISBN)==0){
				            	
				            	
				                cout<<"ISBN                        :    ";
			                    cout<<ISBN<<"\n";
			                    cout<<"Book Title                  :    ";
			                    cout<<Title<<"\n";
			                    cout<<"First Author Name           :    ";
			                    cout<<First_Author<<"\n";
			                    cout<<"Second Author Name          :    ";
			                    cout<<Second_Author<<"\n";
			                    cout<<"Publisher Name              :    ";
			                    cout<<Publisher<<"\n";
			                    cout<<"Book Price                  :    ";
			                    cout<<Price<<"\n";
			                    cout<<"Number of Pages             :    ";
			                    cout<<Pages<<"\n";
			                    cout<<"Number of Copies in Library :    ";
			                    cout<<Copies_In_Library<<"\n\n";
							   	
					
				               BOOK_1.close();
				   
				               return;
				
			                }
			    
		                }
				
			            cout<<"\n\n\t\t\t\t\t\t\t   \" Sorry \'NO\' any Record Available with this ISBN \"";
			
			            BOOK_1.close();
			            
			            return;
				
		              }	
					  break;
					  
					  
				  case 2:
				  	  {
			
			              cout<<"\n\n\n\n";	
			              cout<<"Enter Book Title & must use \'_\' Instead of \'Space\' that\'s Record You Want to \'Search\': ";
			              cin>>Title_1;
			
			              ifstream BOOK_1("BOOKS.txt",ios::in);
			
			              if(!BOOK_1){
				
				              cout<<"\n\nBOOKS file NOT open\n\n";
				
			              }
			
			              cout<<"\n\n\n\n";
			              
			
			              while( BOOK_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
				
				              if(Title_1.compare(Title)==0){
					
				                 Flag_1=1;
				                 
				                 BOOK_1.close();
				                 
				                 break;
				
			                  }
			    
		                  }
		                  
		                  if( Flag_1==1 ){
		                  	
		                  	     
			                     ifstream BOOK_1("BOOKS.txt",ios::in);
			                                
			                     
			                     while( BOOK_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
				
				                        if(Title_1.compare(Title)==0){
					
				                           
				                           cout<<"ISBN                        :    ";
			                               cout<<ISBN<<"\n";
			                               cout<<"Book Title                  :    ";
			                               cout<<Title<<"\n";
			                               cout<<"First Author Name           :    ";
			                               cout<<First_Author<<"\n";
			                               cout<<"Second Author Name          :    ";
			                               cout<<Second_Author<<"\n";
			                               cout<<"Publisher Name              :    ";
			                               cout<<Publisher<<"\n";
			                               cout<<"Book Price                  :    ";
			                               cout<<Price<<"\n";
			                               cout<<"Number of Pages             :    ";
			                               cout<<Pages<<"\n";
			                               cout<<"Number of Copies in Library :    ";
			                               cout<<Copies_In_Library<<"\n\n\n\n\n";
				                           
				                           
			                            }
			    
		                         }
			                     
		                  	
		                  	     BOOK_1.close();
				   
				                 return;
		                  	
						  }
				
			              cout<<"\n\n\t\t\t\t\t\t\t      \" Sorry \'NO\' any Book Available with this Title \"";
			              
			              BOOK_1.close();
			              
			              return;
				
		              }	
					  break;
					  
					  
				  default:
				  	 {
				  	 	
				  		
				  		cout<<"\n\n\t\t\t\t\t\t\t       \" Invalid Choice Select Only a Valid Choice. \"\n";
				        cout<<"\t\t\t\t\t\t\t\t ------------------------------------------   \n\n";
				        cout<<"\n\n";
						system("pause");
						system("cls");
				       
					   	
					 }
				  
				  	
				  if( Choice_1==1  ||  Choice_1==2 ){
					
					  break;
					
				  }	  	
			
			 
			 
			 
			   }
			
			
			}
			
		
		}
		
						  //********************************************//
					          //****Update Book Record Function****//
	                     //********************************************//

		
		void Update(){
			
			
			cout<<"\n\n\n";
			
			cout<<"\n\n\t\t\t\t\t\t\t\t\t    \" UPDATE BOOKS RECORD \"\n";
			cout<<"\t\t\t\t\t\t\t\t\t      ------------------- \n\n";
			
			int Flag_1=0;
			char character;
			string Reg_Number;
			
			
			string ISBN_1;
			string Title_1;
			string First_Author_1;
			string Second_Author_1;
			string Publisher_1;
			string Price_1;
			string Pages_1;
			long double Copies_In_Library_1;
			
			string ISBN_Update;
			string Title_Update;
			string First_Author_Update;
			string Second_Author_Update;
			string Publisher_Update;
			string Price_Update;
			string Pages_Update;
			long double Copies_In_Library_Update;
			
			cout<<"\n\n\n";
			
			cout<<"Enter ISBN of the Book that\'s Record You Want to \'Update\' : ";
			cin>>ISBN_1;
			
			{
				
				ifstream BOOKS_1("BOOKS.txt",ios::in);
				
				while( BOOKS_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			  	  if( ISBN_1.compare(ISBN)==0 ){
			  		
			  		  Flag_1=1;
			  		  
			  		  break;
			  		
				    }
			  	
			    }
			    
			    BOOKS_1.close();
				
			}
			
			if( Flag_1==0 ){
				
				cout<<"\n\n\t\t\t\t\t\t\t   \" Sorry \'NO\' any Record Available with this ISBN \"";
				return;
				
			}
			
			
			{
				
				
		
		            ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
		
		            while( ISSUE_BOOKS>>Reg_Number>>ISBN ){
			
			
			            if( ISBN.compare(ISBN_1)==0 ){
				
			            	cout<<"\n\n\t\t\t\t  \" Sorry this Book \'Issued\' to some Students \'First\' take it than You can Update the Record of this Book. \"";    	
							ISSUE_BOOKS.close();
								
			                return;
				
			            }
			
		            }
		
		            ISSUE_BOOKS.close();
		
	        
				
			}
			
			
			Flag_1=0;
			
			cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t     \" ENTER NEW RECORD \"\n";
			cout<<"\t\t\t\t\t\t\t\t\t       ---------------- \n\n\n\n";
			
			cout<<"Enter \'NEW\' ISBN of the Book \'If\' ISBN is Change Otherwise Re-Enter Old ISBN : ";
			cin>>ISBN_Update;
			
			
			{
				
				ifstream BOOKS_1( "BOOKS.txt",ios::in );
				
				while( BOOKS_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			  	  if( ISBN_Update.compare(ISBN)==0 ){
			  		
			  		  if( ISBN_Update.compare(ISBN_1)!=0 ){
			  		  	
			  		  	    cout<<"\n\n\t\t\t\t\t\t\t      \" Sorry Record of this Book \'Already\' Present. \"\n\n";
			  		        BOOKS_1.close();
			  		        
			  		        return;
			  		  	
						}
			  		
				    }
			  	
			    }
			    
			    BOOKS_1.close();
				
			}
			
			
			  cout<<"Enter \'NEW\' Book Title & must use \'_\' Instead of \'Space\' : ";
			  cin>>Title_Update;
			  cout<<"Enter \'NEW\' First Author Name : ";
			  cin>>First_Author_Update;
			  cout<<"Enter \'NEW\' Second Author Name : ";
			  cin>>Second_Author_Update;
			  cout<<"Enter \'NEW\' Publisher Name : ";
			  cin>>Publisher_Update;
			  cout<<"Enter \'NEW\' Book Price : ";
			  cin>>Price_Update;
			  cout<<"Enter \'NEW\' Total Number of Pages : ";
			  cin>>Pages_Update;
			  
			  
			  
			  {
			      	
			      	while(1){
			      		
			      		
			      		cout<<"Enter \'NEW\' Total Number of Copies in Library : ";
			            cin>>Copies_In_Library_Update;
			      		
			      		
			      		if( Copies_In_Library_Update>=1 ){
			      			
			      			break;
			      			
						  }
						  
						 if( Copies_In_Library_Update<=0 ){
						 	
						 	cout<<"\n\n\n\n";
						 	
						 	cout<<"\t\t\t\t\t\t     \" Invalid Number of Copies Please Enter Only Valid Numbers of Copies. \"\n";
				            
						 	cout<<"\n\n\n\n";
						 	
						 } 
			      		
					  }
			      	
			  }
			
			
			{
				
				ifstream BOOKS_1( "BOOKS.txt",ios::in );
				ofstream COPY_1( "COPY.txt",ios::out );
				
				while( BOOKS_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			  	  if( ISBN_1.compare(ISBN)!=0 ){
			  		
			  		  COPY_1<<left<<setw(12)<<ISBN<<"\t\t"<<setw(60)<<Title<<"\t\t"<<setw(15)<<First_Author<<"\t\t"<<setw(15)<<Second_Author<<"\t\t"<<setw(15)<<Publisher<<"\t\t"<<setw(7)<<Price<<"\t\t"<<setw(7)<<Pages<<"\t\t"<<setw(7)<<Copies_In_Library<<"\n";
			  
				    }
			  	
			    }
			    
			    COPY_1<<left<<setw(12)<<ISBN_Update<<"\t\t"<<setw(60)<<Title_Update<<"\t\t"<<setw(15)<<First_Author_Update<<"\t\t"<<setw(15)<<Second_Author_Update<<"\t\t"<<setw(15)<<Publisher_Update<<"\t\t"<<setw(7)<<Price_Update<<"\t\t"<<setw(7)<<Pages_Update<<"\t\t"<<setw(7)<<Copies_In_Library_Update<<"\n";
			  
			    BOOKS_1.close();
			    COPY_1.close();
				
			}
			
			{
				
				ofstream BOOKS_1( "BOOKS.txt",ios::out );
				ifstream COPY_1( "COPY.txt",ios::in );
				
				while( COPY_1.get(character) ){
					
					BOOKS_1<<character;
					
				}
				
				
				BOOKS_1.close();
			    COPY_1.close();
			    
			    cout<<"\n\n\t\t\t\t\t\t\t\t    \" Book Record \'UPDATE\' Successfully. \"\n\n";
				
			}
			
			
			{
				
				ofstream COPY_1( "COPY.txt",ios::out );
				COPY_1.close();
				
			}
			
			
		}
		
								//********************************************//
		    				    //****Delete Book Record Function*****// 
						  //********************************************//

		
		void Delete(){
			
			
			cout<<"\n\n\n";
			
			cout<<"\n\n\t\t\t\t\t\t\t\t\t    \" DELETE BOOK RECORD \"\n";
			cout<<"\t\t\t\t\t\t\t\t\t      ------------------ \n\n";
			
			int Flag_1=0;
			char character;
			string Reg_Number;
			
			
			string ISBN_1;
			string Title_1;
			string First_Author_1;
			string Second_Author_1;
			string Publisher_1;
			string Price_1;
			string Pages_1;
			string Copies_In_Library_1;
			
			
			cout<<"\n\n\n";
			
			cout<<"Enter ISBN of the Book that\'s Record You Want to \'Delete\' : ";
			cin>>ISBN_1;
			
			{
				
				ifstream BOOKS_1("BOOKS.txt",ios::in);
				
				while( BOOKS_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			  	  if( ISBN_1.compare(ISBN)==0 ){
			  		
			  		  Flag_1=1;
			  		  
			  		  break;
			  		
				    }
			  	
			    }
			    
			    BOOKS_1.close();
				
			}
			
			if( Flag_1==0 ){
				
				cout<<"\n\n\t\t\t\t\t\t\t   \" Sorry \'NO\' any Record Available with this ISBN \"";
				return;
				
			}
			
			
			{
				
				
		
		            ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
		
		            while( ISSUE_BOOKS>>Reg_Number>>ISBN ){
			
			
			            if( ISBN.compare(ISBN_1)==0 ){
				
			            	cout<<"\n\n\t\t\t\t  \" Sorry this Book \'Issued\' to some Students \'First\' take it than You can Delete the Record of this Book. \"";    	
							ISSUE_BOOKS.close();
								
			                return;
				
			            }
			
		            }
		
		            ISSUE_BOOKS.close();
		
	        
				
			}
			
			
			Flag_1=0;
			
			
			{
				
				ifstream BOOKS_1( "BOOKS.txt",ios::in );
				ofstream COPY_1( "COPY.txt",ios::out );
				
				while( BOOKS_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			  	  if( ISBN_1.compare(ISBN)!=0 ){
			  		
			  		  COPY_1<<left<<setw(12)<<ISBN<<"\t\t"<<setw(60)<<Title<<"\t\t"<<setw(15)<<First_Author<<"\t\t"<<setw(15)<<Second_Author<<"\t\t"<<setw(15)<<Publisher<<"\t\t"<<setw(7)<<Price<<"\t\t"<<setw(7)<<Pages<<"\t\t"<<setw(7)<<Copies_In_Library<<"\n";
			  
				    }
			  	
			    }
			    
			    
			    BOOKS_1.close();
			    COPY_1.close();
				
			}
			
			{
				
				ofstream BOOKS_1( "BOOKS.txt",ios::out );
				ifstream COPY_1( "COPY.txt",ios::in );
				
				while( COPY_1.get(character) ){
					
					BOOKS_1<<character;
					
				}
				
				
				BOOKS_1.close();
			    COPY_1.close();
			    
			    cout<<"\n\n\t\t\t\t\t\t\t\t    \" Book Record \'DELETE\' Successfully. \"\n\n";
				
			}
			
			
			{
				
				ofstream COPY_1( "COPY.txt",ios::out );
				COPY_1.close();
				
			}
			
			
		}
	
	
};




	                                 //***************************//
	 							       //****Student Class*****// 
	                                //***************************//

class STUDENT{
	
			               //****Private Area Of Student Class****//

	private:
	
	string Reg_Number;
	char First_Name[50];
	char Last_Name[50];
	char City[50];
	char Department[50];
	string CGPA;

                  	 //****Public Area Of Student Class****//
	
	public:
		
				
							//************************************************//
								 //*****Add Student Record Function*****// 
							//***********************************************//


		void Add_Record(){
			
			string Reg_Number_1;
		
			
			{
				
				cout<<"\n\n\n";
			
			    ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			    
				cout<<"Enter your Registration Number  : ";
			    
			    cin>>Reg_Number;
			    
			    while( STUDENTS_1>>Reg_Number_1>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			    	
			    	if( Reg_Number_1.compare(Reg_Number)==0 ){
			    		
			    		cout<<"\n\n\t\t\t   Sorry the Record of this Student already Exists\n\n";	
			    		STUDENTS_1.close();
			    		
			    		
			    		return;
			    		
					}
			    	
				}
			    
			    
			    STUDENTS_1.close();
				
			}
			
			
			{
			
			  ofstream STUDENTS_1("STUDENTS.txt",ios::app);
			
			  
			 cout<<"Enter your First Name           : ";
			  cin>>First_Name;
			  cout<<"Enter your Last Name            : ";
			  cin>>Last_Name;
			  cout<<"Enter your City Name            : ";
			  cin>>City;
			  cout<<"Enter your Department Name      : ";
			  cin>>Department;
			  cout<<"Enter your CGPA                 : ";
			  cin>>CGPA;
			
			  STUDENTS_1<<left<<setw(25)<<Reg_Number<<"\t\t"<<setw(15)<<First_Name<<"\t\t"<<setw(15)<<Last_Name<<"\t\t"<<setw(25)<<City<<"\t\t"<<setw(25)<<Department<<"\t\t"<<setw(5)<<CGPA<<"\n";
			  
			  cout<<"\n\n\n";
			  
		      cout<<"\n\n\t\t\t  Congratulations!!! Your Record added Successfully \n\n\n";
			
			  STUDENTS_1.close();
			
		    }
		    
			
		}

							//************************************************//
 							   //*****Display Student Record Function*****// 
		                   //***********************************************//
		
		
		void Display(){
			
			char character;
			
		
			int Count_1=0;
			
			{
				
				             // Checking either file is empty or not//
				             
				
				ifstream STUDENTS_1("STUDENTS.txt",ios::in);
				
				while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
					
					Count_1++;
					
				}
				
				STUDENTS_1.close();
				
			}
			
			
			if( Count_1==0 ){
				
				cout<<"\n\n\t\t\t Sory Record does not Exists\n\n";
			    return;
				
			}
			
			
			ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			
			while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
				
				cout<<"Registration Number    :    ";
			    cout<<Reg_Number<<"\n";
				cout<<"First Name             :    ";
			    cout<<First_Name<<"\n";
			    cout<<"Last Name              :    ";
			    cout<<Last_Name<<"\n";
			    cout<<"City Name              :    ";
			    cout<<City<<"\n";
			    cout<<"Department Name        :    ";
			    cout<<Department<<"\n";
			    cout<<"CGPA                   :    ";
			    cout<<CGPA<<"\n\n";
			    system("pause");
			    cout<<"\n\n";
			    
				
			}
			
			STUDENTS_1.close();
			
		}	
		
		  						//************************************************//
 								//*****Search Student Record Function*****// 
						   //***********************************************//

		void Search(){
			
			string Reg_Number_1;
			char First_Name_1[50];
			int Choice_1,Flag_1=0;
			
			
			while(1){
			
		
				        cout<<"\n\n\t\t\t1. Search By Registration Number";
	                    cout<<"\n\n\t\t\t2. Search By First Name\n\n";
	                    cout<<"\t\tEnter Your Choice : ";
	                    cin>>Choice_1;
			            cout<<"\n\n\n\n";
			     
			     switch(Choice_1){
			     	
			     	cout<<"\n";
				
				    case 1:
				    	{               
				    	             // For case 1 getting registration Number //
			        
				        	ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			             	system("cls");
				        	cout<<"\n\n\t\t\tEnter Registration Number of the Student  : ";
				             cin>>Reg_Number_1;
				        	cout<<"\n";
			    
				        	while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
				        		
				        		   //  Checking either Student exists or Not // 
			    	
				    	    	if( Reg_Number_1.compare(Reg_Number)==0 ){
			    		            
			    		            cout<<"\n\n\n";
				    		    	cout<<"Registration Number    :    ";
			        		    	cout<<Reg_Number<<"\n";
				    		    	cout<<"First Name             :    ";
			        		    	cout<<First_Name<<"\n";
			        		    	cout<<"Last Name              :    ";
			        		    	cout<<Last_Name<<"\n";
			        		    	cout<<"City Name              :    ";
			        		    	cout<<City<<"\n";
			        		    	cout<<"Department Name        :    ";
			        		    	cout<<Department<<"\n";
			        		    	cout<<"CGPA                   :    ";
			        		    	cout<<CGPA<<"\n\n";
			    			    	STUDENTS_1.close();
			    		
			    			    	return;
			    		        
			    		         // Return working same as if else //
			    		 
						    	}
			    	
					    	}
			    
			    
			    	    	STUDENTS_1.close();
			    	    	
			    	    // this will execute if condition fails // 
				
				    	    cout<<"\n\n\t\t\tSorry!!! No Record Available with this Registration Number\n\n";    		
			                return;
			                
			            }
			            break;
			            
			            
			           // For case 2  Getting First Name //
			         
			        case 2:    
			            {
			        
				        	ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			             
						 	system("cls");
			    
				        	cout<<"\n\n\t\t\tEnter First Name of the Student  : ";
				        
							cin>>First_Name_1;
			    
				        	while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			    	 
			    	    // Compraing First Name // 
			    	
				    	    	if( strcmp(First_Name,First_Name_1)==0 ){
			    		
			    			    	STUDENTS_1.close();
			    			    	
			    			    	Flag_1=1;
			    		
			    			    	break;
			    		
						    	}
			    	
					    	}
					    	
					    	// if any name exists // 
					    	
					    	if(Flag_1==1){
					    		
					    		cout<<"\n\n\n";
					    		
			    		        ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			    		        
			    		        
			    		        while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			    	
				    	    	     if( strcmp(First_Name,First_Name_1)==0 ){
			    		
			    			    	     
			    			    	     cout<<"Your Registration Number  :  ";
			    			    	     cout<<Reg_Number<<"\n";
							    	     cout<<"Your First Name           :  ";
			    			    	     cout<<First_Name<<"\n";
			    			    	     cout<<"Your Last Name            :  ";
			    			    	     cout<<Last_Name<<"\n";
			    			    	     cout<<"Your City Name            :  ";
			    			    	     cout<<City<<"\n";
			    			    	     cout<<"Your Department Name      :  ";
			    			    	     cout<<Department<<"\n";
			    			    	     cout<<"Your CGPA                 :  ";
			    			    	     cout<<CGPA<<"\n\n\n\n\n";
			    			    	     
						    	     }
			    	
					    	    }
					    		
					    		STUDENTS_1.close();
					    		return;
					    		
							}
			    
			    // if condition fails //
			    
			    	    	STUDENTS_1.close();
				
				                 cout<<"\n\n\t\t\t\t\tSorry!!! No Record is Available with this First Name\n\n";    		
			                          return;
			                
			            }
			            break;
			            
			        // If he enteres invalid choice //     
			        
			        default:
				  	 {
				  	 	
				  		
				  	  cout<<"\n\n\t\t\t\tInvalid Choice Select Only a Valid Choice\n";
				          cout<<"\n\n";
						  system("pause");
						  system("cls");
				       
					   	
					 }
				  
				  	
				     if( Choice_1==1  ||  Choice_1==2 ){
					
					     break;
					
				     }    
			            
			
			     }
			     
			
			}
			
			
		}	
		
	                    //************************************************//
                         //*****Update Student Record Function*****// 
                      //***********************************************//
	
		void Update(){
			
		
			int Flag_1=0;
			char character;
			string ISBN;
			
			string Reg_Number_1;
	        char First_Name_1[50];
	        char Last_Name_1[50];
	        char City_1[50];
	        char Department_1[50];
	        string CGPA_1;
	        
	        string Reg_Number_Update;
	        char First_Name_Update[50];
	        char Last_Name_Update[50];
	        char City_Update[50];
	        char Department_Update[50];
	        string CGPA_Update;
	        
	       cout<<"\n\n\n";
			
			cout<<"\t\tEnter Registration Number of the Student whose Record You Want to Update : ";
		
			cin>>Reg_Number_1;
			
			{
				
				cout<<"\n";
			
			    ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			    
			    while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			    	
			    	// Comparing Registration Number // 
			    	
			    	if( Reg_Number_1.compare(Reg_Number)==0 ){
			    		
			    		Flag_1=1;
			    		
			    		break;
			    		
					}
			    	
				}
			    
			    
			    STUDENTS_1.close();
				
			}
			
			// if Registration Number Does Not 	Exists //  
			
			if( Flag_1==0 ){
				
				cout<<"\n\n\t\t\tSorry!!! No Student Exists with this Registration Number\n\n";
		        cout<<"\n\n\t\t\tSorry!!!First Enter the Data of Student then Update\n\n";
			    
				return;
				
				// When return will execute it return to Main Menu // 
				
			}
			
			
			
			{
				
				// checking from issue book either some Books issued to him or not // 
		
		            ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
		
		            while( ISSUE_BOOKS>>Reg_Number>>ISBN ){
			
			
			            if( Reg_Number.compare(Reg_Number_1)==0 ){
				
			            
			            	cout<<"\n\n\t\tSorry!!! Some Books are Issued on Your Registration Number\n\n";
							cout<<"\n\n\t\tFirst Return all the Books then Update your Record\n\n";    	
							ISSUE_BOOKS.close();
								
			                return;
				
			            }
			
		            }
		
		            ISSUE_BOOKS.close();
		
	        }
			
			Flag_1=0;
			
			cout<<"Enter Your Registration Number : ";
			
			
				cin>>Reg_Number_Update;
			
			{
				
			
			    ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			    
			    while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			    	
			    	// check either with new updated enterd registration number any student exist or Not //
			    	
			    	if( Reg_Number_Update.compare(Reg_Number)==0 ){
			    		
			    		if( Reg_Number_Update.compare(Reg_Number_1)!=0 ){
			    			
			    			cout<<"\n\n\t\t\t\tSorry the Record of a Student with this Registration Already Present\n\n";
			    		    STUDENTS_1.close();
			    	
			    		    return;
			    			
						}
			    		
					}
			    	
				}
			    
			    
			    STUDENTS_1.close();
				
			}
				
		
			  cout<<"Enter First Name               : ";
			  cin>>First_Name_Update;
			  cout<<"Enter Last Name                : ";
			  cin>>Last_Name_Update;
			  cout<<"Enter City Name                : ";
			  cin>>City_Update;
			  cout<<"Enter Department Name          : ";
			  cin>>Department_Update;
			  cout<<"Enter CGPA                     : ";
			  cin>>CGPA_Update;	
			  
			  {
			  	
			  	ofstream COPY_1( "COPY.txt",ios::out );
			  	ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			  	
			  	while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			  		
			  		if( Reg_Number.compare(Reg_Number_1)!=0 ){
			  			
			  	// Record that will not match will be written on file //
			  			
			  			COPY_1<<left<<setw(25)<<Reg_Number<<"\t\t"<<setw(15)<<First_Name<<"\t\t"<<setw(15)<<Last_Name<<"\t\t"<<setw(25)<<City<<"\t\t"<<setw(25)<<Department<<"\t\t"<<setw(5)<<CGPA<<"\n";
			  
					  }
			  		
				  }
				  
				  // New Updated Data Written On it //
				  
				  COPY_1<<left<<setw(25)<<Reg_Number_Update<<"\t\t"<<setw(15)<<First_Name_Update<<"\t\t"<<setw(15)<<Last_Name_Update<<"\t\t"<<setw(25)<<City_Update<<"\t\t"<<setw(25)<<Department_Update<<"\t\t"<<setw(5)<<CGPA_Update<<"\n";
			  
			  	COPY_1.close();
			  	STUDENTS_1.close();
			  	
			  }
			  
			  
			  {
			  	
			  	ifstream COPY_1( "COPY.txt",ios::in );
			  	ofstream STUDENTS_1("STUDENTS.txt",ios::out);
			  	
			  	// It will get data from copy file and Write on Student file // 
			  	
			  	while( COPY_1.get( character ) ){
			  		
			  		STUDENTS_1<<character;
			  		
				  }
				  
				COPY_1.close();
			  	STUDENTS_1.close();
			  	
			  	cout<<"\n\n\t\t\tCongrtulations!!! Your Record has Updated Successfully\n\n";
			
			  	
			  }
			  
			  
			  {
			  	
			  	ofstream COPY_1( "COPY.txt",ios::out );
			  	COPY_1.close();
			  	
			  }
			
			
			
		}
		
		                       //************************************************//
                              //*****Delete Student Record Function*****// 
                          //***********************************************//
	
		
		void Delete(){
		
			int Flag_1=0;
			char character;
			string ISBN;
			
			string Reg_Number_1;
	        char First_Name_1[50];
	        char Last_Name_1[50];
	        char City_1[50];
	        char Department_1[50];
	        string CGPA_1;
	        
	       cout<<"\n\n\n";
			
			cout<<"\t\t\tEnter Registration  Number of the Student whose  Record You Want to Delete : ";
			
			cin>>Reg_Number_1;
			
			{
				
				cout<<"\n";
			
			    ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			    
			    while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			    	
			    	// Checking student is of our Univeristy or Not // 
			    	
			    	if( Reg_Number_1.compare(Reg_Number)==0 ){
			    		
			    	
			    		
			    		Flag_1=1;
			    		
			    		break;
			    		
					}
			    	
				}
			    
			    
			    STUDENTS_1.close();
				
			}
			
			if( Flag_1==0 ){
				
				cout<<"\n\n\t\t\t\tSorry!!! Your Record Does not Exists\n\n";
				cout<<"\n\n\t\t\t\tFirst Enter Your Record then Try to Delete your Record\n\n";    		
			       return;
				
			}
			
			
			
			{
				
				// checking from issue book file either he is issued a Book or Not // 
		
		            ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
		
		            while( ISSUE_BOOKS>>Reg_Number>>ISBN ){
			
			
			            if( Reg_Number.compare(Reg_Number_1)==0 ){
				
			            	cout<<"\n\n\t\tSorry!!! Some Books are Issued on Your Registration Number\n\n";
							cout<<"\n\n\t\tFirst Return Books then Delete Your Record\n\n"; 
							
								ISSUE_BOOKS.close();
								
			                return;
				
			            }
			
		            }
		
		            ISSUE_BOOKS.close();
		
	        }
				
			  
			  
			{
			  	
			  	ofstream COPY_1( "COPY.txt",ios::out );
			  	ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			  	
			  	while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
		
		// it will data of only students whose record will not match with entered registration Number // 
			  		
			  		if( Reg_Number.compare(Reg_Number_1)!=0 ){
			  			
			  			COPY_1<<left<<setw(25)<<Reg_Number<<"\t\t"<<setw(15)<<First_Name<<"\t\t"<<setw(15)<<Last_Name<<"\t\t"<<setw(25)<<City<<"\t\t"<<setw(25)<<Department<<"\t\t"<<setw(5)<<CGPA<<"\n";
			  
					  }
			  		
				  }
				    
			  	COPY_1.close();
			  	STUDENTS_1.close();
			  	
			}
			  
			  
			{
			  	
			  	ifstream COPY_1( "COPY.txt",ios::in );
			  	ofstream STUDENTS_1("STUDENTS.txt",ios::out);
			  	
			  	while( COPY_1.get( character ) ){
			  		
			  		STUDENTS_1<<character;
			  		
				  }
				  
				COPY_1.close();
			  	STUDENTS_1.close();
			 
			 	cout<<"\n\n\t\t\tCongratulations!!! Student Record Deleted Successfully\n\n";
			
			  	
			}
			  
			  
			{
			  	
			  	ofstream COPY_1( "COPY.txt",ios::out );
			  	COPY_1.close();
			  	
			}
			
			
			
		}
		
	
};

		                      //*****************************************************//
                                   //*****ISSUE Book to a Student Function*****// 
                            //******************************************************//


void Issue_a_Book(){
	
	     
	int Flag_1=0,Count_1=0;
	char character;
		      
    string ISBN;
    string ISBN_1;
	string Title;
	string First_Author;
	string Second_Author;
	string Publisher;
	string Price;
	string Pages;
	long double Copies_In_Library;
	
	
	string Reg_Number;
	string Reg_Number_1;
	char First_Name[50];
	char Last_Name[50];
	char City[50];
	char Department[50];
	string CGPA;
    	     cout<<"\n\n";
			  
			  cout<<"\t\t\tEnter Registration Number of the Student who Want to get a Book : ";
			  
			  cin>>Reg_Number_1;
			  cout<<"\n\n\n";
			  
			  
	{
		
		ifstream STUDENTS_1("STUDENTS.txt",ios::in);
		
		while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			
			// checking student is of our Univeristy or Not // 
			
			if( Reg_Number.compare(Reg_Number_1)==0 ){
				
				
				Flag_1=1;

				break;
				
			}
			
		}
		
		
		STUDENTS_1.close();
		
	}
	
	
	if( Flag_1==0 ){
		
		
		cout<<"\n\n\n\t\tSorry!!! Record of this Registration Number does not Exist\n\n";
		cout<<"\n\n\n\t\tWe can not Issue any Book on your Registration Number\n\n";
		cout<<"\n\n\t\tFirst Enter Your Record then get Book \"\n\n";
		return;
		
		
	}
	
	Flag_1=0;
	
	cout<<"\t\t\t";
	
    cout<<"Enter ISBN of the Book which you want to get : ";
	
	cin>>ISBN_1;
	
	cout<<"\n\n\n";
	
	{
		
		ifstream BOOK_1("BOOKS.txt",ios::in);
		
		while( BOOK_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			
			// checking Book is Present in Our Library or Not // 
			  	
			  	if( ISBN_1.compare(ISBN)==0 ){
			  		
			  		Flag_1=1;
			  		
			  		break;
			  		
				  }
			  	
		}
			  
		BOOK_1.close();
		
    }
			  
	
	if( Flag_1==0 ){
		
		cout<<"\n\n\t\t\tSorry!!! No Book is Available with this ISBN \n\n";
	     return;
		
	}
	
	
	
	Flag_1=0;
	
	
	{
								// cheking Books available copies //
		
		ifstream BOOK_1("BOOKS.txt",ios::in);
		
		while( BOOK_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			
	// checking total Book copy should be equal to one or more than which will be available in Library // 
			  	
			  	if( ISBN_1.compare(ISBN)==0 ){
			  		
			  		   if( Copies_In_Library>=1 ){
						 
						    Flag_1=1;
			  		
			  		        break;
			  		        
			  		     }   
			  		
				  }
			  	
		}
			  
		BOOK_1.close();
		
    }
    
    
    if( Flag_1==0 ){
		
		cout<<"\n\n\t\t\tSorry!!! all Copies of this Book Already Issued\n\n";
		cout<<"\n\n\t\t\tPlease wait When any Student Return this Book we will Issue to you\n\n";
			return;
		
	}
			  
			  
	{
		
		ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
		
		while( ISSUE_BOOKS>>Reg_Number>>ISBN ){
			
			// checking either same book is already issued to this same student or Not // 
			
			
			if( ( Reg_Number.compare(Reg_Number_1)==0 )  &&  ( ISBN.compare(ISBN_1)==0 ) ){
				
				cout<<"\n\n\t\tSorry!!! this Book is Already Issued on this Registration Number\n\n";
				cout<<"\n\n\t\tWe can not Issue Book twice on same Registration Number\n\n";
					ISSUE_BOOKS.close();
				
				return;
				
			}
			
		}
		
		ISSUE_BOOKS.close();
		
	}
	
	/* we can issue only 3 Books now it is checking either more than 3 books are already issued to 
	     this student or Not */
	
	{
		
		ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
		
		while( ISSUE_BOOKS>>Reg_Number>>ISBN ){
			
			
			if( Reg_Number.compare(Reg_Number_1)==0 ){
				
				Count_1++;
				
			}
			
		}
		
		ISSUE_BOOKS.close();
		
	}
			  
			  // if condition true it will write data in issue file // 
	
	if( Count_1<3 ){
		
		ofstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::app);
		
		ISSUE_BOOKS<<Reg_Number_1<<"\t\t"<<ISBN_1<<"\n";
		
		ISSUE_BOOKS.close();
		
		{
		
		     {
		     	
		     	//  to remove one copy from total copies // 
		     	
		     	ifstream BOOK_1("BOOKS.txt",ios::in);
		     	ofstream COPY_1("COPY.txt",ios::out);
		
		     	while( BOOK_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			  	    if( ISBN_1.compare(ISBN)==0 ){
			  		
			  		     Copies_In_Library--;
			  		
				      }
				       
				      COPY_1<<left<<setw(12)<<ISBN<<"\t\t"<<setw(60)<<Title<<"\t\t"<<setw(15)<<First_Author<<"\t\t"<<setw(15)<<Second_Author<<"\t\t"<<setw(15)<<Publisher<<"\t\t"<<setw(7)<<Price<<"\t\t"<<setw(7)<<Pages<<"\t\t"<<setw(7)<<Copies_In_Library<<"\n";
			  
		     	}
			  
		     	BOOK_1.close();
		     	COPY_1.close();
		     	
			 }
			 
			 
			 {
			 	
			 	ofstream BOOK_1("BOOKS.txt",ios::out);
		     	ifstream COPY_1("COPY.txt",ios::in);
		     	
		     	
		     	while(COPY_1.get(character)){
		     		
		     		BOOK_1<<character;
		     		
				 }
		     	
		     	
		     	BOOK_1.close();
		     	COPY_1.close();
			 	
			 }
			 
			 
			 {
			 	
			 	ofstream COPY_1("COPY.txt",ios::out);
			 	COPY_1.close();
			 	
			 }
			 
		
        }
		
		cout<<"\n\n\n\n\t\tCongratulations!!! Book is Issued to you Successfully\n";
	
	
                  	// it is combined with if that presents book issued less than 3 // 
		
	}
	
	else {
	
	    cout<<"\n\n\t\tSorry!!! We can Issue Maximum 3 Books\n\n";
		cout<<"\n\n\t\t 3 Book are Already Issued on this Registration Number\n\n";
		cout<<"\n\n\t\t Now We can not Issue more Books on Your Registration Number\n\n";
	
	}
			  
	
}


                      //****************************************************//
                           //*****Return Book to Library Function*****// 
                    //****************************************************//
        
void Return_a_Book(){
	
	
	          cout<<"\n\n\n";
			  
		      cout<<"\n\n\t\t\t\t\t\t\t\t\t     \" RETURN A BOOK \"\n";
		      cout<<"\t\t\t\t\t\t\t\t\t       -------------\n\n";
	
	
	int Flag_1=0;
	char character;
	
	string Reg_Number;
	string ISBN;
	string Reg_Number_1;
	string ISBN_1;
	
	string Title;
	string First_Author;
	string Second_Author;
	string Publisher;
	string Price;
	string Pages;
	long double Copies_In_Library;
	
	
	char First_Name[50];
	char Last_Name[50];
	char City[50];
	char Department[50];
	string CGPA;
	
	
	cout<<"\n\n";
			  
	cout<<"Enter Reg. Number of the Student that want to \'Return\' a Book : ";
	cin>>Reg_Number_1;
	cout<<"\n\n\n";
	
	
	
	{
		
		ifstream STUDENTS_1("STUDENTS.txt",ios::in);
		
		while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			
			if( Reg_Number.compare(Reg_Number_1)==0 ){
				
				Flag_1=1;

				break;
				
			}
			
		}
		
		
		STUDENTS_1.close();
		
	}
	
	
	if( Flag_1==0 ){
		
		
		cout<<"\n\n\t\t\t\t\t\t\t   \" Sorry \'NO\' any Record Available with this Reg. Number \"";    		
		return;
		
		
	}
	
	
	
	
	Flag_1=0;
	
	
	cout<<"\n\n\n\n";
	
    cout<<"Enter ISBN of the Book that the Student want to \'Return\' : ";
	cin>>ISBN_1;
	cout<<"\n\n\n";
	
	{
		
		ifstream BOOK_1("BOOKS.txt",ios::in);
		
		while( BOOK_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			  	if( ISBN_1.compare(ISBN)==0 ){
			  		
			  		Flag_1=1;
			  		
			  		break;
			  		
				  }
			  	
		}
			  
		BOOK_1.close();
		
    }
			  
	
	if( Flag_1==0 ){
		
		cout<<"\n\n\t\t\t\t\t\t\t    \" Sorry \'NO\' any Book Available with this ISBN \"";
		return;
		
	}
	
	
	
	Flag_1=0;
	
	{
		
		ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
		
		while( ISSUE_BOOKS>>Reg_Number>>ISBN ){
			
			
			if( ( Reg_Number.compare(Reg_Number_1)==0 )  &&  ( ISBN.compare(ISBN_1)==0 ) ){
				
				Flag_1=1;
				
				break;
				
			}
			
		}
		
		ISSUE_BOOKS.close();
		
	}
	
	
	if( Flag_1==1 ){
		
		{
			
			ofstream COPY_1( "COPY.txt",ios::out );
			ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
			
			while( ISSUE_BOOKS>>Reg_Number>>ISBN ){
			
			
			   if( !(( Reg_Number.compare(Reg_Number_1)==0 )  &&  ( ISBN.compare(ISBN_1)==0 )) ){
				
			      	COPY_1<<Reg_Number<<"\t\t"<<ISBN<<"\n";
				
			   }
			
		    }
		    
		    COPY_1.close();
		    ISSUE_BOOKS.close();
			
		}
		
		
		{
			
			ifstream COPY_1( "COPY.txt",ios::in );
			ofstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::out);
			
			while( COPY_1.get( character ) ){
				
				ISSUE_BOOKS<<character;
				
			}
			
			COPY_1.close();
		    ISSUE_BOOKS.close();
			
		}
		
		
		{
			
			ofstream COPY_1( "COPY.txt",ios::out );
			COPY_1.close();
			
		}
		
		
		{
		
		     {
		     	
		     	ifstream BOOK_1("BOOKS.txt",ios::in);
		     	ofstream COPY_1("COPY.txt",ios::out);
		
		     	while( BOOK_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			  	    if( ISBN_1.compare(ISBN)==0 ){
			  		
			  		     Copies_In_Library++;
			  		
				      }
				       
				      COPY_1<<left<<setw(12)<<ISBN<<"\t\t"<<setw(60)<<Title<<"\t\t"<<setw(15)<<First_Author<<"\t\t"<<setw(15)<<Second_Author<<"\t\t"<<setw(15)<<Publisher<<"\t\t"<<setw(7)<<Price<<"\t\t"<<setw(7)<<Pages<<"\t\t"<<setw(7)<<Copies_In_Library<<"\n";
			  
		     	}
			  
		     	BOOK_1.close();
		     	COPY_1.close();
		     	
			 }
			 
			 
			 {
			 	
			 	ofstream BOOK_1("BOOKS.txt",ios::out);
		     	ifstream COPY_1("COPY.txt",ios::in);
		     	
		     	
		     	while(COPY_1.get(character)){
		     		
		     		BOOK_1<<character;
		     		
				 }
		     	
		     	
		     	BOOK_1.close();
		     	COPY_1.close();
			 	
			 }
			 
			 
			 {
			 	
			 	ofstream COPY_1("COPY.txt",ios::out);
			 	COPY_1.close();
			 	
			 }
			 
		
        }
		
		
		cout<<"\n\n\n\n\t\t\t\t\t\t\t\t       \" Book \'Return\' Successfully. \"\n\n";
		
	}
	else{
		
		cout<<"\n\n\n\t\t\t\t\t\t\t     \" Sorry this Book \'Not\' Issued on this Reg. Number \"\n\n";
		
	}
	
	
	
}

                      //****************************************************//
                              //***Which Books Issued to a Student**// 
                    //****************************************************//
            

void Books_Issued_to_a_Student(){
	
	
	  	      
	int Flag_1=0;	      
	
	string Reg_Number;
	string Reg_Number_1;
	char First_Name[50];
	char Last_Name[50];
	char City[50];
	char Department[50];
	string CGPA;
	
	
	string ISBN;
	string ISBN_1;
	string Title;
	string First_Author;
	string Second_Author;
	string Publisher;
	string Price;
	string Pages;
	string Copies_In_Library;
	
	cout<<"\n\n\n\t\t\t\t";
	
	cout<<"Enter Registration Number of the Student  : ";
	
	cin>>Reg_Number_1;
	
	cout<<"\n\n\n";
	
	
	{
				
				cout<<"\n";
			
			    ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			    
			    while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			    	
			    	// checking either student is of our univeristy or not //
			    	
			    	if( Reg_Number_1.compare(Reg_Number)==0 ){
			    		
			    		Flag_1=1;
			    		
			    		break;
			    		
					}
			    	
				}
			    
			    
			    STUDENTS_1.close();
				
	}
			
	if( Flag_1==0 ){
				
		cout<<"\n\n\t\t\tSorry No record is available with this Registration Number\n\n";;
		cout<<"\n\n\t\t\tFirst enter the record of Student then Proceed\n\n";    		
	    return;
				
	}
	
	Flag_1=0;
	
	{
		// checking either any Book is issued to this student or Not // 
		
		ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
		
		while( ISSUE_BOOKS>>Reg_Number>>ISBN ){
			
			// Registration_Number_1 which he enterd first //
			
			
			if( Reg_Number.compare(Reg_Number_1)==0 ){
				
				Flag_1=1;
				
				break;
				
			}
			
		}
		
		ISSUE_BOOKS.close();
		
	}
	
	if( Flag_1==0 ){
				
		cout<<"\n\n\t\t\tSory no Book is Issued on this Registration Number\n\n\n";    		
	    return;
				
	}
	
	cout<<"\n\t\tComplete Student Details\n";
	cout<<"\n\n";
	
			    		
	
	{
				
			
			
			    ifstream STUDENTS_1("STUDENTS.txt",ios::in);
			    
			    while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			    	
			    	if( Reg_Number_1.compare(Reg_Number)==0 ){
			    		
			    		
			    		cout<<"\t\tRegistration Number  :  ";
			    		cout<<Reg_Number<<"\n";
						cout<<"\t\tFirst Name           :  ";
			    		cout<<First_Name<<"\n";
			    		cout<<"\t\tLast Name            :  ";
			    		cout<<Last_Name<<"\n";
			    		cout<<"\t\tCity                 :  ";
			    		cout<<City<<"\n";
			    		cout<<"\t\tDepartment Name      :  ";
			    		cout<<Department<<"\n";
			    		cout<<"\t\tCGPA                 :  ";
			    		cout<<CGPA<<"\n\n";
			    		
			    		
					}
			    	
				}
			    
			    
			    STUDENTS_1.close();
				
	}
	
	
	system("pause");
	cout<<"\n\n";
	cout<<"\t\tIssued Books Details\n";
	cout<<"\t\t--------------------\n\n";
	
			
	
	{
		
		ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
	    
		ifstream BOOKS_1("BOOKS.txt",ios::in);
	    
	    while( ISSUE_BOOKS>>Reg_Number>>ISBN_1 ){
	    	
	    		// Registration_Number_1 which he enterd first //
	    	    // Reg_Number get from File // 
			
			
			if( (Reg_Number.compare(Reg_Number_1)==0) ){
				
				BOOKS_1.clear();
				BOOKS_1.seekg(0);
				
				while( BOOKS_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			  	  if( ISBN_1.compare(ISBN)==0 ){
			  	  	
			  	  	system("pause");
			  	  	cout<<endl;
			  		
			  		   cout<<"ISBN                        :    ";
			           cout<<ISBN<<"\n";
			           cout<<"Book Title                  :    ";
			           cout<<Title<<"\n";
			           cout<<"First Author Name           :    ";
			           cout<<First_Author<<"\n";
			           cout<<"Second Author Name          :    ";
			           cout<<Second_Author<<"\n";
			           cout<<"Publisher Name              :    ";
			           cout<<Publisher<<"\n";
			           cout<<"Book Price                  :    ";
			           cout<<Price<<"\n";
			           cout<<"Number of Pages             :    ";
			           cout<<Pages<<"\n\n";
			  		   
			  		   
				    }
			  	
			    }
				
			}
			
		}
		
		ISSUE_BOOKS.close();
		BOOKS_1.close();
		
	}
	
	
	
}

                      //****************************************************//
                              //***How many Students Issued same Book**// 
                    //****************************************************//
                    

void Students_Issued_same_Book(){
	

	int Flag_1=0;	      
	
	string Reg_Number;
	string Reg_Number_1;
	char First_Name[50];
	char Last_Name[50];
	char City[50];
	char Department[50];
	string CGPA;
	
	
	string ISBN;
	string ISBN_1;
	string Title;
	string First_Author;
	string Second_Author;
	string Publisher;
	string Price;
	string Pages;
	string Copies_In_Library;
	
	
	cout<<"Enter ISBN of the Book : ";
	cin>>ISBN_1;
	cout<<"\n";
	
	
	{
				
				cout<<"\n";
			
			    ifstream BOOKS_1("BOOKS.txt",ios::in);
			    
			    while( BOOKS_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			// checking either book is of our univeristy libraray or Not //   	
			
			  	  if( ISBN_1.compare(ISBN)==0 ){
			  	  	
			  		   Flag_1=1;
			  		   
				    }
			  	
			    }
			    
			    
			    BOOKS_1.close();
				
	}
			
	if( Flag_1==0 ){
				
		cout<<"\n\n\t\t\tSory No Book is available with entered ISBN of Book";
		   		
	    return;
				
	}
	
	Flag_1=0;
	
	{
		
		// check either Book is issued to any student or Not // 
		
		ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
		
		while( ISSUE_BOOKS>>Reg_Number>>ISBN ){
			
			
			if( ISBN.compare(ISBN_1)==0 ){
				
				Flag_1=1;
				
				break;
				
			}
			
		}
		
		ISSUE_BOOKS.close();
		
	}
	
	if( Flag_1==0 ){
				
		cout<<"\n\n\t\t\tSory this Book is not Issued to any Student\n";    		
	    return;
				
	}
	
	system("pause");
	cout<<"\n";
	cout<<"Complete Book Details\n";
	cout<<"---------------------\n\n";
	
	
	{
				
			
				cout<<"\n";
			
			    ifstream BOOKS_1("BOOKS.txt",ios::in);
			    
			    while( BOOKS_1>>ISBN>>Title>>First_Author>>Second_Author>>Publisher>>Price>>Pages>>Copies_In_Library ){
			  	
			  	  if( ISBN_1.compare(ISBN)==0 ){
			  	  	
			  		   
			  		   cout<<"ISBN                        :    ";
			           cout<<ISBN<<"\n";
			           cout<<"Book Title                  :    ";
			           cout<<Title<<"\n";
			           cout<<"First Author Name           :    ";
			           cout<<First_Author<<"\n";
			           cout<<"Second Author Name          :    ";
			           cout<<Second_Author<<"\n";
			           cout<<"Publisher Name              :    ";
			           cout<<Publisher<<"\n";
			           cout<<"Book Price                  :    ";
			           cout<<Price<<"\n";
			           cout<<"Number of Pages             :    ";
			           cout<<Pages<<"\n";
			  		   
			  		   
				    }
			  	
			    }
			    
			    
			    BOOKS_1.close();
				
	}
	cout<<"\n";
	system("pause");
	cout<<"\n\n";
	
	cout<<"Students Details that Issued this Book\n";
	cout<<"--------------------------------------\n\n";
	
			
	{
		
		
		ifstream ISSUE_BOOKS("ISSUE_BOOKS.txt",ios::in);
	    ifstream STUDENTS_1("STUDENTS.txt",ios::in);
	    
	    while( ISSUE_BOOKS>>Reg_Number_1>>ISBN ){
			
			
			if( (ISBN.compare(ISBN_1)==0) ){
				
				STUDENTS_1.clear();
				STUDENTS_1.seekg(0);
				
				while( STUDENTS_1>>Reg_Number>>First_Name>>Last_Name>>City>>Department>>CGPA ){
			  	
			  	  if( Reg_Number_1.compare(Reg_Number)==0 ){
			  	  	
			  			system("pause");
			  			cout<<endl;
			  		    cout<<"Reg. Number    :    ";
			    		cout<<Reg_Number<<"\n";
						cout<<"First Name     :    ";
			    		cout<<First_Name<<"\n";
			    		cout<<"Last Name      :    ";
			    		cout<<Last_Name<<"\n";
			    		cout<<"City           :    ";
			    		cout<<City<<"\n";
			    		cout<<"Department     :    ";
			    		cout<<Department<<"\n";
			    		cout<<"CGPA           :    ";
			    		cout<<CGPA<<"\n\n\n";
			  		   
			  		   
				    }
			  	
			    }
				
			}
			
		}
		
		ISSUE_BOOKS.close();
		STUDENTS_1.close();
		
	}
	
}




void Menu(){
	
	cout<<"\n";
	cout<<"\t\t\t\t\t\t\t\t----------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t| \"Library Management System Project\"  |\n";
	cout<<"\t\t\t\t\t\t\t\t----------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t__________________________________________________________ \n\n";
	cout<<"\t\t\t\t\t\t\t|   1   =============> Enter the Record of Student        |\n\n";
	cout<<"\t\t\t\t\t\t\t|   2   =============> Display the Record of Students     |\n\n";
	cout<<"\t\t\t\t\t\t\t|   3   =============> Search Record of Student           |\n\n";
	cout<<"\t\t\t\t\t\t\t|   4   =============> Update Record of Student           |\n\n";
	cout<<"\t\t\t\t\t\t\t|   5   =============> Delete Record of Student           |\n\n";
	cout<<"\t\t\t\t\t\t\t|                                                         |\n\n";
	cout<<"\t\t\t\t\t\t\t|   6   =============> Enter the Record of Book           |\n\n";
	cout<<"\t\t\t\t\t\t\t|   7   =============> Display the Record of Books        |\n\n";
	cout<<"\t\t\t\t\t\t\t|   8   =============> Search the Record of Book          |\n\n";
	cout<<"\t\t\t\t\t\t\t|   9   =============> Update Record of Book              |\n\n";
	cout<<"\t\t\t\t\t\t\t|   10  =============> Delete Record of Book              |\n\n";
	cout<<"\t\t\t\t\t\t\t|                                                         |\n\n";
	cout<<"\t\t\t\t\t\t\t|   11  =============> Issue a Book to a Student          |\n\n";
	cout<<"\t\t\t\t\t\t\t|   12  =============> Return Book to Library             |\n\n";
	cout<<"\t\t\t\t\t\t\t|                                                         |\n\n";
	cout<<"\t\t\t\t\t\t\t|   13  =============> Which Books Issued to a Student    |\n\n";
	cout<<"\t\t\t\t\t\t\t|   14  =============> How many Students Issued same Book |\n\n";
	cout<<"\t\t\t\t\t\t\t|   0   =============> EXIT                               |\n";
	cout<<"\t\t\t\t\t\t\t|_________________________________________________________|\n\n";

	
}



//                                  MAIN FUNCTION

int main(){
	
	
	BOOK *Book=new BOOK;
	STUDENT *Student=new STUDENT;
	
	
	int Choice_1=0;
	
	while(1){
		
		
		Menu();
		
		cout<<"Enter Your Choice : ";
		cin>>Choice_1;
		
		switch(Choice_1){
			
			case 1:
				system("cls");
				
				Student->Add_Record();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 2:
				system("cls");
				
				Student->Display();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 3:
				system("cls");
				
				Student->Search();
				
				cout<<"\n\n\n\n";
				system("pause");
				break;
				
			case 4:
				system("cls");
				
				Student->Update();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 5:
				system("cls");
				
				Student->Delete();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 6:
				system("cls");
				
				Book->Add_Record();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 7:
				system("cls");
				
				Book->Display();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 8:
				system("cls");
				
				Book->Search();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 9:
				system("cls");
				
				Book->Update();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 10:
				system("cls");
				
				Book->Delete();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 11:
				system("cls");
				
				Issue_a_Book();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 12:
				system("cls");
				
				Return_a_Book();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 13:
				system("cls");
				
				Books_Issued_to_a_Student();
				
				cout<<"\n\n\n";
				system("pause");
				break;
				
			case 14:
				system("cls");
				
				Students_Issued_same_Book();
				
				cout<<"\n\n\n";
				system("pause");
				break;	
				
			case 0:
				system("cls");
				
				break;
				
			default:
				system("cls");
				
				cout<<"\n\n\t\t\t\t\t\t\t       \" Invalid Choice Select Only a Valid Choice. \"\n";
				cout<<"\t\t\t\t\t\t\t\t ------------------------------------------   \n\n";
				
				system("pause");
			
		}
		
		if( Choice_1==0 ){
			
			cout<<"\n\n\t\t\t\t\t\t\t\t\t         \" EXIT \"\n";
			cout<<"\t\t\t\t\t\t\t\t\t           ---- \n\n";
	
			break;
			
		}
		
		
		system("cls");
		
	}

	
	
return 0;	
	
}

