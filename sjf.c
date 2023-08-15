#include<stdio.h>
#include<string.h>
int main()
{
    int bt[20],at[10],n,i,j,temp,st[10],ft[10],wt[10],tat[10];
    int totwt=0,tottat=0;
    float awt,atat;
    char pn[10][10],t[10];
    printf("Enter the number of process:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter process name, arrival time& burst time:");
        scanf("%s%d%d",pn[i],&at[i],&bt[i]);
    }
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(bt[i]<bt[j])
            {
                temp=at[i];
                at[i]=at[j];
                at[j]=temp;
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
                strcpy(t,pn[i]);
                strcpy(pn[i],pn[j]); 
                strcpy(pn[j],t);
            }
        }
    for(i=0; i<n; i++)
    {
        if(i==0)
        st[i]=at[i];
        else
        st[i]=ft[i-1];
        wt[i]=st[i]-at[i];
        ft[i]=st[i]+bt[i];
        tat[i]=ft[i]-at[i];
        totwt+=wt[i];
        tottat+=tat[i];
    }
    awt=(float)totwt/n;
    atat=(float)tottat/n;
    printf("\nPname\tarrivaltime\tbursttime\twaitingtime\ttatime");
    for(i=0; i<n; i++)
        printf("\n%s\t%5d\t\t%5d\t\t%5d\t\t%5d",pn[i],at[i],bt[i],wt[i],tat[i]);
    printf("\nAverage waiting time is:%f",awt);
    printf("\nAverage turnaroundtime is:%f",atat);
    return 0;
}

// Enter the number of process:4
// Enter process name, arrival time& burst time:1
// 1
// 3
// Enter process name, arrival time& burst time:2
// 2
// 4
// Enter process name, arrival time& burst time:3
// 1
// 2
// Enter process name, arrival time& burst time:4
// 4
// 4

// Pname   arrivaltime     bursttime       waitingtime     tatime
// 3           1               2               0               2
// 1           1               3               2               5
// 2           2               4               4               8
// 4           4               4               6              10
// Average waiting time is:3.000000
// Average turnaroundtime is:6.250000
