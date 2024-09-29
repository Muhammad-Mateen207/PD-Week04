#include<iostream>
using namespace std;

void let_H();
void let_A();
void let_S();
void let_N();

int main()
{
   let_H();
   let_A();
   let_S();
   let_S();
   let_A();
   let_N();
}

void let_H() {
    cout << "#   #" << endl;
    cout << "#   #" << endl;
    cout << "#####" << endl;
    cout << "#   #" << endl;
    cout << "#   #" << endl;
}

void let_A() {
    cout << "  #  " << endl;
    cout << " # # " << endl;
    cout << "#####" << endl;
    cout << "#   #" << endl;
    cout << "#   #" << endl;
}

void let_S() {
    cout << " #### " << endl;
    cout << "#    #" << endl;
    cout << " #### " << endl;
    cout << "     #" << endl;
    cout << " #### " << endl;
}

void let_N() {
    cout << "#   #" << endl;
    cout << "##  #" << endl;
    cout << "# # #" << endl;
    cout << "#  ##" << endl;
    cout << "#   #" << endl;
}
