Projet Malloc et Free - Holberton School
Description
Le projet malloc free vise à enseigner l'allocation dynamique de mémoire en C à l'aide des fonctions malloc() et free(). Ce projet est une introduction à la gestion de la mémoire et permet de mieux comprendre les concepts de gestion mémoire dans les programmes C.

L'objectif de ce projet est de comprendre comment utiliser correctement la fonction malloc() pour allouer de la mémoire dynamique, et la fonction free() pour libérer cette mémoire afin d'éviter les fuites de mémoire. Ces deux fonctions sont essentielles dans les programmes C lorsqu'on travaille avec des données dont la taille n'est pas connue à l'avance ou qui peuvent changer pendant l'exécution du programme.

Fonctions à implémenter
malloc() : Alloue une certaine quantité de mémoire et retourne un pointeur vers celle-ci.
free() : Libère la mémoire allouée dynamiquement par malloc() pour éviter les fuites de mémoire.
But du projet
Le but du projet est d'implémenter les fonctions malloc et free en C, afin de comprendre leur fonctionnement en profondeur et leur impact sur la gestion de la mémoire dans un programme.

Objectifs :
Comprendre l'allocation dynamique de mémoire avec malloc().
Gérer la libération de la mémoire avec free() pour éviter les fuites.
Créer des structures de données dynamiques et les manipuler.
Gérer la mémoire de manière efficace dans des programmes qui manipulent des objets de taille variable.
Fonctionnalités attendues
Dans le cadre de ce projet, les étudiants doivent implémenter des fonctions similaires à celles du standard C : malloc() et free(). Ces fonctions devront gérer dynamiquement la mémoire pour créer, manipuler et libérer de l'espace mémoire pour les objets, tout en minimisant les erreurs telles que les fuites de mémoire.

Instructions
Compilation : Le projet doit être compilé en utilisant gcc avec les options suivantes :

nginx
Copier
Modifier
gcc -Wall -Werror -Wextra -pedantic -std=c99 -o malloc_free malloc_free.c
Fichiers à inclure :

malloc_free.c : Le fichier principal contenant les implémentations des fonctions malloc et free.
malloc_free.h : Le fichier d'en-tête contenant les déclarations des fonctions.
Exemples d'utilisation :
Voici un exemple de programme qui utilise les fonctions malloc() et free() :

c
Copier
Modifier
#include "malloc_free.h"
#include <stdio.h>

int main() {
    int *array;

    // Allocation dynamique de mémoire pour un tableau de 10 entiers
    array = (int *)malloc(10 * sizeof(int));
    if (array == NULL) {
        printf("Échec de l'allocation de mémoire\n");
        return 1;
    }

    // Utilisation du tableau
    for (int i = 0; i < 10; i++) {
        array[i] = i;
        printf("%d ", array[i]);
    }

    printf("\n");

    // Libération de la mémoire allouée
    free(array);

    return 0;
}
Fonctions à implémenter :

malloc(size_t size) : Alloue la mémoire et retourne un pointeur vers l'espace alloué.
free(void *ptr) : Libère la mémoire pointée par ptr.
Comment contribuer
Si vous souhaitez contribuer à ce projet, vous pouvez envoyer une pull request (PR) après avoir modifié le code et testé votre implémentation.

Assurez-vous que toutes les fonctions sont correctement implémentées et testées avant de soumettre votre code.
Testez les cas de bord, notamment la gestion des erreurs et la libération correcte de la mémoire.
Aide
Si vous avez des questions ou rencontrez des problèmes, n'hésitez pas à contacter l'instructeur ou à poser des questions sur les forums.

Rappels
Ne jamais oublier de libérer la mémoire : L'une des erreurs les plus fréquentes dans ce projet (et en C en général) est de ne pas libérer la mémoire allouée, ce qui entraîne des fuites de mémoire.

Tester votre code : Utilisez des outils comme valgrind pour détecter les fuites de mémoire dans votre programme.

License
Le code source de ce projet est sous la licence de Holberton School.
