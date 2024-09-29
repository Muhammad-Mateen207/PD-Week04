#include<iostream>
using namespace std;

void Reverse(string);
int main()
{
  string state;
  cout<<"Enter 'true' or 'false': ";
  cin>> state;
  Reverse(state);

}

void Reverse(string state)
{
  if ( state == "true" )
    { 
     cout<<"FALSE";
    }
  else
    cout<<"TRUE";
}
