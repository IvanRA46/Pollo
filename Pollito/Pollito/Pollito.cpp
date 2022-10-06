// Pollito.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(250, 250), "SFML works!");
    /*Cara*/
    sf::CircleShape Cara(100.f);
    Cara.setFillColor(sf::Color::Yellow);
    /*Ojo_Izq*/
    sf::CircleShape OjoIzquierdo(40.f);
    OjoIzquierdo.setPosition(15.f, 50.f);
    OjoIzquierdo.setFillColor(sf::Color{ 0, 193, 252 });
    sf::CircleShape OjoNegroIzquierdo(30.f);
    OjoNegroIzquierdo.setPosition(15.f, 50.f);
    OjoNegroIzquierdo.setFillColor(sf::Color::Black);
    /*Ojo_Der*/
    sf::CircleShape OjoDerecho(40.f);
    sf::CircleShape OjoNegroDerecho(30.f);
    OjoDerecho.setPosition(107.f, 50.f);
    OjoDerecho.setFillColor(sf::Color{ 0, 193, 252 });
    OjoNegroDerecho.setPosition(107.f, 50.f);
    OjoNegroDerecho.setFillColor(sf::Color::Black);
    /*Pupila_Izq*/
    sf::CircleShape PupilaIzquierda(20.f);
    PupilaIzquierda.setPosition(15.f, 50.f);
    PupilaIzquierda.setFillColor(sf::Color::White);
    /*Pupila_Der*/
    sf::CircleShape PupilaDerecha(20.f);
    PupilaDerecha.setPosition(107.f, 50.f);
    PupilaDerecha.setFillColor(sf::Color::White);
    /*Pico*/
    sf::CircleShape Pico(25.f);
    Pico.setRadius(50.f);
    Pico.setPointCount(3);
    Pico.setRotation(180.f);
    Pico.setPosition(150.f, 215.f);
    Pico.setFillColor(sf::Color{ 252, 122, 0 });
    Pico.scale(1.09f, 1.1f);
    /*Nariz_Izq*/
    sf::CircleShape Oizq(8.f);
    Oizq.scale(0.5f, 1.5f);
    Oizq.rotate(-19.f);
    Oizq.setPosition(75.f, 140.f);
    Oizq.setFillColor(sf::Color::Black);
    /*Nariz_Der*/
    sf::CircleShape Oder(8.f);
    Oder.scale(0.5f, 1.5f);
    Oder.rotate(19.f);
    Oder.setPosition(110.f, 138.f);
    Oder.setFillColor(sf::Color::Black);
    /*Cresta_Der*/
    sf::CircleShape Cres(12.f);
    Cres.scale(0.5f, 1.5f);
    Cres.rotate(35.f);
    Cres.setPosition(120.f, 10.f);
    Cres.setFillColor(sf::Color{161, 10, 10});
    /*Cres_Izq*/
    sf::CircleShape CresI(12.f);
    CresI.scale(0.5f, 1.5f);
    CresI.rotate(-35.f);
    CresI.setPosition(75.f, 15.f);
    CresI.setFillColor(sf::Color{ 161, 10, 10 });


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        /*Imprimimos figuras*/
        window.clear();
        window.draw(Cara);
        window.draw(OjoIzquierdo);
        window.draw(OjoDerecho);
        window.draw(OjoNegroDerecho);
        window.draw(OjoNegroIzquierdo);
        window.draw(PupilaIzquierda);
        window.draw(PupilaDerecha);
        window.draw(Pico);
        window.draw(Oizq);
        window.draw(Oder);
        window.draw(Cres);
        window.draw(CresI);
        window.display();
    }

    return 0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
