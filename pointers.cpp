//
// Created by Shahzod Erkinov on 19/11/25.
//
/*
PROBLEM 1
#include <iostream>
using namespace std;

void settoHundred(int **ptr){
    *ptr = new int;
    **ptr=100;
    //cout<<ptr
}
int main()
{
    //int *ptr=nullptr;
    int n;
    cin>>n;
    int *ptr=&n;

    //cout<<*ptr<<" ";
    settoHundred(&ptr);
    cout<<*ptr;
    return 0;
}*/
/* Problem 2
#include <iostream>
using namespace std;

void swapref(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<" b="<< b;
}

void swapptr(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"*a= "<<*a<<" *b="<<*b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int *ptr=&a,*pt2=&b;
    swapref(a,b);
    swapptr(&a,&b);


    return 0;
}*/
// PRoblem 4
/*

#include <iostream>
using namespace std;
void fixNeg(int *arr,int n){
    int* end = arr + n;
    for (int* p = arr; p < end; ++p) {
        if (*p < 0) {
            *p = 0;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    fixNeg(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
*/