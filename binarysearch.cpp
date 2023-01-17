#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
    int a[] = {0, 1, 2, 3, 9, 21, 85, 91, 96, 99};
    int first = 0;
    int last = 9;
    int mid = (last+first)/2;
    int key = 1;
    while(first<last){
        if(a[mid]==key){
            cout<<"key is found at "<<mid+1<<endl;
            break;
        }
        if(key>a[mid]){
            first = mid;
            mid = (first+last)/2;
        }
        else{
            last = mid;
            mid = (first+last)/2;
        }
    }
    cout<<"Not found :("<<endl;

}
