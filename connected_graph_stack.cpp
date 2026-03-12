#include<bits/stdc++.h>
using namespace std;
int main(){
    int V,E;
    cin>>V>>E;
    vector<vector<int>>adj(V);
    for(int i=0;i<E;i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    } 
    vector<int>visited(V);
    stack<int>s;
    s.push(0);
    
    while(!s.empty()){
        int node=s.top();
        s.pop();
        if(visited[node]) continue;

            visited[node]=1;
            cout<<node<<" ";
            for(int x:adj[node]){
                if(!visited[x]){
                    s.push(x);
                }
            }
        }
    

}