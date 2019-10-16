#! /bin/bash

# 
#            --------------------------------------------------
#                            Ehtools Framework          
#            --------------------------------------------------
#                  Copyright (C) <2015>  <Ehtools Team>
#
#        This program is free software: you can redistribute it and/or modify
#        it under the terms of the GNU General Public License as published by
#        the Free Software Foundation, either version 3 of the License, or
#        any later version.
#
#        This program is distributed in the hope that it will be useful,
#        but WITHOUT ANY WARRANTY; without even the implied warranty of
#        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
#        GNU General Public License for more details.
#
#        You should have received a copy of the GNU General Public License
#        along with this program.  If not, see <http://www.gnu.org/licenses/>.
#    
#    
#    About Author :
#    Founder   : Ehtools Team
#    Site      : https://ehtools.pro/
#    Instagram : @ehtools_framework
#    Twitter   : @ehtools
#

#yellow start 
	YS="\e[1;33m"
#blue start 
	BS="\e[0;34m"
#color end
	CE="\e[0m"
#red start
	RS="\e[1;31m"
#black start
	BLS="\e[0;30m"
#dark gray start
	DGYS="\e[1;30m"
#light blue start
	LBS="\e[1;34m"
#green start
	GNS="\e[0;32m"
#light green start
	LGNS="\e[1;32m"
#cyan start
	CYS="\e[0;36m"
#light cyan start
	LCYS="\e[1;36m"
#light red start
	DRS="\e[0;31m"
#purple start
	PS="\e[0;35m"
#light purple start
	LPS="\e[1;35m"
#brown start
	BRS="\e[0;33m"
#light gray start
	LGYS="\e[0;37m"
#white start
	WHS="\e[1;37m"
	
if [[ $EUID -ne 0 ]]
then
   echo "["$RS"*"$CE"] "$RS"This script must be run as "$YS"root"$CE"" 1>&2
   exit
fi

{
chattr -i /tmp/config
chattr -i /tmp/config/config.txt
chattr -i /tmp/config/configure.txt
} &> /dev/null

{
mkdir /tmp/config
echo 0 >> /tmp/config/config.txt
echo 1 >> /tmp/config/configure.txt
} &> /dev/null

{
chattr +i /tmp/config
chattr +i /tmp/config/config.txt
chattr +i /tmp/config/configure.txt
} &> /dev/null


{
SERSE="$( cat /tmp/config/config.txt | head -n 1 )"
ESRES="$( cat /tmp/config/configure.txt | head -n 1 )"
} &> /dev/null

if [[ "$SERSE" != "$ESRES" ]]
then

{
ASESR="$( timeout -s SIGTERM 40 curl -s checkip.dyndns.org | sed -e 's/.*Current IP Address: //' -e 's/<.*$//' )"
KEYEK="$( cat /etc/ehtools/root/service/ehtkey.txt )"
} &> /dev/null

if [[ "$ASESR" != "" ]]
then 

KEYKE="$( timeout -s SIGTERM 40 curl "https://raw.githubusercontent.com/dj-mobley/ehtools-config/master/ehtools.cfg" 2>/dev/null )"

if [[ "$KEYEK" != "$KEYKE" ]]
then

sleep 1
echo -e "["$RS"*"$CE"] "$RS"Failed to open session for uninstall.sh!"$CE""

sleep 1
exit

fi

else
sleep 1
echo -e "["$RS"*"$CE"] "$RS"Can't connect to server: There is no connection!"$CE""
sleep 1
exit
fi
fi

clear
CAT="$( cat /etc/ehtools/password )"
if [[ "$CAT" = "" ]]
then
clear
else
cd /root/ehtools/lib
chmod +x libdec
./libdec
printf '\033]2;Ehtools Authentication\a'
echo -e "$YS"Ehtools Authentication:"$CE"

sleep 0.5
read -e -p $'(\e[4;93mlogin\e[0m\en)> ' loginer
logins=$(cat /etc/ehtools/login)

while [ "$loginer" = "root" ]
do
sleep 0.5
echo -e "["$RS"*"$CE"] "$RS"Failed to open session for root!"$CE""
sleep 0.5
read -e -p $'(\e[4;93mlogin\e[0m\en)> ' loginer
done

while [ "$loginer" != "$logins" ]
do
echo -e "$RS"Wrong login!"$CE"
sleep 3
echo -e "("$YS"Try again..."$CE")"
sleep 2
read -e -p $'(\e[4;93mlogin\e[0m\en)> ' loginer

done

sleep 0.5
read -s -p $'(\e[4;93mpassword\e[0m\en)> ' passworder
passwords=$(cat /etc/ehtools/password)
while [ "$passworder" != "$passwords" ]
do
echo -e
echo -e "$RS"Wrong password!"$CE"
sleep 3
echo -e "("$YS"Try again..."$CE")"
sleep 2
read -s -p $'(\e[4;93mpassword\e[0m\en)> ' passworder
done
fi

printf '\033]2;Uninstalling...\a'

{
	      cd /root/ehtools/lib
	      chmod +x libunchattr
	      ./libunchattr
	      cd /root/ehtools/lib
	      chmod +x libunconf
	      ./libunconf
	      chattr -i /tmp/config
              chattr -i /tmp/config/config.txt
              chattr -i /tmp/config/configure.txt
	      chattr -i /etc/ehtools/root/service
              chattr -i /etc/ehtools/root/service/late
              chattr -i /etc/ehtools/root/service/ehtkey.txt
              chattr -i /etc/ehtools/root/service/late/ehtkey.txt
	      rm -r /tmp/config
	      rm -r /root/ehtools
	      rm -r /bin/ehtools
	      rm -r /etc/ehtools
	      rm -r /root/handshakes
	      rm -r /root/wordlists
	      rm /bin/eht1
	      rm /bin/eht2
	      rm /bin/eht3
	      rm /bin/eht4
	      rm /bin/eht21
	      rm /bin/eht31
	      rm /bin/eht41
	      rm /bin/eht42
	      rm /bin/eht43
	      rm /bin/epasswd
	      rm /bin/modules
	      rm /bin/euh
	      rm /bin/uiecache
} &> /dev/null

echo -e
echo -e

function ProgressBar {

    let _progress=(${1}*100/${2}*100)/100
    let _done=(${_progress}*4)/10
    let _left=40-$_done

    _fill=$(printf "%${_done}s")
    _empty=$(printf "%${_left}s")

                         
        
printf "\rUninstalling: [${_fill// /\#}${_empty// /-}] ${_progress}%%"

}


_start=1

_end=100

for number in $(seq ${_start} ${_end})
do
    sleep 0.2
    ProgressBar ${number} ${_end}
done

echo -e
echo -e
		echo -e "["$YS"inf"$CE"] "$YS"Done"$CE""
		sleep 2
		echo -e "Press "$YS"any key"$CE" to exit..."
		read
		clear
		exit
