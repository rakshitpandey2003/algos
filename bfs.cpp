//bfs

#include <iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> bfs(int n,vector<int> adj[])
{
    vector<int> ans;
    vector<int> vis(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            queue<int> q;
            q.push(i);
            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                vis[node]=1;
                ans.push_back(node);
                for(auto it:adj[node])
                {
                    if(!vis[it])
                    {
                        q.push(it);
                        vis[it]=1;
                    }
                }
            }
        }
    }
    return ans;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans=bfs(n,adj);
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    return 0;
}
