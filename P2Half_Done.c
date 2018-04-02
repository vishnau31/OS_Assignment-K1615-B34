#include<stdio.h>
int main()
{
	double tm=20000000.0;  //defining Time to service a page fault of modified page;
    double tum=8000000.0; //defining Time to service a page fault of empty or modified page;
	double mat=100; //defining Memory Access Time
	double eat=200; //defining Effective Access Time 
	double rom=0.7; //defining Rate of occurence of pages that will be modified
    double p; //The maximum acceptable page-fault rate
    double num=eat-mat;
    double denom=(rom*tm)+((1-rom)*tum)-mat;
    p=num/denom;
    printf("%lf percent",p*100);
} 