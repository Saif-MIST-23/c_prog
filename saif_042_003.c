#include<stdio.h>
int main()
{
    int n1;
    printf("array size = ");
    scanf("%d",&n1);
    int n2=n1;
    int arr[n1],r_arr[n1];
    printf("array elements = ");
    for(int i=0; i<n1; i++) scanf("%d",&arr[i]);
    for(int t=0; t<n2; t++)
    {
        int temp= arr[0];
        for(int i=0; i<n1; i++)
        {
            arr[i]=arr[i+1];
            if(i+1==n1) break;
        }
        arr[n1-1]=temp;
        n1--;
    }
    printf("reverse array = ");
    for(int i=0; i<n2; i++) printf("%d ",arr[i]);
}
