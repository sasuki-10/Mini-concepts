#include<iostream>
using namespace std;
int main()
{
  cout<<"(hEm_L@b"<<endl;
  cout<<"WELCOME TO CHEM LAB TESTING"<<endl;
  float pH,chemical;
  
  cout<<"Enter the pH value  of chemical to be tested: ";
  cin>>pH;
  
  if(pH>7.0)
    cout<<"CHEMICAL IS BASIC ☺"<<endl;
    
  else if(pH<7.0)
      cout<<"CHEMICAL IS ACIDIC ☺"<<endl;
          
   else
        cout<<"CHEMICAL IS NEUTRAL ☺"<<endl;

    cout<<"Enter the name of chemical: ";
    cin>>chemical;

}
