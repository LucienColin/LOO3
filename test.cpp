#include <iostream>
int main(){
    std::cout << "French or English or German (1/2/3): ";
    int i;
    std::cin >> i;
    if(i == 1){
        std::cout << "Bonjour le monde! Nous pouvons commencer le travail !" << std::endl;
    } 
    if(i == 2){
        std::cout << "Hello World! We can start the work !" << std::endl;
    } 
    if(i == 3){
        std::cout << "Hallo Welt! Wir können die Arbeit beginnen !" << std::endl;
    }
    return 0;
}