#include<iostream>
#include<windows.h>
using namespace std;

void getoxy(int x , int y)
{
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
}

int main()
{
   system("cls");
   cout<<"Test";

   getoxy(8,8);
   cout<<"H"<<endl;
   getoxy(8,9);
   cout<<"A"<<endl;
   getoxy(8,10);
   cout<<"S"<<endl;
   getoxy(8,11);
   cout<<"S"<<endl;
   getoxy(8,12);
   cout<<"A"<<endl;
   getoxy(8,13);
   cout<<"N"<<endl;
 
   return 0;
}