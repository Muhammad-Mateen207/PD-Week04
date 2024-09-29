#include<iostream>
using namespace std;

void printMenu();
void calculateAggregate(string, float, float,float);
void compareMarks(string, int , string ,int);

int main()
{
  
  printMenu();
  string name;
  cout<<"Enter your name: " ;
  cin>> name;

  float matric_marks;
  cout<<"Enter your matric marks out of 1100: ";
  cin>> matric_marks;
  
  float Fsc_marks;
  cout<<"Enter your FSc marks out of 550: ";
  cin>> Fsc_marks;
  
  float Ecat_marks;
  cout<<"Enter your Ecat marks out of 400: ";
  cin>> Ecat_marks;
  calculateAggregate(name, matric_marks, Fsc_marks, Ecat_marks);

  string namestd1;
  cout<<"Enter First student's name: ";
  cin>> namestd1;
  
  int Ecatmarks_std1;
  cout<<"Enter First student's Ecat marks: ";
  cin>> Ecatmarks_std1;
 
  string namestd2;
  cout<<"Enter Second student's name: ";
  cin>> namestd2;

  int Ecatmarks_std2;
  cout<<"Enter Second student's Ecat marks: ";
  cin>> Ecatmarks_std2;
  compareMarks(namestd1, Ecatmarks_std1,namestd2,Ecatmarks_std2 );
  
}

void printMenu()
{
cout<<"  ##       ##   ########  #########           ##           ##     ##    ##   ######   #####    ########       "<<endl;
cout<<"  ##       ##   ##           ##               ##         ##  ##   ##    ##  ##    ##  ##   ##  ##              "<<endl;
cout<<"  ##       ##   ##           ##               ##        ##    ##  ##    ##  ##    ##  ##   ##  ##              " <<endl;
cout<<"  ##       ##   ########     ##               ##        ########  ########  ##    ##  #####    ########         " <<endl;
cout<<"  ##       ##   ##           ##               ##        ##    ##  ##    ##  ##    ##  ## ##    ##               " <<endl;
cout<<"  ##       ##   ##           ##               ##        ##    ##  ##    ##  ##    ##  ##  ##   ##               " <<endl;
cout<<"   #########    ########     ##               ########  ##    ##  ##    ##   ######   ##   ##  ########         "<<endl;
}
void calculateAggregate(string name, float matric_marks, float Fsc_marks, float Ecat_marks)
{
 float total_aggregate;
 total_aggregate = (matric_marks/1100 * .30) + (Fsc_marks/550 * 30) + (Ecat_marks/400 * 40);
 cout<<"Your Final Aggregate is: "<<total_aggregate<<endl;
}
void compareMarks(string namestd1, int Ecatmarks_std1 , string namestd2, int Ecatmarks_std2)
{
   if (Ecatmarks_std1 > Ecatmarks_std2)
     { 
     cout<<"Roll number 1 is " << namestd1 <<endl;
     cout<<"Roll number 2 is " << namestd2;
     }
   else
     {
     cout<<"Roll no 1 is "<<namestd2<<endl;
     cout<<"Roll number 1 is " << namestd1;
     }
     
}


