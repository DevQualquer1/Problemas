#include <stdio.h>

class Pilhas{
    int a, b, c;
public: 

    Pilhas(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }

    int get_a(){ return a; }

    int get_b(){ return b; }

    int get_c(){ return c; }

    void remover_caixas(int a, int b, int c){
        this->a = this->a - a > 0 ? this->a - a : 0;
        this->b = this->b - b > 0 ? this->b - b : 0;
        this->c = this->c - c > 0 ? this->c - c : 0;        
    }

    bool todas_vazias(){
        if (this->a == 0 && this->b == 0 && this->c == 0){
            return true;
        }

        return false;
    }
};

class Robo {
protected:
    bool completou = false;

public:
    bool completou_tarefa(){
        return this->completou;
    }

    virtual void operar(Pilhas &P)=0;
};

class ModeloA : public Robo{
public:

    void operar(Pilhas &P) override{
        P.remover_caixas(1, 1, 1);

        if (P.todas_vazias()){
            completou = true;
        }
    }
};

class ModeloB : public Robo{
public:

    void operar(Pilhas &P) override{

        if (P.get_a() > 0){
            P.remover_caixas(3, 0, 0);
        }
        else if (P.get_b() > 0){
            P.remover_caixas(0, 3, 0);
        }
        else if (P.get_c() > 0){
            P.remover_caixas(0, 0, 3);
        }

        if (P.todas_vazias()){
            completou = true;
        }
    }
};

int main(){

    Robo *modeloA;
    Robo *modeloB;

    modeloA = new ModeloA();
    modeloB = new ModeloB();

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    Pilhas PA = Pilhas(a, b, c);
    Pilhas PB = Pilhas(a, b, c);

    while (!modeloA->completou_tarefa() &&
           !modeloB->completou_tarefa()){

        modeloA->operar(PA);
        modeloB->operar(PB);
    }

    if (modeloA->completou_tarefa() &&
        modeloB->completou_tarefa()){

        printf("EMPATE");

    } else if (modeloA->completou_tarefa()){

        printf("MODELO A");

    } else {

        printf("MODELO B");
    }

    return 0;
}