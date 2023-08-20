#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size)
{
    for (int i = 0; i < actual_size; i++)
    {
        if (i >= logical_size)
        {
            std::cout << "_ ";
        }
        else
        {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
   
    int logical_size, actual_size, value;
    do
    {
        std::cout << "¬ведите фактичеcкий размер массива: ";
        std::cin >> actual_size;
        std::cout << "¬ведите логический размер массива: ";
        std::cin >> logical_size;
        if (logical_size > actual_size)
        {
            std::cout << "ќшибка! Ћогический размер массива не может превышать фактический! " << std::endl;
        }
    } while (logical_size > actual_size);

    int* arr = new int[actual_size];

    for (int i = 0; i < logical_size; i++)
    {
        std::cout << "¬ведите arr[" << i << "]: ";
        std::cin >> value;
        arr[i] = value;
    }
    std::cout << "ƒинамический массив: ";
    print_dynamic_array(arr, logical_size, actual_size);

    delete[] arr;
}