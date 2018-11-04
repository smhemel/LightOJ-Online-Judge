//
//  main.cpp
//  LightOJ 1189 - Sum of Factorials
//
//  Created by S M HEMEL on 10/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
long long int Fact[25],ans[25];
void factorial()
{
    Fact[0] = 1;
    Fact[1] = 1;
    for(int i=2; i<21; i++)
        Fact[i] = Fact[i-1]*i;
}
int main()
{
    int n,l;
    long long int m;
    factorial();
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        l = 0;
        cin >> m;
        for(int j=19; j>=0&&m>0; j--)
        {
            if(Fact[j]<=m)
            {
                m = m-Fact[j];
                ans[l] = j;
                l++;
            }
        }
        cout<<"Case "<< i <<": ";
        if(m!=0)
            cout<<"impossible"<<endl;
        else
        {
            cout << ans[l-1];
            for(int k = l-2; k>=0; k--)
                cout<<"!+"<<ans[k];
            cout<<"!"<<endl;
        }
    }
    return 0;
}
