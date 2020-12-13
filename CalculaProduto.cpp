#include <iostream>
#include <locale>

using namespace std;

int main() //comando de início do programa
{
    setlocale(LC_ALL, "Portuguese");

    double Num1, Num2, Mult; //declaração das variáveis do programa
    system("cls"); //comando "LimpaTela" limpa a tela do monitor de vídeo
    //{Entrada de dados}
    cout << "Digite o primeiro número: ";  //mensagem para digitar o primeiro número
    cin >> Num1; //leitura do primeiro número para a memória
    cout << "Digite o segundo número: ";  //mensagem para digitar o primeiro número
    cin >> Num2; //leitura do primeiro número para a memória
    //{Processamento}
    Mult = Num1 * Num2; //calcula o produto e armazena o resultado na variável Mult
    //{Saída da informação}
    cout << endl; //apenas salta uma linha na tela do monitor de vídeo
    cout << "A multiplicação de " << Num1 << " por " << Num2 << " é " << Mult;
    
    return 0; //comando de fim do programa
}