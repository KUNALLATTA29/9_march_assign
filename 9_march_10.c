#include <stdio.h>
int main(){
    char choose;
    printf("choose a char from n,e,o,s,i,a,r,p,m,t,g: ");
    scanf(" %c", &choose);
    if(choose=='n'){
        
        char k;
        printf("choose one f or b: ");
        scanf(" %c", &k);
        if(k=='f'){
            for(int i=8;i<=19;i++){
                printf("%d ", i);
            }
        }else if(k=='b'){
            for(int i=80;i>=19;i--){
                printf("%d ", i);
            }
        }
        
    }else if(choose=='e'){
        
        char k;
        printf("choose one f or b: ");
        scanf(" %c", &k);
        if(k=='f'){
            for(int i=8;i<=19;i++){
                if(i%2==0){
                    printf("%d is even number ", i);
                }
            }
        }else if(k=='b'){
            for(int i=80;i>=19;i--){
                if(i%2==0){
                    printf("%d is even number ", i);
                }
            }
        }
        
    }else if(choose=='o'){
        
        char k;
        printf("choose one f or b: ");
        scanf(" %c", &k);
        if(k=='f'){
            for(int i=8;i<=19;i++){
                if(i%2!=0){
                    printf("%d is odd number ", i);
                }
            }
        }else if(k=='b'){
            for(int i=80;i>=19;i--){
                if(i%2!=0){
                    printf("%d is odd number ", i);
                }
            }
        }
        
    }else if(choose=='s'){
        
        char k;
        printf("choose one f or b: ");
        scanf(" %c", &k);
        int sum=0;
        if(k=='f'){
            for(int i=8;i<=19;i++){
                sum+=i;
            }
            printf("%d", sum);
        }else if(k=='b'){
            for(int i=80;i>=19;i--){
                sum+=i;
            }
            printf("%d", sum);
        }
        
    }else if(choose=='i'){
        int k;
        printf("enter a number: ");
        scanf("%d", &k);
        int n1=0,n2=1,n3;
        printf("%d %d ",n1,n2);
        for(int i=1;i<=k;i++){
            n3=n1+n2;
            printf("%d ",n3);
            n1=n2;
            n2=n3;
        }
        
    }else if(choose=='a'){
        
        int num;
        printf("enter a number: ");
        scanf("%d", &num);
        int k=1;
        for(int i=1;i<=num;i++){
            k*=i;
        }
        printf("%d", k);
        
    }else if(choose=='r'){
        
        int num;
        printf("enter a number: ");
        scanf("%d", &num);
        int rem,sum=0;
        while(num>0){
            rem=num%10;
            sum=sum*10+rem;
            num=num/10;
        }
        printf("%d", sum);
        
    }else if(choose=='p'){
        
        int num;
        printf("enter a number: ");
        scanf("%d", &num);
        int rem,sum=0;
        int temp=num;
        while(num>0){
            rem=num%10;
            sum=sum*10+rem;
            num=num/10;
        }
        printf("%d", sum);
        if(temp==sum){
            printf("this is pallindrome");
        }else{
            printf("this is not a pallindrome");
        }
        
    }else if(choose=='m'){
        
        int num;
        printf("enter a number: ");
        scanf("%d", &num);
        int rem,sum=0;
        int temp=num;
        while(num>0){
            rem=num%10;
            sum=sum+rem*rem*rem;
            num=num/10;
        }
        printf("%d", sum);
        if(temp==sum){
            printf("this number is armstrong");
        }else{
            printf("this number is not a armstrong");
        }
        
    }else if(choose=='t'){
        
        int dig;
        printf("enter a number: ");
        scanf("%d", &dig);
        for(int i=1;i<=10;i++){
            printf("%d ", dig*i);
        }
        
    }else if(choose=='g'){
        
        char gender;
        printf("choose your gender m, f or o: ");
        scanf(" %c", &gender);
        if(gender=='m'){
            printf("male");
        }else if(gender=='f'){
            printf("female");
        }else{
            printf("other");
        }
        
    }else{
        
        printf("input mismatch");
        
    }
    return 0;
}   
