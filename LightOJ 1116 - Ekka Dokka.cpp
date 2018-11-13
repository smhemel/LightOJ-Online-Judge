//
//  main.cpp
//  LightOJ 1116 - Ekka Dokka
//
//  Created by S M HEMEL on 2/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#define ll unsigned long long int
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int t=1; t<=test; t++){
        ll x,n,m = 1;
        cin >> x;
        if(x&1)
            printf("Case %d: Impossible\n",t);
        else{
            n = x;
            while(true){
                n >>= 1;
                m <<=1;
                if(n&1){
                    printf("Case %d: %llu %llu\n",t,n,m);
                    break;
                }
            }
        }
    }
    return 0;
}
