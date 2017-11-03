#include <iostream.h>
#include <iomanip.h>
void main()
{
	float i=1.0,j=1.0;
    int N,n=1,m=0,q,x,c;
	cout<<"Please input N:";
	cin>>N;
	if(N<0) i=1.5;
	if(N%2==0) j=2.0;
	if(N<0) c=-N;
	else c=N;
	for(q=1;q<=8;q++)
	{
		x=c%10;
		c=c/10;
		if(c>0) n++;
		if(x==2) m++;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<(float)m/n*i*j*100<<"%"<<endl;
}
