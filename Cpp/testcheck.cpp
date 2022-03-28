#include <bits/stdc++.h>
using namespace std;
 
int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n){
    int result = arr[0];
    for (int i = 1; i < n; i++){
        result = gcd(arr[i], result);
        if(result == 1){
           return 1;
        }
    }
    return result;
}

int main(){
    int n,arr[100],arr1[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c1,c2,k=0;
    cin>>c1>>c2;
    int q[20][3];
    for(int i=0;i<c1;i++){
        for(int j=0;j<c2;j++){
            cin>>q[i][j];
        }
    }
    for(int i=0;i<c1;i++){
        if(q[i][0]==1){
            int index=q[i][1]-1;
            arr[index]=q[i][2];
        }
        else{

            for(int j=q[i][1]-1;j<q[i][2];j++){
                arr1[k]=arr[j];
                k++;
            }
            int ans=findGCD(arr1,k+1);
            cout<<ans<<endl;
        }
    }
    
}
