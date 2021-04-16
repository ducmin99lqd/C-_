#include<iostream>
using namespace std;
void quickSort(int Data[], int l , int r)
{
	// If the first index less or equal than the last index
	if (l <= r)
	{
		// Create a Key/Pivot Element
		int key = Data[(l+r)/2];
 
		// Create temp Variables to loop through array
		int i = l;
		int j = r;
 
		while (i <= j)
		{
			while (Data[i] < key)
				i++;
			while (Data[j] > key)
				j--;
 
			if (i <= j)
			{
				swap(Data[i], Data[j]);
				i++;
				j--;
			}
		}
 
		// Recursion to the smaller partition in the array after sorted above
		// Reference Gi?i Thu?t Ð? Quy :: STDIO.VN
		if (l < j)
			quickSort(Data, l, j);
		if (r > i)
			quickSort(Data, i, r);
	}
}
int main(){
	int a[10]={23,34,4,3,2,2,3,3,4,5};
	quickSort(a,0,8);
	for (int i=0;i<10;i++){
		cout<<a[i]<<" ";
		}}
