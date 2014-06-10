/* 
 * File:   main.c
 * Author: nevin.leh
 *
 * Created on June 10, 2014, 11:18 AM
 */

#include <stdio.h>
#include <stdlib.h>
void problem_1(int tree_arr[], int size);
    
   
typedef struct tree{ 
    double contents; 
    struct tree *left; 
    struct tree *right;
} tree;

/*
 * 
 */

void problem_1(int value_arr[], int size){
   
}
int main() {
    tree *leaf_1= malloc(sizeof(tree));
    tree *leaf_2= malloc(sizeof(tree));
    tree *leaf_3= malloc(sizeof(tree));
    tree *leaf_4= malloc(sizeof(tree));
    tree *leaf_5= malloc(sizeof(tree));
    tree *leaf_6= malloc(sizeof(tree));
    tree *leaf_7= malloc(sizeof(tree));
    (*leaf_1).contents=6;
    (*leaf_2).contents=2;
    (*leaf_3).contents=5;
    (*leaf_4).contents=0;    
    (*leaf_5).contents=1;
    (*leaf_6).contents=3;
    (*leaf_7).contents=4;
    (*leaf_1).left=leaf_2;
    
    return (EXIT_SUCCESS);
}

