#include<iostream>
#include<windows.h>
using namespace std;

void printMaze();
void gotoxy(int x,int y);
void moveplayer(int x,int y);

int main()
{
    int x =5 , y = 5;
    system("cls");
    printMaze();
    while(true)
    {
    moveplayer(x, y);
    x = x+1;
    if( x==39)
     {   
        x=3;
      }

    }
}
void moveplayer(int x ,int y)
{
  gotoxy(x,y);
  cout<< " P " ;
  Sleep(100);
  gotoxy(x, y);
  cout<< " " ;
}

void printMaze()
{
   cout<<" ########################################## " <<endl;
   cout<<" ##                                      ## "<<endl;
   cout<<" ##                                      ## " <<endl ;
   cout<<" ##                                      ## " <<endl;
   cout<<" ##                                      ## " <<endl;
   cout<<" ##                                      ## " <<endl;
   cout<<" ##                                      ## " <<endl;
   cout<<" ##                                      ## " <<endl;
   cout<<" ##                                      ## " <<endl;
   cout<<" ##                                      ## " <<endl;
   cout<<" ##                                      ## " <<endl;
   cout<<" ##                                      ## " <<endl;
   cout<<" ##                                      ## " <<endl;
   cout<<" ########################################## " <<endl;
}
void gotoxy(int x, int y)
{
  
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
