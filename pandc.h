#ifndef pandc_h
#define pandc_h

//fuction to calculate the factorial of a non negative integer n
long long factorial(int n);
//function to calculate permutation nPr where n and r are non negative integers and n>r
long long permutation(int n,int r);
//function to calculate combination nCr where n and r are non negative integers and n>r 
long long combination(int n,int r);
//function to calculate circular permutation when it is identical clockwise and anti clockwise
long long circularperm(int n);
//function to calculate number of ways to dearrange an arrangement such that no object is in the same position as earlier
int dearrangement(int n);
//function to calculate number of ways to distribute n objects to r pleople such that everyone gets 0 or more objects
long long identicalitemdist(int n,int r);

#endif