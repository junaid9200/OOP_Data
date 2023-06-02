#include<iostream>
using namespace std;

class fav_songs
{
private:
    int size;
    string *arr;

public:
	//parametrized constructor.
    fav_songs(int s, string *a)
    {
        size=s;
        arr= new string[size];
        for(int i=0; i<size; i++)
            arr[i]=a[i];
    }

    // copy constructor
    fav_songs(fav_songs &s)
    {
        cout<<"copy constructor called"<<endl;
        size=s.size;
        arr=s.arr;
        for (int i = 0; i <s.size; i++)
            arr[i]=s.arr[i];
    }

    //adding new song to list
    void add_song(string addnew)
    {
        string *temp=new string[size + 1];
        for(int i=0; i<size; i++)
            temp[i]=arr[i];
        temp[size] = addnew;
        delete[] arr;
        arr = temp;
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
            cout<<"Song not found!";
        }

        else
        {
            string *temp= new string [size - 1];
            int num=0;
            for(int i=0; i<size; i++)
            {
                if(i != index)
                {
                    temp[num]=arr[i];
                    num++;
                }
            }

            delete[] arr;
            arr=temp;
            size--;
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
        }
        else
        {
            cout<<"Song not found!";
        }
    }

    // printing songs
    void printsongs()
    {
        cout<<"Printing all songs:"<<endl;
        for(int i=0; i<size; i++)
            cout<<arr[i]<<endl;;
    }

    // default constructor deleting array at end
    ~fav_songs()
    {
        cout<<"destructor calling.........";
        delete[] arr;
    }    
    
};
int main()
{
    
    int size;
    cout<<"Enter no of songs you want to enter: ";
    cin>>size;

    string song[size];

    for(int i=0; i<size; i++)
    {
        cout<<"Enter name of new song: ";
        cin>> song[i];
    }

    fav_songs s1(size,song);

    // s1.printsongs();

    cout<<"----------Menu---------"<<endl;
    cout<<"1. Add a song"<<endl;
    cout<<"2. Delete a song"<<endl;
    cout<<"3. Update a song"<<endl;
    cout<<"4. Print all songs"<<endl;
    cout<<"5. Exit"<<endl;

    int choice;
    cout<<"Enter your choice:";
    cin>>choice;

    while( choice == 1 || choice == 2 || choice == 3 || choice == 4 )
    {
        if(choice == 1)
        {
    string additional;
    cout<<"Adding a song........."<<endl;

    cout<<"Enter new song name:";
    cin>>additional;

    s1.add_song(additional);
    // s1.printsongs();
        }

        else if(choice == 2)
        {
            string deletesong;
    cout<<"Deleting a song...."<<endl;
    cout<<"enter song name for delition:";
    cin>>deletesong;

    s1.delete_song(deletesong);
    // s1.printsongs();
        }

        else if(choice ==3)
        {
            string updatesong;
    string oldsong;
    cout<<"Updating a song"<<endl;
    cout<<"Enter old song name:";
    cin>>oldsong;
    cout<<"Enter new song name:";
    cin>>updatesong;

    s1.updatesong(oldsong,updatesong);
    // s1.printsongs();
        }

        else if(choice == 4)
        {
            cout<<"Printing all songs"<<endl;
            s1.printsongs();
        }

        else if(choice == 5)
        {
            break;
        }

        else{
            cout<<"Invalid  choice!";
        }



    cout<<"----------Menu---------"<<endl;
    cout<<"1. Add a song"<<endl;
    cout<<"2. Delete a song"<<endl;
    cout<<"3. Update a song"<<endl;
    cout<<"4. Print all songs"<<endl;
    cout<<"5. Exit"<<endl;

    cout<<"Enter choice:";
    cin>>choice;
    }

    return 0;
}
