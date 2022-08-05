#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* r;
    FILE* w;
    char word[25] = {0};
    int n = 10177;
    char flag = 0;
    r = fopen("5LWords.txt", "r");
    w = fopen("5LWordsRed.txt", "w");
    char words[n][6];
    for(int i=0;i<n;i++){
        fgets(words[i], 10, r);
        words[i][5] = 0;
    }
    char twoWord[11] = {0};
    char wordsRed[n][6];
    int a = 0;
    char flag2=1;
    for(int i=0;i<n;i++){
        printf("%i,%s\n",i, words[i]);
        for(int j=0;j<a;j++){
            for(int l=0;l<5;l++){
                for(int x=0;x<5;x++){
                    //printf("%c == %c = %i\n", word[i], word[j], (word[i]==word[j]));
                    if(wordsRed[j][l]==words[i][x]){
                        flag+=1;
                    }
                }
            }
            if(flag==5){
                flag2=0;
            }
            flag = 0;
        }
        if(flag2){
            fprintf(w, "%s\n", words[i]);
            strncpy(wordsRed[a+1], words[i], 6);
            a++;
        }
        flag2=1;
    }

    return 0;
}


