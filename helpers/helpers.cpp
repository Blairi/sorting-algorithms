#include <iostream>

#include "helpers.h"


const std::string PATH = "/home/blairi/development/projects/sorting-algorithms";


void initialize_array(int *arr, int n)
{
    for (int i = 0; i < n; i++) arr[i] = 0;
}


void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;
}


int *generate_random_array(int size)
{
    int *array = new int[size];
    for (int i = 0; i < size; i++) array[i] = rand() % size + 1;
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