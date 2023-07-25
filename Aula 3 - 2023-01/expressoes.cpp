#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack <char> pilha;
    string string;
    int qtd, bemDef = 1;

    cin >> qtd;

    for (int j = 0; j < qtd; j++) {
        cin >> string;
        
        for (int i = 0; i < string.size(); i++){
            if (string[i] == '(' || string[i] == '{' || string[i] =='[') {
                pilha.push(string[i]);
            }
            else if (string[i] == ')') {
                if (pilha.size() == 0 || pilha.top() != '(') {
                    bemDef = 0;
                    break;
                }
                else
                    pilha.pop();
            }
            else if (string[i] == ']') {
                if (pilha.size() == 0 || pilha.top() != '[') {
                    bemDef = 0;
                    break;
                }
                else
                    pilha.pop();
            }
            else if (string[i] == '}') {
                if (pilha.size() == 0 || pilha.top() != '{') {
                    bemDef = 0;
                    break;
                }
                else
                    pilha.pop();
            }
        }

        if (pilha.size() > 0)
            bemDef = 0;
        
        if (bemDef)
            cout << "S" << '\n';
        else
            cout << "N" << '\n';

        bemDef = 1;

        while (!pilha.empty())
            pilha.pop();
    }
}
