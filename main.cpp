#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,i,cond = 0;
    string nome;
    cout<<"Inserire la grandezza del vettore: ";
    cin>>n;
    vector<string> nomi(n);
    vector<int> voti(n),assenze(n);
    for(i = 0; i<n; i++){
        cout<<"Inserire il nome del "<<i+1<<"° studente: ";
        cin>>nomi[i];
        cout<<"Inserire il voto di "<<nomi[i]<<": ";
        cin>>voti[i];
        cout<<"Inserire il numero delle assenze di "<<nomi[i]<<": ";
        cin>>assenze[i];
    }

    cout<<"Inserire il numero dello studente di cui si volgioni visualizzare le informazioni: ";
    cin>>i;
    cout<<"Nome : "<<nomi[i-1]<<", Voto: "<<voti[i-1]<<", Assenze: "<<assenze[i-1]<<endl;

    for(i = 0; i<n; i++){
        cout<<i+1<<"° Nome : "<<nomi[i]<<", Voto: "<<voti[i]<<", Assenze: "<<assenze[i]<<endl;
    }

    cout<<"Inserire il nome dello studente di cui si vogliono visualizzare le informazioni: ";
    cin>>nome;

    i = 0;
    while(i<n && cond == 0){
        if(nomi[i] == nome){
            cout<<"Nome: "<<nomi[i]<<", Voto: "<<voti[i]<<", Assenze: "<<assenze[i]<<endl;
            cond ++;
        }
        i++;
    }

    if(cond == 0){
        cout<<"Il nome inserito non è un nome valido"<<endl;
    }

    return 0;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
