#include <iostream>
#include <cmath>
using namespace std;


int main() {
  
  //Declare Variables
   double number;
   double square = pow(number, 2);
   double cubed = pow(number, 3);
   double divided = number / 2;

   //Take input of the number 
   cout<<"Please enter your number: "<<endl;
   cin>>number;

   //Now Calculate the Square of the number
   cout<<"The square  of the number is : "<<square<<endl;
   cout<<"The cube of the number is : "<<cubed<<endl;
   cout<<"The number divided by 2 is : "<<divided<<endl;
   
  

  return 0;
} 