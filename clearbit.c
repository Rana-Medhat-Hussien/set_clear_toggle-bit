#include <stdio.h>
int main (){
     int num , bitnum ; 
     printf ("enter the number= ");
     scanf("%d",&num);
     printf("Enter the bit number= ");
     scanf("%d",&bitnum);
     num=(num&(~(1<<bitnum)));
	 printf("The result is %d",num);
	return 0;	
}