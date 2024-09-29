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
    moveplayer(x, y);
}
void moveplayer(int x ,int y)
{
  gotoxy(x,y);
  cout<< " P " ;
  Sleep(200);
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
