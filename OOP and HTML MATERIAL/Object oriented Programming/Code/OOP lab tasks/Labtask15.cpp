#include<iostream>
using namespace std;

class fav_songs
{
private:
    int size;
    string *arr;

public:
	//parametrized constructor.
    fav_songs(int s, string *a)  // here s is size and a is arr.
    {
        size=s;
        arr= new string[size];
        for(int i=0; i<size; i++)
            arr[i]=a[i];
    }

    // copy constructor
    fav_songs(const fav_songs &s)
    {
        cout<<"copy constructor called"<<endl;
        size=s.size;
        arr=new string [size];
        for (int i = 0; i <size; i++)
            arr[i]=s.arr[i];
    }
    //default destructor deleting array at end.
    ~fav_songs()
    {
        cout<<"destructor called"<<endl;
        delete[] arr;
    }    

    //adding new song to list
    void add_song(string addnew)
    {
        string *add=new string[size + 1];
        for(int i=0; i<size; i++)
            add[i]=arr[i];
        add[size] = addnew;
        delete[] arr;
        arr = add;
        size++;
    }

    // deleting song 
    void delete_song(string song)
    {
        int index=-1;
        for(int i=0; i<size; i++)
        {
            if(arr[i] == song)
            {
                index=i;
                break;
            }

        }

        if(index == -1)
        {
             cout<<"Song not found! :("<<endl;
        }

        else
        {
        	
            string *subst= new string [size - 1];
            int num=0;
            for(int i=0; i<size; i++)
            {
                if(i != index)
                {
                    subst[num]=arr[i];
                    num++;
                }
            }

            delete[] arr;
            arr=subst;
            size--;
            cout<<"Deleted Sucessfully :)"<<endl;
        }
        
    }

    // updating song 
    void updatesong(string oldsong, string newsong)
    {
        int index=-1;
        for(int i=0; i<size; i++)
        {
            if(arr[i] == oldsong)
            {
                index=i;
            }
        }

        if(index != -1)
        {
            arr[index]=newsong;
              cout<<"Updated Sucessfully :)"<<endl;
        }
        else
        {
            cout<<"Song not found! :("<<endl;
        }
    }

    // printing songs
    void printsongs()
    {
        for(int i=0; i<size; i++)
            cout<<arr[i]<<endl;;
    }

    
    
};

int main()
{
    cout<<"Welcome :)"<<endl<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
    int size,choice;
    cout<<"Enter no of songs you want to enter: ";
    cin>>size;
    string song[size];

    for(int i=0; i<size; i++)
    {
        cout<<"Enter name of new song: ";
        cin>> song[i];
    }
    //parametrized constructor calling.
    fav_songs s1(size,song);
    //Do While condition.
    do
    {
    cout<<endl;
    cout<<"^^^^^--(Menu)--^^^^^"<<endl;
    cout<<"1. Add a song"<<endl;
    cout<<"2. Delete a song"<<endl;
    cout<<"3. Update a song"<<endl;
    cout<<"4. Print all songs"<<endl;
    cout<<"5. Backup Of Songs"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<endl;
   
    cout<<"Enter your choice:";
    cin>>choice;
    cout<<endl;

     // adding a song.
    if(choice == 1)
        {
    string additional;
    cout<<"Adding a song...."<<endl;

    cout<<"Enter new song name:";
    cin>>additional;

    s1.add_song(additional);
    cout<<"Added Sucessfully :)"<<endl;
        }
      //deleting a song.
    else if(choice == 2)
        {
            string deletesong;
    cout<<"Deleting a song...."<<endl;
    cout<<"Enter song name to delete:";
    cin>>deletesong;
    s1.delete_song(deletesong);
        }
      //updating a song.
    else if(choice ==3)
        {
            string updatesong;
    string oldsong;
    cout<<"Updating a song...."<<endl;
    cout<<"Enter old song name:";
    cin>>oldsong;
    cout<<"Enter new song name:";
    cin>>updatesong;

    s1.updatesong(oldsong,updatesong);
        }
     //printing all songs.
    else if(choice == 4)
        {
            cout<<"Printing all songs...."<<endl;
            s1.printsongs();
        }
    //creating backup.
    else if(choice == 5)
    {
    	cout<<"Backup Created......"<<endl;
    	fav_songs backup=s1;
    	backup.printsongs();
	}
     //exit the function.
    else if(choice == 6)
        {
        	cout<<"Thanks :)"<<endl;
            break;
        }

    else{
            cout<<"Invalid  choice! :("<<endl;
        }

}
 while( choice == 1 || choice == 2 || choice == 3 || choice == 4 );
}
