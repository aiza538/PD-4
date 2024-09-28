#include<iostream>
#include<windows.h>
using namespace std;
void printMenu();
void calculateAggregate(string nameStd1 , string nameStd2 , float matricMarks1 , float matricMarks2 , float interMarks1 ,float interMarks2 , float ecatMarksStd1 , float ecatMarksStd2);
void compareMarks(string nameStd1 , float ecatMarksStd1 , string nameStd2 , float ecatMarksStd2);

main()
{
   system("cls");
   printMenu();
   string nameStd1;
   string nameStd2;
   float matricMarks1;
   float matricMarks2;
   float interMarks1;
   float interMarks2;
   float ecatMarksStd1;
   float ecatMarksStd2;
   cout<<"Enter first name:";
   cin>>nameStd1;
   cout<<"Enter second name:";
   cin>>nameStd2;
   cout<<"Enter first matric marks:";
   cin>>matricMarks1;
   cout<<"Enter second matric marks:";
   cin>>matricMarks2;
   cout<<"Enter first inter marks:";
   cin>>interMarks1;
   cout<<"Enter second inter marks:";
   cin>>interMarks2;
   cout<<"Enter the first ecat marks:";
   cin>>ecatMarksStd1;
   cout<<"Enter the second ecat marks:";
   cin>>ecatMarksStd2;
   calculateAggregate(nameStd1 , nameStd2 , matricMarks1 , matricMarks2 , interMarks1 , interMarks2 , ecatMarksStd1 , ecatMarksStd2);
   compareMarks( nameStd1 , ecatMarksStd1 , nameStd2 , ecatMarksStd2);
         
}

void calculateAggregate(string nameStd1 , string nameStd2 , float matricMarks1 , float matricMarks2 , float interMarks1 , float interMarks2 , float ecatMarksStd1 , float ecatMarksStd2)
{
	float aggregate1;
   	float aggregate2;
	aggregate1 = (((matricMarks1/1100)*0.3)+((interMarks1/550)*0.3)+((ecatMarksStd1/400)*0.4)*100);
  	cout<<"Name:"<<nameStd1;
        cout<<"Aggregate for"<<nameStd1<<"is"<<aggregate1<<endl;
        cout<<""<<endl;
        aggregate2 = (((matricMarks2/1100)*0.3)+((interMarks2/550)*0.3)+((ecatMarksStd2/400)*0.4)*100);
        cout<<"Name:"<<nameStd2;
        cout<<"Aggregate for"<<nameStd2<<"is"<<aggregate2<<endl;
        cout<<""<<endl;
}

void compareMarks(string nameStd1 , float ecatMarksStd1 , string nameStd2 , float ecatMarksStd2)
{
 	if(ecatMarksStd1>ecatMarksStd2)
        {
	      cout<<"Roll no 1"<<nameStd1<<endl;
        }
	else
	{
	      cout<<"Roll no 1"<<nameStd2<<endl;
	}
}

void printMenu()
{
	cout<<"*****************************************************************************************"<<endl;
	cout<<"                                                                                         "<<endl;
        cout<<"# # # # ### # # ###   ##  ###  ###  # #        #  ##  #  #  ###   ##   ##  ###    ##  # #"<<endl;
        cout<<"# # ###  #  # # #    #     #    #   # #       # # # # ####   #   #    #     #    #  # ###"<<endl;
        cout<<"# # ###  #  # # ###   ##   #    #   # #       ### # # #  #   #    ##   ##   #    #  # ###"<<endl;
        cout<<"# # ###  #  # # #      #   #    #    #        # # # # #  #   #     #    #   #    #  # ###"<<endl;
        cout<<"### # # ###  #  ###  ##   ###   #    #        # # ##  #  #  ###  ##   ##   ###    ##  # #"<<endl;
        cout<<"                                                                                         "<<endl;
        cout<<"# #  #  # #  #   ##   ###   # #  ###  # #  ###        ##   # #  ##  ###  ###  # #        "<<endl;
        cout<<"### # # ### # # #  #  #     ###  #    ###   #        #     # # #     #   #    ###        "<<endl;
        cout<<"# # ### ### ### #     ###   # #  ###  ###   #         ##    #   ##   #   ###  ###        "<<endl;
  	cout<<"# # # # ### # # # ##  #     # #  #    ###   #          #    #    #   #   #    # #        "<<endl;
        cout<<"# # # # # # # #  ##   ###   # #  ###  # #   #        ##     #  ##    #   ###  # #        "<<endl;
        cout<<"                                                                                         "<<endl;
        cout<<"*****************************************************************************************"<<endl;
}                                       

	
	
