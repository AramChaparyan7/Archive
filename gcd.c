int gcd(int a,int b){
     int res=0;
     int min=a<b?a:b;
     for(int i=min;i>0;--i){
         if(a%i==0 && b%i==0){
               res=i;
               return res;
          }
     }
     return 1;
}
