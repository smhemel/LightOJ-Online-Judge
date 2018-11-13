//
//  main.cpp
//  LightOJ 1006 - Hex-a-bonacci
//
//  Created by S M HEMEL on 10/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//


#include <iostream>
#include <stdio.h>
using namespace std;
long long int ar[10000];
int main()
{
    long long int m;
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while(cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %d", &ar[0], &ar[1], &ar[2], &ar[3], &ar[4], &ar[5], &n);
        for(m=6; m<=n; m++)
            ar[m]=(ar[m-1]+ar[m-2]+ar[m-3]+ar[m-4]+ar[m-5]+ar[m-6])%10000007;
        
        printf("Case %d: %lld\n", ++caseno, ar[n]  % 10000007);
    }
    return 0;
}
