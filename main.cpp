#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Rand_Array(int *A,int array,int range){
    srand((unsigned)time(NULL));
    for (int i = 0; i < array; i++)
    {
        A[i]=rand()%range+1;
    }
    
}
void QuickSort(int *a,int h, int t)
{
     if(h >= t) 
         return;
     int mid = (h + t) / 2, i = h, j = t, x;
     x = a[mid];
     int temp;
     while(1)
     {
         while(a[i] < x)
             i++;
         while(a[j] > x) 
             j--;
         if(i >= j) 
             break;
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
     }
     a[j] = x;
     QuickSort(a,h, j - 1);
     QuickSort(a,j + 1, t);
     return ;
}

int main(){
    int n = 10;
    int range = 100;
    int A[n];
    Rand_Array(A,n,range);
    for (int i = 0; i < n; i++)
    {
        printf("%2d ",A[i]);
    }
    printf("\n");
    QuickSort(A,0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%2d ",A[i]);
    }
    printf("\n");
}