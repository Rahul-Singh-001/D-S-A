#include<bits/stdc++.h>
using namespace std;
int main(){
    int V,E;
    cin>>V>>E;
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
        stack<int>s;
        s.push(i);
        while(!s.empty()){
            int node=s.top();
            s.pop();
            if(!visited[node]){
            visited[node]=1;
            cout<<node<<" ";
            for(int x:adj[node]){
                if(!visited[x]){
                    s.push(x);
                }
            }
        }
        }
    }
    }
}