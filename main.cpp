//
//  main.cpp
//  pointer
//
//  Created by 小鱼🐟 on 15/11/18.
//  Copyright (c) 2015年 小鱼🐟. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[4];
    int *p;
    a[0]=5;
    a[1]=10;
    a[2]=15;
    a[3]=20;
    p=a;
    printf("&a=%x     &a[0]=%x    &a[1]=%x     &a[2]=%x    &a[3]=%x\n  ",a,&a[0],&a[1],&a[2],&a[3]);
    printf("a[0]=%d\n",*(a+1));
    return 0;
}
