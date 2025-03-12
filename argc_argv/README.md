Projet C - Arguments en Ligne de Commande (argc, argv) 📜
Ce projet est centré sur la gestion des arguments passés au programme en ligne de commande avec argc et argv en C. Il permet de comprendre comment manipuler les entrées utilisateur et gérer l'interaction avec le système à travers les arguments de la ligne de commande.

Description 📖
Ce projet consiste à :

Prendre en entrée des arguments via la ligne de commande.
Manipuler et afficher ces arguments en utilisant argc (le nombre d'arguments) et argv (les arguments eux-mêmes sous forme de tableau).
Effectuer des opérations simples en fonction des arguments fournis.
Fonctionnalités principales 🚀
Récupération d'arguments : Utilisation de argc et argv pour capturer les arguments passés lors de l'appel du programme.
Affichage des arguments : Affichage de chaque argument passé à la ligne de commande, avec l'indice de chaque argument.
Vérification des arguments : Vérification de la validité des arguments et traitement des erreurs.
Structure du projet 📂
bash
Copier
Modifier
.
├── main.c          # Point d'entrée du programme, gestion des arguments
├── README.md       # Ce fichier, contenant la description du projet
Compilation ⚙️
Pour compiler le programme, utilise gcc avec les options suivantes :

bash
Copier
Modifier
gcc -Wall -Werror -Wextra -pedantic main.c -o arg_project
Cela créera un exécutable nommé arg_project.

Exécution 🏃‍♂️
Pour exécuter le programme, tu peux passer des arguments en ligne de commande après le nom de l'exécutable :

bash
Copier
Modifier
./arg_project arg1 arg2 arg3
Exemple :
bash
Copier
Modifier
$ ./arg_project Hello World 42
Nombre d'arguments: 4
Argument 1: ./arg_project
Argument 2: Hello
Argument 3: World
Argument 4: 42
Tests 🧪
Cas de test :
Sans arguments :
bash
Copier
Modifier
$ ./arg_project
Nombre d'arguments: 1
Argument 1: ./arg_project
Avec plusieurs arguments :
bash
Copier
Modifier
$ ./arg_project Hello Holberton School
Nombre d'arguments: 4
Argument 1: ./arg_project
Argument 2: Hello
Argument 3: Holberton
Argument 4: School
Avec un seul argument supplémentaire :
bash
Copier
Modifier
$ ./arg_project Test
Nombre d'arguments: 2
Argument 1: ./arg_project
Argument 2: Test
Exemple de Code 🖥️
Voici un exemple de programme qui utilise argc et argv :

c
Copier
Modifier
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("Nombre d'arguments: %d\n", argc);
    for (i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i + 1, argv[i]);
    }

    return 0;
}
Auteur 👨‍💻
Ce projet a été réalisé par Anne-Cécile Colléter dans le cadre du programme Holberton.

Licence 📄
Ce projet est sous licence MIT.

🔥 Pourquoi ce projet ?
L'objectif de ce projet est de comprendre comment les arguments de la ligne de commande sont gérés en C. Cela t’aidera à maîtriser la gestion des entrées utilisateur et à interagir efficacement avec ton programme via des commandes externes.

Astuces pour réussir ce projet :
Ne jamais oublier que argc est le nombre total d'arguments passés, y compris le nom du programme lui-même.
Les arguments sont stockés sous forme de chaînes de caractères dans argv, donc assure-toi de les manipuler correctement.
Vérifie toujours le nombre d'arguments pour éviter des erreurs ou des comportements inattendus.
