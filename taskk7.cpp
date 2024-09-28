#include<iostream>
using namespace std;
void flowerShop (int redRose , int whiteRose , int tulip);
main()
{
   int redRose;
   int whiteRose;
   int tulip;
   cout<<"Enter redRose:";
   cin>>redRose;
   cout<<"Enter whiteRose:";
   cin>>whiteRose;
   cout<<"Enter tulip:";
   cin>>tulip;
   flowerShop(redRose , whiteRose , tulip);
}
void flowerShop (int redRose , int whiteRose , int tulip)
{
   float price;
   price = (redRose*2)+(whiteRose*4.1)+(tulip*2.5);
   if (price>200)
   {
        cout<<"Price after discount"<<price;
   }
   else if (price<200)
   {
        cout<<"price without discount"<<price<<endl;
        cout<<"No discount applied";
   }
}