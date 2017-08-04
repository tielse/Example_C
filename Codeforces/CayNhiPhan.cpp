#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* pLeft;
    Node* pRight;
};
typedef struct Node* Tree;
/*Khoi tao cay*/
void Init(Tree &root)
{
    root=NULL;
}
/*Khoi tao node Node*/
Tree getNode(int x)
{
    Tree root=new Node;
    if(root==NULL)
    {
        cout<<"NULL";
    }
    root->data=x;
    root->pLeft=NULL;
    root->pRight=NULL;
    return root;
}
/*Add Tree*/
void AddNode(Tree &root,Node* p)
{
    if(root==NULL)
        root=p;
    else
        if(p->data<root->data)
            AddNode(root->pLeft,p);
    else
        if(p->data>root->data)
        AddNode(root->pRight,p);
}
/*Nhap Tree*/
void InPutNode(Tree &root,int n)
{
    int x;
    Init(root);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        AddNode(root,getNode(x));
    }
}
/*Xuat Tree*/
void OutPutNode(Tree root)
{
    if(root!=NULL)
    {
        cout<<" "<<root->data<<"\t";
        OutPutNode(root->pLeft);
        OutPutNode(root->pRight);
    }
    //cout<<endl;
}
/*Duyet NLR*/
void NLR(Tree root)
{
    if(root!=NULL)
    {
        cout<<" "<<root->data<<"\t";
        NLR(root->pLeft);
        NLR(root->pRight);
    }
}
/*Duyet LNR*/
void LNR(Tree root)
{
    if(root!=NULL)
    {
        LNR(root->pLeft);
        cout<<" "<<root->data<<"\t";
        LNR(root->pRight);
    }
}
/*Duyet LRN*/
void LRN(Tree root)
{
    if(root!=NULL)
    {
        LRN(root->pLeft);
        LRN(root->pRight);
        cout<<" "<<root->data<<"\t";
    }
}
/*Tim Banary Sreach Tree*/
Tree sreach(Tree root,int x)
{
    if(root)
    {
        if(root->data==x)
            return root;
        if(root->data>x)
            return sreach(root->pLeft,x);
        else
            return sreach(root->pRight,x);
    }
    return NULL;
}
/*Them Banary Add Tree*/
int addNodeB(Tree &root,int x)
{
    if(root)
    {
        if(root->data==x)
            return 0;
        if(root->data>x)
            return addNodeB(root->pLeft,x);
        return addNodeB(root->pRight,x);
    }
    root=new Node;
    if(root==NULL)
    {
        cout<<"Khong du bo nho!";
        return -1;
    }
    root->data=x;
    root->pLeft=root->pRight=NULL;
    return 1;
}
/*Sreach For*/
void sreachFor(Tree &p,Tree &q)
{
    if(q->pLeft)
        sreachFor(p,q->pLeft);
    else
    {
        p->data=q->data;
        q=p;
        q=q->pRight;
    }
}
/*Xoa mot phan tu*/
int deleteOne(Tree &root,int x)
{
    if(root==NULL)
        return 0;
    if(root->data>x)
        return deleteOne(root->pLeft,x);
    if(root->data<x)
        return deleteOne(root->pRight,x);
    else
    {
        Tree p=root;
        if(root->pLeft==NULL)
            root=root->pRight;
        else
            if(root->pRight==NULL)
                root=root->pLeft;
            else
            {
                //Tree q=root->pRight;
                sreachFor(p,root->pRight);
            }

        delete p;
    }
}
/*Huy toan bo Tree*/
void removeTree(Tree &root)
{
    if(root)
    {
        removeTree(root->pLeft);
        removeTree(root->pRight);
        delete root;
    }
}
int main()
{
    Tree root;
    int n,x,chon;
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    do
    {
        cout<<"\n0.Exit!\n1.Input Banary!\n2.Out Banary!\n3.Run NLR!\n4.Run LNR!\n5.Run LRN!\n6.Sreach Tree!\n7.Delete Tree!\n8.Add Tree!\n9.Remove All Tree!\n Chon chuc nang: ";
        cin>>chon;
        switch(chon)
        {
                case 1:InPutNode(root,n);
                    break;
                case 2:OutPutNode(root);break;
                case 3:NLR(root);break;
                case 4:LNR(root);break;
                case 5:LRN(root);break;
                case 6:cout<<"Nhap vi tri can tim: ";
                    cin>>x;
                    cout<<" "<<sreach(root,x);break;
                case 7:cout<<"Nhap so can xoa: ";
                    cin>>x;
                    cout<<" "<<deleteOne(root,x);
                    cout<<"Xoa thanh cong!";break;
                case 8:cout<<"Nhap so can them: ";
                    cin>>x;
                    addNodeB(root,x);
                    cout<<"Them thanh cong!";break;
                case 9:removeTree(root);
                cout<<"RemoveTree thanh cong!";break;
        }
    }while(chon>0);
    return 0;
}
