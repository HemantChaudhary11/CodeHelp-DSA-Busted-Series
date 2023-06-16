#include<iostream>
using namespace std;

int Nfact(int a){
        int N=a;
        int ans=1;
        while (N)
        {
            ans=ans*N;
            N--;    
        }
        return ans;
        
}


int main(){
        int n,r;
        cin>>n>>r;

       int nfact=Nfact(n);
       int rfact=Nfact(r);
       int Rfact=Nfact(n-r);
        double nCr= nfact/(rfact*Rfact);
        cout<<nCr;



        
        return 0;
}
