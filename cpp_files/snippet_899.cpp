#include <stdio.h>
void Capitalise(char *a){
    if(a[0]>='a'&&a[0]<='z'){a[0]=a[0]-32;}
    int n=0;
    while(a[n]!='\0'){n++;}
    if(n>1){
    int i=1;
    while(i<n){
        if((a[i]>='a'&& a[i]<='z')&&a[i-1]==' '){a[i]=a[i]-32;}
        i++;
    }
    }
    
}