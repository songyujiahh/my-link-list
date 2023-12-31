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
bool listinsert(linklist &L,int i,int e){
    if(i<1){
        return false;
    }
    LNode *p;
    int j=0;
    p=L;
    while(p!=NULL && j<i-1){
        p=p->next;
        j++;
    }
    if(p==NULL){
        return false;
    }
    LNode *s=new LNode;
    s->data=e;
    s->next=p->next;
    p->next=s;
    return true;
}
bool insertnextnode(LNode *p,int e){
    if(p==NULL){
        return false;
    }
    LNode *s=new LNode;
    if(s==NULL){
        return false;
    } 
    s->data=e;
    s->next=p->next;
    p->next=s;
    return true;
}
bool insertpriorNode(LNode *p,int e){
    if(p==NULL)
        return false;
    LNode *s=new LNode;
    if(s==NULL){
        return false;
    }
    s->next=p->next;
    p->next=s;
    s->data=p->data;
    p->data=e;
    return true;
}
bool listdelete(linklist &L,int i,int &e){
    if(i<1){
        return false;
    }
    LNode *p;
    int j=0;
    p=L;
    while(p!=NULL && j<i-1){
        p=p->next;
        j++;
    }
    if(p==NULL)
    {
        return false;
    }
    if(p->next==NULL){
        return false;
    }
    LNode *q=p->next;
    e=q->data;
    p->next=q->next;
    free(q);
    return true;
}
bool deletenode(LNode *p){
    if(p==NULL)
        return false;
    LNode *q=p->next;
    p->data=p->next->data;
    p->next=q->next;
    free(q);
    return true;
}
int main(){
    linklist L;
    initlist(L);
}