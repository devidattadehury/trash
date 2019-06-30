#include<iostream>
using namespace std;

class node{
    public:
    int value;
    node*left;
    node*right;
    node*parent;

    //constructor
    node(){
        left=NULL;
        right=NULL;
        parent=NULL;
    }
};

class BiST{
    public:
    node*root;
    
    //constructor
    BiST(){
        root=NULL;
    }
    //insert
    voidinsertHelper(int newvalue){
        insert(root,newvalue)
    }
    void insert(node*curr,int newvalue){
        //if tree is empty create a node there and make it root
        if(root==NULL){
            node*temp=new node();
            temp->value=newvalue;
            
        }
    }
}




