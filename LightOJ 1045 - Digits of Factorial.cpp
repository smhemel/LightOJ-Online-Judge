//
//  main.cpp
//  LightOJ 1045 - Digits of Factorial
//
//  Created by S M HEMEL on 11/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
double logarithm[1111111];
int main()
{
    int n,m,test;
    scanf("%d",&test);
    for(int i=1; i<=1000000; i++)
        logarithm[i] = log(i)+logarithm[i-1];
    
    for(int t=1; t<=test; t++){
        scanf("%d%d",&n,&m);
        long long int cnt = 1;
        if(n==0 || n==1){
            printf("Case %d: 1\n",t);
            continue;
        }
        else{
            cnt = ceil(logarithm[n]/(double)log(m));
            printf("Case %d: %lld\n",t,cnt);
        }
    }
    return 0;
}
