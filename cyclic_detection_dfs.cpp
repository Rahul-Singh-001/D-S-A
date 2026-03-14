#include<bits/stdc++.h>
using namespace std;
bool dfs(int node,int parent,vector<vector<int>>&adj,vector<int>&visited){
    visited[node]=1;
    cout<<node<<" ";
    for(int x: adj[node] ){
        if(!visited[x]){
            if(dfs(x,node,adj,visited))return true;
        }
        else if(x!=parent){
            return true;
        }
    }
    return false;
}

int main(){
    int V,E;
    cin>>V>>E;
    vector<vector<int>> adj(V);
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    vector<int>visited(V);
    bool check=false;
    for(int i=0;i<V;i++){
        if(!visited[i]){
            if(dfs(i,-1,adj,visited)){
                check=true;
                break;
            }
        }
    }
    if(check)cout<<"cycle detected";
    else cout<<"no cycle";
}