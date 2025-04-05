int isprime(int num){
    int is_prime=1;
    if(num<=1){
        is_prime=0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            is_prime=0;
        }
        else{
            is_prime=1;
        }
    }
    return 0;
}