#include <iostream>
#include <thread>

void mov_point(int arr[]){
    int* ptr= &arr[1];
    std::cout << "Puntero a posición uno: " << ptr << "  valor: " << *ptr << std::endl;
    std::cout << "Puntero a posición tres: " << ptr+2 << " valor: " << *(ptr+2) << std::endl;
}

void func(int x){
    std::cout << "Inside thread: " << x << std::endl;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    std::thread t(mov_point, arr);
    t.join();
    std::thread m(func, 100);
    m.join();
    std::cout << "Outside threads" << std::endl;
    return 0;
}