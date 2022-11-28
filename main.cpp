#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int chain[100];
string key;
void key_maker(){
    cin >> key;

    return;
}

void encryption(){
    for(int i=0;i<key.size();i++){
        chain[i]=key[i]-'A';
    }
    string input, output;

    cin >> input;

    for(int i=0;i<input.size();i++){
        int val= input[i]-'A';
        for(int j=0;j<key.size();j++){
            val= (val-chain[j])%26;
        }
        if(val<0){
            val=val+26;
        }
        output.push_back('A'+val);
        chain[0]=(chain[0]+1)%26;

   }
   cout << output <<"\n";
   Sleep(3000);
   return;



}

void decryption(){
    for(int i=0;i<key.size();i++){
        chain[i]=key[i]-'A';
    }
    string input, output;

   cin >> input;

   for(int i=0;i<input.size();i++){
        int val= input[i]-'A';
        for(int j=0;j<key.size();j++){
            val= (val+chain[j])%26;
        }
        output.push_back('A'+val);
        chain[0]=(chain[0]+1)%26;
   }

   cout << output <<"\n";
   Sleep(3000);
   return;
}

int main()
{

    while(1){
        int button;
        cout << "if you want to encrypt your sentence, press 1\n";
        cout << "if you want to decrypt your sentence, press 2\n";
        cout << "make your key --> press 3\n";
        cin >> button;

        if(button==1){
            encryption();
        }
        else if(button==2){
            decryption();
        }else if(button==3){
            key_maker();
        }
    }


}

