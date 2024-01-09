
//Visit inOrder Tree/ binary Tree/ etc..

#include <iostream>

using namespace std;

struct node{
    node *sx;
    node *dx;
    int data;
};

void inOrder(node *root);

int main(){
    //have fun :)
    return 0;
}


void inOrder(node *root){
    if(root){
        inOrder(root -> sx);
        cout << root -> data << "\t";
        inOrder(root -> dx);
    }
}