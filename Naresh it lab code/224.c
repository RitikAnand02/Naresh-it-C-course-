#include<stdio.h>
int main(){
    //write Your code here
    int arr[]={1,2,3,4,5,6};
    int n=6;
    for(int i=0,j=4-1;i<n/2;i++,j--)
    {
           printf("(%d,%d)\n",arr[i],arr[j]);
    }
    return 0;
}