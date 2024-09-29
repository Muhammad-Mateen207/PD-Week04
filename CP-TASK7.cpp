#include<iostream>
using namespace std;

void  flowershop(float, float , float);

int main()
{
  
  float Red_Rose;
  cout<<"Red Rose: ";
  cin>> Red_Rose;

  float white_Rose;
  cout<<"White Rose: ";
  cin>> white_Rose;

  float Tulips;
  cout<<"Tulips: ";
  cin>> Tulips;
 
  flowershop(Red_Rose,white_Rose, Tulips);

}

void flowershop(float Red_Rose, float white_Rose, float Tulips)
{
 
   float price_red;
   price_red = Red_Rose * 2;
   cout<<"Red Rose: " << price_red<<endl;
   
   float price_white;
   price_white = white_Rose * 4.10;
   cout<<"Red Rose: " << price_white<<endl;

   float price_tup;
   price_tup = Tulips * 2.5;
   cout<<"Red Rose: " << price_tup<<endl;
 
   float sum;
   sum = price_red + price_white + price_tup;

   if ( sum > 200 )
     { 
       float discount;
       discount = sum - (sum * .20);
       cout<<"Original Price: $" <<sum<<endl;
       cout<<"Price after discount: $" << discount<<endl;
     }
    if ( sum <= 200)
     {
      cout<<"Original Price: $" << sum<<endl;
      cout<<"No discount applied.";
     }

}

