#include<iostream>
int main()
{
    //Name variables
    std::string title;
    std::string firstname;
    std::string lastname;

    //DOB variables
    std::string month;
    std::string date;
    std::string year;

    //Bio variables
    std::string bio;
    
    //Taking user input for name data
    std::cout<<"Enter title for the name \n";
    std::cin>>title;
    std::cout<<"Enter your first name \n";
    std::cin>>firstname;
    std::cout<<"Enter your last name \n";
    std::cin>>lastname;
   

    //Taking user input for DOB data
    std::cout<<"Enter your DOB month \n";
    std::cin>>month;
    std::cout<<"Enter your DOB date \n";
    std::cin>>date;
    std::cout<<"Enter your DOB year \n";
    std::cin>>year;


  
    std::cout << "Please enter your Bio: \n";
    std::cin.ignore();
    getline(std::cin, bio);
    
  
    //Display name details
    std::cout<<"\n"<<title<<" "<<firstname<<" "<<lastname<<std::endl;
    //Display DOB details
    std::cout<<"\t DOB:"<<month<<"\\"<<date<<"\\"<<year<<std::endl;

    //Display Bio details
    std::cout<<"\t BIO:"<<bio<<std::endl;

    return 0;
}