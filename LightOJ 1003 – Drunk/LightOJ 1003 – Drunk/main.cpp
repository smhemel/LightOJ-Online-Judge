//
//  main.cpp
//  LightOJ 1003 – Drunk
//
//  Created by S M HEMEL on 6/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#define N 10001
using namespace std;
map <string,int> M;
vector <int> v[N];
int check[N];
bool flag;
void visit(int u){
    check[u] = 1;
    int size = (int)v[u].size();
    //for(auto x: v[u])
    for(int i=0; i<size; i++)
    {
        int x = v[u][i];
        if(check[x]==0)
            visit(x);
        else if(check[x]==1) {
            flag = true;
            return;
        }
    }
    check[u] = 2;
}
void dfs(int n){
    memset(check,0,sizeof(check));
    for(int i=1; i<n; i++){
        if(flag)
            return;
        if(check[i]==0)
            visit(i);
    }
}
string s,s1;
int main()
{
    int test,m;
    cin >> test;
    for(int t=1; t<=test; t++)
    {
        int c = 1;
        scanf("%d",&m);
        while(m--)
        {
            cin >> s >> s1;
            if(!M[s])
                M[s] = c++;
            if(!M[s1])
                M[s1] = c++;
            v[M[s]].push_back(M[s1]);
        }
        flag = false;
        dfs(c);
        printf("Case %d: ",t);
        if(flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
        for(int i=1; i<=c; i++)
            v[i].clear();
        M.clear();
    }
    return 0;
}
