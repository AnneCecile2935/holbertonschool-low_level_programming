More Functions, More Nested Loops
Description
Ce projet "More Functions, More Nested Loops" fait partie du programme d'apprentissage à Holberton School. L'objectif principal de ce projet est de renforcer les compétences en programmation en C, avec une attention particulière sur les fonctions et les boucles imbriquées (nested loops). Ce projet vise à améliorer ta capacité à résoudre des problèmes complexes et à mieux comprendre l'interaction entre les fonctions et les boucles dans des programmes plus élaborés.

Objectifs :
Maîtriser l'utilisation des fonctions et des boucles imbriquées.
Comprendre comment utiliser des boucles pour résoudre des problèmes qui nécessitent plusieurs passes ou des itérations sur des structures de données multidimensionnelles.
Renforcer la capacité à manipuler des fonctions en C pour créer des programmes modulaires et maintenables.
Table of Contents
Description
Fonctions Implémentées
Exemples d'Exécution
Exigences
Instructions d'Installation
Auteurs
Fonctions Implémentées
1. int _putchar(char c);
Fonction pour imprimer un caractère.
2. void print_numbers(void);
Fonction pour imprimer les chiffres de 0 à 9, suivis d'un saut de ligne.
3. void print_most_numbers(void);
Fonction qui imprime les chiffres de 0 à 9, à l'exception de 2 et 4.
4. void more_numbers(void);
Fonction qui imprime les chiffres de 0 à 14, 10 fois.
5. void print_line(int n);
Fonction qui imprime une ligne horizontale composée du caractère '_' (underscore).
6. void print_diagonal(int n);
Fonction qui imprime une diagonale composée de caractères '\'.
7. void print_square(int size);
Fonction qui imprime un carré de taille size en utilisant le caractère #.
8. void print_triangle(int size);
Fonction qui imprime un triangle rectangle de taille size en utilisant le caractère #.
Exemples d'Exécution
Exemple 1 : print_numbers()
bash
Copier
Modifier
$ ./main
0
1
2
3
4
5
6
7
8
9
Exemple 2 : print_most_numbers()
bash
Copier
Modifier
$ ./main
0
1
3
4
5
6
7
8
9
Exemple 3 : more_numbers()
bash
Copier
Modifier
$ ./main
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
...
Exemple 4 : print_square()
bash
Copier
Modifier
$ ./main
#####
#####
#####
#####
#####
Exigences
Ce projet est écrit en C et doit être compilé avec le compilateur gcc.
Le projet doit être exécuté sur un environnement de développement Holberton School ou une machine configurée de manière similaire.
Instructions d'Installation
Clone le dépôt : Si tu n'as pas encore cloné le dépôt, tu peux le faire en utilisant la commande suivante :

bash
Copier
Modifier
git clone https://github.com/ton-username/holbertonschool-more-functions.git
Compile ton code : Assure-toi que tu utilises le compilateur gcc pour compiler le code. Pour ce projet, tu peux compiler les fichiers de cette manière :

bash
Copier
Modifier
gcc -Wall -Werror -Wextra -pedantic *.c -o main
Exécute le programme : Une fois compilé, tu peux exécuter ton programme en utilisant :

bash
Copier
Modifier
./main
Auteurs
Colléter Anne-Cécile

Licence
Ce projet est sous la licence MIT License. Consulte le fichier LICENSE pour plus de détails.

Remarques
Assure-toi de tester toutes les fonctions avant de soumettre ton travail.
Utilise des commentaires et un code propre pour respecter les standards de codage de l'école Holberton.
