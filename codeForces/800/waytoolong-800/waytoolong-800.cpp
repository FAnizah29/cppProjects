#include <iostream>
#include <string>
#include <vector>

std::string abbr(std::string& word);

int main(){
    int lines;
    std::cin >> lines; 
    std::vector<std::string> words(lines);
    
    for (int i = 0; i < lines; i++){
        std::cin >> words[i];
    }
    
    for (int i = 0; i < lines; i++){
        std::cout << abbr(words[i]) << "\n";
    }
}

std::string abbr(std::string& word){
    if (word.length() > 10){
        std::string brev;
        brev += word.front();
        brev += std::to_string(word.length() - 2);
        brev += word.back();
            return brev;
    }

    return word;


}