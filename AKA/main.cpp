#include <iostream>

// Fungsi untuk Binary Search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Angka ditemukan, mengembalikan indeks
        }
        else if (arr[mid] < key) {
            low = mid + 1; // Cari di bagian kanan
        }
        else {
            high = mid - 1; // Cari di bagian kiri
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
    std::cout << "ini binary" << std::endl;
    std::cout << "Masukkan angka yang ingin dicari: ";
    std::cin >> key;

    // Panggil fungsi Binary Search
    int result = binarySearch(arr, 0, size - 1, key);

    if (result != -1) {
        std::cout << "Angka " << key << " ditemukan pada indeks " << result << std::endl;
    } else {
        std::cout << "Angka " << key << " tidak ditemukan." << std::endl;
    }

    return 0;
}
