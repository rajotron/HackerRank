#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Box{
	
	public:
		int l,b,h;
	Box(){
		l=0;b=0;h=0;
	}
	Box(int x,int y,int z){
		l=x;
		b=y;
		h=z;
	}
	Box(Box &B){
		l=B.l;
		b=B.b;
		h=B.h;
	}
	int getLength(){
		cin>>l;
		return l;
	}
	int getBreadth(){
		cin>>b;
		return b;
	}
	int getHeight(){
		cin>>h;
		return h;
	}
	long long CalculateVolume(){
		return (l*b*h);
	}
	
	bool operator< (Box &B)
{
    return ((l< B.l) ||
            (b<B.b && l==B.l)
			|| (h<B.h && b==B.b && l==B.l));
		}
	
	
		
};

namespace std{

ostream& operator<< (ostream& out, Box& B)  
{ 
    return out<< B.l << ' ' << B.b << ' ' << B.h;  
     	}
     }

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
