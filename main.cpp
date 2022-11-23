#include <iostream>
#include <string>
#include <math.h>

using namespace std;



int main()
{
    int gap;
    int sawtooth_key[8]={'C', 'H', 'I', 'C', 'K', 'E', 'N', 'S'};
    string s;

    cin >> s;

    s[0]=sawtooth_key[0];
    gap=sawtooth_key[0]-'A';
    for(int i=0;i<s.size();i++){
        for(int j=1;j<8;j++){
            s[i]=sawtooth_key[j]+gap;
            gap=s[i]-'A';

            cout << (char)s[i];

        }
        sawtooth_key[0]++;
        sawtooth_key[0]=sawtooth_key[0]%'Z';
        for(int k=1;k<8;k++){
            int pow_=1;
            for(int z=0;z<k;z++){
                pow_=pow_*26;
            }
            if((i+1)/pow_==1 && (i+1) % pow_==0){
                sawtooth_key[k]++;
                sawtooth_key[k]=sawtooth_key[k]%'Z';
            }
        }

    }


    for(int i=0;i<s.size();i++){
        //cout << (char)s[i];
    }

}
