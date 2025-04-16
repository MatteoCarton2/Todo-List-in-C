#include "../includes/todo_list.h"

int init_task(t_list *list)
{
    list = malloc(sizeof(list));
    if (!list)
        return (0);
    list->task.id = 0;
    list->task.name = NULL;
    list->task.done = false;
    return (1);
}

int actionSelected(int numberChoice)
{
    switch (numberChoice) {
    case 1:
        // Code pour ajouter une tache
        break;
    case 2:
        // Code pour supprimer une tache
        break;
    case 3:
        // Code pour marquer comme terminee
        break;
    case 4:
        // Code pour quitter
        break;
    default:
        printf("Choix invalide\n");
        break;
    }
}

int main(void)
{
    t_list *list;

    list = NULL;
    if (!init_task(list))
        return (printf("Erreur d'initialisation\n"), 0);

    int numberChoice = 0;

    printf("Que voulez-vous faire ?\n");
    printf("1. Ajouter une tâche\n2. Supprimer une tâche\n3. Marquer une tâche comme terminée\n4. Quitter\n\n");
    printf("Votre choix : ");
    scanf("%d", &numberChoice);
    while (numberChoice <= 0 || numberChoice > 4)
    {
        printf("\nVeuillez choisir UNIQUEMENT un numero entre 1 et 4\n");
        printf("Votre choix : ");
    scanf("%d", &numberChoice);
    }
    actionSelected(numberChoice);

    return (0);
}