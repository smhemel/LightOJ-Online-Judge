//
//  main.cpp
//  LightOJ 1294 - Positive Negative Sign
//
//  Created by S M HEMEL on 6/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    long long int test,t=0,n,m;
    scanf("%lld",&test);
    while(test--)
    {
        t++;
        scanf("%lld%lld",&n,&m);
        long long int sum = m*(n/2);
        printf("Case %lld: %lld\n",t,sum);
    }
    return 0;
}
