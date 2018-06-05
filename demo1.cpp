#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::plugins("cpp11")]]

// [[Rcpp::export]]


    int fib_cpp(int n){
         if(n==1||n==2) return 1;
         return(fib_cpp(n-1)+fib_cpp(n-2));
    }
