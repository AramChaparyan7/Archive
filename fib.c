unsigned long fibonachi(int n){
     int a=0;
     int b=1;
     if(n<0){
         return -1; 
     }
     while(n--){
          int tmp=b;
          b=a+b;
          a=tmp;
     }
     return a;
}
