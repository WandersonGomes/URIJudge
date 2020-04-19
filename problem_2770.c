//PROBLEM 2770
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2770
#include <stdio.h>

//FUNCAO QUE INFORMA SE EH POSSIVEL CONFECCIONAR A PCI DO CLIENTE
int ehPossivelConfeccionar(long int largura_placa_empresa, long int altura_placa_empresa, long int largura_pci_cliente, long int altura_pci_cliente) {
    long int tmp = 0;

    if ((largura_pci_cliente <= largura_placa_empresa) && (altura_pci_cliente <= altura_placa_empresa)) {
        return 1;
    }

    //caso tenha que rotacionar a placa
    tmp = largura_pci_cliente;
    largura_pci_cliente = altura_pci_cliente;
    altura_pci_cliente = tmp;

    if ((largura_pci_cliente <= largura_placa_empresa) && (altura_pci_cliente <= altura_placa_empresa)) {
        return 1;
    }

    return 0;
}

//PROGRAMA PRINCIPAL
int main(){
    long int largura_placa_empresa = 0, altura_placa_empresa = 0;
    long int largura_pci_cliente = 0, altura_pci_cliente = 0;
    int numero_pedidos = 0, i = 0;

    while (scanf("%ld %ld %d", &largura_placa_empresa, &altura_placa_empresa, &numero_pedidos) != EOF) {
        for (i = 0; i < numero_pedidos; i++) {
            scanf("%ld %ld", &largura_pci_cliente, &altura_pci_cliente);

            if (ehPossivelConfeccionar(largura_placa_empresa, altura_placa_empresa, largura_pci_cliente, altura_pci_cliente)) {
                printf("Sim\n");
            } else {
                printf("Nao\n");
            }
        }
    }    

    return 0;
}