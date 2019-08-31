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
EBOOT  ->  Boot Ehtools Framework.
RCONF  ->  Reset default EPATH config.
EHELP  ->  Print EPATH commander commands.
EEXIT  ->  Exit from the EPATH commander.
"""

elif [[ $CONF = "ECONF" ]]
then
read -p $'New EPATH path: ' EPATH
export EPATH

elif [[ $CONF = "EBOOT" ]]
then
ehtconsole
exit

elif [[ $CONF = "RCONF" ]]
then
EPATH="/root/ehtools"
export EPATH

elif [[ $CONF = "EEXIT" ]]
then
exit
fi
done
