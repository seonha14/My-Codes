#include <iostream>
using namespace std;

int main() 
{
    int num,x=0,y=0,max=0,pos,t;
    cin>>num;
    while(num--)
    {
        int p,q;
        cin>>p>>q;
        x=x+p;
        y=y+q;
        if(x>y)
        {
            t=x-y;
            if(t>max)
            {
                max=t;
                pos=1;
            }
        }
        else
        {
            t=y-x;
            if(t>max)
            {
                max=t;
                pos=2;
            }
            
        }
    }
    cout<<pos<<" "<<max;
    //t=0;
	return 0;
}