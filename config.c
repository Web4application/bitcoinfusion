# ==========================
# Bitcoin Fusion Node Config
# ==========================

daemon=1
server=1
nolisten=1
txindex=1
disablewallet=1

# Mempool and DB cache
rpcworkqueue=1100
maxmempool=4096
mempoolexpiry=8760
mempoolfullrbf=1
dbcache=1000
deprecatedrpc=warnings

# ZeroMQ for streaming blocks and transactions
zmqpubhashtx=tcp://127.0.0.1:28332
zmqpubhashblock=tcp://127.0.0.1:28332

# Extra nodes (can add more dynamically via template)
addnode=mainnode1.bitcoin.net
addnode=mainnode2.bitcoin.net
addnode=testnode1.bitcoin.net
addnode=testnode2.bitcoin.net
maxconnections=50
rpcallowip=0.0.0.0/0   # allow Docker container RPC access

# --------------------------
# MAINNET CONFIG
# --------------------------
[main]
mainnet=1
rpcuser=fusionuser_main
rpcpassword=fusionpass_main123
rpcport=8332
prune=0        # 0 = full node, change to 5000 for pruned node
rpcthreads=8

# --------------------------
# TESTNET CONFIG
# --------------------------
[testnet4]
testnet4=1
rpcuser=fusionuser_test
rpcpassword=fusionpass_test123
rpcport=18332
prune=1000      # pruned testnet node
rpcthreads=4
