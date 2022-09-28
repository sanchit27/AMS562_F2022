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

    //Bio variables
    string bio;
   

    //Taking user input for name data
    cout<<"Enter title for the name \n";
    cin>>title;
    cout<<"Enter your first name \n";
    cin>>firstname;
    cout<<"Enter your last name \n";
    cin>>lastname;
   

    //Taking user input for DOB data
    cout<<"Enter your DOB month \n";
    cin>>month;
    cout<<"Enter your DOB date \n";
    cin>>date;
    cout<<"Enter your DOB year \n";
    cin>>year;


  
    cout << "Please enter your Bio: \n";
    cin.ignore();
    getline(cin, bio);
    
  
    //Display name details
    cout<<"\n"<<title<<" "<<firstname<<" "<<lastname<<endl;
    //Display DOB details
    cout<<"\t DOB:"<<month<<"/"<<date<<"/"<<year<<endl;

    //Display Bio details
    cout<<"\t BIO:"<<bio<<endl;

    return 0;
}