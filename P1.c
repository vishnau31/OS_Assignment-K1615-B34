#include<stdio.h>
#include<unistd.h>
int main()
{
 int available[4]={1,5,2,0};
 int allocation[5][4]={{0,0,1,2},{1,0,0,0},{1,3,5,4},{0,6,3,2},{0,0,1,4}};
 int max[5][4]={{0,0,1,2},{1,7,5,0},{2,3,5,6},{0,6,5,2},{0,6,5,6}};
 int process[5]={0,0,0,0,0};
 int i,j,k;
 int z=0;
 int total_alloc[4];
 int total_needed[4];
 for(i=0;i<=3;i++)
 {
  total_alloc[i]+=available[i];
 }
 for(i=0;i<=4;i++)
 {
 	for(j=0;j<=3;j++)
 	{
 		total_alloc[j]+=allocation[i][j];
 	}
 }
int flag=0;
 for(i=0;i<=4;i++)
 {
 	for(j=0;j<=3;j++)
 	{
 		if(max[i][j]>total_alloc[j])
 		{
 			flag=1;
 			break;
 		}
 	}
 }
 if(flag==1)
 {
 	printf("IT IS IN DEADLOCK STATE");
 }
 else
 {
  do
  {
   for(i=0;i<=4;i++)
   {
   	if(process[i]==1)
  		continue;
  	int m=0;
    for(j=0;j<=3;j++)
    {
    	if((max[i][j]==allocation[i][j]) || ((max[i][j]-allocation[i][j])<=available[j]))
    	{	
    		m=m+1;
        }
        if(m==4)
        {
         process[i]=1;
    	 printf("THE PROCESS EXECUTED IS %d \n",i);
    	 z++;
    	}
    }
    if(process[i]==1)
    {
     for (k= 0; k<=3;k++)
     {
        available[k]+=allocation[i][k];
     }
    }
   }
 }while(z!=5);
}
}










































































