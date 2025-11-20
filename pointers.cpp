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
//Problem 3 
/*
#include <iostream>
using namespace std;
void fixNeg(int *arr,int n){
    int* end = arr + n;
    int count=0;
    for (int* p = arr; p < end; ++p) {
        if (*p != nullptr) {
            count++ ; 
        }
    }
    cout<< count ;
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

//Problem 5 
/*
#include <iostream>
using namespace std;
int sum2D(int** m, int a, int b) {
	int sum = 0;
	for(int i=0; i<a; i++) {
	
		for(int j=0; j<b; j++) {
			sum += m[i][j];
		}
	}
	return sum;
}

int main()
{
	int a,b;
	cin>>a>>b;
	int **mat= new int*[a];
	for (int i=0; i<a; i++) {
		for(int j=0; j<b; j++) {
			mat[i]= new int[b] ;
			cin>>mat[i][j];
		}
	}
cout<<	sum2D(mat,a,b);
	delete [] mat;

	return 0;
}
*/

//Problem 6
/*
#include <iostream>
using namespace std;

void printIfValid(int *p) {
    if(p==nullptr){
        cout<<"null";
    }else cout<<*p;

}
int main()
{
	string st;
	cin>>st;
	if(st =="n"){
	printIfValid(nullptr);    
	}
	else {
	    int d= stoi(st);
	    printIfValid(&d);
	}
	

	return 0;
}
*/
//Proble 7 
/*
#include <iostream>
using namespace std;
int finMax(int *arr,int size){
    int n=arr[0];
    for(int i=0;i<size;i++){
        if(n<=arr[i])n=arr[i];
    }
    return n;
}
int main()
{
    int n;
    cin>>n;
    int *arr= new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<finMax(arr,n);

    return 0;
}
    */
    //Problem 8 
    /*
    #include <iostream>
using namespace std;
void reverseArr(int** arr, int size) {
	int* base = *arr;
	int *left = base;
	int *right = base + size - 1;
	while(left < right) {
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	int* p = a;
	reverseArr(&p, n);
	for(int i=0; i<n; i++) cout << a[i] << (i+1==n? "":" ");
	ret
    */

    //Problem 9 
    /*
    #include <iostream>
using namespace std;
void avg(const double* arr, int size, double* result) {
	double s = 0;
	const double* p = arr;
	for(int i=0; i<size; i++) {
		s += *p;
		p++;
	}
	*result = s / size;
}
int main() {
	int n;
	cin >> n;
	double a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	double res;
	avg(a, n, &res);
	cout << res;
	return 0;
}
    */
    //Problem 12
   /*
    #include <iostream>
using namespace std;
bool identical(const int* a, int** bptr, int size) {
	const int* p = a;
	int* qb = *bptr;
	for(int i=0; i<size; i++) {
		if(*p != *(qb + i)) return false;
		p++;
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	int b[n];
	for(int i=0; i<n; i++) cin >> b[i];
	int* pb = b;
	cout << identical(a, &pb, n);
	return 0;
}
*/
//Problem 13
#include <iostream>
using namespace std;
int main() {
	int *ptr1 = NULL; 
	int *ptr2 = nullptr; 
	if(ptr1 == nullptr) cout << "is null" << endl;
	else cout << "not null" << endl;
	if(ptr2 == nullptr) cout << "is null" << endl;
	else cout << "not null" << endl;
	return 0;
}
//Problem 14 
/*
#include <iostream>
using namespace std;
int main() {
	int *ptr1 = NULL;
	int *ptr2 = nullptr;
	if(ptr1 == nullptr) cout << "is null" << endl;
	else cout << "not null" << endl;
	if(ptr2 == nullptr) cout << "is null" << endl;
	else cout << "not null" << endl;
	return 0;
}*/