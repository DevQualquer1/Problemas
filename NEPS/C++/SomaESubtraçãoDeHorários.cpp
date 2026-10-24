#include <stdio.h>

class Horario{
public:
    int horas, minutos, segundos;

    Horario(){}

    Horario(int horas, int minutos, int segundos){
        this->horas = horas;
        this->minutos = minutos;
        this->segundos = segundos;
    }

    Horario operator + (Horario b){
        int h = horas + b.horas;
        int m = minutos + b.minutos;
        int s = segundos + b.segundos;

        if (s >= 60){
            m += s / 60;
            s %= 60;
        }

        if (m >= 60){
            h += m / 60;
            m %= 60;
        }

        if (h >= 24){
            h %= 24;
        }

        return Horario(h, m, s);
    }

    Horario operator - (Horario b){
        int h = horas - b.horas;
        int m = minutos - b.minutos;
        int s = segundos - b.segundos;

        if (s < 0){
            s += 60;
            m--;
        }

        if (m < 0){
            m += 60;
            h--;
        }

        if (h < 0){
            h += 24;
        }

        return Horario(h, m, s);
    }
};

int main(){
    Horario a, b, c;
    char op;

    scanf("%d:%d:%d", &a.horas, &a.minutos, &a.segundos);
    scanf("%d:%d:%d", &b.horas, &b.minutos, &b.segundos);
    scanf(" %c", &op);

    if(op == 'A'){
        c = a + b;
    } 
    else if(op == 'S'){
        c = a - b;
    }

    printf("%02d:%02d:%02d\n", c.horas, c.minutos, c.segundos);
}