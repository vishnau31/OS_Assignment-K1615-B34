#include<stdio.h>
int main()
{
	double tm;  //defining Time to service a page fault of modified page;
    double tum; //defining Time to service a page fault of empty or modified page;
	double mat; //defining Memory Access Time
	double eat; //defining Effective Access Time 
	double rom; //defining Rate of occurence of pages that will be modified
    double p; //The maximum acceptable page-fault rate
    char tq;
    printf("Enter the Time it takes to service the page fault of modified page\n");
    scanf("%lf",&tm);
    printf("In nano seconds(type 'n') or milliseconds(type 'm')");
    scanf("%s",&tq);
    if(tq=='m')
    	tm=tm*1000000;
    printf("Enter the Time it takes to service the page fault of empty or unmodified page\n");
    scanf("%lf",&tum);
    printf("In nano seconds(type 'n') or milliseconds(type 'm')");
    scanf("%s",&tq);
    if(tq=='m')
    	tum=tum*1000000;
    printf("Enter the Memory Access Time\n");
    scanf("%lf",&mat);
    printf("In nano seconds(type 'n') or milliseconds(type 'm')");
    scanf("%s",&tq);
    if(tq=='m')
    	mat=mat*1000000;
    printf("Enter the Rate of occurence of modified pages\n");
    scanf("%lf",&rom);
    rom=rom/100;
    printf("Enter the Total Effective Access Time");
    scanf("%lf",&eat);
    printf("In nano seconds(type 'n') or milliseconds(type 'm')");
    scanf("%s",&tq);
    if(tq=='m')
    	eat=eat*1000000;
    double num=eat-mat;
    double denom=(rom*tm)+((1-rom)*tum)-mat;
    p=num/denom;
    printf("The total page-fault rate is %lf percent \n",(p*100));
} 
