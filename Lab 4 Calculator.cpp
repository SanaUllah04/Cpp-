//Written by : SanaUllah
#include <iostream>
using namespace std;
int main()
{
	//Variables
	float numb_1, numb_2;
	char response = 'y' || 'Y' || 'n' ||'N';
	char action   = '*' || '+' || '-' || '%' || '/';
	cout<<"Welcome"<<endl<<"\nStart (Y/N) : ";
	cin>>response; 
	
	while(response == 'y' || response == 'Y')
	{
		cout<<endl<<"Enter Numbers-1 : ";
		cin>>numb_1;
		cout<<"Enter Numbers-2 : ";
		cin>>numb_2;
		cout<<endl<<"Enter a sign (+ , - , * , / , %) : ";
		cin>>action;
		
		if(action == '+')
		{
			cout<<endl<<"The Sum is : "<<numb_1 + numb_2<<endl;
		}
		if(action == '-')
		{
			cout<<endl<<"The difference is : "<<numb_1 - numb_2<<endl;
		}
		if(action == '*')
		{
			cout<<endl<<"The multiply is : "<<numb_1 * numb_2<<endl;
		}
		if(action == '/')
		{
			cout<<endl<<"The divide is : "<<numb_1 / (int)numb_2<<endl;
		}
		if(action == '%')
		{
			cout<<endl<<"The Modulus is : "<<(int)numb_1 % (int)numb_2<<endl;
		}
		cout<<endl<<"Again (Y/N) : ";
		cin>>response;
		if(response == 'N' || response == 'n')
		{
			exit;
		}						
	}
	cout<<endl<<"Thank you for using our Calculator :) ";	
}
