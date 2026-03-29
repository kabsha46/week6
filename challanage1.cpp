#include<iostream>
using namespace std;
 int main( )
{
    //login system
    string username;
    string username, password;
    bool login = false;
    for(int i=0; i<3; i++)
    {
        cout << "login attempt" << i+1 <<endl;
    }
    cout <<"enter username : ";
       cin >> username;
username[i] = username;
    cout << "enter password";
    cin >> password;
    if (username=="admin" && password=="1234")
    {
        cout << "login successful\n";
        login = true;

    }
    else { 
        cout<< "wrong username and password";
    }
// student and course data
string studentname [3];
int studentage[3];
int studentcount = 0;
string courses[3];
int coursescount = 0;
int choice;
do{
    cout << "\n =========  MENU  =============\n";
    cout << "1. Add student name \n";
    cout << "2. View Students \n";
    cout << "3. Add Courses\n";
    cout << "4. View Courses\n";
    cout << "5.Exit\n";
    cout << "enter choice : ";
    cin >> choice;
    if(choice == 1){
        if (studentcount <3){
            cout << "enter name: ";
            cin >> studentname[studentcount];
            cout<< "enter age : ";
            cin >> studentage[studentcount];
            studentcount++;
            cout << "student added \n";
        }
        else {
            cout << "student limit reached\n";
        }
    }
    else if(choice == 2){
        if(studentcount == 0){
            cout << "no student\n";
        }else {
            for(int i=0; i< studentcount; i++){
                cout << studentname[i] <<" - "<< studentages[i]<<endl;              
            }
        }
    }
    else if(choice == 3){
        if (coursescount < 3){
            cout << "enter course name: ";
            cin>> courses[coursescount];
            coursescount++;
            cout << "course added \n";
        }else {
            cout << "course limit reached\n";
        }
    }
    else if(choice == 4){
        if ( coursescount == 0){
            cout << "no courses \n";

        }else{
            for (int i=0; i< coursescount; i++)
                 cout << courses[i] << endl;
        }
    }
}
else if (choice == 5 ){
    cout << "programm ended\n";

}else if (!(choice >=1 && choice <= 5)){
    cout << "invalid choice\n";

}
while (choice != 5) 
 return0;
}
