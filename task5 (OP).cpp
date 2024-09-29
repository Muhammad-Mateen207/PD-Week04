#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int main()
{
  system("cls");
 
  gotoxy(87,25);
  cout<<"MUHAMMAD MATEEN";
 
  return 0;
}