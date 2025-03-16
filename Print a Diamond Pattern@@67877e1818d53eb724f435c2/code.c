                                                #include<stdio.h>
                                                int main(){
                                                    int n;
                                                    scanf("%d",&n);
                                                    for(int i=1;i<=n;i++){
                                                        int a = n/2;
                                                        if(i<=a){
                                                            for(int j=1;j<=n-i;j++){
                                                                printf("  ");
                                                            }
                                                            for(int j=1;j<=(2*i-1);j++){
                                                                printf("* ");
                                                            }
                                                        }
                                                        else{
                                                            for(int k=a-1;k<=i;k++){
                                                                printf("  ");
                                                            }
                                                            for(int l=1;l<=n-i;l++){
                                                                printf("* ");
                                                            }
                                                            for(int m=1;m<=n+1-i;m++){
                                                                printf("* ");
                                                            }
                                                        }
                                                        printf("\n");
                                                    }
                                                    return 0;
                                                }   