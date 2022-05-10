//
// Created by Matteo Mazzone on 2022-05-10.
//

#ifndef COMP_248_A1_LINKEDLIST_H
#define COMP_248_A1_LINKEDLIST_H


typedef enum { ATOM, LIST } eltype;
typedef char atom;
struct _listnode;

typedef struct {
    eltype type;
    union {
        atom a;
        struct _listnode* l;
    };
} element;

typedef struct _listnode {
    element el;
    struct _listnode * next;
} * list;
const element NIL = { .type=LIST, .l=NULL };

element aasel(atom a) {
    element check;
    check.type = ATOM;
    check.a = a;
    return check;
}

element lasel(list l) {
    element check;
    check.type = LIST;
    check.l = l;
    return check;
}

element car(element e){
    if (e.type == LIST){
        return e;
    } else{
        return NIL;
    }
}

list cdr(element e) {
    
}

list cddr(element e) {
    e = cdr(e);
    return e;
}

list cons(element e, list l) {
    list newList;
    newList * head = NULL;
    head = 
}

list append(list l1, list l2) {
    
}

void lfreer(list l) {

}

void print(element e) {

}

#endif //COMP_248_A1_LINKEDLIST_H
