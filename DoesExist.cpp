//by an already filled tree, you ask if a value is already present

#include <iostream>

using namespace std;

struct node{
    node *sx;
    node *dx;
    int data;
};

bool exist(int toFind,node *tree);

int main(){
    //have fun :)
}

bool exist(int toFind,node *tree){
    if(tree == NULL) //if the element doesn't exist
        return false;

    if(tree -> data == toFind) //if the element is present in the tree
        return true;
    
    return (exist(toFind,tree -> sx) and exist(toFind,tree -> dx)); //the recursion statement
}