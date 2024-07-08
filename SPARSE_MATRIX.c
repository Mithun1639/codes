                                        //SPARSE MATRIX PROGRAM
#include<stdio.h>   
int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int nz=0,z=0;
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
            if(a[i][j]!=0){
                nz++;
            }
            else{
                z++;
            }
        }
        printf("\n");
    }
    printf("\n");
    if(nz>z){
        printf("It is not a sparse matrix");
    }
    else{
        int s[nz][3];
        int k=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(a[i][j]!=0){
                    s[k][0]=i;
                    s[k][1]=j;
                    s[k][2]=a[i][j];
                    k++;
                }
            }
        }
        for(int i=0;i<nz;i++){
            for(int j=0;j<3;j++){
                printf("%d ",s[i][j]);
            }
            printf("\n");
        }
    }
    

}