//
//  main.cpp
//  LightOJ 1005 - Rooks
//
//  Created by S M HEMEL on 11/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int test;
    scanf("%d", &test);
    for(int t=1; t<=test; t++){
        int x,y;
        long long int ans = 0;
        scanf("%d%d",&x,&y);
        
        printf("Case %d: %lld",t,ans);
    }
    return 0;
}
