#include <bits/stdc++.h>
using namespace std;
int main(){
    int V,E;
    cin>>V>>E;
    vector<int>adj[V];
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool check=false;
    vector<int>visited(V,0);
    for(int i=0;i<V;i++){
        queue<pair<int,int>>q;
        q.push(i);
        visited[i]=1;
        int parent=-1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cout<<node<<" ";
            for(int x:adj[node]){
                if(!visited[x]){
                    q.push(x);
                    visited[x]=1;
                }
                else if(x!=parent){
                    check=true;
                }
            }
        }
    }
   if(check)cout<<" cycle detected";
   else cout<<"no cycle";
}