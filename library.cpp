#include<iostream>
using namespace std;
int main()
{
	
	int issuedate, returndate, days, fine,n,enrollmentnumber;
	string name;
    cout<<"Enter your name\n";
	getline(cin,name);
	cout<<"Enter your enrollment number\n";
	cin>>enrollmentnumber;
	cout<<"Enter number of books issued\n";
	cin>>n;
	cout << "Enter the issuedate\n";
	cin >> issuedate;
	cout << "Enter the returndate\n";
	cin >> returndate;
	days= returndate-issuedate;
	cout<<"Days\n"<<days<<endl;
	if (days > 7)
	{
		fine = days-7 ;
		cout<<"Late return fine\n"<<'$'<<fine<<endl;
	}
	else
	{
		cout<<"No fine";
	}
	return 0;
} 
