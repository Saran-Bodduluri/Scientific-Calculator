#include<stdio.h>
#include<math.h>

int fac(int n){
  if(n==1||n==0)return 1;
  return n*fac(n-1);
}

int main(void){
  int n;
  float x,y,ans;

printf("\n\t\t\t\t\t\tScientific Calculator\n\n");
  printf("Choose the operation to be performed.\n\n");
  printf("1.sin 2.cos 3.tan 4.sinh 5.cosh 6.tanh 7.exp"
        " 8.log 9. log10 10.sqrt \n11.greatest-integer-function(floor)"
        " 12.least-integer-function(ceil) \n13.factorial 14.add 15.subtract 16.multiply 17.divide"
        " 18.power 19.remainder 20.exit\n\n");

  scanf("%d",&n);
  if(n>0 && n<14){
   printf("Enter the value of x\n");
   scanf("%f",&x);
   switch(n){
     case 1:{ ans= sin(x*0.0174532); break;}//0.0174532 is the value of pie/180
     case 2: {ans= cos(x*0.0174532); break;}//to convert to radians
     case 3: {ans= tan(x*0.0174532); break;}
     case 4: {ans= sinh(x); break;}
     case 5: {ans= cosh(x); break;}
     case 6: {ans= tanh(x); break;}
     case 7:{ ans= exp(x); break;}
     case 8:{
       if(x<0){printf("for natural logarithm x must be >0"); return 0;}
       else
      ans= log(x); break;
    }
     case 9:{
       if(x<0){printf("for base 10 logarithm x must be >0"); return 0;}
       else
      ans= log10(x); break;
    }
    case 10: {ans=sqrt(x); break;}
    case 11: {ans= floor(x); break;}
    case 12: {ans= ceil(x); break;}
    case 13: {ans=fac(x); break;}
    default: printf("Illegal operation\n");
   }
  }

   else if(n>13 && n<21){
    if(n==20){return 0;}
    printf("Enter the values of x and y\n");
    scanf("%f",&x);
    scanf("%f",&y);
    switch(n){
    case 14: ans= (double)x + (double)y ; break;
    case 15: ans= (double)x-(double)y; break;
    case 16: ans=(double)x*(double)y; break;
    case 17: ans=(double)x/(double)y; break;
    case 18: ans=pow((double)x,(double)y); break;
    case 19: ans= fmod((double)x,(double)y); break;
    default: printf("Illegal operation\n");
  }
 }

if(n>0&&n<21)
printf("\n%.4f",ans);


return 0;
}
