
//Visit postOrder Tree/ binary Tree/ etc..

#include <iostream>

using namespace std;

struct node{
    node *sx;
    node *dx;
    int data;
};

void postOrder(node *root);

int main(){
    //have fun :)
    return 0;
}


void postOrder(node *root){
    if(root){
        postOrder(root -> sx);
        postOrder(root -> dx);
        cout << root -> data << "\t";
    }
}