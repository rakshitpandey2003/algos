//Dijkstra's

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"create graph:";
    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    cout<<"enter source:";
    int src;
    cin>>src;
    
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
   vector<int> dist(n+1,INT_MAX);
   dist[src]=0;
   pq.push({0,src});
   
   while(!pq.empty())
   {
       int d=pq.top().first;
       int node=pq.top().second;
       pq.pop();
       
       vector<pair<int,int>>:: iterator it;
       for(auto it: adj[node])
       {
           int next=it.first;
           int nextd=it.second;
           if(dist[node]+nextd<dist[next])
           {
               dist[next]=dist[node]+nextd;
               pq.push({dist[next],next});
           }
       }
   }
    for(int i=1;i<=n;i++)
    cout<<dist[i]<<" ";
    return 0;
}
