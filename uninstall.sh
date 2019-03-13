#! /bin/bash

# 
#            --------------------------------------------------
#                            Ehtools Framework          
#            --------------------------------------------------
#        Copyright (C) <2015>  <Entynetproject (Ivan Nikolsky)>
#
#        This program is free software: you can redistribute it and/or modify
#        it under the terms of the GNU General Public License as published by
#        the Free Software Foundation, either version 3 of the License, or
#        any later version.
#
#        This program is distributed in the hope that it will be useful,
#       but WITHOUT ANY WARRANTY; without even the implied warranty of
#       MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#       GNU General Public License for more details.
#
#        You should have received a copy of the GNU General Public License
#        along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
#
#
#    Ehtools framework [based on lscript]
#    
#    
#    About Author :
#    
#    Founder : Entynetproject (Ivan Nikolsky)
#    Instagram : @entynetproject | @ehtools_framework
#    Email : entynetproject@gmail.com
#    Project's site : https://entynethacker.wixsite.com/ehtools
#    Entynetproject's site : http://entynetproject.simplesite.com/
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


echo -e "$YS"Ehtools Authentication:"$CE"

sleep 0.5
read -p $'(\e[4;93mlogin\e[0m\en)> ' loginer
logins=$(cat /etc/ehtools/login)
while [ "$loginer" != "$logins" ]
do
echo -e "$RS"Wrong login!"$CE"
sleep 3
echo -e "("$YS"Try again..."$CE")"
sleep 2
read -p $'(\e[4;93mlogin\e[0m\en)> ' loginer

done

sleep 0.5
read -p $'(\e[4;93mpassword\e[0m\en)> ' passworder
passwords=$(cat /etc/ehtools/password)
while [ "$passworder" != "$passwords" ]
do
echo -e "$RS"Wrong password!"$CE"
sleep 3
echo -e "("$YS"Try again..."$CE")"
sleep 2
read -p $'(\e[4;93mpassword\e[0m\en)> ' passworder

done

function nounistall
{
	echo -e "Oops, why you want to uninstall me? "
	sleep 2
	echo -e "If you find our Framework frustrating, make issue!"
	sleep 2
	echo -e "Entynetproject corp."
	sleep 1
	exit
}
echo -e "Do you really want to uninstall the Ehtools from your system?(y/n)(Enter=no): "
read CHUN
if [ "$CHUN" = "y" ]
then
	echo -e "If you have any problems please contact me first."
	echo -e "Do you still wanna get rid of me?(y/n)(Enter=no): "
	read CHCHUN
	if [ "$CHCHUN" = "y" ]
	then
		echo -e "Ok, uninstalling everything that has to do with ehtools on your system"
		sleep 4
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
	      rm /bin/ehtconsole
		echo -e "Done..."
		sleep 2
		echo -e "Press any key to exit..."
		read
		exit
	else
		nounistall
	fi
else
	nounistall
fi
