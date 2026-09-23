#include <iostream>
#include <string>

int main(void){
    int x = 0;
    int questions;
    std::cin >> questions;
    for (int i = 0;i < questions; i++){
        std::string statement;
        std::cin >> statement;
        if (statement == "X++" || statement == "++X"){
            x++;
        }
        else if (statement == "X--" || statement == "--X"){
            x--;
        }
    }
}