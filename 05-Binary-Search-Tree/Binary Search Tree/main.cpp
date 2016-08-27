#include <iostream>
#include <ctime>
#include "BST.h"

using namespace std;


int main() {

    srand(time(NULL));
    BST<int,int> bst = BST<int,int>();

    int n = 100;
    for( int i = 0 ; i < n ; i ++ ){
        int key = rand()%n;
        // 为了后续测试方便,这里value值取和key值一样
        int value = key;
        bst.insert(key,value);
    }

    cout<<"size: "<<bst.size()<<endl<<endl;

    cout<<"preOrder: ";
    bst.preOrder();
    cout<<endl<<endl;

    cout<<"inOrder: ";
    bst.inOrder();
    cout<<endl<<endl;

    cout<<"postOrder: ";
    bst.postOrder();
    cout<<endl<<endl;

    cout<<"levelOrder: ";
    bst.levelOrder();
    cout<<endl<<endl;

    for( int i = 0 ; i < n ; i ++ ){
        if( bst.contain(i) ){
            int* res = bst.search(i);
            assert( res != NULL && *res == i );
        }
    }

    return 0;
}