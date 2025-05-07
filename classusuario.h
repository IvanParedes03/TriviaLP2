#ifndef CLASSUSUARIO_H
#define CLASSUSUARIO_H

#include <string>
#include <vector>

class Usuario
{
private:

    std::string Nombre; //los unicos atributos que creo que necesita la clase Usuario, capaz toco despues
    std::string Alias;
    int puntuacionJuego;
    int puntuacionHistorica;

public:
    Usuario();
    Usuario(std::string, std::string, int);

    ~Usuario(); //constructor y destructor

    void setNombre(std::string n);
    void setAlias(std::string a);
    void incrPuntuacionJuego();
    void setPuntuacionHistorica(int n);
    int getPuntuacionJuego();
    int getPuntuacionHistorica();
    std::string getNombre();
    std::string getAlias(); //getter y setter, probablemente añada mas cosas
    static void guardarJSON(std::vector<Usuario>& Usuarios);
    static void cargarJSON(std::vector<Usuario>& Usuarios);
    void debugUsuarios(std::vector<Usuario> &usuarios);
};

#endif // CLASSUSUARIO_H
