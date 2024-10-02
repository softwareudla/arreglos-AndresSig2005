#include <stdio.h>
int main(int argc, char const *argv[])
{
    float calificaciones [5] [3];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Calificacion del estudiante %d --> asignatura %d: ", i + 1, j + 1);
            scanf("%f", &calificaciones[i][j]);
        }
    }
    
    for (int i = 0; i < 5; i++) {
        float suma, promedio; 
        suma = 0; 
        for (int j = 0; j < 3; j++) {
            suma += calificaciones[i][j];
        }
        promedio = suma / 3;
        printf("Promedio del estudiante %d: %.2f\n", i + 1, promedio);
    }
    
    for (int j = 0; j < 3; j++) {
        float suma, promedio;
        suma = 0; 
        for (int i = 0; i < 5; i++) {
            suma += calificaciones[i][j];
        }
        promedio = suma / 5;
        printf("Promedio de la asignatura %d: %.2f\n", j + 1, promedio);
    }

    for (int j = 0; j < 3; j++) {
        int aprobados, reprobados;
        aprobados = 0; 
        reprobados = 0; 
        for (int i = 0; i < 5; i++) {
            if (calificaciones[i][j] >= 6) {
                aprobados++;
            } else {
                reprobados++;
            }
        }
        printf("Asignatura %d Aprobados: %d  Reprobados: %d\n", j + 1, aprobados, reprobados);
    }
    return 0;
}