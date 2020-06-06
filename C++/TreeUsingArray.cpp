#include<iostream>

using namespace std;

int leftChild (int nodeIndex)
{
    return (nodeIndex * 2) +1 ;
}

int rightChild (int nodeIndex)
{
    return (nodeIndex * 2) + 2 ;
}

int preOrder ( int *mas, int nodeIndex, int &i, int *arr )
{

    if (mas[nodeIndex] == 0 ){
        return 0;
    }
    arr[i++] = mas[nodeIndex];

    preOrder(mas, leftChild(nodeIndex), i, arr);

    preOrder(mas, rightChild(nodeIndex), i, arr);

}

int main ()
{

    int mas[93] = { 2, 3, 1, 6, 5, 8, 9, 7 };
    int arr[9] = { 0 };
    int i;

    preOrder( mas, 0, i, arr);

    for(int k = 0; k < 9; k++){
        cout << "PreOrder : " <<  arr[k] << endl ;
    }
    return 0;

}




