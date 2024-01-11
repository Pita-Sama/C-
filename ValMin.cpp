//in this code you'll find the function that return the minor value of a binary-research-Tree

#include <iostream>

using namespace std;


struct node{
    node *sx;
    node *dx;
    int data;
};

int minValue(node *tree);

int main(){
    //have fun :)
    return 0;
}

int minValue(node *tree){
    if(!tree) //if the tree doesn't have any element
        return INT_MIN;
    if(tree -> sx) //if the tree has a left child
        return minValue(tree -> sx);
    return tree -> data; 
}