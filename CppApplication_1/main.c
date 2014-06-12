/* 
 * File:   main.c
 * Author: nevin.leh
 *
 * Created on June 10, 2014, 11:18 AM
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
    double contents;
    struct tree *left;
    struct tree *right;
} tree;
double problem_1(tree *root);

double problem_1(tree *root) {

    
    if(root==0){
        return 0.0;
    }
    problem_1((*root).left);
    problem_1((*root).right);
    printf("%lf ", (*root).contents);
}

int main() {
    tree *leaf_1 = malloc(sizeof (tree));
    tree *leaf_2 = malloc(sizeof (tree));
    tree *leaf_3 = malloc(sizeof (tree));
    tree *leaf_4 = malloc(sizeof (tree));
    tree *leaf_5 = malloc(sizeof (tree));
    tree *leaf_6 = malloc(sizeof (tree));
    tree *leaf_0 = malloc(sizeof (tree));
    (*leaf_1).contents = 1;
    (*leaf_2).contents = 2;
    (*leaf_3).contents = 3;
    (*leaf_4).contents = 4;
    (*leaf_5).contents = 5;
    (*leaf_6).contents = 6;
    (*leaf_0).contents = 0;

    (*leaf_6).left = leaf_2;
    (*leaf_2).left = leaf_0;
    (*leaf_5).left = leaf_3;

    (*leaf_6).right = leaf_5;
    (*leaf_2).right = leaf_1;
    (*leaf_5).right = leaf_4;

    (*leaf_0).right = 0;
    (*leaf_4).right = 0;
    (*leaf_1).right = 0;
    (*leaf_3).right = 0;

    (*leaf_0).left = 0;
    (*leaf_1).left = 0;
    (*leaf_3).left = 0;
    (*leaf_4).left = 0;

   
    problem_1(leaf_6);







   

    return (EXIT_SUCCESS);
}

