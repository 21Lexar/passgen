#include<iostream>
#include<random>
#include<array>

const std::array<char, 94> charPool = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '+', '-',
    '=', '[', ']', '{', '}', '|', ';', ':', ',', '.', '<', '>', '?'
};

int main(void){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 94);
    std::string password;
    for (int i = 0; i < 18; ++i) {
        int index = dist(gen);
        password += charPool[index];
    }
    std::cout << "Generated password: " << password << std::endl;
}    