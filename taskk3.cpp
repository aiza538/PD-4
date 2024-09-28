#include<iostream>
using namespace std;
void ticketDiscount(string name , float price);
main()
{
  string name;
  float price;
  cout<<"Enter the country's name :";
  cin>>name;
  cout<<"Enter the ticket price in dollars:";
  cin>>price;
  ticketDiscount(name , price);
}
void ticketDiscount(string name , float price)
{ 
  float ticketDiscount;
  if(name == "Pakistan")
  {
 	ticketDiscount = price - (price * 0.05);
	cout<<"Final ticket price after discount:"<<ticketDiscount;
  }
  else if(name == "Ireland")
  {
  	ticketDiscount = price - (price * 0.1);
	cout<<"Final ticket price after discount:"<<ticketDiscount;
  } 
  else if(name == "India"){
 	ticketDiscount = price - (price * 0.2);
	cout<<"Final ticket price after discount:"<<ticketDiscount;
  }
  else if(name == "England"){
        ticketDiscount = price - (price * 0.3);
	cout<<"Final ticket price after discount:"<<ticketDiscount;
  }
  else if(name == "Canada"){
	ticketDiscount = price - (price * 0.45);
	cout<<"Final ticket price after discount:"<<ticketDiscount;
  }
}
    