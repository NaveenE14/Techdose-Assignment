class Graph {
public:
    bool dfs(int node, int parent , int vis[],vector<int>adj[]){
        vis[node]=1;
        for(auto i:adj[node]){
            if(!vis[i]){
                if( dfs(i,node,vis,adj)==true){
                    return true;
                }
            }else if(i!=parent){
                return true;
            }
        }
        return false;
    }
    bool detectCycle(int V, vector<int> adj[]) {
        int n=V+1;
        int vis[n]={0};
        for(int i=0;i<V;i++){
            if(!vis[i])
            if(dfs(i,-1,vis,adj)==true) return true;
        }
        return false;
    }
};
// BFS
class Graph {
public:
    bool detectCycle(int V, vector<int> adj[]) {
        queue<pair<int,int>>q;
        int vis[V+1]={0};
        q.push({1,-1});
        vis[1]=1;
        while(!q.empty()){
            int parent=q.front().second;
            int node=q.front().first;
            q.pop();
            for(auto i:adj[node]){
                    if(!vis[i]){
                        vis[i]=1;
                        q.push({i,node});
                    }else if(parent!=i){
                        return true;
                    }
                }
        }
        return false;
    }
}; 
