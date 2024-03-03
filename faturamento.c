#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <cJSON.h>


int main()
{
    setlocale(LC_ALL, "portuguese");

    FILE *file = fopen("dados.json", "r");
    arq = fopen("dados.xml", "w")
    
    if (!file){
        printf("Erro ao abrir o arquivo JSON.\n");
        return 1;
    }
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET)

    char *json_data = (char*)malloc(file_size+1);
    fread(json_data, 1, file_size, file);
    fclose(file);

    json_data[file_size] ='\0';

    cJSON *root = cJSON_Parse(json_data);

    cJSON *element = cJSON_GetObejectsItemCaseSensitive(root, "nome");
    if (cJSON_IsString(element) && (element->valuestring != NULL)) {
        printf("Nome: %s\n", element-valuestring);
    }

    free(json_data);
    cJSON_Delete(root);

    return 0;
}