#include<bits/stdc++.h>
using namespace std;
void dfs(int index,vector<vector<int>> &adj,vector<int> &visited){
    visited[index]=1;
    cout<<index<<" ";
    for(int x: adj[index]){
        if(!visited[x]){
            dfs(x,adj,visited);
        }

    }
}
int main(){
    int V,E;
    cin>> V>>E;
    vector<vector<int>>adj(V);
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>visited(V);
    dfs(0,adj,visited);
}