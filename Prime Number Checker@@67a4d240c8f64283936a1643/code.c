int isprime(int num){
    if(num<=1){
        isprime=0;
    }
    for(int i=2;i*i<=n;i++){
        if(num%i==0){
            isprime=0;
        }
        else{
            isprime=1;
        }
    }
}