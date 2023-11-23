#include<iostream>
using namespace std;
int main()
{
	int i;
	float n;
	float sum;
	float average;
	cout<<"Enter number upto which the sum has to calculate:";
	cin>>n;
      for(i=0;i<=n;i++)
       {
    	    cout<<"number are:"<<i<<endl;
	    sum=sum+i;   //sum
       }
        cout<<"sum is: "<<sum<<endl;
	average=sum/n; // average
	cout<<"average is: "<<average<<endl;
	return 0;
 }
