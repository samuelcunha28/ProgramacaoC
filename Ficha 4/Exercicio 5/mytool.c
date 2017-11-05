/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 int fatorial(int n) {
    int i = 0;
    
    printf("O fatorial a ser calculado e: %d\n ", n);

    for (i = 1; n > 1; n = n - 1) {
        i = i * n;
    }
     printf("O fatorial e de %d\n ", i);
     return i;
}