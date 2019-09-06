#! /bin/bash

echo -e "The EPATH firmware commander."
echo -e "Here you can reconfigure EPATH."
echo -e "Type 'EHELP' for commands."

while true
do
read -p $'EPATH ==> ' CONF
if [[ $CONF = "EHELP" ]]
then
echo -e """
ECONF  ->  Reconfigure EPATH path.
RCONF  ->  Reset default EPATH config.
ETREE  ->  Print EPATH directory tree.
EHELP  ->  Print EPATH commander commands.
EEXIT  ->  Exit from the EPATH commander.
"""

elif [[ $CONF = "ECONF" ]]
then
read -p $'New EPATH path: ' EPATH
export EPATH

elif [[ $CONF = "RCONF" ]]
then
EPATH="/root/ehtools"
export EPATH

elif [[ $CONF = "ETREE" ]]
then
ls -a /root/ehtools && ls -a /root/ehtools/bin && ls -a /root/ehtools/eht && ls -a /root/ehtools/etc && ls -a /root/ehtools/etc/epath && ls -a /root/ehtools/etc/root && ls -a /root/ehtools/lib && ls -a /root/ehtools/ls

elif [[ $CONF = "EEXIT" ]]
then
exit
fi
done
