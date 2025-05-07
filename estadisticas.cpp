#include "estadisticas.h"
#include "ui_estadisticas.h"
#include "classusuario.h"
#include <vector>
#include <QTableWidget>
#include <algorithm>

estadisticas::estadisticas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::estadisticas)
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);
    estadisticas::setRanking();
}

estadisticas::~estadisticas()
{
    delete ui;
}


void estadisticas::setRanking(){
    std::vector<Usuario> usuarios;
    Usuario::cargarJSON(usuarios);

    ui->tablaEstadisticas->setRowCount(usuarios.size());
    ui->tablaEstadisticas->setColumnCount(3);

    ui->tablaEstadisticas->setShowGrid(false);
    ui->tablaEstadisticas->setAlternatingRowColors(true);
    ui->tablaEstadisticas->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tablaEstadisticas->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tablaEstadisticas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tablaEstadisticas->horizontalHeader()->setStretchLastSection(false);


    ui->tablaEstadisticas->setColumnCount(3);
    ui->tablaEstadisticas->setHorizontalHeaderLabels({"Nombre", "Alias", "Puntaje"});

    std::sort(usuarios.begin(), usuarios.end(), [](Usuario &a, Usuario &b){
        return a.getPuntuacionHistorica() > b.getPuntuacionHistorica();
    });

    for (int i = 0; i < usuarios.size(); i++){
        Usuario &u = usuarios[i];
        ui->tablaEstadisticas->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(u.getNombre())));
        ui->tablaEstadisticas->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(u.getAlias())));
        ui->tablaEstadisticas->setItem(i, 2, new QTableWidgetItem(QString::number(u.getPuntuacionHistorica())));
    }

}
