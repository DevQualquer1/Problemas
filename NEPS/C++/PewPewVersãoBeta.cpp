#include <stdio.h>

class Inimigo {    
    int x; 
    int y;
    bool vivo;

public:
    Inimigo(){
        x = 0;
        y = 0;
        vivo = true;
    }

    Inimigo(int x, int y, bool vivo){
        this-> x = x;
        this-> y = y;
        this-> vivo = vivo;
    }

    bool foi_acertado(int x, int y){
        if(this->x == x && this->y == y && vivo == true){
            vivo = false;
            return true;
        }
        return false;
    }
};

class Fase{

    Inimigo *inimigos;
    int quantidade_inimigos;
    int pontos; 
    int municao;

public:
    Fase(int quantidade_inimigos, int municao){
        this->inimigos = new Inimigo[quantidade_inimigos];        
        this->quantidade_inimigos = quantidade_inimigos;
        this->pontos = 0;
        this->municao = municao;
    }

    void inicializar_inimigos(){
        for(int i = 0; i < quantidade_inimigos; i++){
            int x, y;

            scanf("%d %d", &x, &y);

            inimigos[i] = Inimigo(x, y, true);
        }
    }

    void jogar(int T){
        for (int i = 0; i < T; i++){
            int x, y;

            scanf("%d %d", &x, &y);

            if (municao > 0){
                for (int j = 0; j < quantidade_inimigos; j++){
                    if (inimigos[j].foi_acertado(x, y)){
                        pontos += 10;
                    }
                }
                municao--;
            }
        }
    }
    
    void imprimir_relatorio(){
        printf("Relatorio da Fase\n");
        printf("Pontuacao: %d\n", this->pontos);
        printf("Municao: %d\n", this->municao);
    }

};

int main(){

    int N;
    int M;

    scanf("%d %d", &N, &M); 

    Fase fase = Fase(N, M);

    fase.inicializar_inimigos();

    int T;
    scanf("%d", &T); 

    fase.jogar(T);
    fase.imprimir_relatorio();        
}