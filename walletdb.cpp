#include "walletdb.h"

WalletDB::WalletDB()
{

}

bool WalletDB::open(const std::string &dbpath, const std::string &dbname)
{
    db_ = QSqlDatabase::addDatabase("QSQLITE");
    QString path_dbname =QString(dbpath.c_str()) + QString("/")+ QString(dbname.c_str());
    db_.setDatabaseName(path_dbname);
}
