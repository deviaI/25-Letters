#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    FILE* r;
    FILE* w;
    r = fopen("5LWords.txt", "r");
    w = fopen("5LWordsMatrix.txt", "w");
    int n = 8321;
    int ihelp = 0;
    char words[n][6];
    bool bMatrix[n][26];
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            bMatrix[i][j] = 0;
        }
    }
    for(int i=0;i<n;i++){
        fgets(words[i], 10, r);
        words[i][5] = 0;
    }
    for(int i = 0;i<n;i++){
        for(int j=0;j<5;j++){
            ihelp = (int)words[i][j] - 97;
            bMatrix[i][ihelp]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            fprintf(w, "%i ", bMatrix[i][j]);
        }
        fprintf(w, "\n");

    }
    return 0;
}
