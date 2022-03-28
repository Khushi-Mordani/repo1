#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


struct relation{
    char* parent;
    char** children;
    int lastIndex;
};


int getGrandChildren(char* input, struct relation* relationships[], int totalParents){
    int grandchildren = 0;
    // finding input
    for(int i=0; i<totalParents; i++){
        if(!strcmp(input, relationships[i]->parent)){
            // found parent, finding children
            for(int j=0; j<=relationships[i]->lastIndex; j++){
                // find relationships[i]->children[j]
                for(int k=0; k<totalParents; k++){
                    if(!strcmp(relationships[i]->children[j], relationships[k]->parent)){
                        // found child, get grandparents count
                        grandchildren += (relationships[k]->lastIndex + 1);
                    }
                }
            }
        }
    }
    return grandchildren;
}
// Driver program to test above functions
int main(){
    int n;
    scanf("%d\n", &n);
    int MAX_PARENTS = 100;
    int MAX_CHILDREN = 100;
    struct relation* relationships[100];
    int relationshipsItr = 0;
   
   
    FILE *fp;
    /* opening file for reading */
    fp = fopen("relations.txt" , "r");
    if(fp == NULL) {
        perror("Error opening file");
        return -1;
    }
   
    char relationStr[100];
    while(fgets (relationStr, 100, fp)){
        char * child = strtok(relationStr, " ");
        char * parent = strtok(NULL, " ");

        // removing new line
        parent[strcspn(parent, "\n")] = 0;
       
        const size_t len_parent = strlen(parent) + 1;
        char * parent_cp = malloc(len_parent);
        strncpy(parent_cp, parent, len_parent);
       
        const size_t len_child = strlen(child) + 1;
        char * child_cp = malloc(len_child);
        strncpy(child_cp, child, len_child);

        bool parentFound = false;
        for(int i=0; i<relationshipsItr; i++){
            while (!strcmp(relationships[i]->parent, parent_cp)){    
                parentFound = true;
                (relationships[i]->lastIndex)++;
                (relationships[i]->children)[relationships[i]->lastIndex] = child_cp;
                break;
            }
        }
       
        if(!parentFound){
            relationships[relationshipsItr] = malloc(sizeof(struct relation));
            relationships[relationshipsItr]->parent = parent_cp;
            relationships[relationshipsItr]->lastIndex = 0;
            relationships[relationshipsItr]->children = malloc(MAX_CHILDREN * sizeof(char*));
            (relationships[relationshipsItr]->children)[relationships[relationshipsItr]->lastIndex] = child_cp;
            relationshipsItr++;
        }
    }
    fclose(fp);
   
    // char input[100] = "ronaldo";
    char input[100];
    scanf("%[^\n]s",input);
   
    printf("%d", getGrandChildren(input, relationships, relationshipsItr));
    return 0;
}
