unsigned long factorial(int n){
     int res=1;
     if(n<0){return -1;}
     while(n--){
          res*=n+1;
     }
     return res;
}
