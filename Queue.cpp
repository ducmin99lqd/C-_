#include<iostream>
#include<queue>
using namespace std;


int main(){
	queue<int> q;
	queue<int> k;
   cout<<" Nhap so phan tu ";
   int n;
   cin>>n;
   int a[100];
   for (int i=0;i<n;i++){
   	cout<<" Phan tu thu ["<<i<<"] : ";
   	cin>>a[i];
   }
   k.push(a[0]);
   for (int j= a[n-1];j>=1;j--){
   	 k.push(a[j]);
   }
   cout<<k.front();
   cout<<k.back();
}	
	
