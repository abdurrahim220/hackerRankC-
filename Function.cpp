#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a,int b,int c,int d){
    int gre;
    if(a>b && a>c && a>d)
    {
        gre = a;
    }
    else if(b>a && b>c && b>d)
    {
        gre = b;
    }
    else if(c>a && c>b && c>d)
    {
        gre = c;
    }
    else if(d>a && d>b && d>c)
    {
        gre = d;
    }
return gre;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
    
    return 0;
}
