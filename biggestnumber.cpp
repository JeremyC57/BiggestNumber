//Author:
#include<iostream>

int main()
{
  //declare variables here
  int firstNum = 0;
  int secondNum = 0;
  int biggestNum = 0;


  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
 
  
  std::cin>> firstNum;
  std::cout<<"Please enter another whole number:\n";
 
  
 
  //get second input using std::cin>> again with a second variable
  std::cin>> secondNum;
 
  
  //determine if first or second is bigger and store that in a third variable
  if( firstNum >secondNum)
  {
        biggestNum = firstNum;
  }
  else
  {
          biggestNum = secondNum;
  }

  std::cout<<"Of those two numbers, the biggest is: "<< biggestNum ;
  //print out the variable representing the biggest number

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
