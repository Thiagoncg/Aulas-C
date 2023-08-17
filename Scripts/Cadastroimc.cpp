#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Person {
    string name;
    int age;
    double weight;
    double height;
};

double calculateBMI(double weight, double height) {
    return weight / (height * height);
}

int main() {
    vector<Person> people;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Cadastrar pessoa\n";
        cout << "2. Listar pessoas\n";
        cout << "3. Pesquisar pessoa\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opção: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                Person person;
                cout << "Nome: ";
                cin.ignore(); // Clear the newline character from the buffer
                getline(cin, person.name);
                cout << "Idade: ";
                cin >> person.age;
                cout << "Peso (kg): ";
                cin >> person.weight;
                cout << "Altura (m): ";
                cin >> person.height;

                people.push_back(person);
                cout << "Pessoa cadastrada com sucesso!\n";
                break;
            }
            case 2: {
                if (people.empty()) {
                    cout << "Nenhuma pessoa cadastrada.\n";
                } else {
                    cout << "Lista de pessoas:\n";
                    for (const Person& person : people) {
                        cout << "Nome: " << person.name << "\n";
                        cout << "Idade: " << person.age << "\n";
                        cout << "IMC: " << calculateBMI(person.weight, person.height) << "\n";
                        cout << "----------------------\n";
                    }
                }
                break;
            }
            case 3: {
                cout << "Digite o nome da pessoa a pesquisar: ";
                string searchName;
                cin.ignore(); // Clear the newline character from the buffer
                getline(cin, searchName);

                bool found = false;
                for (const Person& person : people) {
                    if (person.name == searchName) {
                        cout << "Nome: " << person.name << "\n";
                        cout << "Idade: " << person.age << "\n";
                        cout << "IMC: " << calculateBMI(person.weight, person.height) << "\n";
                        cout << "----------------------\n";
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Pessoa não encontrada.\n";
                }
                break;
            }
            case 4: {
                cout << "Saindo do programa.\n";
                return 0;
            }
            default:
                cout << "Opção inválida. Escolha uma opção válida do menu.\n";
                break;
        }
    }

    return 0;
}
