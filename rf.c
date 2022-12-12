#include<stdio.h>
int main(){
    int a ,b ,c;
    scanf("%d %d %d",&a,&b,&c);
    if(b<200)
        printf("%d yes",c%10);
    else if(b>=200&&b<400)
    {switch(a)
        { case 1:if(c%10==1||c%10==6)
                    printf("%d no",c%10);
                else
                    printf("%d yes",c%10);
                break;

            case 2:if(c%10==2||c%10==7)
                    printf("%d no",c%10);
                else
                    printf("%d yes",c%10);
                break;
            case 3:if(c%10==3||c%10==8)
                    printf("%d no",c%10);
                else
                    printf("%d yes",c%10);
                break;
            case 4:if(c%10==4||c%10==9)
                    printf("%d no",c%10);
                else
                    printf("%d yes",c%10);
                break;
            case 5:if(c%10==5||c%10==0)
                    printf("%d no",c%10);
                else
                    printf("%d yes",c%10);
                break;
            case 6:printf("%d yes",c%10);
                break;
            case 7:printf("%d yes",c%10);
                break;
        }

    }

    else if(b>=400)
    {switch(a)
            case 1:if(c%2!=0){
                    printf("%d no",c%10);}
                else{
                    printf("%d yes",c%10);}
        break;
        case 2:if(c%2==0){
                printf("%d no",c%10);}
            else{
                printf("%d yes",c%10);}
        break;
        case 3:if(c%2!=0)
                printf("%d no",c%10);
            else
                printf("%d yes",c%10);
        break;
        case 4:if(c%2==0)
                printf("%d no",c%10);
            else
                printf("%d yes",c%10);
        break;
        case 5:if(c%2!=0)
                printf("%d no",c%10);
            else
                printf("%d yes",c%10);
        break;
        case 6:printf("%d yes",c%10);	break;
        case 7:printf("%d yes",c%10);	break;

    }

    return 0;
}