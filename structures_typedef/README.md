Projet C - Structure type def malloc free 
Ce projet a pour but de manipuler la mémoire dynamique en C avec les fonctions malloc et free. Il se concentre sur la gestion de la mémoire allouée dynamiquement pour des structures de données, notamment avec des chaînes de caractères et des pointeurs.

Description 
Ce projet consiste à créer des structures et des fonctions en C qui :

Allouent de la mémoire dynamiquement avec malloc.
Libèrent la mémoire correctement avec free.
Effectuent des opérations simples sur des structures, comme créer, afficher et libérer des objets.
Le programme gère principalement des structures représentant des entités comme un "chien" (exemple de structure dog_t), et met l’accent sur une gestion propre de la mémoire afin d’éviter les fuites.

Fonctionnalités principales 
Création dynamique d’une structure : Allouer dynamiquement de la mémoire pour une structure dog_t.
Affichage des informations : Afficher proprement les informations de la structure.
Libération de la mémoire : Utilisation de free pour libérer la mémoire allouée.
Structure du projet 
bash
Copier
Modifier
.
├── dog.h           # Déclaration de la structure et des prototypes des fonctions
├── new_dog.c       # Fonction pour créer un nouveau chien
├── print_dog.c     # Fonction pour afficher un chien
├── free_dog.c      # Fonction pour libérer un chien
└── main.c          # Fonction principale pour tester les fonctions
Compilation ⚙️
Pour compiler le programme, tu peux utiliser gcc avec les options suivantes :

bash
Copier
Modifier
gcc -Wall -Werror -Wextra -pedantic *.c -o dog_project
Exécution 
Une fois le programme compilé, tu peux l'exécuter avec la commande suivante :

bash
Copier
Modifier
./dog_project

Exemple d'utilisation 
Voici un exemple de ce que tu devrais voir lorsque tu exécutes le programme. Le programme crée un chien avec un nom, un âge et un propriétaire, puis affiche ses informations :

yaml
Copier
Modifier
Nom : Rex
Âge : 3.5
Propriétaire : Alice

Tests et Fonctionnalités 🧪
Les principales fonctionnalités du projet sont les suivantes :

Création d'un chien : Une structure dog_t est créée dynamiquement avec des données fournies par l'utilisateur.
Affichage du chien : Le programme affiche les informations du chien à partir de la mémoire allouée dynamiquement.
Libération de la mémoire : La mémoire allouée pour chaque chien est libérée après son utilisation pour éviter les fuites de mémoire.

Auteur 
Ce projet a été réalisé par Anne-Cécile Colléter dans le cadre du programme Holberton.

Licence 
Ce projet est sous licence MIT.

Pourquoi ce projet ?
L'objectif est de comprendre la gestion dynamique de la mémoire en C. Il est essentiel de maîtriser l'utilisation de malloc pour allouer de la mémoire et free pour la libérer, afin de prévenir les fuites de mémoire dans les programmes C.

Astuces pour réussir ce projet :
Toujours vérifier si malloc a réussi avant de continuer.
Ne pas oublier de free toutes les zones mémoire allouées dynamiquement.
Penser à utiliser des fonctions auxiliaires pour découper ton code de manière logique et réutilisable.
Ce README.md est conçu pour fournir un aperçu clair et concis de ton projet, en expliquant ce 
