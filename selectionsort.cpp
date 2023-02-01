#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#define SWAP(x, y, t)  ((t)=(x), (x)=(y), (y)=(t))

void sort(int*, int);

int main()
{
    int c;
    printf("Enter the size of the array\n");
    scanf("%d", &c);
    int *a = (int*)calloc(c, sizeof(int));
    for(int i=0; i<c; i++){
        a[i] = rand()%100;
        printf("%d ", a[i]);
    }
    printf("\n");
    sort(a, c);
    for(int j=0; j<c; j++){
        printf("%d ", a[j]);
    }
    printf("\n");
}

void sort(int *a, int n){
    int temp;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]<=a[i]){
                SWAP(a[j], a[i], temp);
            }
        }
    }
}
