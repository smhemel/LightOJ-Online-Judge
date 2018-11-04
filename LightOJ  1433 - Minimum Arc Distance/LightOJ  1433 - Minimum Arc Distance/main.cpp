//
//  main.cpp
//  LightOJ  1433 - Minimum Arc Distance
//
//  Created by S M HEMEL on 31/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#define pi acos(-1)
using namespace std;
int main(){
    int n;
    double Ox,Oy,x1,y1,x2,y2;
    cin  >> n;
    int t = 0;
    while (n--) {
        t++;
        cin >> Ox >> Oy >> x1 >> y1 >> x2 >> y2;
        double dis = sqrt((Ox-x1)*(Ox-x1)+(Oy-y1)*(Oy-y1));
        double dis1 = sqrt((Ox-x2)*(Ox-x2)+(Oy-y2)*(Oy-y2));
        double dis2 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double temp = acos((dis*dis+dis1*dis1-dis2*dis2)/(2*dis*dis1));
        double ans = dis*temp;
        printf("Case %d: %.9lf\n",t,ans);
    }
    return 0;
}
