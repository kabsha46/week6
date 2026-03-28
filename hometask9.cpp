#include<iostream>
using namespace std;

main()
{

    int  n=0;
    string book[100];
    bool borrower[100]={false};
    string name;
    int borrowed[n];
    while(true)
    {
        cout<<"\nLIBARY MANAGEMENT SYSTEM\n";
        cout<<"1. ADD BOOK\n";
        cout<<"2. VIEW BOOKS\n";
        cout<<"3. borrow Book \n";
        cout <<"4. RETURN BOOK \n";
        cout<<"5. EXIT \n";
        int choice ;
        cout <<"enter the choice (1-5):";
        cin>>choice;

        if (choice ==1){
            cout<<"how many books that you want to enter";
            cin >>n;
            cin.ignore();
        cout <<"enter name of "<<n<<"books:\n";
        for(int i =0; i<n; i++)
        {
            getline(cin, book[i]);
            borrowed[i]=false;
        }
        }
        else if( choice==2)
        {

            if (n==0)
            {
                cout<<"no books added yet\n";
                continue;
            }
            cout<<"book in library:\n";
            for(int i=0; i<n; i++)
            {
                cout <<"(Borrowed)";
                else {
                 cout<<"(Available)";

              cout <<endl;   
            }
        }
        else if(choice==3)
        {
            cout<<"enter book name : ";
            cin.ignore();
            getline(cin, name);
    
            bool found=false;
            for(int i=0; i<n; i++)
            {
                if(book[i]==name){
                    if(borrowed[i]){
                        cout<<"book already borrowed\n";

                    }
                    else
                    {
                        borrowed[i]=true;
                        cout<<"you borrowed"<<name<<endl;
                    }
                    found=true;
                    break;
                }
                
            }
            if(!found){
                cout<<"book not found\n";
            }
        }
        else if( choice==4){
            cout<<"enter book name to return: ";
            cin.ignore();
            getline(cin, name);
            bool found=false;
            for(int i=0; i<n; i++)
            {
                if(book[i]==name){
                    if(!borrowed[i]){
                        cout<<"this book was not borrowed\n";

                    }
                    else {
                 borrowed [i]=false;
                 cout<<"book returned\n";
                    }
                    found=true;
                    break;
                }
            }
           if (!found){
                 cout<<"book not found\n";
                  } 
        }
        else if(choice==5){
            cout<<"THANKS FOR VISITTING OUR LIBRARY\n";
            break;
        }
        else{
            cout<<"INVALID CHOICE \n";
        }
    }
}

