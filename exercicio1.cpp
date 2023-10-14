/*

● Crie uma classe Estado com os atributos nome, sigla (UF) e uma coleção de
objetos do tipo Cidade.
● Crie uma classe Cidade que tenha os atributos
● Crie um programa em C para criar uma coleção (vector) de Estados (lido do
usuário).
● Crie um programa em C para, percorrendo cda um dos estados, criar uma
coleção (vector) de Cidades (lido do usuário)
○ Lembre que cada cidade deve pertencer a um Estado

*/

#include<iostream>
#include<vector>
using namespace std;

class Cidade{
    private:
        string nome;
    public:
        Cidade(string nome){
            this->nome = nome;
        }
        string getNome(){
            return nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }
};

class Estado{
    private:
        string nome;
        string sigla;
        vector<Cidade> cidades;
    public:
        Estado(){
            this->nome = "Default";
            this->sigla = "DF";
        }
        Estado(string nome, string sigla){
            this->nome = nome;
            this->sigla = sigla;
        }
        void novaCidade(Cidade cidade){ 
            cidades.push_back(cidade);
        }
        string getNome(){
            return nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        string getSigla(){
            return sigla;
        }
        
        void setSigla(string sigla){
            this->sigla = sigla;
        }
};

int main(void){
    char resp, resp2;
    vector <Estado> estados;
    while(resp != 'n'){
        string nome, sigla;
        cout<<"Digite o Estado: ";
        cin>>nome;
        cout<<"Sigla: ";
        cin>>sigla;
        Estado estado(nome, sigla);
        while(resp2 != 'n'){
            string nome_cidade;
            cout<<"Digite a Cidade: ";
            cin>>nome_cidade;
            Cidade cidade(nome_cidade);
            estado.novaCidade(cidade);
            cout<<"Deseja continuar?('n' pra sair)";
            cin>>resp2;
        }
        cout<<"Deseja continuar?('n' pra sair)";
        cin>>resp;
        
    }
        
    return 0;
}