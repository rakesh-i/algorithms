#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
    int array[] = {5, 4, 3, 2, 1, 0}, t;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(array[j]>array[j+1]){
                t = array[j];
                array[j] = array[j+1];
                array[j+1] = t;
            }
        }
    }

    for(int k=0; k<6; k++){
        printf("%d ", array[k]);
    }
    cout<<endl;
}