#ifndef CLASSUSUARIO_H
#define CLASSUSUARIO_H

#include <string>
#include <vector>

class Usuario
{
private:

    std::string Nombre; //los unicos atributos que creo que necesita la clase Usuario, capaz toco despues
    std::string Alias;

public:
    Usuario(std::string, std::string);

    ~Usuario(); //constructor y destructor

    void setNombre(std::string n);
    void setAlias(std::string a);
    std::string getNombre();
    std::string getAlias(); //getter y setter, probablemente añada mas cosas
    static void guardarJSON(std::vector<Usuario>& Usuarios);
    static void cargarJSON(std::vector<Usuario>& Usuarios);
};

#endif // CLASSUSUARIO_H
