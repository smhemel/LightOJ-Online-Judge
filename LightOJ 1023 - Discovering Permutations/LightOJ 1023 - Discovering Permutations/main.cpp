//
//  main.cpp
//  LightOJ 1023 - Discovering Permutations
//
//  Created by S M HEMEL on 11/29/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include <math.h>
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
    int test,m,n,x;
    char ch[27];
    cin >> test;
    int t = 1;
    while(test--)
    {
        cout << "Case "<< t << ":"<< endl;
        cin >> n >> m;
        for(int i=0; i<n; i++)
            ch[i] ='A'+i;
        x = 0;
        do
        {
            for(int i=0; i<n; i++)
                printf("%c",ch[i]);
            cout << endl;
            x++;
        }while(next_permutation(ch,ch+n) && x<m);
        t++;
        memset(ch,0,sizeof(ch));
    }
    return 0;
}*/


#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int n,m;
void recur(int length,int used[], string str)
{
    if(m==0)
        return;
    if(length==n)
    {
        cout << str << endl;
        m--;
        cout <<"asci\n";
        return;
    }
    cout << "abar asci\n";
    for(int i=0; i<n; i++){
        cout <<"i = "<<i<<endl;
        cout <<"visit"<<endl;
        if(!used[i])
        {
            string temp = str;
            temp +=  (char)(i+'A');
            used[i] = 1;
            printf("length+1 = %d\n",length+1);
            recur(length+1,used,temp);
            cout << "No visit\n";
            cout <<"used[i] = "<<i<<endl;
            used[i] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> n >> m;
        int used[28];
        for(int j=0; j<n; j++)
            used[j] = 0;
        cout << "Case " << i << ":" << endl;
        recur(0,used,"");
    }
    return 0;
}
