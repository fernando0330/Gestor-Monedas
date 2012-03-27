#include "Objeto.h"

#ifndef LISTA_H
#define LISTA_H
/**
 * Clase para las listas de objetos
 * @version 1.0
 * @since 1.0
 */
class Lista{
    private:
        //objeto primero de la lista
        Objeto* primero;
        //objeto ultimo de la lista
        Objeto* ultimo;
        //tamano
        int size;
    public:
        //metodo constructor
        Lista();
        //metodo para obtener el primer elemento de la lista
        Objeto* getPrimero();
        //metodo para obtener el tamano actual de la lista
        int getSize();
        //metodo para obtener el ultimo elemento de la lista
        Objeto* getUltimo();
        //metodo para agregar un elemento a la lista
        void agregar(Objeto* objeto);
        //metodo para remover un elemento a la lista
        void remover(int key);
};
#endif //LISTA_H
