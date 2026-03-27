#include<stdio.h>
int binsrch(int lo, int hi, int tar,int A[]){
    int mid = (lo+hi)/2;
    if(A[mid]==tar) return mid;
    else if(A[mid]>tar) return binsrch(lo,mid-1,tar,A);
    else { return binsrch(mid+1,hi,tar,A);}
    return -1;
}

int main(){
int A[] = {0,1,2,4,23,44,67,90,100,1221};
int x = 67;
printf("The index of target is : %d\n", binsrch(0,9,67,A));
    return 0;
}