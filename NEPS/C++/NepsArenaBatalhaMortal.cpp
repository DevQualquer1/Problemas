#include <stdio.h>

class Personagem {
protected:
    int vida;
    int defesa;

    int quantidade_ataques;    
    int *ataques;

    void recebe_golpe(Personagem B);
    void golpear(Personagem B);

public:
    Personagem(){
        quantidade_ataques = 2;
        ataques = new int[quantidade_ataques];
    }

    int get_vida(){
        return vida;
    }    

    void receber_dano(int dano){
        this->vida -= (dano - defesa) > 0 ? (dano - defesa) : 0;
    }

    int* get_ataques(){
        return ataques;
    }
};

class Heroi : public Personagem {

public:
    Heroi(int vida, int defesa, int ataque1, int ataque2){
        this->vida = vida;
        this->defesa = defesa;
        this->ataques[0] = ataque1;
        this->ataques[1] = ataque2;
    }

    void golpear(Personagem &B, int opcao){
        if(opcao == 0){
            B.receber_dano(ataques[opcao]);
        }else{
            B.receber_dano(ataques[opcao]);
        }
    }
};


class Inimigo : public Personagem {

public:
    Inimigo(int vida, int defesa, int ataque){
        this->vida = vida;
        this->defesa = defesa;
        this->ataques[0] = ataque;      
    }

    void golpear(Personagem &B){
        B.receber_dano(ataques[0]);
    }
};

int main(){
    
    int vida, defesa, ataque1, ataque2;

    scanf("%d %d %d %d", &vida, &defesa, &ataque1, &ataque2);
    
    Heroi heroi = Heroi(vida, defesa, ataque1, ataque2);    

    scanf("%d %d %d", &vida, &defesa, &ataque1);

    Inimigo inimigo = Inimigo(vida, defesa, ataque1);

    int rounds, opcao;
    scanf("%d", &rounds);
    for(int i=0; i < rounds && inimigo.get_vida() > 0 && heroi.get_vida() > 0; i++){        

        scanf("%d", &opcao);
        heroi.golpear(inimigo, opcao);        
        inimigo.golpear(heroi);               

    }

    if ((heroi.get_vida() <= 0 && inimigo.get_vida() <= 0) || (heroi.get_vida() > 0 && inimigo.get_vida() > 0)){
        printf("EMPATE\n");
    }else if (heroi.get_vida() > 0){
        printf("HEROI\n");
    }else {
        printf("INIMIGO\n");
    }
}