#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]) //"10" 
{
    // printf("hello..");
    // printf(" =>  %d",argc);
    // printf(" %s",argv[1]);//0th -> file 
    int ans,i;
    //"10" 

    for(i=1;i<=argc;i++){
        ans  = ans + atoi(argv[i]);
    }
    printf("\n%d",ans);
    return 0;
}
