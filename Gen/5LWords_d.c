#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    FILE* r;
    FILE* w;
    r = fopen("5LWordsMatrix.txt", "r");
    w = fopen("5LWordsResult.txt", "w");
    int n = 10177;
    int ihelp = 0;
    char words[n][6];
    bool bMatrix[n][26];
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            fscanf(r, "%d", &bMatrix[i][j]);
        }
    }
    int iZ , iF;
    printf("Start Loop\n");
    scanf("%i", &iZ);
    printf("End Loop\n");
    scanf("%i", &iF);
    for(int i=iZ;i<iF;i++){
        printf("Running Loop %i of %i\n", i, n);
        for(int j=i+1;j<n;j++){
             // printf("    Running iLoop %i of %i of Loop %i of %i\n", j+1, n, i+1, n);
        /*ij*/if(!(bMatrix[i][0] && bMatrix[j][0]) && !(bMatrix[i][1] && bMatrix[j][1]) && !(bMatrix[i][2] && bMatrix[j][2]) &&  !(bMatrix[i][3] && bMatrix[j][3]) && !(bMatrix[i][4] && bMatrix[j][4]) && !(bMatrix[i][5] && bMatrix[j][5]) && !(bMatrix[i][6] && bMatrix[j][6]) && !(bMatrix[i][7] && bMatrix[j][7]) && !(bMatrix[i][8] && bMatrix[j][8]) &&  !(bMatrix[i][9] && bMatrix[j][9])&&   !(bMatrix[i][10] && bMatrix[j][10]) && !(bMatrix[i][11] && bMatrix[j][11]) && !(bMatrix[i][12] && bMatrix[j][12]) &&  !(bMatrix[i][13] && bMatrix[j][13]) && !(bMatrix[i][14] && bMatrix[j][14]) && !(bMatrix[i][15] && bMatrix[j][15]) && !(bMatrix[i][16] && bMatrix[j][16]) && !(bMatrix[i][17] && bMatrix[j][17]) && !(bMatrix[i][18] && bMatrix[j][18]) &&  !(bMatrix[i][19] && bMatrix[j][19]) &&    !(bMatrix[i][20] && bMatrix[j][20]) && !(bMatrix[i][21] && bMatrix[j][21]) && !(bMatrix[i][22] && bMatrix[j][22]) &&  !(bMatrix[i][23] && bMatrix[j][23]) && !(bMatrix[i][24] && bMatrix[j][24]) && !(bMatrix[i][25] && bMatrix[j][25])){
                for(int k=j+1;k<n;k++){
                /*ik*/if(!(bMatrix[i][0] && bMatrix[k][0]) && !(bMatrix[i][1] && bMatrix[k][1]) && !(bMatrix[i][2] && bMatrix[k][2]) &&  !(bMatrix[i][3] && bMatrix[k][3]) && !(bMatrix[i][4] && bMatrix[k][4]) && !(bMatrix[i][5] && bMatrix[k][5]) && !(bMatrix[i][6] && bMatrix[k][6]) && !(bMatrix[i][7] && bMatrix[k][7]) && !(bMatrix[i][8] && bMatrix[k][8]) &&  !(bMatrix[i][9] && bMatrix[k][9])&&   !(bMatrix[i][10] && bMatrix[k][10]) && !(bMatrix[i][11] && bMatrix[k][11]) && !(bMatrix[i][12] && bMatrix[k][12]) &&  !(bMatrix[i][13] && bMatrix[k][13]) && !(bMatrix[i][14] && bMatrix[k][14]) && !(bMatrix[i][15] && bMatrix[k][15]) && !(bMatrix[i][16] && bMatrix[k][16]) && !(bMatrix[i][17] && bMatrix[k][17]) && !(bMatrix[i][18] && bMatrix[k][18]) &&  !(bMatrix[i][19] && bMatrix[k][19]) &&    !(bMatrix[i][20] && bMatrix[k][20]) && !(bMatrix[i][21] && bMatrix[k][21]) && !(bMatrix[i][22] && bMatrix[k][22]) &&  !(bMatrix[i][23] && bMatrix[k][23]) && !(bMatrix[i][24] && bMatrix[k][24]) && !(bMatrix[i][25] && bMatrix[k][25])){
                    /*jk*/if(!(bMatrix[j][0] && bMatrix[k][0]) && !(bMatrix[j][1] && bMatrix[k][1]) && !(bMatrix[j][2] && bMatrix[k][2]) &&  !(bMatrix[j][3] && bMatrix[k][3]) && !(bMatrix[j][4] && bMatrix[k][4]) && !(bMatrix[j][5] && bMatrix[k][5]) && !(bMatrix[j][6] && bMatrix[k][6]) && !(bMatrix[j][7] && bMatrix[k][7]) && !(bMatrix[j][8] && bMatrix[k][8]) &&  !(bMatrix[j][9] && bMatrix[k][9])&&   !(bMatrix[j][10] && bMatrix[k][10]) && !(bMatrix[j][11] && bMatrix[k][11]) && !(bMatrix[j][12] && bMatrix[k][12]) &&  !(bMatrix[j][13] && bMatrix[k][13]) && !(bMatrix[j][14] && bMatrix[k][14]) && !(bMatrix[j][15] && bMatrix[k][15]) && !(bMatrix[j][16] && bMatrix[k][16]) && !(bMatrix[j][17] && bMatrix[k][17]) && !(bMatrix[j][18] && bMatrix[k][18]) &&  !(bMatrix[j][19] && bMatrix[k][19]) &&    !(bMatrix[j][20] && bMatrix[k][20]) && !(bMatrix[j][21] && bMatrix[k][21]) && !(bMatrix[j][22] && bMatrix[k][22]) &&  !(bMatrix[j][23] && bMatrix[k][23]) && !(bMatrix[j][24] && bMatrix[k][24]) && !(bMatrix[j][25] && bMatrix[k][25])){
                            for(int m=k+1;m<n;m++){
                            /*km*/if(!(bMatrix[m][0] && bMatrix[k][0]) && !(bMatrix[m][1] && bMatrix[k][1]) && !(bMatrix[m][2] && bMatrix[k][2]) &&  !(bMatrix[m][3] && bMatrix[k][3]) && !(bMatrix[m][4] && bMatrix[k][4]) && !(bMatrix[m][5] && bMatrix[k][5]) && !(bMatrix[m][6] && bMatrix[k][6]) && !(bMatrix[m][7] && bMatrix[k][7]) && !(bMatrix[m][8] && bMatrix[k][8]) &&  !(bMatrix[m][9] && bMatrix[k][9])&&   !(bMatrix[m][10] && bMatrix[k][10]) && !(bMatrix[m][11] && bMatrix[k][11]) && !(bMatrix[m][12] && bMatrix[k][12]) &&  !(bMatrix[m][13] && bMatrix[k][13]) && !(bMatrix[m][14] && bMatrix[k][14]) && !(bMatrix[m][15] && bMatrix[k][15]) && !(bMatrix[m][16] && bMatrix[k][16]) && !(bMatrix[m][17] && bMatrix[k][17]) && !(bMatrix[m][18] && bMatrix[k][18]) &&  !(bMatrix[m][19] && bMatrix[k][19]) &&    !(bMatrix[m][20] && bMatrix[k][20]) && !(bMatrix[m][21] && bMatrix[k][21]) && !(bMatrix[m][22] && bMatrix[k][22]) &&  !(bMatrix[m][23] && bMatrix[k][23]) && !(bMatrix[m][24] && bMatrix[k][24]) && !(bMatrix[m][25] && bMatrix[k][25])){
                                /*mj*/if(!(bMatrix[m][0] && bMatrix[j][0]) && !(bMatrix[m][1] && bMatrix[j][1]) && !(bMatrix[m][2] && bMatrix[j][2]) &&  !(bMatrix[m][3] && bMatrix[j][3]) && !(bMatrix[m][4] && bMatrix[j][4]) && !(bMatrix[m][5] && bMatrix[j][5]) && !(bMatrix[m][6] && bMatrix[j][6]) && !(bMatrix[m][7] && bMatrix[j][7]) && !(bMatrix[m][8] && bMatrix[j][8]) &&  !(bMatrix[m][9] && bMatrix[j][9])&&   !(bMatrix[m][10] && bMatrix[j][10]) && !(bMatrix[m][11] && bMatrix[j][11]) && !(bMatrix[m][12] && bMatrix[j][12]) &&  !(bMatrix[m][13] && bMatrix[j][13]) && !(bMatrix[m][14] && bMatrix[j][14]) && !(bMatrix[m][15] && bMatrix[j][15]) && !(bMatrix[m][16] && bMatrix[j][16]) && !(bMatrix[m][17] && bMatrix[j][17]) && !(bMatrix[m][18] && bMatrix[j][18]) &&  !(bMatrix[m][19] && bMatrix[j][19]) &&    !(bMatrix[m][20] && bMatrix[j][20]) && !(bMatrix[m][21] && bMatrix[j][21]) && !(bMatrix[m][22] && bMatrix[j][22]) &&  !(bMatrix[m][23] && bMatrix[j][23]) && !(bMatrix[m][24] && bMatrix[j][24]) && !(bMatrix[m][25] && bMatrix[j][25])){
                                    /*mi*/if(!(bMatrix[m][0] && bMatrix[i][0]) && !(bMatrix[m][1] && bMatrix[i][1]) && !(bMatrix[m][2] && bMatrix[i][2]) &&  !(bMatrix[m][3] && bMatrix[i][3]) && !(bMatrix[m][4] && bMatrix[i][4]) && !(bMatrix[m][5] && bMatrix[i][5]) && !(bMatrix[m][6] && bMatrix[i][6]) && !(bMatrix[m][7] && bMatrix[i][7]) && !(bMatrix[m][8] && bMatrix[i][8]) &&  !(bMatrix[m][9] && bMatrix[i][9])&&   !(bMatrix[m][10] && bMatrix[i][10]) && !(bMatrix[m][11] && bMatrix[i][11]) && !(bMatrix[m][12] && bMatrix[i][12]) &&  !(bMatrix[m][13] && bMatrix[i][13]) && !(bMatrix[m][14] && bMatrix[i][14]) && !(bMatrix[m][15] && bMatrix[i][15]) && !(bMatrix[m][16] && bMatrix[i][16]) && !(bMatrix[m][17] && bMatrix[i][17]) && !(bMatrix[m][18] && bMatrix[i][18]) &&  !(bMatrix[m][19] && bMatrix[i][19]) &&    !(bMatrix[m][20] && bMatrix[i][20]) && !(bMatrix[m][21] && bMatrix[i][21]) && !(bMatrix[m][22] && bMatrix[i][22]) &&  !(bMatrix[m][23] && bMatrix[i][23]) && !(bMatrix[m][24] && bMatrix[i][24]) && !(bMatrix[m][25] && bMatrix[i][25])){
                                            for(int l=m+1;l<n;l++){
                                            /*il*/if(!(bMatrix[l][0] && bMatrix[i][0]) && !(bMatrix[l][1] && bMatrix[i][1]) && !(bMatrix[l][2] && bMatrix[i][2]) &&  !(bMatrix[l][3] && bMatrix[i][3]) && !(bMatrix[l][4] && bMatrix[i][4]) && !(bMatrix[l][5] && bMatrix[i][5]) && !(bMatrix[l][6] && bMatrix[i][6]) && !(bMatrix[l][7] && bMatrix[i][7]) && !(bMatrix[l][8] && bMatrix[i][8]) &&  !(bMatrix[l][9] && bMatrix[i][9])&&   !(bMatrix[l][10] && bMatrix[i][10]) && !(bMatrix[l][11] && bMatrix[i][11]) && !(bMatrix[l][12] && bMatrix[i][12]) &&  !(bMatrix[l][13] && bMatrix[i][13]) && !(bMatrix[l][14] && bMatrix[i][14]) && !(bMatrix[l][15] && bMatrix[i][15]) && !(bMatrix[l][16] && bMatrix[i][16]) && !(bMatrix[l][17] && bMatrix[i][17]) && !(bMatrix[l][18] && bMatrix[i][18]) &&  !(bMatrix[l][19] && bMatrix[i][19]) &&    !(bMatrix[l][20] && bMatrix[i][20]) && !(bMatrix[l][21] && bMatrix[i][21]) && !(bMatrix[l][22] && bMatrix[i][22]) &&  !(bMatrix[l][23] && bMatrix[i][23]) && !(bMatrix[l][24] && bMatrix[i][24]) && !(bMatrix[l][25] && bMatrix[i][25])){
                                                /*jl*/if(!(bMatrix[l][0] && bMatrix[j][0]) && !(bMatrix[l][1] && bMatrix[j][1]) && !(bMatrix[l][2] && bMatrix[j][2]) &&  !(bMatrix[l][3] && bMatrix[j][3]) && !(bMatrix[l][4] && bMatrix[j][4]) && !(bMatrix[l][5] && bMatrix[j][5]) && !(bMatrix[l][6] && bMatrix[j][6]) && !(bMatrix[l][7] && bMatrix[j][7]) && !(bMatrix[l][8] && bMatrix[j][8]) &&  !(bMatrix[l][9] && bMatrix[j][9])&&   !(bMatrix[l][10] && bMatrix[j][10]) && !(bMatrix[l][11] && bMatrix[j][11]) && !(bMatrix[l][12] && bMatrix[j][12]) &&  !(bMatrix[l][13] && bMatrix[j][13]) && !(bMatrix[l][14] && bMatrix[j][14]) && !(bMatrix[l][15] && bMatrix[j][15]) && !(bMatrix[l][16] && bMatrix[j][16]) && !(bMatrix[l][17] && bMatrix[j][17]) && !(bMatrix[l][18] && bMatrix[j][18]) &&  !(bMatrix[l][19] && bMatrix[j][19]) &&    !(bMatrix[l][20] && bMatrix[j][20]) && !(bMatrix[l][21] && bMatrix[j][21]) && !(bMatrix[l][22] && bMatrix[j][22]) &&  !(bMatrix[l][23] && bMatrix[j][23]) && !(bMatrix[l][24] && bMatrix[j][24]) && !(bMatrix[l][25] && bMatrix[j][25])){
                                                    /*kl*/if(!(bMatrix[l][0] && bMatrix[k][0]) && !(bMatrix[l][1] && bMatrix[k][1]) && !(bMatrix[l][2] && bMatrix[k][2]) &&  !(bMatrix[l][3] && bMatrix[k][3]) && !(bMatrix[l][4] && bMatrix[k][4]) && !(bMatrix[l][5] && bMatrix[k][5]) && !(bMatrix[l][6] && bMatrix[k][6]) && !(bMatrix[l][7] && bMatrix[k][7]) && !(bMatrix[l][8] && bMatrix[k][8]) &&  !(bMatrix[l][9] && bMatrix[k][9])&&   !(bMatrix[l][10] && bMatrix[k][10]) && !(bMatrix[l][11] && bMatrix[k][11]) && !(bMatrix[l][12] && bMatrix[k][12]) &&  !(bMatrix[l][13] && bMatrix[k][13]) && !(bMatrix[l][14] && bMatrix[k][14]) && !(bMatrix[l][15] && bMatrix[k][15]) && !(bMatrix[l][16] && bMatrix[k][16]) && !(bMatrix[l][17] && bMatrix[k][17]) && !(bMatrix[l][18] && bMatrix[k][18]) &&  !(bMatrix[l][19] && bMatrix[k][19]) &&    !(bMatrix[l][20] && bMatrix[k][20]) && !(bMatrix[l][21] && bMatrix[k][21]) && !(bMatrix[l][22] && bMatrix[k][22]) &&  !(bMatrix[l][23] && bMatrix[k][23]) && !(bMatrix[l][24] && bMatrix[k][24]) && !(bMatrix[l][25] && bMatrix[k][25])){
                                                        /*ml*/if(!(bMatrix[l][0] && bMatrix[m][0]) && !(bMatrix[l][1] && bMatrix[m][1]) && !(bMatrix[l][2] && bMatrix[m][2]) &&  !(bMatrix[l][3] && bMatrix[m][3]) && !(bMatrix[l][4] && bMatrix[m][4]) && !(bMatrix[l][5] && bMatrix[m][5]) && !(bMatrix[l][6] && bMatrix[m][6]) && !(bMatrix[l][7] && bMatrix[m][7]) && !(bMatrix[l][8] && bMatrix[m][8]) &&  !(bMatrix[l][9] && bMatrix[m][9])&&   !(bMatrix[l][10] && bMatrix[m][10]) && !(bMatrix[l][11] && bMatrix[m][11]) && !(bMatrix[l][12] && bMatrix[m][12]) &&  !(bMatrix[l][13] && bMatrix[m][13]) && !(bMatrix[l][14] && bMatrix[m][14]) && !(bMatrix[l][15] && bMatrix[m][15]) && !(bMatrix[l][16] && bMatrix[m][16]) && !(bMatrix[l][17] && bMatrix[m][17]) && !(bMatrix[l][18] && bMatrix[m][18]) &&  !(bMatrix[l][19] && bMatrix[m][19]) &&    !(bMatrix[l][20] && bMatrix[m][20]) && !(bMatrix[l][21] && bMatrix[m][21]) && !(bMatrix[l][22] && bMatrix[m][22]) &&  !(bMatrix[l][23] && bMatrix[m][23]) && !(bMatrix[l][24] && bMatrix[m][24]) && !(bMatrix[l][25] && bMatrix[m][25])){
                                                                fprintf(w, "%i %i %i %i %i\n", i, j, k, m, l);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    fclose(r);
    fclose(w);
    return 0;
}
