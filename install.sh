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

CE="\e[0m"
RS="\e[1;31m"
YS="\e[1;33m"

WHO="$( whoami )"

if [[ "$WHO" != "root" ]]
then
sleep 1
echo -e "$RS"run it as"$CE" "$YS"root"$CE"
sleep 1
echo -e "$RS"or use"$CE" "$YS"sudo"$CE"
sleep 1
exit
fi

clear

if [[ -d /root/ehtools ]]
then
sleep 0.5
else
if [[ -d /root ]]
then
cd /root
{
git clone https://github.com/entynetproject/ehtools.git
} &> /dev/null
cd /root/ehtools
chmod +x install.sh
cd /root/ehtools
else
mkdir /root
{
git clone https://github.com/entynetproject/ehtools.git
} &> /dev/null
cd /root/ehtools
chmod +x install.sh
cd /root/ehtools
fi
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

SERSE="$( cat /tmp/config/config.txt | head -n 1 )"
ESRES="$( cat /tmp/config/configure.txt | head -n 1 )"

if [[ "$SERSE" != "$ESRES" ]]
then

ASESR="$(timeout -s SIGTERM 40 curl -s checkip.dyndns.org | sed -e 's/.*Current IP Address: //' -e 's/<.*$//')"

if [[ "$ASESR" != "" ]]
then 

clear

cd /root/ehtools/lib
chmod +x libactiv
./libactiv

if [[ -f /etc/ehtools/root/service/late/ehtkey.txt ]]
then
printf '\033]2;activate ehtools\a'

EHTKEY="$( cat /etc/ehtools/root/service/late/ehtkey.txt )"
sleep 1
echo -e
echo -e "Enter your ehtools activation key!"
echo -e "Or buy it on ehtools site!"
sleep 3
echo -e "["$YS"inf"$CE"] "$YS"Activated! Your key is "$CE"["$YS""$EHTKEY""$CE"]"
read -p $'(\e[4;93mactivation_key\e[0m\en)> ' KEYEHT
sleep 1
if [[ "$KEYEHT" != "$EHTKEY" ]]
then
sleep 8
echo -e "["$RS"*"$CE"] "$RS"Failed to activate ehtools, try again later!"$CE""
sleep 1
exit
fi

else
exit
fi

else
sleep 1
echo -e "["$RS"*"$CE"] "$RS"Can't connect with server: There is no connection!"$CE""
sleep 1
exit
fi
fi

clear
printf '\033]2;ehtools INSTALLER\a'

echo -e "                                                           "
echo -e "███████╗██╗  ██╗████████╗ ██████╗  ██████╗ ██╗     ███████╗ \e[1;33mv3.0.0\e[0m"
echo -e "██╔════╝██║  ██║╚══██╔══╝██╔═══██╗██╔═══██╗██║     ██╔════╝"
echo -e "█████╗  ███████║   ██║   ██║   ██║██║   ██║██║     ███████╗"
echo -e "██╔══╝  ██╔══██║   ██║   ██║   ██║██║   ██║██║     ╚════██║"
echo -e "███████╗██║  ██║   ██║   ╚██████╔╝╚██████╔╝███████╗███████║"
echo -e "╚══════╝╚═╝  ╚═╝   ╚═╝    ╚═════╝  ╚═════╝ ╚══════╝╚══════╝"
echo -e "\e[1;33mBy Ehtools Team\e[0m"
sleep 3
echo -e "More on our sites:"
sleep 3
echo -e "==> \e[1;33mhttps://ehtools.pro/\e[0m"                                                           
sleep 3
echo -e "==> \e[1;33mhttp://entynetproject.simplesite.com/\e[0m"
sleep 3
echo -e "Creators of Ehtools Framework (\e[4;34mehtools team\e[0m):"
sleep 3
echo -e "\e[4;34mEntynetproject\e[0m - Main Developer"
sleep 3
echo -e "\e[4;33mDJ Mobley\e[0m      - Ascii Designer"
sleep 3
echo -e "\e[4;32mTheCakeIsFalse\e[0m - Modules Developer"
sleep 3
echo -e "Press \e[1;33many key\e[0m to install ehtools"
read -n 1
clear
sleep 0.1
chmod +x /root/ehtools/eht/eht1
chmod +x /root/ehtools/eht/eht2
chmod +x /root/ehtools/eht/eht3
chmod +x /root/ehtools/eht/eht21
chmod +x /root/ehtools/eht/eht31
chmod +x /root/ehtools/bin/ehtools
chmod +x /root/ehtools/eht/eht4
chmod +x /root/ehtools/eht/eht41
chmod +x /root/ehtools/eht/eht42
chmod +x /root/ehtools/eht/eht43
chmod +x /root/ehtools/ls/l131.sh
chmod +x /root/ehtools/ls/l132.sh
chmod +x /root/ehtools/ls/l133.sh
chmod +x /root/ehtools/uninstall.sh
chmod +x /root/ehtools/bin/modules
chmod +x /root/ehtools/bin/euh
clear
sleep 1
mkdir /bin/ehtools
cd /root/ehtools
cp /root/ehtools/bin/ehtools /bin/ehtools
cp /root/ehtools/bin/euh /bin
chmod +x /bin/euh
cp /root/ehtools/bin/epasswd /bin
chmod +x /bin/epasswd
cp /root/ehtools/bin/modules /bin
chmod +x /bin/modules
cp /root/ehtools/bin/uiecache /bin
chmod +x /bin/uiecache
cp /root/ehtools/etc/root/password /etc/ehtools/root
clear
#required for gui
apt-get -y install ncurses-dev
clear
if [[ ! -d /root/handshakes ]]
then
	mkdir /root/handshakes
	echo -e "Made /root/handshake directory"
else
	echo -e "/root/handshakes directory detected.Good."
fi
if [[ ! -d /root/wordlists ]]
then
	mkdir /root/wordlists
	echo -e "Made /root/wordlists directory"
else
	echo -e "/root/wordlists directory detected.Good."
fi
while true
do
clear
echo -e "Are you \e[1;33md\e[0meleting or \e[1;33mi\e[0mnstalling ehtools?(\e[1;33md\e[0m/\e[1;33mi\e[0m): "
echo -e "Only use 'i' to install ehtools!"
read -p $'(\e[4;93minstall\e[0m\en)> ' UORI
if [[ "$UORI" = "d" ]]
then 
	clear
	echo -e "OK..."
	sleep 1
	echo -e "Running uninstall.sh..."
	sleep 3
	clear
	cd /root/ehtools
	chmod +x uninstall.sh
	./uninstall.sh
	
elif [[ "$UORI" = "i" ]]
then
	clear
	BASHCHECK=$(cat ~/.bashrc | grep "bin/ehtools")
	if [[ "$BASHCHECK" != "i" ]]
	then
	sleep 5
      echo -e "$RS       ███████╗██╗  ██╗████████╗   $WHS Name |$RS Entynet Hacker Tools$CE" 
      echo -e "$RS       ██╔════╝██║  ██║╚══██╔══╝   $WHS Ver  |$RS v3.0.0$WHS :$YS finally$CE"                
      echo -e "$RS       █████╗  ███████║   ██║      $WHS Core |$RS TEF$WHS :$YS The Ehtools Framework$CE"         
      echo -e "$RS       ██╔══╝  ██╔══██║   ██║      $WHS Dev  |$RS Ehtools Team$CE"                 
      echo -e "$RS       ███████╗██║  ██║   ██║      $WHS Site |$YS https://ehtools.pro$CE"
      echo -e "$RS       ╚══════╝╚═╝  ╚═╝   ╚═╝      $WHS Plan |$RS Ehtools Framework$WHS :$YS PRO$CE"                                         
		sleep 3
		echo -e "["$YS"inf"$CE"] "$YS"Congratulations, you have successfully installed our framework!"$CE""
		sleep 0.5
	fi
	echo -e "["$YS"inf"$CE"] "$YS"A few more steps and you are done..."$CE""
	sleep 5



	export PATH=/bin/ehtools:$PATH
	sleep 1
	echo "export PATH=/bin/ehtools:$PATH" >> ~/.bashrc
	sleep 1
	clear
	break
fi
done
clear
printf '\033]2;ehtools INSTALLER\a'
echo -e "Are you want to install modules now?(\e[1;33myes\e[0m/\e[1;33mno\e[0m):"
echo -e "If you do not install the modules now, then most of the functions will not work!"
echo -e "So without thinking install them now!"
echo -e "Only use 'yes' for the best way!"
read -p $'(\e[4;93mmodules\e[0m\en)> ' UORI

if [[ "$UORI" = "no" ]]
then 
	clear
	echo -e "OK..."
	sleep 1
	echo -e "To install Modules (BETA) run 'modules'"
	sleep 3
	clear
        
elif [[ "$UORI" = "yes" ]]
then
      clear
      echo -e "OK..."
      sleep 1
      echo -e "Loading modules..."
      sleep 0.5
      echo -e "Uploading Modules (BETA)..."
      sleep 0.5
      echo -e "Configuring Modules (BETA)..."
      sleep 0.5
      echo -e "Starting configuring Modules (BETA):"
      sleep 0.5
      echo -e "Getting 10%"
      sleep 0.1
      echo -e "Getting 15%"
      sleep 0.1
      echo -e "Getting 20%"
      sleep 0.1
      echo -e "Getting 25%"
      sleep 0.1
      echo -e "Getting 30%"
      sleep 0.1
      echo -e "Getting 35%"
      sleep 0.1
      echo -e "Getting 40%"
      sleep 0.1
      echo -e "Getting 45%"
      sleep 0.1
      echo -e "Getting 50%"
      sleep 0.1
      echo -e "Getting 55%"
      sleep 0.1
      echo -e "Getting 60%"
      sleep 0.1
      echo -e "Getting 65%"
      sleep 0.1
      echo -e "Getting 70%"
      sleep 0.1
      echo -e "Getting 75%"
      sleep 0.1
      echo -e "Getting 80%"
      sleep 0.1
      echo -e "Getting 85%"
      sleep 0.1
      echo -e "Getting 90%"
      sleep 0.1
      echo -e "Getting 95%"
      sleep 0.1
      echo -e "Getting 100%"
      sleep 0.5
      echo -e "Please wait..."
      sleep 0.5
      echo -e "Launching..."
      sleep 1
      clear
      modules
fi

clear
{
cd /root/ehtools/lib
chmod +x libunlogin
./libunlogin
rm /etc/ehtools/login
rm /etc/ehtools/password
} &> /dev/null
printf '\033]2;ehtools INSTALLER\a'
echo -e "Protect ehtools with password?(\e[1;33myes\e[0m/\e[1;33mno\e[0m):"
echo -e "This function will protect ehtools with login and password!"
echo -e "So without thinking protect ehtools now!"
echo -e "Only use 'yes' for the best way!"
read -p $'(\e[4;93mprotect\e[0m\en)> ' WQE


if [[ "$WQE" = "no" ]]
then
clear
	echo -e "OK..."
	sleep 1
	echo -e "To protect ehtools run 'epasswd'"
	touch /etc/ehtools/login
        touch /etc/ehtools/password
        sleep 3
	clear
fi

if [[ "$WQE" = "yes" ]]
then
clear
printf '\033]2;ehtools password changer\a'
echo -e "Set ehtools password"
echo -e "Let's create ehtools password!"
echo -e "Ehtools protection:"

sleep 0.5
read -p $'(\e[4;93m(new)login\e[0m\en)> ' logins
while [ "$logins" = "root" ]
do
sleep 0.5
echo -e "["$RS"*"$CE"] "$RS"This user reserved by ehtools system!"$CE""
sleep 0.5
read -p $'(\e[4;93m(new)login\e[0m\en)> ' logins
done
touch login
echo $logins >> /etc/ehtools/login

sleep 0.5
read -s -p $'(\e[4;93m(new)password\e[0m\en)> ' passwords
touch password
echo $passwords >> /etc/ehtools/password

cd /root/ehtools/lib
chmod +x liblogin
./liblogin

cd /root/ehtools/lib
chmod +x libchattr
./libchattr


echo -e
echo -e

printf '\033]2;Configuring...\a'

function ProgressBar {

    let _progress=(${1}*100/${2}*100)/100
    let _done=(${_progress}*4)/10
    let _left=40-$_done

    _fill=$(printf "%${_done}s")
    _empty=$(printf "%${_left}s")

                         
        
printf "\rConfiguring: [${_fill// /\#}${_empty// /-}] ${_progress}%%"

}


_start=1

_end=100

for number in $(seq ${_start} ${_end})
do
    sleep 0.2
    ProgressBar ${number} ${_end}
done

sleep 5
echo -e
echo -e

uiecache --all
fi

sleep 3
clear
printf '\033]2;ehtools config key\a'
echo -e "Create your indenty key for "$YS"/etc/ehtools/config"$CE""
echo -e "=> "$YS"use key such as "$CE"["$YS"1001"$CE"]"
echo -e "=> "$YS"you must not say this key someone such as "$CE"["$YS"your friend"$CE"]"
echo -e "This indenty key will protect ehtools boot!"
read -p $'(\e[4;93mkey\e[0m\en)> ' DADI
echo $DADI >> /root/ehtools/etc/config

clear
printf '\033]2;ehtools INSTALLER\a'
sleep 3
echo -e "Open a NEW terminal and type '"$YS"ehtools"$CE"' to launch framework"
sleep 0.5
echo -e "If you want to update ehtools, run '"$YS"euh"$CE"'"
sleep 0.5
echo -e "If you want to change ehtools password, run '"$YS"epasswd"$CE"'"
sleep 0.5
echo -e "If you want to clean ehtools cache, run '"$YS"uiecache"$CE"'"
sleep 1
exit
