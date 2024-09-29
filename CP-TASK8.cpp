#include<iostream>
using namespace std;

void pet(int);

int main()
{

 int holidays;
 cout<<"Enter holidays: ";
 cin>> holidays;
 
 pet(holidays);

} 

void pet(int holidays)
{
   int work_days;
   work_days = 365 - holidays;
  
   int game_time;
   game_time = (work_days*63 + holidays*127);
 
   int difference;
   difference = 30000 - game_time;
   
   int hours;
   hours = difference/60;
   
    int minutes;
    minutes = difference%60;
  

    if (game_time > 30000)
    { 
    cout<<"Tom will run away"<<endl;
    cout<< (-1) * hours<<" hours and " << (-1) * minutes<< " minutes for play" ;
    }
   else
    {
     cout<<"Tom sleeps well"<<endl;
     cout<<hours<<" hours and " << minutes<< " minutes less for play" ;
    }
     
   
}
   
  

   
  
