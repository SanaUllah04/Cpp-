//Written by : SanaUllah
#include <iostream>

using namespace std;

int main()
{
	int size;
	cout<<"Welcome"<<"\nEnter the Size for an Array : ";
	cin>>size;
	int arr[size];
	
	for(int i=1; i<=size; i++)
	{
		arr[i] = rand();
	}
	cout<<"The Random Array is : "<<endl;
	for(int i=1; i<=size; i++)
	{
		cout<<endl<<arr[i];
	}
}
