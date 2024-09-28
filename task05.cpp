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
  getoxy(16,16);
  cout<<"AIZA NADEEM"<<endl;

  return 0;
}
 