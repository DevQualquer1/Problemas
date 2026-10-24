#include <stdio.h>

struct Inimigo {    
    int id;
    int x; 
    int y;
    bool vivo;

    Inimigo(){
        id = 0;
        x = 0;
        y = 0;
        vivo = false;
    }

    Inimigo(int ID, int X, int Y, bool VIVO){
        id = ID;
        x = X;
        y = Y;
        vivo = VIVO;        
    }

    bool foi_acertado(int X, int Y){
        if (x == X && y == Y && vivo == true){
            vivo = false;
            return true;
        }

        return false;
    }

};

int main(){

    int N;
    scanf("%d", &N); 

    Inimigo inimigo[N];

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
            inimigo[id].foi_acertado(x, y);
        }
    }

    for (int i = 0; i < N; i++){
        if (inimigo[i].vivo == false){
            printf("%d ", inimigo[i].id);
        }
    }
}