#include<stdio.h>
int main()
{
    int n, ct=0;
    printf("number = ");
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        int rem = n%10;
        n/=10;
        ct++;
    }

    int n1=ct;
    int arr[n1];
    int i=0;
    while(t!=0)
    {
        int rem = t%10;
        arr[i]=rem;
        t/=10;
        i++;
    }

    int arr1[10];
    for(int i=0; i<10; i++) arr1[i]=0;
    printf("\n");

    for(int i=0; i<n1; i++) arr1[arr[i]]++;

    for(int i=0; i<10; i++)
    {
        if(arr1[i]!=0) printf("\n%d has %d times.\n",i,arr1[i]);
    }

}







