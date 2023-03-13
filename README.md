# get_next_line


get_next_line est un programme en C que j'ai codé pour l'école 42 afin de lire un fichier ligne par ligne. Le programme permet de lire des fichiers texte et de stocker chaque ligne lue dans un pointeur fourni en argument.

Le but de ce programme est de fournir un moyen simple et efficace de lire des fichiers ligne par ligne sans avoir à charger l'intégralité du fichier en mémoire. Il est très utile pour les applications qui manipulent de gros fichiers texte.

## Utilisation

Pour utiliser le programme get_next_line, il faut le compiler en utilisant la commande make dans le terminal. Une fois compilé, le programme peut être exécuté en passant le nom du fichier à lire en argument.


```bash
./get_next_line filename.txt
```

Le programme lit ensuite chaque ligne du fichier et l'affiche à l'écran. Il est important de noter que la mémoire allouée pour chaque ligne lue est libérée après utilisation à l'aide de la fonction free.

## Fonctionnement

Le programme get_next_line utilise des appels système pour lire le fichier ligne par ligne. Il stocke les caractères lus dans un buffer interne jusqu'à ce qu'il atteigne la fin de ligne (\n) ou la fin du fichier.

Lorsqu'il atteint la fin de ligne, il copie la ligne dans le pointeur fourni en argument et renvoie 1. Si la fin du fichier est atteinte, il renvoie 0. Si une erreur se produit, il renvoie -1.

Le programme peut également être utilisé pour lire l'entrée standard (stdin) en passant le nom du fichier - en argument.

## Conclusion

get_next_line est un programme utile pour lire des fichiers texte ligne par ligne en C. Il est simple à utiliser et efficace pour manipuler de gros fichiers texte. Le programme est disponible sur la plateforme GitHub de l'école 42 et peut être amélioré pour corriger les bugs et améliorer la performance.
