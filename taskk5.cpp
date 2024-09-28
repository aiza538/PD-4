#include<iostream>
using namespace std;
void possibleBonas(int a, int b);
main()
{
  int a;
  int b;
  cout<<"Enter your position:";
  cin>>a;
  cout<<"Enter your friend's position:";
  cin>>b;
  possibleBonas(a,b);
}
void possibleBonas(int a , int b)
{
  int bonas;
  if (a==b)
  {
       	cout<<"true";
  }
  else
  {
   	cout<<"false";
  }
}