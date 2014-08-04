#include<iostream>
using namespace std;
void insertion_sort (int arr[], int length){
	 	int j, temp;
		
	for (int i = 1; i < length; i++){
		j = i;
		
		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
			  for(int x=0;x<length;x++)
			  {		
				  cout<<arr[x]<<" ";
			  }
			  cout<<"\n";
		}
		 
}
int main()
{
	int t,array[1000];
	cin>>t;
	for(int k=0;k<t;k++)
	{
		cin>>array[k];
	}
	insertion_sort(array,t);
	return 0;
}
