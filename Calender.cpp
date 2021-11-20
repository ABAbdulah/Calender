#include <iostream>
using namespace std;

int main(){
int month,year;

cout<<"Enter a number of month (1-12) : ";
cin>>month;
if(month>12)
{
	cout<<"Enter a valid month** ";
}
else
{
}
cout<<"Enter the year : ";
cin>>year;
cout<<"****************************"<<endl;

	switch(month)
	{
		case 1:
			cout<<"   January has 31 days "<<endl;
			break;
		case 2:
			if(year/100)
			{
				if(year  / 400)
				{
				
				cout<<" Is is a leap year "<<endl;
				cout<<" February has 29 days "<<endl;
					break;
				}
			}
			else 
			{
				cout<<"Is is a NOT a leap year "<<endl;
				cout<<" February has 28 days "<<endl;
				break;
			}
		case 3:
			cout<<"March has 31 days "<<endl;
			break;
		case 4:
			cout<<"April has 30  days "<<endl;
			break;
		case 5:
			cout<<"May has 31 days "<<endl;	
			break;
		case 6:
			cout<<"June has 30 days "<<endl;
			break;
		case 7:
			cout<<"July has 31 days "<<endl;
			break;
		case 8:
			cout<<"August has 31 days "<<endl;
			break;
		case 9:
			cout<<"September has 30 days "<<endl;
			break;
		case 10:
			cout<<"October has 31 days "<<endl;
			break;
		case 11:
			cout<< "November has 30 days "<<endl;
			break;
		case 12:
			cout<<"December has 31 days "<<endl;			
			break;

	}
return 0;
}
