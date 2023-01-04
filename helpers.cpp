#include <iostream>
using namespace std;


void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}


int *generate_random_array(int size)
{
    int *array = new int[size];
    for (int i = 0; i < size; i++) array[i] = rand() % size;
    return array;
}


int *generate_inverted_array(int size)
{
    int *array = new int[size];
    int index = 0;
    for (int i = size; i > 0; i--) array[index++] = i;
    return array;
}


int *generate_sorted_array(int size)
{
    int *array = new int[size];
    for (int i = 0; i < size; i++) array[i] = i + 1;
    return array;
}