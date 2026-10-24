#include <stdio.h>

struct Inimigo {    
    int id;
    int x; 
    int y;
    bool vivo;
    static int quantidade_vivos;
    static int quantidade_mortos;

    Inimigo(){
        id = -1;
        x = -1; 
        y = -1;
        vivo = false;
    }

    Inimigo(int ID, int X, int Y, int VIVO){        
        id = ID;
        x = X;
        y = Y;
        vivo = VIVO;
    }

    bool foi_acertado(int X, int Y){
        if (x == X && y == Y && vivo == true){
            vivo = false;
            Inimigo::quantidade_mortos++;
            Inimigo::quantidade_vivos--;
            return true;
        }
        return false;
    }
};

int Inimigo::quantidade_vivos = 0;
int Inimigo::quantidade_mortos = 0;

int main(){

    int N;
    scanf("%d", &N); 

    Inimigo inimigo[N];
    Inimigo::quantidade_vivos = N;

    for(int id=0;id<N;id++){
        int x, y;
        scanf("%d %d", &x, &y);

        inimigo[id] = Inimigo(id, x, y, true);
    }

    int M;
    scanf("%d", &M);     

    for(int i=0;i<M;i++){
        int x, y;
        scanf("%d %d", &x, &y);

        for(int id=0;id<N;id++){
            inimigo[id].foi_acertado(x,y);
        }
    }

    printf("vivos: %d\nmortos: %d\n", Inimigo::quantidade_vivos, Inimigo::quantidade_mortos);

    return 0;
}