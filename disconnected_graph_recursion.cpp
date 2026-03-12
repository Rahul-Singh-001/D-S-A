#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<int>>&adj,vector<int>& visited){
    visited[node]=1;
    cout<<node<<" ";
    for(int x:adj[node]){
        if(!visited[x]){
            dfs(x,adj,visited);
        }

    }
}
int main(){
    int V,E;
    cin >>V>>E;
    vector<vector<int>>adj(V);
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>visited(V);
    for(int i=0;i<V;i++){
         if(!visited[i]){
            dfs(i,adj,visited);
         }
    }
}