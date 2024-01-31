#include <iostream>
#include <string>
#include <chrono>
#include <Windows.h>

int main(void) {
   // SetConsoleOutputCP(65001);

    std::string a(100000, 'a');

    {
        auto start = std::chrono::steady_clock::now();
        std::string copy = a;
        auto end = std::chrono::steady_clock::now();

        auto duration = end - start;
        std::cout << "コピーにかかった時間: " << duration.count() << " マイクロ秒" << std::endl;
    }
   
    {
        auto start = std::chrono::steady_clock::now();
        std::string move = std::move(a);
        auto end = std::chrono::steady_clock::now();

        auto duration = end - start;
        std::cout << "移動にかかった時間: " << duration.count() << " マイクロ秒" << std::endl;
    }

    return 0;
}