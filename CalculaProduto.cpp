#include <iostream>
#include <locale>

using namespace std;

int main() //comando de in�cio do programa
{
    setlocale(LC_ALL, "Portuguese");

    double Num1, Num2, Mult; //declara��o das vari�veis do programa
    system("cls"); //comando "LimpaTela" limpa a tela do monitor de v�deo
    //{Entrada de dados}
    cout << "Digite o primeiro n�mero: ";  //mensagem para digitar o primeiro n�mero
    cin >> Num1; //leitura do primeiro n�mero para a mem�ria
    cout << "Digite o segundo n�mero: ";  //mensagem para digitar o primeiro n�mero
    cin >> Num2; //leitura do primeiro n�mero para a mem�ria
    //{Processamento}
    Mult = Num1 * Num2; //calcula o produto e armazena o resultado na vari�vel Mult
    //{Sa�da da informa��o}
    cout << endl; //apenas salta uma linha na tela do monitor de v�deo
    cout << "A multiplica��o de " << Num1 << " por " << Num2 << " � " << Mult;
    
    return 0; //comando de fim do programa
}