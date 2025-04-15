import QtQuick
import QtQuick.Window 2.2
import QtQuick 2.15
import QtQuick.Controls
import handlers.cpp 1.0

Window {
    width: 700
    height: 800
    visible: true
    contentOrientation: Qt.LandscapeOrientation
    title: qsTr("Gestion de Preguntas.")

    HandlersCpp{
        id: handlersCpp
    }

    //TRATA DE QUE LA VENTANA APAREZCA SIEMPRE AL MEDIO
    //x: (Screen.widht - widht) / 2  NO FUNCIONA MEN QLOCURA
    //y: (Screen.height - height) / 2 TAMPOCO FUNCIONA

    ScrollView {
        id: scrollView_gestionPreguntas
        anchors.fill: parent

        Column {
            id: column_gestionPreguntas
            x: 22
            y: 0
            width: parent.width
            spacing: 5

            Column {
                id: column_crearPregunta
                width: 700
                height: 115

                Text {
                    id: text_crearPregunta
                    text: qsTr("Texto de la pregunta:")
                    font.pixelSize: 20
                }

                TextInput {
                    id: textInput_crearPregunta
                    width: parent.width - 20
                    height: 78
                    font.pixelSize: 16
                    wrapMode: Text.Wrap
                    layer.mipmap: false
                    layer.smooth: false
                    maximumLength: 100
                    onEditingFinished: {
                        handlersCpp.textoValido(textInput_crearPregunta.getText(0, textInput_crearPregunta.maximumLength))
                    }

                }
            }

            Column {
                id: column_agregarImagen
                width: 700
                height: 80

                Text {
                    id: text_agregarIagen
                    text: qsTr("Imagen:")
                    font.pixelSize: 20
                }

                Row {
                    id: row_agregarImagen
                    width: parent.width - 20
                    height: 40
                    spacing: 10
                    Button {
                        id: button_imagenBuscar
                        text: qsTr("Buscar")
                        onClicked: {
                            //handlersCpp.botonPresionado("buscar imagen")
                        }
                    }
                    Text {
                        id: text_imagenInfo
                        width: 570
                        height: button_imagenBuscar.height
                        text: qsTr("c\\ruta_del_file")
                        font.pixelSize: 12
                        verticalAlignment: Text.AlignVCenter
                    }
                }
            }

            Column {
                id: column_opcionA
                width: 700
                height: 118

                Text {
                    id: text_opcionA
                    text: qsTr("Opcion A:")
                    font.pixelSize: 20
                }

                TextInput {
                    id: textInput_opcionA
                    width: parent.width - 20
                    height: 78
                    font.pixelSize: 16
                    wrapMode: Text.Wrap
                    maximumLength: 100
                }
            }

            Column {
                id: column_opcionB
                width: 700
                height: 118

                Text {
                    id: text_opcionB
                    text: qsTr("Opcion B:")
                    font.pixelSize: 20
                }

                TextInput {
                    id: textInput_opcionB
                    width: parent.width - 20
                    height: 78
                    font.pixelSize: 16
                    wrapMode: Text.Wrap
                    maximumLength: 100
                }
            }

            Column {
                id: column_opcionC
                width: 700
                height: 118

                Text {
                    id: text_opcionC
                    text: qsTr("Opcion C:")
                    font.pixelSize: 20
                }

                TextInput {
                    id: textInput_opcionC
                    width: parent.width - 20
                    height: 78
                    font.pixelSize: 16
                    wrapMode: Text.Wrap
                    maximumLength: 100
                }
            }

            Column {
                id: column_respuestaCorrecta
                width: 700
                height: 118

                Text {
                    id: text_respuestaCorrecta
                    text: qsTr("Respuesta correcta (A, B o C):")
                    font.pixelSize: 20
                }

                TextInput {
                    id: textInput_respuestaCorrecta
                    width: parent.width - 20
                    height: 78
                    font.pixelSize: 16
                    wrapMode: Text.Wrap
                    maximumLength: 100
                }
            }

            Column {
                id: column_categoria
                width: 700
                height: 118

                Text {
                    id: text_categoria
                    text: qsTr("Categoria:")
                    font.pixelSize: 20
                }

                ComboBox {
                    id: comboBox_categoria
                    width: 150
                    height: 40
                    currentIndex: 2
                    displayText: "Categorias"
                    model: ["Historia", "Arte", "Peliculas", "Ciencias"]
                }
            }

            Column {
                id: column_opcionesPreguntas
                width: 700
                height: 118

                Row {
                    id: row_opcionesPreguntas
                    width: parent.width - 20
                    height: 60
                    spacing: 150
                    Button {
                        id: button1
                        objectName: "button1"
                        height: 60
                        text: qsTr("Crear")
                        icon.width: 34
                        signal presionado();
                        width: 83

                        onClicked: {
                            console.log("El boton crear fue presionado...")
                            presionado();
                        }
                    }
                    Button {
                        id: button2
                        height: 60
                        text: qsTr("Listar Preguntas")
                    }
                }
            }
        }
    }


}
