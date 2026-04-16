#include<iostream>
using namespace std;
class estudiante{
private :
    string nombre;
    int nota[3];
public:
    void nombre_alumno(string name){
    nombre = name;
    }
    void notas(int note[3]){
    for(int i=0;i < 3;i++)
        nota[i] = note[i];

    }
    int promedio(){
        int suma=0;
        int nt=0;
    for(int i=0;i < 3;i++){
        suma+=nota[i];
        nt+=1;
    }
    return (suma)/nt;
    }
    void mostrar(){
    cout<<nombre<<endl;
    cout<<promedio();
    }
};
int main(){
    int notas_alumno[3];
    for(int i=0;i < 3;i++)
        cin>>notas_alumno[i];
   estudiante es;
   es.nombre_alumno("Yoni");
   es.notas(notas_alumno);
   es.mostrar();
}
