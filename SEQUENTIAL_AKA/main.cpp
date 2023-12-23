#include <iostream>

int iterativeSequentialSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i; // Angka ditemukan, mengembalikan indeks
        }
    }
    return -1; // Angka tidak ditemukan
}

main() {
    const int size = 10000;
    int arr[size];

    // Mengisi array dengan data 10, 20, 30, ..., 10000
    for (int i = 0; i < size; ++i) {
        arr[i] = (i + 1) * 10;
    }

    int key;
    std::cout << "ini sequential" << std::endl;
    std::cout << "Masukkan angka yang ingin dicari: ";
    std::cin >> key;

    // Panggil fungsi Sequential Search Iteratif
    int result = iterativeSequentialSearch(arr, size, key);
    if (result != -1) {
        std::cout << "Angka " << key << " ditemukan pada indeks " << result << std::endl;
    } else {
        std::cout << "Angka " << key << " tidak ditemukan." << std::endl;
    }

    return 0;
}
