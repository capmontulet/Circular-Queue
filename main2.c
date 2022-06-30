#include<stdio.h>

int main(void){
	int n=0, value=0, valuesEntered=0,index=0,old=0, buffer[10]={0};
	double sum=0, avg=0;
	printf("Enter the number to be averaged (N): ");
    scanf("%i", &n);
    while(1){
    printf("\nEnter a value: ");
    scanf("%i",&value);
    buffer[index++]=value;
    valuesEntered++;
    index%=10;
    printf("Buffer Contents: ");
    for(int i=0;i<10;i++) {
        printf("%d ", buffer[i]); 
    }
     sum+=value;
    if(valuesEntered<=n){
        
        avg=sum/valuesEntered;
    }else{
        old%=10;
        sum-=buffer[old++];
        avg=sum/n;
    }
    printf("\nNumber of values entered: %i\tAverage over: %i\t\tAverage: %.2f",valuesEntered,n,avg);
    }
	return 0;
}