#include <stdio.h>

class Projeto {
public:
    int requisito_programacao;
    int requisito_design;
};

class Empregado {
protected:
    int valor_por_projeto;
    int valor_recebido = 0; 
public:

    bool capaz(Projeto P){
        return false;
    }

    void receber_recompensa(){
        this->valor_recebido += valor_por_projeto;
    }

    int get_valor_recebido(){
        return this->valor_recebido;
    }

};

class Programador : public Empregado {
    int habilidade_programacao;
public:

    Programador(int valor_por_projeto, int habilidade_programacao){
        this->valor_por_projeto = valor_por_projeto;
        this->habilidade_programacao = habilidade_programacao;
    }

    bool capaz(Projeto P){
        if(habilidade_programacao >= P.requisito_programacao){
            return true;
        }
        return false;
    }
};

class Designer : public Empregado {
    int habilidade_design;
public:

    Designer(int valor_por_projeto, int habilidade_design){
        this->valor_por_projeto = valor_por_projeto;
        this->habilidade_design = habilidade_design;
    }

    bool capaz(Projeto P){
        if (habilidade_design >= P.requisito_design){
            return true;
        }
        return false;
    }
};

int main(){

    int valor, habilidade;

    scanf("%d %d", &valor, &habilidade);

    Programador programador = Programador(valor, habilidade);

    scanf("%d %d", &valor, &habilidade);

    Designer designer = Designer(valor, habilidade);

    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        Projeto projeto;
        scanf("%d %d", &projeto.requisito_programacao, &projeto.requisito_design);

        if (programador.capaz(projeto) && designer.capaz(projeto)){
            programador.receber_recompensa();
            designer.receber_recompensa();
        }
    }

    printf("Programador: R$ %d\n", programador.get_valor_recebido());
    printf("Designer: R$ %d\n", designer.get_valor_recebido());
}