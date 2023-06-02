#include <iostream>
using namespace std;

class LibraryItem {
protected:
    string title;
    string producer;
    int identifier;

public:
    LibraryItem(const string& title, const string& producer, int identifier)
        : title(title), producer(producer), identifier(identifier) {}

    string getTitle() const {
        return title;
    }

   string getProducer() const {
        return producer;
    }

    int getIdentifier() const {
        return identifier;
    }

    virtual void displayDetails() const = 0;
};

class Book : public LibraryItem {
private:
    int numPages;

public:
    Book(const string& title, const string& producer, int identifier, int numPages)
        : LibraryItem(title, producer, identifier), numPages(numPages) {}

    int getNumPages() const {
        return numPages;
    }

    void displayDetails() const override {
        cout << "Book Details:\n";
        cout << "Title: " << title << "\n";
        cout << "Producer: " << producer << "\n";
        cout << "Identifier: " << identifier << "\n";
        cout << "Number of Pages: " << numPages << "\n";
    }
};

class DVD : public LibraryItem {
private:
    int duration;

public:
    DVD(const string& title, const string& producer, int identifier, int duration)
        : LibraryItem(title, producer, identifier), duration(duration) {}

    int getDuration() const {
        return duration;
    }

    void displayDetails() const override {
        cout << "DVD Details:\n";
        cout << "Title: " << title << "\n";
        cout << "Producer: " << producer << "\n";
        cout << "Identifier: " << identifier << "\n";
        cout << "Duration (minutes): " << duration << "\n";
    }
};

class Magazine : public LibraryItem {
private:
    int issueNumber;

public:
    Magazine(const string& title, const string& producer, int identifier, int issueNumber)
        : LibraryItem(title, producer, identifier), issueNumber(issueNumber) {}

    int getIssueNumber() const {
        return issueNumber;
    }

    void displayDetails() const override {
        cout << "Magazine Details:\n";
        cout << "Title: " << title << "\n";
        cout << "Producer: " << producer << "\n";
        cout << "Identifier: " << identifier << "\n";
        cout << "Issue Number: " << issueNumber << "\n";
    }
};

int main() {
	int check;
	do{
    cout<<"Main menu :"<<endl;
	cout<<"\t\t\1Library item detail(1)"<<endl<<"\t\t\1DVD detail(2)"<<endl<<"\t\t\1Magzines Details(3)"<<endl<<"\t\t\1logout(4)"<<endl;
		cout<<"Enter input : "<<endl;
	cin>>check;
    // Create library items
    Book book("The Great Gatsby", "F. Scott Fitzgerald", 1001, 180);
    DVD dvd("Inception", "Christopher Nolan", 2001, 148);
    Magazine magazine("National Geographic", "National Geographic Society", 3001, 123);


    // Display item details
    
    if(check==1)
   {
    cout << "Library Item Details:\n";
    book.displayDetails();
    cout << "\n";} 
     if(check==2)
   {
    dvd.displayDetails();
    cout << "\n";}
     if(check==3)
   {
    magazine.displayDetails();
  }}
  while (check!=4);
}

