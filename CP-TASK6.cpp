#include<iostream>
using namespace std;

void longestTime(int, int);

int main()
{
  
   int hours;
   cout<<"Enter number of hours: ";
   cin>> hours;
 
   int minutes;
   cout<<"Enter number of minutes: ";
   cin>> minutes;
  
   longestTime(hours,minutes);
}

void longestTime(int hours, int minutes)
{
  int comparison;
  comparison = hours*60;
  if (comparison > minutes)
  {
    cout<<hours;
  }
  if (minutes>comparison)
  {
   cout<<minutes;
  }
}