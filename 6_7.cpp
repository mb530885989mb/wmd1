#include <iostream.h>
#define M 3
#define N 3
void main()
{
	int i,j,k,a[M][N],max,x,y;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<M;i++)
	{
		max=a[i][0];
		x=0;
		y=1;
		for(j=0;j<N;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				x=j;
			}
		}
		for(k=0;k<M;k++)
		{
		    if(a[k][x]<max)
			    y=0;
		}
	    if(y)
		{
		    cout<<a[i][x]<<endl;break;
		}
	}
	if(!y)
		cout<<"none"<<endl;
}

	


