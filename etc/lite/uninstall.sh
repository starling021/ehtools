#!/bin/bash

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
#    Email     : contact@ehtools.pro
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
   sleep 1
   echo -e "["$RS"*"$CE"] "$RS"This script must be run as "$YS"root"$RS"!"$CE"" 1>&2
   sleep 1
   exit
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
logins="$(cat /etc/ehtools/login)"
cd /root/ehtools/lib
chmod +x libenc
./libenc
printf '\033]2;Ehtools Authentication\a'
echo -e "$YS"Ehtools Authentication:"$CE"

sleep 0.5
read -e -p $'(\e[4;93mlogin\e[0m\en)> ' loginer


while [ "$loginer" = "root" ]
do
sleep 0.5
echo -e "["$RS"*"$CE"] "$RS"Failed to open session for root!"$CE""
sleep 0.5
read -e -p $'(\e[4;93mlogin\e[0m\en)> ' loginer
done

while [ "$loginer" != "$logins" ]
do
echo -e "["$RS"*"$CE"] "$RS"Wrong login!"$CE""
sleep 3
sleep 0
read -e -p $'(\e[4;93mlogin\e[0m\en)> ' loginer

done

sleep 0.5
cd /root/ehtools/lib
chmod +x libdec
./libdec
passwords="$(cat /etc/ehtools/password)"
cd /root/ehtools/lib
chmod +x libenc
./libenc
read -s -p $'(\e[4;93mpassword\e[0m\en)> ' passworder
while [ "$passworder" != "$passwords" ]
do
echo -e
echo -e "["$RS"*"$CE"] "$RS"Wrong password!"$CE""
sleep 3
sleep 0
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
              cd /root/ehtools/lib
              chmod +x liunlogin
              ./libunlogin
	      rm /usr/share/applications/ehtools.desktop
	      rm /root/Desktop/ehtools.desktop
	      rm -rf /root/ehtools
	      rm -rf /bin/ehtools
	      rm -rf /etc/ehtools
	      rm -rf /root/handshakes
	      rm -rf /root/wordlists
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
