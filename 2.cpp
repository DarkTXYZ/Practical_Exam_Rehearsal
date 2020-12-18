#include <bits/stdc++.h>

using namespace std;

int main(){
    int P[5000];
    int ind = 0 , init = 1;
    while(ind < 5000){
        P[ind] = init;
        ++ind;
        init += 2;
    }
    cout << "Please input k: ";
    int k ;
    cin >> k ;
    if(k > 0){
        int i = 0;
        int result = 0;
        while(i < 5000){
            if(P[i] % k == 0)
                result -= P[i];
            else
                result += P[i];
            ++i;
        }
        cout << "Result = " << result;
    }
    else{
        cout << "Invalid input!!!";
    }
}