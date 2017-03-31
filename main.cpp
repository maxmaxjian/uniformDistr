#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

int UniformDistr(int a, int b) {
    int l = b-a+1;
    int i = 0;
    while (pow(2,i) < l)
        i++;
    // std::cout << "i = " << i << std::endl;

    int count, result;
    while (true) {
        count = 0;
        result = 0;
        while (count <= i) {
            result *= 2;
            result += (rand()%2==0 ? 0 : 1);
            count++;
        }
        if (result < l)
            return result+a;
    }
}

int main() {
    int a = 1, b = 7;

    for (size_t i = 0; i < 10; i++) {
        srand(time(NULL));
        std::cout << UniformDistr(a,b) << " ";
    }
    std::cout << std::endl;
}
