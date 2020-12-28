#include<iostream>
#include<cstdlib>
using namespace std;
int parent[10];
int find(int);
void uni(int,int);
int main()
{
    int i,j,k,a,b,u,v,n,ne=1;
    int min,mincost=0,cost[9][9];
	cout<<"\n\tImplementation of Kruskal's algorithm\n";
	cout<<"\nEnter the no. of vertices:";
	cin>>n;
	cout<<"\nEnter the cost adjacency matrix:\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>cost[i][j];
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	for(i=1;i<=n;i++)
		parent[i]=i;
	cout<<"The edges of Minimum Cost Spanning Tree are\n";
	while(ne < n)
	{
        a=-1,b=-1;
		for(i=1,min=999;i<=n;i++)
		{
			for(j=1;j <= n;j++)
			{
				if(find(i)!=find(j)&&cost[i][j] < min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		uni(a,b);
		cout<<"\nedge"<<ne++<<":"<<"("<<a<<","<<b<<")"<<"cost"<<min;
		mincost +=min;
		cost[a][b]=cost[b][a]=999;
	}
	cout<<"\n\tMinimum cost"<<mincost;
	return 0;
}
int find(int i)
{
	while(parent[i]!=i)
	i=parent[i];
	return i;
}
void uni(int i,int j)
{
	int a=find(i);
	int b=find(j);
	parent[a]=b;
}