#include <iostream>
#include <cmath>
#include<cstdlib>
#include<type_traits>

using namespace std;
int main(int argv, char *argc[])
{
    if(argv<2){
        cerr<<"Expected 1 input for h"<<endl;
        cerr<<"usage: ./<executable name> <h>"<<endl;
        return 1;

    }
    float h=atof(argc[1]);
    float derivative= (sin(M_PI/4+h)-sin(M_PI/4))/h;
    float centreDifference=(sin(M_PI/4+h)-sin(M_PI/4-h))/(2*h);
    float errorValuederivative= cos(M_PI/4)-derivative;
    float errorValuecentreDifference= cos(M_PI/4)-centreDifference;

    cout<<"The value of h entered by the user is "<<argc[1]<<endl;
    cout<<"Error Value using derivative formula"<<errorValuederivative<<endl;
    cout<<"Error Value using centreDifference formula"<<errorValuecentreDifference<<endl;
   
    return 0;
}