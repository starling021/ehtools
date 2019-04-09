#! /bin/bash

{
KEYEK="$( cat /etc/ehtools/root/service/ehtkey.txt )"
KEYKE="$( curl "https://raw.githubusercontent.com/entynetproject/ECLI/master/hello.txt" 2>/dev/null )"
} &> /dev/null

if [[ "$KEYEK" != "$KEYKE" ]]
then

sleep 1
echo -e "["$RS"*"$CE"] "$RS"Failed to open session for l131.sh, did you buy ehtools?"$CE""
sleep 1
exit

fi

cd
cd dns2proxy
python /root/dns2proxy/dns2proxy.py
read
