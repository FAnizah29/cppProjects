#include <iostream>
#include <string>


bool dangerous(std::string players);

int main(void){
    std::string players;
    std::cin >> players;

    if (dangerous(players)){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
}

bool dangerous(std::string players){
    int identical1 = 0;
    int identical0 = 0;

    for (char x : players){
        if (players[x] == '1'){
            identical1++;
            identical0 = 0;
        }
        else{
            identical0++;
            identical1 = 0;
        }
    }

    if (identical1 == 7 || identical0 == 7){
        return true;
    }
    return false;
}