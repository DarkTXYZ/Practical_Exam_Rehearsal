#include <bits/stdc++.h>

using namespace std;

int adiff(int A , int B){
    while(A >= 360)
        A -= 360;
    while(A < 0)
        A += 360;
    while(B >= 360)
        B -= 360;
    while(B < 0)
        B += 360;
    int diff;
    if(A > B)
        diff = A - B;
    else
        diff = B - A;
    if(diff > 180)
        return 360 - diff;
    else
        return diff;
}

int main(){
    cout << adiff(180 , 270) << endl;
    cout << adiff(210 , 45) << endl;
    cout << adiff(0 ,360) << endl;
    cout << adiff(10 , 350) << endl;
    cout << adiff(95 , 260) << endl;
    cout << adiff(90 ,-90) << endl;
    cout << adiff(1000,280) << endl;
    cout << adiff(60 , 244) << endl;
}