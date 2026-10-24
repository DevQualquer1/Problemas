#include <stdio.h>

template <typename T>
class MeuVetorDinamico {
    T *memoria;
    int t_max;
    int t;

public:
    MeuVetorDinamico(int tamanho_maximo=2){
        this->memoria = new T[tamanho_maximo];
        this->t = 0;
        this->t_max = tamanho_maximo;
    }

    ~MeuVetorDinamico(){
        delete[] memoria;
    }    

    T operator [] (int indice){
        return this->memoria[indice];
    }

    void adicionar(T x){
        if (t == t_max){

            this->t_max = 2*t_max;
            T *copy = new T[this->t_max];        

            for(int i=0;i<t;i++){
                copy[i] = this->memoria[i];
            }

            T* tmp = this->memoria;

            this->memoria = copy;

            delete[] tmp;
        }

        this->memoria[t] = x;
        this->t++;
    }

    void remove_ultimo(){
        if (t > 0){
            this->t--;
        }
    }

    int tamanho(){
        return this->t;
    }
};

int main(){
    MeuVetorDinamico<int> vetor;

    int N, x;
    char op;
    scanf("%d", &N);

    for(int i=0;i<N;i++){
        scanf(" %c", &op);

        if(op == 'A'){
            scanf("%d", &x);
            vetor.adicionar(x);
        }else{
            vetor.remove_ultimo();
        }
        
    }

    for(int i=0;i<vetor.tamanho();i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");
}