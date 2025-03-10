# Projet Argc & Argv

Ce projet a pour objectif de manipuler les arguments passés à la fonction `main` dans des programmes en C. Il vous permet de vous familiariser avec `argc` et `argv`, ainsi que de gérer des cas particuliers comme des arguments non numériques ou un nombre insuffisant d'arguments.

## Table des Matières

- [Tâche 0 : It ain't what they call you, it's what you answer to](#tâche-0--it-aint-what-they-call-you-its-what-you-answer-to)
- [Tâche 1 : Silence is argument carried out by other means](#tâche-1--silence-is-argument-carried-out-by-other-means)
- [Tâche 2 : The best argument against democracy is a five-minute conversation with the average voter](#tâche-2--the-best-argument-against-democracy-is-a-five-minute-conversation-with-the-average-voter)
- [Tâche 3 : Neither irony nor sarcasm is argument](#tâche-3--neither-irony-nor-sarcasm-is-argument)
- [Tâche 4 : To infinity and beyond](#tâche-4--to-infinity-and-beyond)
- [Compilation et Normes](#compilation-et-normes)
- [Auteur](#auteur)

---

## Tâche 0 : It ain't what they call you, it's what you answer to

- **Objectif :**  
  Afficher le nom du programme.

- **Résumé :**  
  Le programme doit imprimer son nom (chemin complet inclus) suivi d’un saut de ligne. Ainsi, si l'exécutable est renommé, le nouveau nom s'affiche sans recompilation.

- **Fichier :**  
  `0-whatsmyname.c`

---

## Tâche 1 : Silence is argument carried out by other means

- **Objectif :**  
  Compter et afficher le nombre d'arguments passés.

- **Résumé :**  
  Le programme affiche le nombre d’arguments reçus suivi d’un saut de ligne.  
  *Exemples :*  
  - `./nargs` affiche `0`  
  - `./nargs hello` affiche `1`

- **Fichier :**  
  `1-args.c`

---

## Tâche 2 : The best argument against democracy is a five-minute conversation with the average voter

- **Objectif :**  
  Afficher tous les arguments passés au programme.

- **Résumé :**  
  Le programme affiche chaque argument (y compris le nom du programme) sur une ligne distincte, permettant ainsi de visualiser tous les arguments individuellement.

- **Fichier :**  
  `2-args.c`

---

## Tâche 3 : Neither irony nor sarcasm is argument

- **Objectif :**  
  Multiplier deux nombres.

- **Résumé :**  
  Le programme multiplie deux nombres fournis en arguments et affiche le résultat suivi d’un saut de ligne.  
  Si le nombre d’arguments n’est pas exactement deux, le programme affiche `Error` suivi d’un saut de ligne et retourne `1`.

- **Fichier :**  
  `3-mul.c`

---

## Tâche 4 : To infinity and beyond

- **Objectif :**  
  Additionner des nombres positifs.

- **Résumé :**  
  Le programme additionne tous les nombres positifs passés en arguments et affiche le total suivi d’un saut de ligne.  
  - Si aucun argument n'est fourni, il affiche `0`.  
  - Si un argument contient des caractères non numériques, le programme affiche `Error` et retourne `1`.

- **Fichier :**  
  `4-add.c`

---

## Compilation et Normes

- **Compilation :**  
  Tous les programmes doivent être compilés sur **Ubuntu 20.04 LTS** avec **gcc** en utilisant les options suivantes :

  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <nom_du_fichier.c> -o <nom_executable>
