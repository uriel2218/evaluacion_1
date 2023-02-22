#include <stdio.h>

int main() {
    struct Pregunta {
        char* pregunta;
        int puntos;
    };
    
    struct Pregunta preguntas[] = {
        {"¿Qué tan cariñosx te consideras? (1-10)", 5},
        {"¿Te gusta la misma comida que a mí? (1-10)", 3},
        {"¿Tienes metas claras para tu futuro? (1-10)", 4},
        {"¿Eres puntual? (1-10)", 2},
        {"¿Te gusta viajar tanto como a mí? (1-10)", 4},
        {"¿Prefieres pasar la noche en casa? (1-10)", 3},
        {"¿Eres extrovertido/a? (1-10)", 2},
        {"¿Te gusta practicar deporte? (1-10)", 3},
        {"¿Te gustaría tener hijos en un futuro? (1-10)", 4},
        {"¿Eres una persona honesta? (1-10)", 5},
    };
    
    printf("Por favor responde las siguientes preguntas con valores del 1 al 10:\n");

    float total_puntos = 0;
    float max_puntos = 0;
    int respuesta = 0;

    for (int i = 0; i < 10; i++) {
        printf("%s", preguntas[i].pregunta);
        scanf("%d", &respuesta);
        max_puntos += preguntas[i].puntos;
        total_puntos += respuesta / 10.0 * preguntas[i].puntos;
    }

    float resultado = total_puntos / max_puntos;

    if (resultado > 0.7) {
        printf("Felicidades, este es un buen prospecto.\n");
    }
    else {
        printf("Lo siento, esta persona no cumple con lo que buscas.\n");
    }

    return 0;
}

