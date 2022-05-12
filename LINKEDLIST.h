//
// Created by Matteo Mazzone on 2022-05-10.
//

#ifndef COMP_248_A1_LINKEDLIST_H
#define COMP_248_A1_LINKEDLIST_H


typedef enum {
    ATOM, LIST
} eltype;
typedef char atom;
struct _listnode;

typedef struct {                        //Data Struct
    eltype type;
    union {
        atom a;
        struct _listnode* l;
    };
} element;

typedef struct _listnode {
    element el;                         //Data of node
    struct _listnode* next;            //Points to next node in list
} * list;

const element NIL = { .type=LIST, .l=NULL };


element aasel(atom a) {
    element el;
    el.type = ATOM;
    el.a = a;
    return el;
}


element lasel(list l) {
    element el;
    el.type = LIST;
    el.l = l;
    return el;
}


element car(element e) {
    if (e.type == LIST) {
        return e.l->el;
    } else {
        return NIL;
    }
}

list cdr(element e) {
    if (e.type != LIST || e.l == NULL) {
        return NULL;
    } else {
        return e.l->next;
    }
}

list cddr(element e) {
    return cdr(lasel(cdr(e)));
}

list cons(element e, list l) {
    list newList = malloc(sizeof(struct _listnode));
    newList->el = e;
    newList->next = l;
    return newList;
}


list append(list l1, list l2) {
    list newList = malloc(sizeof(struct _listnode));




    return newList;
}
/*
 *
void lfreer(list l) {

}
*/
void print(element e) {
    if (e.type == ATOM) {
        printf(" %c ", e.a);

    } else {
        if (e.l == NULL) {              // e == NIL
            printf("NIL");
            return;
        }
        printf("(");


        list current = e.l;
        while(current != NULL) {
            print(current->el);
            current = current->next;
        }
        printf(")");
    }


}

#endif //COMP_248_A1_LINKEDLIST_H
