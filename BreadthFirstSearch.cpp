//in this code you will find a visit made in breadth of a tree


#include <iostream>
#include <queue> //we will need to include an SQL library to simplify the problem

using namespace std;

struct node{
    node *sx;
    node *dx;
    int data;
};

int main(){
    //have fun :)
}

void BreadthVisit(node *tree){
    queue <node*> q;

    q.push(tree);
    if(!q.empty()){
        node* newNode = q.front(); //the node receive the first top element in the queue
        cout << newNode -> data;
        q.pop(); //after we visit the element, we won't need it anymore in the queue

        if(newNode -> sx) //if the node has a left child
            q.push(tree -> sx);

        if(newNode -> dx) //if the node has a right child
            q.push(tree -> dx);
    }
}