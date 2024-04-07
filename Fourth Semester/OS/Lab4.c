#include<stdio.h>
int main()

{
	int n,i,j;
	float bt[20],wt[20],tat[20],avwt=0,avtat=0;
	printf("Enter total number of processes:");
	scanf("%d",&n);

	printf("Enter Process Burst Time\n");
	for(i=0; i<n; i++) {
		printf("P[%d]:",i+1);
		scanf("%f",&bt[i]);
	}

	wt[0]=0;

	for(i=1; i<n; i++) {
		wt[i]=0;
		for(j=0; j<i; j++)
			wt[i]+=bt[j];
	}

	printf("Process Burst Time Waiting Time Turnaround Time\n");

	for(i=0; i<n; i++) {
		tat[i]=bt[i]+wt[i];
		avwt+=wt[i];
		avtat+=tat[i];
		printf("%d\t\t%.0f\t\t%.0f\t\t%.0f\n",i+1,bt[i],wt[i],tat[i]);
	}

	avwt/=i;
	avtat/=i;
	printf("Average Waiting Time:%.2f",avwt);
	printf("\nAverage Turnaround Time:%.2f",avtat);

	return 0;
}
