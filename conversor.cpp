#include <iostream>
#include <string>

int main() {
    int opcao = 0;

    std::cout << "    CONVERSOR DE BASES NUMERICAS    " << std::endl;
    std::cout << "1. Decimal para Binario" << std::endl;
    std::cout << "2. Decimal para Hexadecimal" << std::endl;
    std::cout << "3. Binario para Decimal" << std::endl;
    std::cout << "4. Hexadecimal para Decimal" << std::endl;
    std::cout << "Escolha uma opcao: ";
    std::cin >> opcao;
 while (opcao < 1 || opcao > 4) {
        std::cout << "Opcao inválida! Digite novamente (1 a 4): ";
        std::cin >> opcao;
    
    if (opcao == 1) {
        int n;
        std::cout << std::endl << "Digite o numero decimal: ";
        std::cin >> n;

        std::cout << "Resultado em Binario: ";
        if (n == 0) {
            std::cout << 0 << std::endl;
        } else {
            std::string binario = "";
            while (n > 0) {
                int resto = n % 2;
                if (resto == 1) {
                    binario = "1" + binario;
                } else {
                    binario = "0" + binario;
                }
                n = n / 2;
            }
            std::cout << binario << std::endl;
        }
        std::cout << "------------------------------------" << std::endl;
    } 
    
    else if (opcao == 2) {
        int n;
        std::cout << std::endl << "Digite o numero decimal: ";
        std::cin >> n;

        std::cout << "Resultado em Hexadecimal: ";
        if (n == 0) {
            std::cout << 0 << std::endl;
        } else {
            std::string hexa = "";
            while (n > 0) {
                int resto = n % 16;
                if (resto < 10) {
                    if (resto == 0) hexa = "0" + hexa;
                    else if (resto == 1) hexa = "1" + hexa;
                    else if (resto == 2) hexa = "2" + hexa;
                    else if (resto == 3) hexa = "3" + hexa;
                    else if (resto == 4) hexa = "4" + hexa;
                    else if (resto == 5) hexa = "5" + hexa;
                    else if (resto == 6) hexa = "6" + hexa;
                    else if (resto == 7) hexa = "7" + hexa;
                    else if (resto == 8) hexa = "8" + hexa;
                    else if (resto == 9) hexa = "9" + hexa;
                } else {
                    if (resto == 10) hexa = "A" + hexa;
                    else if (resto == 11) hexa = "B" + hexa;
                    else if (resto == 12) hexa = "C" + hexa;
                    else if (resto == 13) hexa = "D" + hexa;
                    else if (resto == 14) hexa = "E" + hexa;
                    else if (resto == 15) hexa = "F" + hexa;
                }
                n = n / 16;
            }
            std::cout << hexa << std::endl;
        }
        
    }
    
    else if (opcao == 3) {
        std::string binario;
        std::cout << std::endl << "Digite o numero binario: ";
        std::cin >> binario;

        int decimal = 0;
        int potencia = 1;

        for (int i = binario.length() - 1; i >= 0; i--) {
            if (binario[i] == '1') {
                decimal += potencia;
            }
            potencia = potencia * 2;
        }

        std::cout << "Resultado em Decimal: " << decimal << std::endl;
        
    }
 
    else if (opcao == 4) {
        std::string hexa;
        std::cout << std::endl << "Digite o numero hexadecimal: ";
        std::cin >> hexa;

        int decimal = 0;
        int potencia = 1;

        for (int i = hexa.length() - 1; i >= 0; i--) {
            int valorCaractere = 0;

            if (hexa[i] == '0') valorCaractere = 0;
            else if (hexa[i] == '1') valorCaractere = 1;
            else if (hexa[i] == '2') valorCaractere = 2;
            else if (hexa[i] == '3') valorCaractere = 3;
            else if (hexa[i] == '4') valorCaractere = 4;
            else if (hexa[i] == '5') valorCaractere = 5;
            else if (hexa[i] == '6') valorCaractere = 6;
            else if (hexa[i] == '7') valorCaractere = 7;
            else if (hexa[i] == '8') valorCaractere = 8;
            else if (hexa[i] == '9') valorCaractere = 9;
            else if (hexa[i] == 'A' || hexa[i] == 'a') valorCaractere = 10;
            else if (hexa[i] == 'B' || hexa[i] == 'b') valorCaractere = 11;
            else if (hexa[i] == 'C' || hexa[i] == 'c') valorCaractere = 12;
            else if (hexa[i] == 'D' || hexa[i] == 'd') valorCaractere = 13;
            else if (hexa[i] == 'E' || hexa[i] == 'e') valorCaractere = 14;
            else if (hexa[i] == 'F' || hexa[i] == 'f') valorCaractere = 15;

            decimal += valorCaractere * potencia;
            potencia = potencia * 16;
        }

        std::cout << "Resultado em Decimal: " << decimal << std::endl;
       
    }
    
    else {
        std::cout << std::endl << "Opcao invalida!" << std::endl;
        
    }

    return 0;
}
