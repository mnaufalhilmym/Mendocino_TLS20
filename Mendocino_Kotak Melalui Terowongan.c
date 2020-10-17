#include <stdio.h>

int main(){

    int n, length, width, height, top = -1;

    scanf("%d", &n);
    int vol[n];

    for (int i = 0; i < n; ++i){
        scanf("%d %d %d", &length, &width, &height);

        if(height < 41) {
        top++;
        vol[top] = length * width * height;; 
        } 
    }

    printf("\n");
    
    for(int i = 0; i <= top; ++i){
         printf("%d\n", vol[i]);
    }
    return 0;
}
