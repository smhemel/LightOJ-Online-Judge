//
//  main.cpp
//  Light Oj 1012 - Guilty Prince
//
//  Created by S M HEMEL on 2/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
char s[50][50];
int cnt;
int dr[]={0,0,1,-1};
int dc[]={1,-1,0,0};
void dfs(int i,int j)
{
    if(i<0 || j<0)
        return ;
    for(int l=0; l<4; l++)
    {
        int v = i+dr[l];
        int w = j+dc[l];
        if(s[v][w]=='.') {
            cnt++;
            s[v][w] = '#';
            dfs(v,w);
        }
    }
    return ;
}
int main()
{
    int t,tc=0;
    cin >> t;
    while(t--)
    {
        int n,m;
        tc++;
        cnt = 0;
        cin >> n >> m;
        for(int i=0; i<m; i++)
            cin >> s[i];
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(s[i][j]=='@'){
                    cnt++;
                    s[i][j] = '#';
                    dfs(i,j);
                }
        printf("Case %d: %d\n",tc,cnt);
        memset(s,0,sizeof(s));
    }
    return 0;
}
