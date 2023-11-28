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
void listinsert(sqlist &L,int i,int a){
    for(int j=L.length;j>=i;j--){
        L.value[j]=L.value[j-1];
    }
        L.value[i-1]=a;
        L.length++;
}
void listdelete(sqlist &L,int i,int &e){
    e=L.value[i-1];
    for(int j=i;j<L.length;j++){
        L.value[j-1]=L.value[j];
    }
    L.length--;
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
    int e=-1;
    listdelete(L,3,e);
    for(int i=0;i<L.length;i++){
        cout<<L.value[i]<<" ";
    }
    cout<<endl;
    cout<<e;
    return 0;
}
