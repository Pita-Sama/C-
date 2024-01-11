//in this code you'll find the function that return the minor value of a binary-research-Tree

#include <iostream>

using namespace std;


struct node{
    node *sx;
    node *dx;
    int data;
};

int maxValue(node *tree);

int main(){
    //have fun :)
    return 0;
}

int maxValue(node *tree){
    if(!tree) //if the tree doesn't have any element
        return INT_MAX;
    if(tree -> dx) //if the tree has a right child
        return maxValue(tree -> dx);
    return tree -> data; 
}