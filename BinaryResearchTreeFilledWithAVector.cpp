
//Fill a binary-research Tree with a static vector

#include <iostream>

using namespace std;

#define MAX 5 // using a costant to create an example

struct node{
    node *sx;
    node *dx;
    int data;
};



int main(){
    int vec[MAX] = {1,2,3,4,5}; //a simple example 

    node *tree = fillTree(vec,MAX); 
    
    //have fun :)
    
    return 0;
}

node *fillTree(int vec[],int num){
    return fillTreebinaryResearch(vec,0,5); //incapsulating the function
}

node *createNew(node *left,node *right,int newNumber){ //creating a new pointer
    node *newPointer = new node;

    newPointer -> sx = left;
    newPointer -> dx = right;
    newPointer -> data = newNumber;

    return newPointer;
}

node *fillTreebinaryResearch(int vec[],int il,int sl){ //il = inferior limit, sl = superior limit

    int median = (il+sl) / 2; //always finding the median valor in the vector

    node *tree = createNew(NULL,NULL,vec[median]);

    if(il < sl){
        tree -> sx = fillTreebinaryResearch(vec,il,median-1);
        tree -> dx = fillTreebinaryResearch(vec,median+1,sl);
    }

    if(il > sl)
        return NULL; //the inferior limit has overcrossed the superior limit

    
    return tree;
}
