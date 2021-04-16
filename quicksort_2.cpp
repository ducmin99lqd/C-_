#include <iostream>
#include<conio.h>
using namespace std;
void nhapmang(int a[], int n){
     for (int i=0;i<n;i++){
    	 cout<<"nhap Phan tu thu A["<<i<<"] =";
         cin>>a[i];
 }
}

void xuatmang(int a[],int n){
	 cout<<endl;
	 for (int i=0;i<n;i++) {
	   cout<<a[i]<<"\t";
	}
	}
void swap(int &a,int &b){
	 int temp=a;
	 a=b;
	 b=temp;
	 
	}
void quicksort(int a[],int left, int right){
   int i=left,j=right;
   int pivot=a[(left+right)/2];
   
   while (i<=j){
   	     while (a[i]<pivot) i++;
   	     while (a[j]>pivot) j--;
   	     
   	     if (i<=j){
   	     	 swap(a[i],a[j]);
   	     	 i++;
   	     	 j--;
       		}
    }
    if (left<j) quicksort(a,left,j);
    if (right>i) quicksort(a,i,right);
   
}
int main(){
int A[1000], n;
 cout<<"Nhap so phan tu:";
 cin>>n;
 nhapmang(A,n);
 cout<<"\nMang vua nhap la:";
 xuatmang(A,n);
 cout<<"\nSap xep theo Quick Sort:";
 quicksort(A,0,n-1);
 xuatmang(A,n);
 getch();
}
