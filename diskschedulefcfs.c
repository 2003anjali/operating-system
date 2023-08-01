#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rq[100],i,n,totalheadmoment=0,initial;
    printf("Enter the number of requests\n");
    scanf("%d",&n);
    printf("Enter the request sequence\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&rq[i]);
    }
    printf("Enter the inital head position\n");
    scanf("%d",&inital);
    // logic for FCFS disk scheduling 
    printf("Sequence of request access:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",rq[i]);
        totalheadmoment = totalheadmoment+abs(rq[i]-inital);
        inital = rq[i];
    }
    printf("\nTotal head moment is %d", totalheadmoment);
    return 0;
}