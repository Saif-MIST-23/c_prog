#include<stdio.h>
int main()
{
    int n1,max;
    float sum=0, avg;
    printf("array size = ");
    scanf("%d",&n1);
    int arr[n1], c_arr[n1],r_arr[n1], n2;

    n2=n1;
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

    for(int i=0; i<n1; i++) c_arr[i]=arr[i];
    for(int i=0; i<n2; i++)
    {
        max=c_arr[0];
        int j=0,k;
        for(j; j<n1; j++)
        {
            if(max<=c_arr[j]){
                max=c_arr[j];
                k=j;}
        }
        r_arr[i]=max;
        for(k; k<n1; k++)
        {
            if(k+1==n1) break;
            c_arr[k]=c_arr[k+1];
        }
        n1--;
    }
    printf("\nthe main array = ");
    for(int i=0; i<n2; i++) printf("%d  ",arr[i]);
    printf("\nreverse order array = ");
    for(int i=n2; i>0; i--) printf("%d  ", arr[i-1]);
    printf("\ndescending order array = ");
    for(int i=0; i<n2; i++) printf("%d  ",r_arr[i]);
    printf("\nascending order array = ");
    for(int i=n2; i>0; i--) printf("%d  ", r_arr[i-1]);
}
