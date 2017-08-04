#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *pNext;
};
struct Stack{
    Node *top;
};
/*Khoi tao Stack*/
void init(Stack &s)
{
    s.top=NULL;
}
/*Kiem tra Stack co NULL*/
int isEmpty(Stack &s)
{
    return s.top==NULL?1:0;
}
/*Them phan tu vao Stack*/
void Push(Stack &s,int x)
{
    Node *p=new Node;
    if(p==NULL)
    {
        cout<<"Khong du bo nho!";
    return;
    }
    p->data=x;
    p->pNext=NULL;
    if(s.top==NULL)
        s.top=p;
    else
    {
        p->pNext=s.top;
        s.top=p;
    }
}
/*Xoa phan tu khoi Stack*/
int Pop(Stack &s)
{
    if(s.top==NULL)
    {
        cout<<"Stack NULL";
        return 0;
    }
    int x;
    Node *p=s.top;
    s.top=s.top->pNext;
    x=p->data;
    delete p;
    return x;
}
int main()
{
    Stack s;
    int cs,so,sd;
    cin>>so;
    init(s);
    while(so!=0)
    {
        sd=so%cs;
        Push(s,sd);
        so/=cs;
    }
    cout<<"KQ: ";
    while(!isEmpty(s))
        cout<<Pop(s);
    return 0;
}
