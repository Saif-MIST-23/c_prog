#include<stdio.h>
int main()
{
    int n1;
    float sum=0, avg;
    printf("array size = ");
    scanf("%d",&n1);
    int arr[n1];
    printf("array elements = ");
    for(int i=0; i<n1; i++) scanf("%d",&arr[i]);

    for(int i=0; i<n1; i++) sum+=arr[i];
    avg = sum/n1;
    printf("\nthe average = %.2f",avg);
    int c=0;
    printf("\nhigher than average : \n");
    for(int i=0; i<n1; i++)
    {
        if(avg<arr[i]) printf("index[%d]=%d\n",i,arr[i]);
    }

}
