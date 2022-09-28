#include<iostream>
using namespace std;
int main()
{
    //Name variables
    string title;
    string firstname;
    string lastname;

    //DOB variables
    string month;
    string date;
    string year;

    cout<<"Enter title for the name \n";
    cin>>title;
    cout<<"Enter your first name \n";
    cin>>firstname;
     cout<<"Enter your last name \n";
    cin>>lastname;
    //cout<<"\n";


    cout<<"Enter your DOB month \n";
    cin>>month;
    cout<<"Enter your DOB date \n";
    cin>>date;
    cout<<"Enter your DOB year \n";
    cin>>year;

    cout<<"\n"<<title<<" "<<firstname<<" "<<lastname<<"\n";
    cout<<"\t DOB:"<<month<<"/"<<date<<"/"<<year<<endl;

    return 0;
}