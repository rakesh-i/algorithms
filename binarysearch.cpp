#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#define SWAP(x, y, t)  ((t)=(x), (x)=(y), (y)=(t))
#define COMPARE(x, y) (((x)<(y))?-1:((x)==(y))?0:1)

void sort(int*, int);
int binsearch(int*, int, int, int);

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
    int key;
    printf("Enter the key to be searched\n ");
    scanf("%d",&key);
    int index = binsearch(a, key, 0, c-1);
    if(index>=0){printf("key is found at %d ", index);}
    else{
        printf("Not found\n");
    }
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

int binsearch(int *a, int key, int left, int right){
    int middle, flag; 
    while(left<=right){
        middle = (left+right)/2;
        flag = COMPARE(a[middle], key);
        //printf("%d %d %d %d\n",flag, middle, right, left);
        if(flag==0){
            return middle;
            break;
        }
        else if(flag==1){
            right = middle-1;
        }
        else{
            left = middle+1;
        }
    }
    return -1;
}
