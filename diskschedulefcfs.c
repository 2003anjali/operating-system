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
    scanf("%d",&initial);
    // logic for FCFS disk scheduling 
    printf("Sequence of request access:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",rq[i]);
        totalheadmoment = totalheadmoment+abs(rq[i]-initial);
        initial = rq[i];
    }
    printf("\nTotal head moment is %d", totalheadmoment);
    return 0;
}

// Enter the number of requests
// 7
// Enter the request sequence
// 82           
// 170
// 43
// 140
// 24
// 16
// 190
// Enter the inital head position
// 50
// Sequence of request access:
// 82 170 43 140 24 16 190 
// Total head moment is 642