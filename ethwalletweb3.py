# This Python file uses the following encoding: utf-8
#c++ python

# if__name__ == "__main__":
#     pass

from web3 import Web3
import web3
w3 = Web3(Web3.HTTPProvider("http://192.168.3.213:8545"))

def getblock():
    print(w3.eth.blockNumber)

def offlineSign(privkey, toaddress, amount, gas, price, nonce):
    print(privkey)
    pk = int(privkey,16)
    print(privkey)
    sendfrom = web3.eth.Account.privateKeyToAccount(pk)
    print(sendfrom)

    chktoaddress =web3.Web3.toChecksumAddress(toaddress)
    stx = sendfrom.signTransaction(dict(nonce = nonce,
    gasPrice = web3.Web3.toWei(price, 'ether'),
    gas =  web3.Web3.toWei(gas, 'ether'),
    to = chktoaddress,
    value = web3.Web3.toWei(amount, 'ether'),
    data = b'',
    )
    )
    print(stx)
    data = w3.eth.sendRawTransaction(stx.rawTransaction)
    print(data)
    return data

def SendTo(sendfrom, sendto, amount, fee):
    data = sendfrom + sendto
    print(data)
    return data
