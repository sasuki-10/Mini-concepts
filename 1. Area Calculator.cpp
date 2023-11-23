#include<iostream>
using namespace std;
                                                    // not for alphabet
float circle(float r)
{	
	float a;
	a=3.14*r*r;
	cout<<"\nArea of circle:"<<a;
        float c;
	c=2*3.14*r;
	cout<<"\nCircumference of circle:"<<c;
}


void area(float a,float b)
{
  float s;
  s=(a*b)/2;
  cout<<"Area of triangle:"<<s;

}

void perimeter(float a,float b)
{
	int sides;
	float p;
	cout<<"\nEnter no. of sides which are equal....:";
	cin>>sides;
	
	if(sides==3)
	{
		p=3*a;
		cout<<"\nTRIANGLE IS EQUILATERAL...";
		cout<<"\nPerimeter is:"<<p;
	}
	else if(sides==2)
	{
		p=2*(a+b);
	    cout<<"\nTRIANGLE IS ISOSCALES...";
		cout<<"\nPerimeter is:"<<p;	
	}
	
}

void square(float a)
{
  float e;
  e=a*a;
  cout<<"\nArea of square:"<<e;
  
}

void sq(float a)
{ 
           float p;  
	   p=4*a;
	   cout<<"\nPerimeter of Square :"<<p;	
	
}

void rectangle(float a,float b)
{
  float g;
  g=a*b;
  cout<<"\nArea of Rectangle:"<<g;
}

void rect(float a,float b)
{
	float h;
	h=2*(a+b);
	cout<<"\nPerimeter of Rectangle:"<<h;
}

	
int main()
{
cout<<" ***************AREA CALCULATOR*****************"<<endl<<endl;
cout<<"\n\n    1. AREA OF CIRCLE";
cout<<"\n    2. AREA OF TRIANGLE";
cout<<"\n    3. AREA OF SQUARE";
cout<<"\n    4. AREA OF RECTANGLE";
cout<<"\n    5. Exit";
int choice;


while(choice!=5)
{
    cout<<"\n\nEnter your choice:";
    cin>>choice;  
   switch(choice)
   {
   	case 1:
   		float p;
   		float n;
   		cout<<"\n\nCALCULATION OF AREA & PERIMETER OF CIRCLE          ";
   		cout<<"\n=====================================================";
   		cout<<"\nEnter the value of radius:";
                cin>>n;
                p=circle(n);
		cout<<p;
   		break;
   		
   	case 2:
	    cout<<"\n\nCALCULATION OF AREA & PERIMETER OF TRIANGLE        ";
	    cout<<"\n=====================================================";
	    float a,b;
	    cout<<"\nEnter the value of Base:";
	    cin>>a;
	    cout<<"\nEnter the value of height:";
	    cin>>b;
	    area(a,b);
	    perimeter(a,b);
	    break;
	    
	case 3:
	    cout<<"\n\nCALCULATION OF AREA & PERIMETER OF SQUARE           ";
	    cout<<"\n=====================================================";
	    float f;
	    cout<<"\n\nEnter the value of side:";
	    cin>>f;
	    square(f);
	    sq(f);
	    break;
	    
	case 4:
	    cout<<"\n\nCALCULATION OF AREA & PERIMETER OF RECTANGLE           ";
	    cout<<"\n=====================================================";
	    float  r,t;
	    cout<<"\n\nEnter the value of Base:";
	    cin>>r;
	    cout<<"\nEnter the value of height:";
	    cin>>t;
	    rectangle(r,t);
	    rect(r,t);
	    break;
	   
	   	
   	    default:
   		cout<<"\n**** THANK YOU ^_^ ****";
   	    break;
	}	
 }
}
