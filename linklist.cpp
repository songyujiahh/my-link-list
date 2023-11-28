#include<bits/stdc++.h>
using namespace std;
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*linklist;
bool initlist(linklist &L){
    L=new LNode;
    if(L==NULL)
        return false;   
    L->next=NULL;
    return true;
}
bool empty(linklist L){
    if(L->next==NULL){
        return true;
    }
    else 
        return false;
}
int main(){
    linklist L;
    initlist(L);
    cout<<L;
}