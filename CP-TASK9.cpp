#include<iostream>
using namespace std;

void calculation(int,int);

int main()
{
  int people;
  cout<<"Number of People in the household: ";
  cin>>people;

 int Tp;
 cout<<"Number of rolls of Tp: ";
 cin>> Tp;
 
 calculation(people, Tp);
 
}

void calculation(int people,int Tp)
{
  int calculate;
  calculate = (Tp*500) / (people*57);
  cout<<"Your Tp will last "<<calculate<<" days,";
 
  if (calculate>14)
    {  
     cout<<" No need to panic !";
    }
  else
  {
   cout<<" buy more!";
  }
}
  