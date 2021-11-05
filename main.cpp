#include <iostream>

template <typename T, typename F>
void BubleSort (int *arr, int size)
{
    F temp;
    F temp2;
    while (size)
    {
        for (int i = 0; i < size-1; ++i) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                temp2 = arr[i+1];
                arr[i+1] = temp;
                arr[i] = temp2;
            }
        }
        --size;
    }
}


int main() {
    const int size = 10;
    int *arr = new int [size]{4,2,1,8,0,5,3,9,7,6,};
    BubleSort <int,int> (arr,size);
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }
}
