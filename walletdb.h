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
    struct Address
    {
        QString priv_key;
        QString pub_key;
    };

    struct Tx
    {
        QString from;
        QString to;
        QString txid;
        QString amount;
        uint64_t height;
    };

    bool open(const std::string& dbpath, const std::string& dbname);

    void addAddress(QSqlQuery& query, const Address&address);

    void addTx(QSqlQuery& query, const Tx& tx);


private:
    QSqlDatabase db_;
};

#endif // WALLETDB_H
