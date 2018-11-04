//
//  main.cpp
//  LightOJ - Farthest Nodes in a Tree (II)
//
//  Created by S M HEMEL on 6/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;
vector <pair<int,int> > v[31111];
template <typename T>
void read(T &x)
{
    char c;
    bool t=false;
    for(c=getchar(); (c<'0'||c>'9') && c!='-'; c=getchar());
    if(c=='-'){
        c = getchar();
        t = true;
    } x = c-'0';
    for(c=getchar(); c>='0'&&c<='9'; c=getchar())
        x=x*10+c-'0';
    if(t) x=-x;
}
int dis[30011];
bool visit[30011];
void max_bfs(int n) {
    queue <int> q;
    dis[n] = 0;
    q.push(n);
    visit[n] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        int size = (int)v[u].size();
        for(int i=0; i<size; i++) {
            int x = v[u][i].first;
            if(!visit[x]) {
                dis[x] = dis[u] + v[u][i].second;
                visit[x] = 1;
                q.push(x);
            }
        }
    }
}
int main()
{
    int test,n,x,y,w;
    read(test);
    for(int t=1; t<=test; t++){
        read(n);
        for(int i=1; i<n; i++)
        {
            read(x);read(y);read(w);
            v[x].push_back(make_pair(y,w));
            v[y].push_back(make_pair(x,w));
        }
        max_bfs(0);
        int c = 0;
        for(int i=0; i<n; i++){
            if(dis[c]<dis[i])
                c = i;
            visit[i] = 0;
        }
        max_bfs(c);
        printf("Case %d:\n",t);
        for(int i=0; i<n; i++)
            cout << dis[i] << endl;
        memset(visit,0,sizeof(visit));
        memset(dis,0,sizeof(dis));
        for(int i=0; i<n; i++)
            v[i].clear();
    }
    return 0;
}

