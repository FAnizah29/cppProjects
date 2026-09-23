#include <iostream>
#include <string>



int main() {
    int decision = 0;
    int questions;
    std::cin >> questions;
    for (int i = 0; i < questions; i++){
        int a, b ,c;
        std::cin >> a >> b >> c;
        if (a + b + c >= 2){
            decision++;
        }
    }

    std::cout << decision << '\n';

    return 0;
}
