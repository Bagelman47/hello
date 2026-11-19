#include <iostream>
#include <string>
#include <thread>
#include <chrono>

#include "greeting.h"

int main() {
    std::cout << "Enter your name: ";
    std::string name = read_name(std::cin);

    std::cout << make_greeting(name);
    std::cout << "Press Ctrl+C to exit.";

    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
