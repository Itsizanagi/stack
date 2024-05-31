#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> cartas;


    cartas.push("carta 1");
    cartas.push("carta 2");
    cartas.push("carta 3");
    cartas.push("carta 4");

    cout << "size stack: " << cartas.size() << endl;

    cout << "carta removida: "<< cartas.top() << endl; 
    cartas.pop();                 
    cout << "carta removida: "<< cartas.top() << endl;  
    cartas.pop();                 

    cout << "size stack: " << cartas.size() << endl;

    if(cartas.empty()){
        cout << "pilha vazia\n"; // 0 
    } else {
        cout << "pilha com cartas\n"; // 1
    }

    while (!cartas.empty()){
        cout << "cartas do topo: " << cartas.top() << endl;
        cartas.pop();
    }
    cout << "size stack: " << cartas.size() << endl;


    system("pause");
    return 0;
}
