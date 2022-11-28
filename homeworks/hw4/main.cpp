#include <cmath>
#include "array.hpp"
#include <iostream>

int main()
{
Array arr1(4);
std::cout << "Array with no elements:"<<std::endl; 
arr1.print();

std::cout << "Array with no elements size"<<std::endl; 
std::cout<<arr1.size()<<std::endl;

Array arr2(2,5);
std::cout << "Array with elements:"<<std::endl; 
arr2.print();

Array arr3(3,7);
std::cout << "Array with elements after copy:"<<std::endl; 
arr3.copy(arr2);
arr3.print();

std::cout << "Array with elements at index 0:"<<std::endl; 
std::cout<<arr3.at(0)<<std::endl;

arr3.resize(1,true);
std::cout << "Array with elements after resize:"<<std::endl; 
arr3.print();

std::cout << "Array after norm: "<<std::endl; 
std::cout<<arr2.norm()<<std::endl;

std::cout << "Array after sum:"<<std::endl; 
std::cout<<arr2.sum()<<std::endl;

std::cout << "Array max:"<<std::endl; 
std::cout<<arr2.max()<<std::endl;

std::cout << "Array min with no element:"<<std::endl; 
std::cout<<arr1.min()<<std::endl;

std::cout << "Array dot product:"<<std::endl; 
std::cout<<arr2.dot(arr3)<<std::endl;

std::cout << "Array substraction:"<<std::endl; 
Array arr4;
arr4=arr2.sub(arr3);
arr4.print();

std::cout << "Array operator:"<<std::endl; 
arr4.operator[](0);
arr4.print();

std::cout << "Array operator= :"<<std::endl; 
arr4.operator=(arr3);
arr4.print();

std::cout << "Array operator+ :"<<std::endl; 
Array arr5;
arr5=operator+(arr4,arr3);
arr5.print();

std::cout << "Array operator- :"<<std::endl; 
Array arr6;
arr6=operator+(arr5,arr4);
arr6.print();








return 0;

}