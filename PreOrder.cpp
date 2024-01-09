
//Visit preOrder Tree/ binary Tree/ etc..

#include <iostream>

using namespace std;

struct node{
    node *sx;
    node *dx;
    int data;
};

void preOrder(node *root);

int main(){
    //have fun :)
    return 0;
}


void preOrder(node *root){
    if(root){
        cout << root -> data << "\t";
        preOrder(root -> sx);
        preOrder(root -> dx);
    }
}