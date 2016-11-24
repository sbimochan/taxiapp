#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//Destination Data:
float airport[8]={0,9.5,15.1,13,9.3,8,4.1,11.6};
float ason[8]={9,0,0.55,4.5,3.9,5.1,10.6,2.6};
float birhospital[8]={9,0.5,0,4.7,4.4,5.1,10.6,3.1};
float kalanki[8]={14.1,7.6,5.2,0,10.4,8.2,15.7,8.3};
float maharajgunj[8]={12.2,3.9,5.1,9,0,7.2,13.7,2.4};
float newbaneshwor[8]={5.5,4.9,5.1,8.2,7.2,0,9.6,12};
float madhyapurthimi[8]={4.1,11.2,10.7,14.7,9.6,13.9,0,16.2};
float samakhusi[8]={9,2.9,4.1,8.5,9.3,9,14.9,0};
//-----------------------------------------------------------------------------------//
//----------varaiable----------------------//
float p[100];
float km;
int n;
char places[100][20];
//-------------------------------------------//
//______________________________________________________________________FUNCTIONS______________________________________________________________________//
int chkdata(int);
float showdata();
float getdata();
float calculate();
//__________________________________________________________________________________________________________________________________________//
float showdata()
{
	cout<<"\n\t------------------------------------------------------------";
	cout<<"\n\t|-------------------------Places---------------------------|";
	cout<<"\n\t|\t1)Airport\t\t\t5)Maharajgunj\t   |\n\t|\t2)Ason\t\t\t\t6)New Baneswor\t   |\n\t|\t3)Bir Hospital\t\t\t7)Madhyapur Thimi  |\n\t|\t4)Kalanki\t\t\t8)Samakhusi\t   |";
	cout<<"\n\t------------------------------------------------------------";
}
float getdata()
{
	int i,c;
	
	cout<<"\n\n\n\n\n\tHow many destination inluding your current place:";
	cin>>n;
	cout<<"\n\tEnter the destination According to their index:";
	cout<<"\n\tEnter your current destination :";
	cin>>p[0];
	
	
	for(i=1;i<n;i++)
	{
		top:
		cout<<"\n\tEnter your "<<i<<"th"<<" destination :";
		cin>>p[i];
		c=chkdata(i);
		if(c==1)
		{
			c=0;
			cout<<"\tYou are the same place try again please";
			goto top;
		}
	}
}
int chkdata(int j)
{
	int i,count;
	
		if(p[j]==p[j-1])
		{
			
			
			return 1;
			
		}
	
}
float calculate()
{
	int a,j,x;
	for(j=0;j<n-1;j++)
	{
		x=p[j];
		a=p[j+1]-1;
		switch(x)
		{
				case 1:
			km+=airport[a];
			break;
			
				case 2:
			km+=ason[a];
			break;
			
				case 3:
			km+=birhospital[a];
			break;
			
				case 4:
			km+=kalanki[a];
			break;	
			
				case 5:
			km+=maharajgunj[a];
			break;
			
				case 6:
			km+=newbaneshwor[a];
			break;
			
				case 7:
			km+=madhyapurthimi[a];
			break;
			
				case 8:
			km+=samakhusi[a];
			break;	
		}

	}
}
int main()
{
	float fare;
	showdata();
	getdata();
	calculate();
	//system("cls");
	cout<<"\n\tTotal Distance :"<<km<<"km";
	fare=km*38;
	if(fare<38)
	{
		cout<<"\n\tTotal Taxi fare Rs.38";
	}
	else
	{
	
	cout<<"\n\tTotal Taxi fare Rs.:"<<fare;
	}
	getch();
	return 0;
}
