#include<bits/stdc++.h>
using namespace std;
#define maxsize 10
typedef struct{
    int value[maxsize];
    int length;
}sqlist;
void initlist(sqlist &L){
    for(int i=0;i<maxsize;i++){
        L.value[i]=0;
    }
    L.length=0;
}  
void listinsert(sqlist &L,int i,int e){
    for(int j=L.length;j>=i;j--){
        L.value[j]=L.value[j-1];
    }
        L.value[i-1]=e;
        L.length++;
}
void listdelete(sqlist &L,int i,int &e){
    
}
int main(){
    sqlist L;
    initlist(L);
    int n;
    cin>>n;
    L.length=n;
    for(int i=0;i<n;i++){
        cin>>L.value[i];
    }
    listinsert(L,3,3);
    for(int i=0;i<L.length;i++){
        cout<<L.value[i]<<" ";
    }
    return 0;
}
