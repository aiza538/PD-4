#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int x , int y);
void movepatrol(int x , int y);

main()
{
  	int x = 5, y = 5;
 	system("cls");
	printmaze();
	while(true)
	{
	   movepatrol(x,y);
	   x = x + 1;
	   if(x==21)
	   {
	          x = 5;
	   }
	}
}
 
void movepatrol(int x , int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(100);
	gotoxy(x,y);
	cout<<" ";
}
void printmaze()
{
	cout<<"######################"<<endl;
	cout<<"#                    #"<<endl;
 	cout<<"#                    #"<<endl;
	cout<<"#                    #"<<endl;
	cout<<"#                    #"<<endl;
  	cout<<"#                    #"<<endl;
	cout<<"#                    #"<<endl;
	cout<<"#                    #"<<endl;
	cout<<"######################"<<endl;
}

void gotoxy(int x , int y)
{
 	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}