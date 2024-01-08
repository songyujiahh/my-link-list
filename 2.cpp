#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n]{};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool isBigHeap = true;
    bool isSmallHeap = true;

    for(int i = 0; i < n; i++){
        if(2 * i + 1 < n && a[i] < a[2 * i + 1]){
            isBigHeap = false;
        }
        if(2 * i + 2 < n && a[i] < a[2 * i + 2]){
            isBigHeap = false;
        }
        if(2 * i + 1 < n && a[i] > a[2 * i + 1]){
            isSmallHeap = false;
        }
        if(2 * i + 2 < n && a[i] > a[2 * i + 2]){
            isSmallHeap = false;
        }
    }

    if(isBigHeap){
        cout << "Big Heap";
    }
    else if(isSmallHeap){
        cout << "Small Heap";
    }
    else 
        cout << "Not Heap";
}
