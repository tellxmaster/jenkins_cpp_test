#include <iostream>

using namespace std;

int main() {
    int size = 5;
    int arr[size];

    for (int i = 0; i < size; i++) {
        int input;
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> input;
        while (input < 0) {
            cout << "Por favor ingrese un número positivo: ";
            cin >> input;
        }
        arr[i] = input;
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Los elementos del arreglo ordenados son: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
