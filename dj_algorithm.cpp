// dj算法: 查找一个点到其他点的最短距离
// C++代码实现
#include<bits/stdc++.h>
#include<vector>

using namespace std;
unordered_map<int,vector<pair<int,int>>>graph;
int main(){
    int node_num=0,path_num=0,begin_node=0;
    cin>>node_num>>path_num>>begin_node;
    //节点范围[1,node_num]
    for(int i=0;i<path_num;++i){
        int from,to,w;
        cin>>from>>to>>w;
        graph[from].push_back({w,to});
    }
    vector<int>dis(node_num+1,INT_MAX);
    vector<bool>visit(node_num+1,false);
    dis[begin_node]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
    pq.push({dis[begin_node],begin_node});
    while(!pq.empty() ){
        int u=pq.top().second;
        pq.pop();
        if(visit[u]==true)continue;
        visit[u]=true;
        for(auto &it:graph[u]){
            int v=it.second;
            int w=it.first;
            //u-->v  w
            if(dis[u]<dis[v]-w){
                dis[v]=w+dis[u];
                pq.push({dis[v],v});
            }
        }
    }
    //打印begin_node到每一个节点的最短距离
    for(int i=1;i<dis.size();++i){
        cout<<begin_node<<"-->"<<i<<"最短距离: "<<dis[i]<<endl;
    }
    return 0;
}