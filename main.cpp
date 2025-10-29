#include <iostream>
#include "pandc.h"
using namespace std;
int main(){
    while(true){
        int choice=0;
        long long res=0;
        int n,r;
        cout<<"1. to calculate the factorial of a non negative integer n"<<endl;
        cout<<"2. to calculate permutation nPr where n and r are non negative integers and n>r"<<endl;
        cout<<"3. to calculate combination nCr where n and r are non negative integers and n>r  "<<endl;
        cout<<"4. to calculate circular permutation when it is identical clockwise and anti clockwise"<<endl;
        cout<<"5. to calculate number of ways to dearrange an arrangement such that no object is in the same position as earlier"<<endl;
        cout<<"6. to calculate number of ways to distribute n objects to r pleople such that everyone gets 0 or more objects"<<endl;
        cout<<"7. to exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            
            cout<<"enter number ";
            cin>>n;
            res=factorial(n);
            if(res==0)
            cout<<"number should be non negative integer"<<endl;
            else
            cout<<res<<endl;
            break;
            
            case 2:
            
            cout<<"enter n";
            cin>>n;
            cout<<"enter r";
            cin>>r;
            res=permutation(n,r);
            if(res==0)
            cout<<"n,r should be non negative integer and n>r"<<endl;
            else
            cout<<res<<endl;
            break;

            case 3:
            
            cout<<"enter n ";
            cin>>n;
            cout<<"enter r ";
            cin>>r;
            res=combination(n,r);
            if(res==0)
            cout<<"n,r should be non negative integer and n>r"<<endl;
            else
            cout<<res<<endl;
            break;

            case 4:
            
            cout<<"enter number ";
            cin>>n;
            res=circularperm(n);
            if(res==0)
            cout<<"number should be non negative integer"<<endl;
            else
            cout<<res<<endl;
            break;

            case 5:
            
            cout<<"enter number ";
            cin>>n;
            res=dearrangement(n);
            if(res==0)
            cout<<"number should be non negative integer"<<endl;
            else
            cout<<res<<endl;
            break;

            case 6:
        
            cout<<"enter n ";
            cin>>n;
            cout<<"enter r ";
            cin>>r;
            res=identicalitemdist(n,r);
            if(res==0)
            cout<<"n,r should be non negative integer and n>r"<<endl;
            else
            cout<<res<<endl;
            break;

            case 7:
            break;

            default:
            cout<<"invalid choice"<<endl;
            break;


              
        }

    if(choice==7){
        break;
    }    


    }

return 0;
    
}