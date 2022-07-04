#ifndef _UTILS_H_
#define _UTILS_H_


extern void array_print(int data[], size_t n);
//Gibt ein Array gegebener länge auf der Konsole aus.
extern int create_file_with_random_numbers(char *filename, size_t n);
//Erstellt ein Textfile mit n Zufallszahlen [0,10000), eine Zahl pro Zeile.
extern int delete_file(char *filename);
//Löscht ein File aus dem Filesystem (siehe stdio.h remove())
extern int *load_data_from(char *filename, size_t n);

#endif /* _UTILS_H_ */