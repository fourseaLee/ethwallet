#ifndef WALLETDB_H
#define WALLETDB_H
#include <QtSql>

class WalletDB
{
public:
    WalletDB();
    ~WalletDB()
    {
        db_.close();
    }

    bool open(const std::string& dbpath, const std::string& dbname);


private:
    QSqlDatabase db_;
};

#endif // WALLETDB_H
