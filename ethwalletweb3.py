# This Python file uses the following encoding: utf-8
#c++ python

# if__name__ == "__main__":
#     pass

from web3 import Web3
w3 = Web3(Web3.HTTPProvider("http://192.168.3.213:8545"))

def getblock():
    print(w3.eth.blockNumber)

def offlineSign(privkey, to, amount, fee):
    pk = privkey
    sendfrom = web3.eth.Account.privateKeyToAccount(pk)
    tx = {}
    tx["to"] = to
    tx["value"] = amount
    tx["gas"] = 7000000
    tx["gasPrice"] = 4000000
    tx["nonce"] = 10
    stx = sendfrom.signTransaction(tx)
    w3.eth.sendRawTransaction(stx.rawTransaction)






def SendTo(sendfrom, sendto, amount, fee):
    data = sendfrom + sendto
    print(data)
    return data
