//Written by : SanaUllah

#include <iostream>
using namespace std;
int main()
{
	//Asking for the size of Array
	int size;
	cout<<"Welcome "<<endl<<"Enter the size of array : ";
	cin>>size;
	
	int arr[size];
	int max = 0 , min;
	
	for(int i=1; i<=size; i++)
	{
		arr[i] = rand()%50;
	}
	cout<<"The random Array is :"<<endl;
	
	//Printing Array
	for(int i=1; i<=size; i++)
	{
		cout<<endl<<arr[i];
 	}

	//Finding Maximum & Minimum value
	for(int i=1; i<=size ; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i]; 
		}
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout<<endl<<endl<<"The max is : "<<max;
	cout<<endl<<"The min is : "<<min;	
}
