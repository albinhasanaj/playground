#pragma once
#include <vector>

void bubbleSort(std::vector<int> &arr);
void selectionSort(std::vector<int> &arr);
void insertionSort(std::vector<int> &arr);
void mergeSort(std::vector<int> &arr);
void quickSort(std::vector<int> &arr);
void heapSort(std::vector<int> &arr);

// Helpers
void merge(std::vector<int> &arr, int left, int mid, int right);
int partition(std::vector<int> &arr, int low, int high);
void heapify(std::vector<int> &arr, int n, int i);
