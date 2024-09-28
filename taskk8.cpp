#include<iostream>
using namespace std;
void tomPet(int holidays);
main()
{
  int holidays;
  cout<<"Enter the holidays:";
  cin>>holidays;
  tomPet(holidays);
}
void tomPet(int holidays)
{
  int workingDays; 
  int hour;
  int min;
  int differ;
  int games;
  workingDays = 365 - holidays;
  games = workingDays * 63 + holidays * 127;
  differ = 30,000 - games;
  hour = differ/60;
  min = (differ)% 60;
  if ( differ >0)
  {
   	cout<<"Tom sleeps well"<<hour<<"hours"<<min<<"less min to play";
  }
  else
  {
  	cout<<"Tom will run away"<<hour*-1<<"hours"<<(min*-1)<<"min to play";
  }
}