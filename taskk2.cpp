#include<iostream>
using namespace std;
void trueOrfalse(string name);


main()
{
  string name;
  cout<<"Enter true or false";
  cin>>name;
  trueOrfalse(name);
  trueOrfalse(name);  
  
  
}
void trueOrfalse(string name)
{
  if (name =="true")
  { 
     cout<<"false";
  }else{
	cout<<"false"<<name;
       }
}

	