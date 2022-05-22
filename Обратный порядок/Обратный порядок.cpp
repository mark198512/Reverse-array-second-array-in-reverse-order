﻿// Обратный порядок.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>

void printArray(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int original_arr[] = { 1, 2, 3, 4, 5 };
    int len = sizeof(original_arr) / sizeof(original_arr[0]);

    int copied_arr[len], i, j = 0;

    // Copy the elements of the array
    // in the copied_arr in Reverse Order
    for (i = 0; i < len; i++) {
        copied_arr[i] = original_arr[len - i - 1];
    }

    // Print the original_arr
    printf("\nOriginal array: ");
    printArray(original_arr, len);

    // Print the copied array
    printf("\nResultant array: ");
    printArray(copied_arr, len);

    return 0;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
