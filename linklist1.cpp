#include<bits/stdc++.h>
using namespace std;
typedef struct LNode{
    int data;
    int xishu;
    struct LNode *next;
}LNode,* linklist;
void initlist(linklist &L){
    L=new LNode;
    L->next=NULL; 
}
void listinsert(linklist &L,int e1,int e2){
    LNode* newnode =new LNode;
    newnode->xishu=e1;
    newnode->data=e2;
    newnode->next=NULL;
    LNode *p=L;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=newnode;
}
linklist addlist(linklist L,linklist Q){
    linklist result;
    initlist(result);
    LNode *p1=L->next;
    LNode *p2=Q->next;
    LNode *p=result;
    while(p1!=NULL || p2!=NULL){
        LNode *newnode=new LNode;
        newnode->next=NULL;
        if(p1==NULL || (p2!=NULL && p1->data<p2->data)){
            newnode->xishu=p2->xishu;
            newnode->data=p2->data;
            p2=p2->next;
        }
        else if(p2==NULL||(p1->data>p2->data)){
            newnode->xishu=p1->xishu;
            newnode->data=p1->data;
            p1=p1->next;
        }   
        else{
            newnode->xishu=p1->xishu+p2->xishu;
            newnode->data=p1->data;
            p1=p1->next;
            p2=p2->next;
            if(newnode->xishu==0){
                delete newnode;
                continue;
            }
        }
        p->next=newnode;
        p=p->next;
    }
    return  result;
}
bool tt(linklist L){
    
    int t=0;
    if(L->next==NULL) return false;
    L=L->next;
    if(L->xishu!=0){
        t+=1;;
        L=L->next;
    }
    if(t!=0) return true;
    else return false;
}
void print(linklist L){
    L=L->next;
    while(L!=NULL&&L->xishu!=0){
        cout<<L->xishu<<" "<<L->data<<" ";
        L=L->next;
    }
}
int main() {
    linklist poly1, poly2, result;
    initlist(poly1);
    initlist(poly2);
    initlist(result);
    int coeff, exp;
    cin >> coeff >> exp;
    while (coeff != -1 && exp != -1) {
        listinsert(poly1, coeff, exp);
        cin >> coeff >> exp;
    }

    cin >> coeff >> exp;
    while (coeff != -1 && exp != -1) {
        listinsert(poly2, coeff, exp);
        cin >> coeff >> exp;
    }
    result = addlist(poly1, poly2);
    bool t;
    t=tt(result);
    if(t)
        print(result);
    else
    {
        cout<<"0";
    }
    
}