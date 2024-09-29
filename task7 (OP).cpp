#include<iostream>
#include<windows.h>
using namespace std;

void printMaze();
void movePlayer(int x ,int y);
void gotoxy(int x,int y);

main()
{

 int x=15, y=1;
 system("cls");
 printMaze();
 movePlayer(x,y);
 while(true)
 {
   movePlayer(x,y);
   y = y + 1;
   if(y == 12)
   {
     while(true)
     {
       movePlayer(x,y);
       y = y - 1;
       if( y == 1)
      {
        break;
      }
      }
     }
    }
}
void movePlayer(int x, int y)
{
  gotoxy(x,y);
  cout<<"P";
  Sleep(100);
  gotoxy(x,y);
  cout<<" ";
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