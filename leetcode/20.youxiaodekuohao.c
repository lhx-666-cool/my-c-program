#include <stdio.h>

int main() {
    char s[999];
    scanf("%s",&s);
    int i = 0,n=1,tf,m=0;
    for(m=0;1==1;m++){
        if (s[m] == '\0') {
            break;
    }}
    m--;
    for (i = 0; 1 == 1; i++) {
        jian: if (s[i] == '\0') {
            break;
        }
        if(s[i]=='('){
            for(n=1;1==1;){
                if(s[i+1]==')'){
                    s[i]='1';
                    s[i+1]='1';
                    goto jian;
                }
                if(s[i+n]==')'){
                    s[i]='1';
                    s[i+n]='1';
                    if(i+n+1<m&&s[i+1]!='}'){n+=2;}else{n++;}
                    goto jian;
                }
                if(s[i+n+1]=='1'){
                  if(i+n+1<m&&s[i+1]!='}'){n+=2;}else{n++;}
                    continue;
                }
                
                if(s[i+n+1]=='\0'){
                    tf=1;
                    break;
                }
                 if(i+n+1<m&&s[i+1]!=')'){n+=2;}else{n++;}
            }

        }
              if(s[i]=='{'){
            for(n=1;1==1;){
                if(s[i+1]=='}'){
                    s[i]='1';
                    s[i+1]='1';
                    goto jian;
                }
                if(s[i+n]=='}'){
                    s[i]='1';
                    s[i+n]='1';
                    if(i+n<m&&s[i+1]!='}'){n+=2;}else{n++;}
                    goto jian;
                }
                if(s[i+n+1]=='1'){
                    if(i+n<m&&s[i+1]!='}'){n+=2;}else{n++;}
                    continue;
                }
                
                if(s[i+n+1]=='\0'){
                    tf=1;
                    break;
                }
                if(i+n+1<m&&s[i+1]!='}'){n+=2;}else{n++;}
            }

        }
              if(s[i]=='['){
            for(n=1;1==1;){
                if(s[i+1]==']'){
                    s[i]='1';
                    s[i+1]='1';
                    goto jian;
                }
                if(s[i+n]==']'){
                    s[i]='1';
                    s[i+n]='1';
                    if(i+n+1<m&&s[i+1]!='}'){n+=2;}else{n++;}
                    goto jian;
                }
                if(s[i+n+1]=='1'){
                    if(i+n+1<m&&s[i+1]!='}'){n+=2;}else{n++;}
                    continue;
                }
                
                if(s[i+n+1]=='\0'){
                    tf=1;
                    break;
                }
                if(i+n+1<m&&s[i+1]!=']'){n+=2;}else{n++;}
            }

        }
        if(s[i]==')'||s[i]=='}'||s[i]==']'){
            i=-1;
        }

    }
    for(i=0;1==1;i++){
        if(s[i]=='\0'){
            // return 1;
            printf("1");
            break;
        }
        if(s[i]!='1'){
            // return 0;
            printf("0");
            break;
        }
    }
}