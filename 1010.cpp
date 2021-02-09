// 1010.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

int main()
{
    int codigo, quantidade;
    double valor, aux;

    std::cin >> codigo >> quantidade >> valor;

        aux = quantidade * valor;

    std::cin >> codigo >> quantidade >> valor;

        aux = quantidade * valor + aux;

        std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << aux << "\n";
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
