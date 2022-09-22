#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	int hr,min,sec,d=1000;
	cout<<"From what time you want to start the digital clock?";
	cout<<endl<<"Enter Hours=";
	cin>>hr;
	cout<<endl<<"Enter Minutes=";
	cin>>min;
	cout<<endl<<"Enter Seconds=";
	cin>>sec;
	
	cout<<"Digital Clock :-";
	while(1)	//Infinity loop
	{
		sec++;
		if(sec>=60)
		{
			min++;
			sec=0;
		}
		//min++;
		if(min>=60)
		{
			hr++;
			min=0;
		}
		//hr++;
		if(hr>=24)
		{
			hr=0;
		}
		cout<<hr<<":"<<min<<":"<<sec;
		Sleep(d);
		system("cls");
	}
	return 0;
}
