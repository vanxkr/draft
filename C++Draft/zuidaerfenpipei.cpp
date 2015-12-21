#include<iostream>
#include<cstring>
#include<queue>

using namespace std;

const int _Max = 4;
bool biGraph[_Max+1][_Max+1];//二分图
int matchRight[_Max+1] , matchLeft[_Max+1];//左右点的相应匹配点
int vist[_Max+1] , pre[_Max+1];//vist标志一个点在找增广路径的同时是否被访问过，pre为左边每个点的上一个节点
int nright , nleft , m;//二分图左右两边点的数量，以及所有的边的数量
int maxMatch()
{
	int res = 0;
	memset(matchLeft , -1 , sizeof(matchLeft));
	memset(matchRight , -1 , sizeof(matchRight));
	memset(vist , -1 , sizeof(vist));
	for(int i = 1 ; i <= nleft ; i++)
	{
		if(matchLeft[i] == -1)
		{
			queue<int> Q;
			Q.push(i);
			pre[i] = -1;
			bool flag = false;//标志是否找到增广路
			while(!Q.empty() && !flag)
			{
				int u = Q.front();
				Q.pop();    
				for(int v = 1 ; v <= nright && !flag ; v++)
				{//边存在并且没有访问
					if(biGraph[u][v] && vist[v] != i)
					{
						vist[v] = i;
						Q.push(matchRight[v]);//将右边点匹配的左边点放入队列
						if(matchRight[v] > 0) //没有找到增广路
						{
							pre[matchRight[v]] = u;//记录左边点的顺序
						}
						else//找到增广路
						{
							flag = true;
							int d = u , e = v ;
							while(d != -1)//将原匹配的边去掉加入原来不在匹配中的边
							{
								int t = matchLeft[d];
								matchLeft[d] = e;
								matchRight[e] = d;
								d = pre[d] , e = t;
							}
						}
					}
				}
			}
			if(matchLeft[i] != -1)//新增一个匹配的边
				res++;
		}
	}
	return res;
}
int main(void)
{
	//freopen("D:\\cruanjian\\桌面\\in.txt" , "r" , stdin);
	while(cin>>nright>>nleft>>m)
	{
		for(int i = 0 ; i < m ; i++)
		{
			int u , v;
			cin>>u>>v;
			biGraph[u][v] = true;
		}
		int res = maxMatch();
		cout<<res<<endl; 
	}
	return 0;
}
/*
4 4 7
1 1
1 3
2 1
3 1
3 2
4 3
4 4

*/

