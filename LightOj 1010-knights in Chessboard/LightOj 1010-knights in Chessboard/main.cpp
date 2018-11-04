//
//  main.cpp
//  LightOj 1010-knights in Chessboard
//
//  Created by S M HEMEL on 10/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int tst, i;
    int m , n, mn, ans = 0, x;
    cin >> tst;
    for(i=1; i<=tst; i++)
    {
        cin >> m >> n;
        mn = m*n;
        if(m==1 || n==1)
            ans = mn;
        else if(m==2 || n==2)
        {
            if(m==2) x = n;
            else     x = m;
            if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;
            else if(x%4 == 0) ans = x;
        }
        else if(mn%2 == 0) ans = mn/2;
        else ans = (mn/2)+1;
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
