#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
using namespace std;

int main()
{
    int array[] = {5, 4, 3, 2, 1, 0}, t;
    int n = sizeof(array)/sizeof(int)-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(array[j]>array[j+1]){
                t = array[j];
                array[j] = array[j+1];
                array[j+1] = t;
            }
        }
    }

    for(int k=0; k<n+1; k++){
        printf("%d ", array[k]);
    }
    cout<<endl;
}
