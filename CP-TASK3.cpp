#include<iostream>
using namespace std;

void airline_rate(string, float);

int main()
{
  string name;
  cout<<"Enter name of your country: ";
  cin>> name;

  float price;
  cout<<"Enter price of ticket : $" ;
  cin>> price;
 
 
  airline_rate(name,price);
  
}

void airline_rate(string name, float price)
{
 if (name == "Pakistan")
  {
   float discount;
   discount = price - (price * .05);
   cout<<"Final ticket price after discount is: " <<discount;
  }
    
 if (name == "Ireland")
  {
   float discount;
   discount =price - (price * .10);
   cout<<"Final ticket price after discount is: " <<discount;
  }
    
  if (name == "India")
  {
   float discount;
   discount =price - ( price * .20);
   cout<<"Final ticket price after discount is: " <<discount;
  }
    
  if (name == "England")
  {
   float discount;
   discount = price - (price * .30);
   cout<<"Final ticket price after discount is: " <<discount;
  }
    
  if (name == "Canada")
  {
   float discount;
   discount =price -(price * .45);
   cout<<"Final ticket price after discount is: " <<discount;
  }
    
}