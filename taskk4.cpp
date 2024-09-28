#include<iostream>
using namespace std;
void checkSpeed(int speed);
main()
{
  int speed;
  cout<<"Enter the speed value:";
  cin>>speed;
  checkSpeed(speed);
}
void checkSpeed(int speed)
{
  int checkSpeed;
  if (speed>=100)
  {
      cout<<"Halt...You will be challenged.";
  }else if(speed<=100)
  {
      cout<<"Perfect! You are doing good";
  }
} 	