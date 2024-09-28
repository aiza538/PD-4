#include<iostream>
using namespace std;
void TpChecker(int people , int tp);
main()
{
  int people;
  int tp;
  cout<<"Enter the number of people in the household:";
  cin>>people;
  cout<<"Enter the number of rolls of TP:";
  cin>>tp;
  TpChecker(people , tp);
}
void TpChecker(int people , int tp)
{
  int sheets;
  int days;
  int totalTp;
  int usedTp;
  totalTp = tp * 500;
  usedTp = people *57;
  days = totalTp / usedTp;
  if (days>=14)
  {
 	cout<<"Your Tp will only lasts "<<days<<"days , no need to panic";
  }
  else {
         cout<<"Your Tp will only lasts"<<days<<"days , buy more.";
  }
} 