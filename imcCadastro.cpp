#include <iostream>>
#include <string>
#include <vector>

gravar video deste código e postr trabalho.

using namespace std;

struct Person
{
    /* data */
    string name;
    int age;
    double weight;
    double height;
};

double calcularBMI(double weight, double height)
{
    return weight / (height * height);
}

int main()
{
    vector<Person> people;

    while (true)
    {
        cout << "MENU INFORMATIVO\n";
        cout << "1 - Cadastrar cliente\n";
        cout << "2 - Listar Cliente\n";
        cout << "3 - Sair\n";
        cout << "4 - Escolha a opção\n";

        int choice;
        cin >> choice;


        switch (choice){
            case 1:{
                Person person;
                cout <<"nome";
                cin.ignore();
                getline(cin, person.name);

                cout <<"idade";
                cin>> person.age;

                cout << "Peso (Kg)";
                cin >> person.weight;

                cout <<"Altura (m)";
                cin >> person.height;

                people.push_back(person);
                cout <<"Pessoa cadastrada com sucesso\n";
            }
        }

    }
}
