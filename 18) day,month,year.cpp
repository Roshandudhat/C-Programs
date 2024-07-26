//program 18:- write a program to Day,month & Year.
#include<stdio.h>
#include<conio.h>
enum Day{sun=1,mon,thu,wed,thr,fri,sat};

enum Month {jan=1,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec};

enum Year{a=1,b,c,d,e,f,g,h};

int main()
{
	enum Day d1;
	enum Month m1;
	enum Year y1;
	d1=fri;
	m1=oct;
	y1=g;
	printf("\n DAY:%d",d1);
	printf("\n MONTH:%d",m1);
	printf("\n YEAR:%d",y1);
	return 0; 
}
