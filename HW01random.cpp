#include <iostream>
#include <random>
#include <array>

int main(){
    std::random_device rd;
    std::default_random_engine engine{rd()};
    std::uniform_real_distribution randomjan{0.000,1.000};

    constexpr size_t arraysize{100};

    std::array <int, arraysize> frequency{};

    for (int i{1}; i<=6'000'000;i++){
        frequency.at(randomjan (engine)*100)++;
    }
    
    for (short i{0};i<arraysize;i++){
        std::cout<<i*0.01<<"   "<<frequency.at(i)<<"\n";
    }
}