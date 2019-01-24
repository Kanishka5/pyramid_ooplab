#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    for(int i=1;i<10;i++){
    	cout<<setw(2*(10-i+1))<<setfill(' ')<<"1 ";
    	for(int j=2;j<=i;j++)
    		cout<<j<<" ";
    	for(int k=i-1;k>=1;k--)
    	{
    		if(k!=1)
    			cout<<k<<" ";
    		else
    			cout<<k;

    	}
    	cout<<setw(2*(10-i+1));
    	cout<<"\n";
    }
    for(int i=8;i>=1;i--)
    {
    	cout<<setw(2*(10-i+1))<<setfill(' ')<<"1 ";
    	for(int j=2;j<=i;j++)
    		cout<<j<<" ";
    	for(int k=i-1;k>=1;k--)
    	{
    		if(k!=1)
    			cout<<k<<" ";
    		else
    			cout<<k;
    	}
    	cout<<setw(2*(10-i+1));
    	cout<<"\n";
    }
    return 0;
}