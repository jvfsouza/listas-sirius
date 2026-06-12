#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     char resposta = 's';

    while (resposta  == 's')
    {
        int status[3];

        int status_sensor_temperatura = rand() % 4;
        int status_sensor_pressao = rand() % 4;
        int status_sensor_camera = rand() % 4;

        status[0] = status_sensor_temperatura;
        status[1] = status_sensor_pressao;
        status[2] = status_sensor_camera;
        int NivelBateria = rand() % 100;

        for (int i = 0; i < 3; i++)
        {
            if (status[i] == 0){
                // sensor desligado
                if (NivelBateria > 50){
                    printf("ligando sensor %i, status da bateria: %i \n", i, NivelBateria);
                }

            } else if (status[i] == 1) {
                // sensor ok
                printf("o sensor %i esta ok \n", i);

            } else if (status[i] == 2) {
                // sensor em falha
                printf("reinicio do sensor %i \n", i);
                status[i] = 1;

            } else {
                // sensor sem energia
                if (NivelBateria < 15){
                    printf("desligando sensor %i \n ", i);
                    status[i] = 0;
                } else {
                    printf("ligando sensor %i\n", i);
                    status[i] = 1;
                }
            }
        }

        printf("deseja gerar uma nova simulacao? (s/n): ");
        scanf(" %c", &resposta);
    }
    return 0;
}