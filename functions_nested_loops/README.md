Projet C - Fonctions et Boucles Imbriquées 🔁
Ce projet est dédié à l'utilisation de fonctions et de boucles imbriquées en langage C. L'objectif est de comprendre comment les fonctions peuvent être utilisées pour structurer des programmes et comment les boucles imbriquées permettent de résoudre des problèmes plus complexes.

Description 📜
Dans ce projet, tu vas créer des programmes en C qui utilisent des boucles imbriquées pour effectuer des tâches spécifiques. Tu utiliseras également des fonctions pour structurer ton code et rendre ton programme plus modulaire et réutilisable.

Fonctionnalités principales 🚀
Création de fonctions : Définir des fonctions pour encapsuler des opérations spécifiques.
Boucles imbriquées : Utiliser des boucles for, while, ou do-while à l'intérieur d'autres boucles pour effectuer des itérations complexes.
Exemples d'applications : Calculs de matrices, affichage de motifs, etc.
Structure du projet 📂
bash
Copier
Modifier
.
├── main.c          # Point d'entrée du programme
├── loop_functions.c # Fonction qui contient des boucles imbriquées
├── README.md       # Ce fichier, contenant la description du projet
Compilation ⚙️
Pour compiler ce programme, utilise gcc avec les options suivantes :

bash
Copier
Modifier
gcc -Wall -Werror -Wextra -pedantic *.c -o nested_loop_project
Cela créera un exécutable nommé nested_loop_project.

Exécution 🏃‍♂️
Pour exécuter le programme compilé, utilise la commande suivante :

bash
Copier
Modifier
./nested_loop_project
Exemple d'utilisation 🧪
Exemple 1 : Affichage d'un carré avec des boucles imbriquées
Si le programme doit afficher un carré de # de taille n, le code pourrait ressembler à ceci :

c
Copier
Modifier
void print_square(int size)
{
    for (int i = 0; i < size; i++) // boucle externe pour chaque ligne
    {
        for (int j = 0; j < size; j++) // boucle interne pour chaque colonne
        {
            putchar('#');
        }
        putchar('\n');
    }
}
Exemple d'exécution :
bash
Copier
Modifier
$ ./nested_loop_project
Carré de taille 5 :
#####
#####
#####
#####
#####
Cas de test 🧪
Test 1 : Carré de taille 4
bash
Copier
Modifier
$ ./nested_loop_project
Carré de taille 4 :
####
####
####
####
Test 2 : Carré de taille 2
bash
Copier
Modifier
$ ./nested_loop_project
Carré de taille 2 :
##
##
Test 3 : Carré de taille 1
bash
Copier
Modifier
$ ./nested_loop_project
Carré de taille 1 :
#
Exemple de Code 🖥️
Voici un exemple simple d'utilisation de boucles imbriquées dans le fichier loop_functions.c pour afficher un carré :

c
Copier
Modifier
#include <stdio.h>

void print_square(int size)
{
    for (int i = 0; i < size; i++) // Boucle pour chaque ligne
    {
        for (int j = 0; j < size; j++) // Boucle pour chaque colonne
        {
            putchar('#');
        }
        putchar('\n'); // Nouvelle ligne après chaque ligne du carré
    }
}

int main()
{
    int size = 5;
    print_square(size);
    return 0;
}
Auteur 👨‍💻
Ce projet a été réalisé par Anne-Cécile Colléter dans le cadre du programme Holberton.

Licence 📄
Ce projet est sous licence MIT.

🔥 Pourquoi ce projet ?
L'objectif de ce projet est de pratiquer l'utilisation des fonctions et des boucles imbriquées en C. En maîtrisant les boucles imbriquées, tu seras capable de résoudre des problèmes plus complexes et d'optimiser ton code pour travailler avec des structures de données comme les matrices ou les tableaux multidimensionnels.

Astuces pour réussir ce projet :
Comprends bien comment les boucles imbriquées fonctionnent, en particulier la manière dont elles itèrent sur chaque dimension.
Décompose les problèmes complexes en petites fonctions modulaires.
Utilise les fonctions pour éviter la duplication de code et rendre ton programme plus lisible.
