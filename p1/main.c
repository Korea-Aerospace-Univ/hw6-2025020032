#include <stdio.h>

int main(void) 
{
    char ch[10]={};     
    char *p=nullptr;
    char *q=nullptr;     

   
    
    for (p=ch;p<ch+10;p++) {
        scanf("%c",p); 
    }

  
    char maxChar=*ch;  
    int maxCount=0;    

   
    for (p=ch;p<ch+10;p++) {
                                    
        int count=0;   

                                            
        for(q=ch;q<ch+10;q++) { 
            if (*p==*q) {  
                count++;    
            }
        }

        
        if (count>maxCount) {    
            maxCount=count;
            maxChar=*p;     
        }
        
    }

    printf("%c %d\n",maxChar,maxCount); 

    return 0; 
}   
