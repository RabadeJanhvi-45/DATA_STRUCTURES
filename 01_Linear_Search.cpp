/*	 Name: Janhvi Rabade
	Roll No:46
	Unit:2
	Program: Linear Search */
#include<iostream>//input output library
using namespace std;
int main()
{
	int num[20],key,i;
	int size;
	int flag=0;//indicating key not found
	cout << "*** Linear Search ***" <<endl <<endl;
	cout << "Enter the size of array";
	cin >> size;

	cout << "Enter " <<size << " elements";
	for(i=0;i<size;i++)
	{
		cin >> num[i];	//store elements in array
	}
	cout << "Enter the key value";
	cin >>key;
	
	//Linear Search begins here

	for(i=0;i<size;i++)
	{
		if(num[i]==key)
		{
			flag=1;//key is found, raise the flag
			break;
		}
		
	}
	if(flag==0){
		cout <<key << " is not found";
	}
	else //flag is at 1
	{
		cout << key << " is found at index "<< i;
	}
	
}//End of main()
