#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* r;
    FILE* w;
    char word[25] = {0};
    int n = 0;
    r = fopen("words_alpha.txt", "r");
    w = fopen("5LWords.txt", "w");
    char flag = 0;
    while(feof(r) == 0){
            flag=1;
            fgets(word, 25, r);
            if(strlen(word) == 6){
                for(int i=0;i<6;i++){
                    for(int j=i+1;j<6;j++){
                        //printf("%c == %c = %i\n", word[i], word[j], (word[i]==word[j]));
                        if(word[i]==word[j]||flag==0){
                            flag=0;
                            break;
                        }
                    }
                }
                if(flag){
                    //fprintf(stdout, "%s", word);
                    fprintf(w, "%s", word);
                    n++;
                }
            }
    }
    fclose(r);
    fclose(w);
    return 0;
}

