#include<iostream>
using namespace std;

void isEqual(int,int);

int main()
{
  int num1;
  cout<<"Enter first number: ";
  cin>> num1;

  int num2;
  cout<<"Enter second number: ";
  cin>> num2;
  
  isEqual(num1,num2);
}
void isEqual(int num1,int num2)
{
  if (num1 == num2)
   { cout<< "TRUE";
   }
  if (num1 != num2)
   { cout<<"FALSE";
   }
}
