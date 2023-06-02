#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class StockItems{
	public:
	string name;
	int quantity;
	int serial_number;
	int price=0;
	int sale=0;
	int amount_sold=0;
	void set_name(string name){
		this->name = name;
	}
	void set_amount_sold(int amount_sold){
		this->amount_sold = amount_sold;
	}	
	void set_sale(int sale){
		this->sale = sale;
	}
	void set_quantity(int quantity){
		this->quantity = quantity;
	}
	void set_serial_number(int serial_number){
		this->serial_number = serial_number;
	}
	void set_price(int price){
		this->price = price;
	}
	string get_name(){
		return name;
	}
	int get_quantity(){
		return quantity;
	}
	int get_amount_sold(){
		return amount_sold;
	}	
	int get_sale(){
		return sale;
	}	
	int get_serial_number(){
		return serial_number;
	}
	int get_price(){
		return price;
	}
	void edit_item(){
			cout << "Enter (New/Previous) Name For Item: ";
			cin >> name;
			cout << "Enter (New/Previous) Quantity For Item: ";
			cin >> quantity;
			cout << "Enter (New/Previous) Serial-Number of Item: ";
			cin >> serial_number;
			cout << "\nProduct Information Edited Successfully !\n" <<endl;
	}	
	void display(){
		cout << "Name: "<<name <<"    Quantity: "<<quantity <<"    Serial-Number: "<<serial_number <<"    Price(Rs): "<<price<<endl;
	}
	void display_sale(){
		cout << "Name: "<<name <<"    Remaining-Quantity: "<<quantity <<"    Serial-Number: "<<serial_number <<"    Price Of Each (Rs): "<<price <<"    Amount-Sold: "<<amount_sold<<"    Total-Sale: "<<sale<<endl;
	}				
};
	
int main() {
	int search_serial;
	int revenue = 0; // total sale 
	int price;
	string name;
	int quantity;
	int serial_number;
	int number_of_items = 1;
	int size = 0;
    string username = "admin";
    string password = "admin";
    string file = "login.txt";
    ofstream Data("Data.txt"); // file for saving data 
    bool changed = false;
    int choice;
    StockItems *pointer_to_stocks = new StockItems[number_of_items];
    ifstream inFile(file);
    if (inFile.good()) {
        inFile >> username >> password >> changed;
        
    }
    inFile.close();
	cout << "------------------------------------------------------------" <<endl;
    cout << "Welcome to Computer-City Inventory Managment System Program!" <<endl;
    cout << "------------------------------------------------------------" <<endl;

    while (true) {
        string inputUsername;
        string inputPassword;
        cout << "Please Enter Your Username: ";
        cin >> inputUsername;
        cout << "Please Enter Your Password: ";
        cin >>inputPassword;

        if (inputUsername == username && inputPassword == password) {
        	cout << "\n-----------------" <<endl;
            cout << "Login successful!" <<endl;
            cout << "-----------------" <<endl;
            break;
        }
        else {
        	cout << "\n-------------------------------------------------" <<endl;
            cout << "Incorrect username or password. Please try again." <<endl;
            cout << "-------------------------------------------------" <<endl;
        }
    }

    if (changed) {
        cout << "You must change your username and password upon login. Please change username and password." <<endl;
        username = "";
        password = "";
    }

    while (true) {
        if (username == "" && password == "") {
            cout << "Please Enter Your New Username: ";
            cin >> username;
            cout << "Please Enter Your New Password: ";
            cin >> password;
          	cout << "\n-------------------------------------------" <<endl;
            cout << "Username and Password Changed Successfully!" <<endl;
            cout << "-------------------------------------------\n" <<endl;
            changed = true;
        }

        ofstream outFile(file);
        outFile << username << " " << password << " " << changed << endl;
        outFile.close();
		cout << "\n********" <<endl;
        cout << "| HOME |" << endl;
        cout << "********\n" <<endl;
        cout << "1. Press to Enter Menu."<<endl;
		cout << "2. Press to Change Username and Password."<<endl;
		cout << "3. Press to Exit."<<endl;
		cout << "\nYour Input: ";
        cin >> choice;
        if (choice == 1 ) {
        	int choice1; // menu choice 
        	int choice2; // submenu choice (price)
			int choice3; // submenu choice (billing) 
			int choice4; // submenu choice (edit)
			int choice5; // submenu choice (remove)
			int matched_serial = 0; // submenu choice edit 
        	int amount_sold;
        	cout << "\n********" <<endl;
            cout << "| MENU |" << endl;
            cout << "********\n" <<endl;
            cout << "Press 1  Add Products To Stock." <<endl;
            cout << "Press 2  Add Price Of Products." <<endl;
            cout << "Press 3  Generate Bill." <<endl;
            cout << "Press 4  Display Current Stock." <<endl;
            cout << "Press 5  Generate Total Sale." <<endl;
            cout << "Press 6  Search Item In Stock." <<endl;
            cout << "Press 7  Edit Stock." <<endl;
            cout << "Press 8  Remove Product From Stocks List." <<endl;
            cout << "Press 9  Create Backup And Save To File." <<endl;
            cout << "Press 10 Create Backup And Save To Excel-File." <<endl;
            cout << "Press 11 Log-out / Home Screen." <<endl;
            cout << "\nYour Input: ";
            cin >> choice1;
            while (choice1 < 0 || choice1 > 11){
            	cout << "\n-----------------------------------" <<endl;
            	cout << "Incorrect Input ! Please try again." <<endl;
            	cout << "-----------------------------------" <<endl;
            	cout << "\nYour Input: ";
            	cin >> choice1;	
			}
			while (choice1 > 0 && choice1 < 11){
				if(choice1 == 1){
					int input1 = 0;
					do{
						cout << "\n-----------------------" <<endl;
						cout << "Adding Product To stock" <<endl;
						cout << "-----------------------\n" <<endl;
						cout << "Enter Name of Item: ";
						cin >> name;
						cout << "Enter Quantity of Item: ";
						cin >> quantity;
						cout << "Enter Serial-Number of Item: ";
						cin >> serial_number;
						pointer_to_stocks[size].set_name(name);
						pointer_to_stocks[size].set_quantity(quantity);
						pointer_to_stocks[size].set_serial_number(serial_number);
						cout << "\nProduct Added Successfully !\n" <<endl;
						size++;
						if (size == number_of_items) {
							// Resize the array to double its current size
							StockItems *new_pointer_to_stocks = new StockItems[number_of_items * 2];
							for (int i = 0; i < size; i++) {
								new_pointer_to_stocks[i].name = pointer_to_stocks[i].name;
								new_pointer_to_stocks[i].quantity = pointer_to_stocks[i].quantity;
								new_pointer_to_stocks[i].serial_number = pointer_to_stocks[i].serial_number;
							}
							delete[] pointer_to_stocks;
							pointer_to_stocks = new_pointer_to_stocks;
							number_of_items *= 2;
						}
						cout << "Do You Want To Add Another Item To Stock?" <<endl;
						cout << "Press 1 To Add." <<endl;
						cout << "Press 2 For Home-Screen." <<endl;
						cout << "You Input: ";
						cin >> input1;
						while(input1<1 || input1>2){
							cout <<"\n-----------------------------------"<<endl;
							cout <<"Invalid Input ! Please Enter Again."<<endl;
							cout <<"-----------------------------------\n"<<endl;
							cout << "Do You Want To Add Another Item To Stock?" <<endl;
							cout << "Press 1 To Add." <<endl;
							cout << "Press 2 For Home-Screen." <<endl;
							cout << "You Input: ";
							cin >> input1;
						}	
					}
					while(input1==1);
					break;					
				}
				if(choice1 == 2){
					int input2 = 0;
					do{
						cout << "\n----------------------" <<endl;
						cout << "Adding Price Of Products." <<endl;
						cout << "----------------------\n" <<endl;
						for (int i=0 ; i<size ; i++){
							cout << i <<". ";
							pointer_to_stocks[i].display();
						}
						cout << "\nSelect The Item number to Add Price.." <<endl;
						cout << "Your Input: ";
						cin >> choice2;
						if(choice2<0 || choice2>size || choice2==size){
							cout <<"\n-----------------------------------"<<endl;
							cout <<"Invalid Input ! Please Enter Again."<<endl;
							cout <<"-----------------------------------\n"<<endl;
							break;
						}
						cout << "Enter The Price of Item: ";
						cin >> price;
						pointer_to_stocks[choice2].set_price(price);
						cout << "Price Added Succesfully !" <<endl;	
						cout << "\nDo You Want To Add Another Price Of Product?" <<endl;
						cout << "Press 1 To Add." <<endl;
						cout << "Press 2 For Home-Screen." <<endl;
						cout << "You Input: ";
						cin >> input2;
						while(input2<1 || input2>2){
							cout <<"\n-----------------------------------"<<endl;
							cout <<"Invalid Input ! Please Enter Again."<<endl;
							cout <<"-----------------------------------\n"<<endl;
							cout << "Do You Want To Add Another Price Of Product?" <<endl;
							cout << "Press 1 To Add." <<endl;
							cout << "Press 2 For Home-Screen." <<endl;
							cout << "You Input: ";
							cin >> input2;
						}
					}
					while(input2==1);
					break;
				}
				if(choice1 == 3){
					int input3 = 0;
					do{
						cout << "\n---------------" <<endl;
						cout << "Generating Bill" <<endl;
						cout << "---------------\n" <<endl;
						for (int i=0 ; i<size ; i++){
							cout << i <<". ";
							pointer_to_stocks[i].display();
						}
						cout << "\nSelect The Item number..." <<endl;
						cout << "Your Input: ";
						cin >> choice3;
						cout << "Enter The Amount Sold: ";
						cin >> amount_sold;
						if(amount_sold > pointer_to_stocks[choice3].get_quantity() || pointer_to_stocks[choice3].get_price() == 0){
							cout << "You Have Entered Invalid Amount / Price Not Added For Product !"<<endl;
						}
						else{
							pointer_to_stocks[choice3].sale = pointer_to_stocks[choice3].price*amount_sold;
							pointer_to_stocks[choice3].amount_sold = amount_sold;
							pointer_to_stocks[choice3].quantity = pointer_to_stocks[choice3].quantity - amount_sold;
							revenue = revenue + pointer_to_stocks[choice3].sale;   
							cout << "Your Total Bill is: " <<pointer_to_stocks[choice3].sale;
							amount_sold = 0;
						}
						cout << "\n\nDo You Want To Generate Another Bill?" <<endl;
						cout << "Press 1 To Generate another Bill." <<endl;
						cout << "Press 2 For Home-Screen." <<endl;
						cout << "You Input: ";
						cin >> input3;
						while(input3<1 || input3>2){
							cout <<"\n-----------------------------------"<<endl;
							cout <<"Invalid Input ! Please Enter Again."<<endl;
							cout <<"-----------------------------------\n"<<endl;
							cout << "Do You Want To Add Another Price Of Product?" <<endl;
							cout << "Press 1 To Add." <<endl;
							cout << "Press 2 For Home-Screen." <<endl;
							cout << "You Input: ";
							cin >> input3;
						}												
					}
					while(input3==1);
					break;
				}
				if(choice1 == 4){
					cout << "\n------------------------" <<endl;
					cout << "Displaying Current Stock" <<endl;
					cout << "------------------------\n" <<endl;
					for (int i=0 ; i<size ; i++){
						cout << i <<". ";
						pointer_to_stocks[i].display();
					}
					break;
				}
				if(choice1 == 5){
					cout << "\n-------------------" <<endl;
					cout << "Generating Total Sale" <<endl;
					cout << "-------------------\n" <<endl;
					for (int i=0 ; i<size ; i++){
						cout << i <<". ";
						pointer_to_stocks[i].display_sale();
					}
					cout << "Total Sale is: Rs " <<revenue;
					break;
				}
				if(choice1 == 6){
					cout << "\n--------------------" <<endl;
					cout << "Search Item in Stock" <<endl;
					cout << "--------------------\n" <<endl;
					cout << "Enter The Serial Number To Search Item: ";
					cin >> search_serial;
					for (int i=0 ; i<size ;i++){
						if(pointer_to_stocks[i].serial_number == search_serial){
							cout << "\n----------------------" <<endl;
							cout << "Item in Stock Found ! " <<endl;
							cout << "----------------------\n" <<endl;
							pointer_to_stocks[i].display();
						}
					}
					break;					
				}
				if(choice1 == 7){
					int input7 = 0;
					do{
						cout << "\n-------------------------------------------------" <<endl;
						cout << "Select Item Serial-Number For Editing Information" <<endl;
						cout << "-------------------------------------------------\n" <<endl;
						for (int i=0 ; i<size ; i++){
							cout << i <<". ";
							pointer_to_stocks[i].display();
						}
						cout << "Your Input: ";
						cin >> choice4;
						for (int i=0 ; i<size ; i++){
							if(choice4 == pointer_to_stocks[i].serial_number){
								pointer_to_stocks[i].edit_item();
								matched_serial++;	
							}
						}
						if(matched_serial == 0){
							cout << "Invalid Serial-Number No Such Item Found !"<<endl;	
						}
						matched_serial =0;
						cout << "\nDo You Want To Edit Another Item?" <<endl;
						cout << "Press 1 To Edit Another Item." <<endl;
						cout << "Press 2 For Home-Screen." <<endl;
						cout << "You Input: ";
						cin >> input7;
						while(input7<1 || input7>2){
							cout <<"\n-----------------------------------"<<endl;
							cout <<"Invalid Input ! Please Enter Again."<<endl;
							cout <<"-----------------------------------\n"<<endl;
							cout << "Do You Want To Edit Another Item?" <<endl;
							cout << "Press 1 To Edit Another Item." <<endl;
							cout << "Press 2 For Home-Screen." <<endl;
							cout << "You Input: ";
							cin >> input7;
						}	
					}
					while(input7==1);
					break;						
				}
				if (choice1 == 8){
					int input8 = 0;
					do{
						cout << "\n-------------------------" <<endl;
    					cout << "Remove Product From Stock" <<endl;
    					cout << "-------------------------\n" <<endl;
    					if(size == 0){
    						cout <<"No Item In Stock ! Please Add Stock First..." <<endl;
    						break;
						}
    					for (int i=0 ; i<size ; i++){
        					cout << i <<". ";
        					pointer_to_stocks[i].display();
    					}
    					cout << "Enter Item Number to Remove From Stock: ";
    					cin >> choice5;
    					if (choice5 >= 0 && choice5 < size) {
        					for (; choice5 < size - 1; choice5++){
            					pointer_to_stocks[choice5] = pointer_to_stocks[choice5+1];
        					}
        				size--; // Decrease the size of the array
        				cout << "\n--------------------------" <<endl;
        				cout << "Product Removed From Stock" <<endl;
        				cout << "--------------------------\n" <<endl;                    
        					for (int i=0 ; i<size ; i++){
            					cout << i <<". ";
            					pointer_to_stocks[i].display();
        					}
        				}
        				else {
        				cout << "Invalid item number." << endl;
        				break;
    					}
						cout << "\n\nDo You Want To Remove Another Item?" <<endl;
						cout << "Press 1 To Remove Another Item." <<endl;
						cout << "Press 2 For Home-Screen." <<endl;
						cout << "You Input: ";
						cin >> input8;
						while(input8<1 || input8>2){
							cout <<"\n-----------------------------------"<<endl;
							cout <<"Invalid Input ! Please Enter Again."<<endl;
							cout <<"-----------------------------------\n"<<endl;
							cout << "Do You Want To Remove Another Item?" <<endl;
							cout << "Press 1 To Remove Another Item." <<endl;
							cout << "Press 2 For Home-Screen." <<endl;
							cout << "You Input: ";
							cin >> input8;
						}	
					}
					while(input8==1);
    				
    				break;
    			}
				if(choice1 == 9){
					cout << "\n----------------------------------------" <<endl;
					cout << "Creating Backup And Saving Data To File." <<endl;
					cout << "----------------------------------------\n" <<endl;
					for(int i=0 ;i<size; i++){
						Data<<i<<". Name: "<<pointer_to_stocks[i].name<<" Quality: "<<pointer_to_stocks[i].quantity<<" Serial-Number: "<<pointer_to_stocks[i].serial_number<<" Price: "<<pointer_to_stocks[i].price<<" Sale: "<<pointer_to_stocks[i].sale<<" Amount-Sold: "<<pointer_to_stocks[i].amount_sold<<endl;
					}
					Data.close();
					cout << "File Saved ! (File Name: Data , Location Desktop)"<<endl;
					cout << "\n----------------------------------" <<endl;
        			cout << "Data Stored in File Successfully !" <<endl;
        			cout << "----------------------------------\n" <<endl;
					break;
				}
				if(choice1 == 10){
					cout << "\n----------------------" <<endl;
					cout << "Creating Excel Sheet !" <<endl;
					cout << "----------------------\n" <<endl;
					ofstream Data_Excel_sheet;
					Data_Excel_sheet.open("Data_sheet.csv");
					Data_Excel_sheet << "Name,Quantity,Serial-No,Price(Rs),A-Sold,T-Sale" <<endl;
					for(int i=0 ; i<size ;i++){
						Data_Excel_sheet << pointer_to_stocks[i].name <<","<< pointer_to_stocks[i].quantity <<","<< pointer_to_stocks[i].serial_number <<","<< pointer_to_stocks[i].price <<","<< pointer_to_stocks[i].amount_sold <<","<< pointer_to_stocks[i].sale <<endl; 
					}
					Data_Excel_sheet.close();
					cout <<"Data Saved ! You Can Open File In Excel... (File Name: Data_sheet , Location: Desktop)" <<endl;
					break;
				}
				if(choice1 == 11){
					cout << "\n--------------------------" <<endl;
					cout << "Logging-out / Home-Screen." <<endl;
					cout << "--------------------------\n" <<endl;
					break;
				}																																								
			}     
        }
        else if (choice == 2) {
            username = "";
            password = "";
            changed = true;
        }
        else if (choice == 3) {
            break;
        }
        else {
        	cout <<"\n----------------------------------" <<endl;
            cout << "Invalid input ! Please try again." <<endl;
            cout <<"----------------------------------" <<endl;
        }
    }
    return 0;
}

