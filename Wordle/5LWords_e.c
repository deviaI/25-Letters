#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main(){
    FILE* r;
    FILE* w;
    r = fopen("5LWords.txt", "r");
    w = fopen("5LWordsResultText.txt", "a");
    int n = 8321;
    int ihelp = 0;
    char words[n][6];
    int sol[5] = {0};
    for(int i=0;i<n;i++){
        fgets(words[i], 10, r);
        words[i][5] = 0;
    }
    fclose(r);
    r = fopen("5LWordsResult.txt", "r");
    while(feof(r)==0){
        fscanf(r, "%i %i %i %i %i", &sol[0],&sol[1], &sol[2], &sol[3], &sol[4]);
        fprintf(w, "%s %s %s %s %s\n", words[sol[0]], words[sol[1]], words[sol[2]], words[sol[3]], words[sol[4]]);
    }
    return 0;
}
