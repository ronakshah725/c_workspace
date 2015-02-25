#include <stdio.h>
#include <string.h>

void swap (int* a, int* b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
 int main(int argc, const char *argv[])
{
     int a[]={12,43,13,23,65};
    int n=sizeof(a)/sizeof(int);

     for (int i=0; i<n-1;i++){
         for (int j = i+1;j<n;j++){
            if(a[j]<a[i])
                swap(&a[j],&a[i]);
             }
         }
     
     for(int ik=0;ik<n;ik++)
             printf("%d\t",a[ik]);

 
     printf("Executes\n");
    return 0;
}
