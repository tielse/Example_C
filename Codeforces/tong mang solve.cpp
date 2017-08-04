#include<iostream>

using namespace std;
int arr[3001];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    long tong = 0;
    long tong_d = 0;
    int da_dem[2001];
    for(int i=0;i<n;i++){
        int flash = 0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                    if(da_dem[arr[i]]!=1){
                        tong_d++;
                    }
                    else{
                        break;
                    }
                flash = 1;
            }

        }
        if(flash==1){
            da_dem[arr[i]] = 1;
        }else{
                da_dem[arr[i]] = -1;
            }
        tong += arr[i];
    }
    tong +=tong_d;

    cout<<tong;
    return 0;
}
