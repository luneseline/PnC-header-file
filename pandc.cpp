#include "pandc.h"
#include <iostream>
#include <cmath>
//factorial function definition
long long factorial(int n){
    
    if(n>=0){
        long long f=1;
        for(int i=n;i>0;i--){
            f=f*i;
        }
        return f;}
    else{
        return 0;
    }    
}
//permutation function definition
long long permutation(int n,int r){
    if(n>=0,r>=0,n>r){
        long long per=1;
        per=factorial(n)/factorial(n-r);
        return per;
        }
    else{
        return 0;
    }
    }
//combination function definition
long long combination(int n,int r){
    if(n>=0,r>=0,n>r){
        long long comb=1;
        comb=factorial(n)/(factorial(r)*factorial(n-r));
        return comb;}
    else{
        return 0;
    }    

}
//circularperm function definition
long long circularperm(int n){
    if(n>=0){
        long long per=factorial(n-1);
        return per;

    }
    else
    return 0;
}
//dearrangement function definition
int dearrangement(int n){
    if(n>0){
        int der=1,t=0;
        for(int i=0;i<n;i++){
            t=pow(-1,i)*1/(factorial(i));
            der=der+t;
        }
        der=factorial(n)*der;
        return der;}
    else
    return 0;    

}
//identicalitemdist function definition
long long identicalitemdist(int n,int r){
    if(n>0,r>0){
        int res=1;
        res=combination(n+r-1,r-1);
        return res;}
    else
    return 0;    

    }
