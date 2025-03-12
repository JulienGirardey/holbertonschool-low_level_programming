# Résumé du projet : Structures et Typedef en C

## Objectifs d'apprentissage
- Comprendre et utiliser les **structures** en C.
- Apprendre à utiliser **typedef** pour simplifier la gestion des types.
- Savoir quand et comment utiliser les structures dans la programmation en C.

## Exigences générales
- Éditeurs autorisés : `vi`, `vim`, `emacs`.
- Le code doit être compilé avec **Ubuntu 20.04 LTS** en utilisant `gcc` et les options suivantes : `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Il est interdit d'utiliser des variables globales.
- Ne pas dépasser **5 fonctions par fichier**.
- Utiliser la **style Betty** pour le code (vérifié avec `betty-style.pl` et `betty-doc.pl`).
- Seules certaines fonctions standard sont autorisées : `printf`, `malloc`, `free`, et `exit`.
- Chaque fichier d'en-tête (`.h`) doit être **include-guarded**.

## Tâches

1. **Définir une structure `dog`** :
   - Créez une structure `dog` avec trois éléments : `name` (type `char *`), `age` (type `float`), et `owner` (type `char *`).
   
2. **Initialiser une variable de type `struct dog`** :
   - Écrire une fonction pour initialiser une structure `dog` en lui attribuant des valeurs pour `name`, `age` et `owner`.

3. **Imprimer une structure `dog`** :
   - Écrire une fonction qui affiche les éléments d'une structure `dog`. Si un élément est `NULL`, afficher `(nil)` à la place.
   
4. **Définir un alias pour `struct dog` avec typedef** :
   - Créez un alias `dog_t` pour `struct dog` en utilisant `typedef`.

5. **Créer une nouvelle structure `dog`** :
   - Écrire une fonction qui crée dynamiquement une nouvelle structure `dog`, en copiant les valeurs de `name` et `owner`. Retourner `NULL` si l'allocation échoue.

6. **Libérer une structure `dog`** :
   - Écrire une fonction qui libère la mémoire allouée pour une structure `dog` afin d'éviter les fuites de mémoire.

## Fichiers importants
- Le projet nécessite des fichiers `.h` et `.c` pour implémenter les structures et les fonctions associées. Le fichier principal de l'en-tête est `dog.h`.

## Conclusion
Le projet vous apprend à travailler avec des structures et des types définis par l'utilisateur en C, et il met l'accent sur la gestion dynamique de la mémoire et le respect des bonnes pratiques de programmation.