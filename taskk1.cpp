#include<iostream>
#include<windows.h>
using namespace std;
void numbers(int num1 , int num2);
void gotoxy(int x , int y);

main()
{
   int num1;
   int num2;
   cout<<"Enter the first number";
   cin>>num1;
   cout<<"Enter the second number";
   cin>>num2;
   system("cls");
   numbers(num1 , num2);
   while(true)
   {
    	numbers(num1 , num2);
	num1 == num2;
	if(num1 == num2)
	{ 
 	     cout<<"true";
	}else{
	     cout<<"false";
	}
   }
}
void numbers(int num1 , int num2)
{
  cout<<"numbers"<<num1 , num2;
}
void gotoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
}