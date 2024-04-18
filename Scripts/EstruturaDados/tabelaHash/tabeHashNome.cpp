#include <iostream>
#include <string>

int hashFunction(const std::string& name) {
    return name.length() - 1;
}

int main() {
    std::string name = "Frederico";
    int hashValue = hashFunction(name);
    std::cout << "O nome '" << name << "' sera colocado na posicao " << hashValue << " na memoria.\n";
    return 0;
}
