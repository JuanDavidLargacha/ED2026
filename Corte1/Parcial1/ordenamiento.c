#include "ordenamiento.h"

// 1. Bubble Sort (Burbuja)
void bubbleSort(float *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Intercambio usando aritmética de apuntadores
                float temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

// 2. Selection Sort (Selección)
void selectionSort(float *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + min_idx)) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            float temp = *(arr + i);
            *(arr + i) = *(arr + min_idx);
            *(arr + min_idx) = temp;
        }
    }
}

// 3. Insertion Sort (Inserción)
void insertionSort(float *arr, int n) {
    for (int i = 1; i < n; i++) {
        float key = *(arr + i);
        int j = i - 1;
        while (j >= 0 && *(arr + j) > key) {
            *(arr + j + 1) = *(arr + j);
            j--;
        }
        *(arr + j + 1) = key;
    }
}