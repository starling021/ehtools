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
#    Email     : contact@ehtools.pro
#

CE="\e[0m"
RS="\e[1;31m"
YS="\e[1;33m"
WHS="\e[1;37m"

if [[ $EUID -ne 0 ]]
then
   sleep 1
   echo -e "["$RS"*"$CE"] "$RS"This script must be run as "$YS"root"$CE"" 1>&2
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

clear
printf '\033]2;ehtools INSTALLER\a'
echo -e
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
echo -e "Creators of Ehtools Framework (\e[4;34mEhtools Team\e[0m):"
sleep 3
echo -e "\e[4;34mEntynetproject\e[0m - Main Developer"
sleep 3
echo -e "\e[4;33mDJ Mobley\e[0m      - Ascii Designer"
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
chmod +x /root/ehtools/dev/dev1
chmod +x /root/ehtools/dev/dev2
chmod +x /root/ehtools/dev/dev21
chmod +x /root/ehtools/uninstall.sh
chmod +x /root/ehtools/bin/ehtmod
chmod +x /root/ehtools/bin/ehtkey
chmod +x /root/ehtools/bin/ehtconsole
chmod +x /root/ehtools/bin/ehtapp
chmod +x /root/ehtools/bin/uiecache
chmod +x /root/ehtools/bin/epasswd
clear
sleep 1
mkdir /bin/ehtools
cd /root/ehtools
cp /root/ehtools/bin/ehtools /bin/ehtools
chmod +x /bin/ehtools/ehtools
cp /root/ehtools/bin/ehtkey /bin/ehtools
chmod +x /bin/ehtools/ehtkey
cp /root/ehtools/bin/ehtapp /bin/ehtools
chmod +x /bin/ehtools/ehtapp
cp /root/ehtools/bin/epasswd /bin/ehtools
chmod +x /bin/ehtools/epasswd
cp /root/ehtools/bin/ehtmod /bin/ehtools
chmod +x /bin/ehtools/ehtmod
cp /root/ehtools/bin/uiecache /bin/ehtools
chmod +x /bin/ehtools/uiecache
mkdir /etc/ehtools
mkdir /etc/ehtools/root
cp /root/ehtools/etc/root/password /etc/ehtools/root
mkdir /etc/ehtools/app
cp /root/ehtools/app/ehtools.png /etc/ehtools/app
clear

apt-get -y install ncurses-dev

clear
if [[ ! -d /root/handshakes ]]
then
	mkdir /root/handshakes
	sleep 0
else
	sleep 0
fi
if [[ ! -d /root/wordlists ]]
then
	mkdir /root/wordlists
	sleep 0
else
	sleep 0
fi
while true
do
	clear
	BASHCHECK=$(cat ~/.bashrc | grep "bin/ehtools")
	if [[ "$BASHCHECK" != "i" ]]
	then
	sleep 5
	echo -e
      echo -e "$YS       ███████╗██╗  ██╗████████╗   $WHS Name |$RS Entynet Hacker Tools$CE" 
      echo -e "$YS       ██╔════╝██║  ██║╚══██╔══╝   $WHS Ver  |$RS v3.0.0$WHS :$YS finally$CE"                
      echo -e "$YS       █████╗  ███████║   ██║      $WHS Core |$RS TEF$WHS :$YS The Ehtools Framework$CE"         
      echo -e "$YS       ██╔══╝  ██╔══██║   ██║      $WHS Dev  |$RS Ehtools Team$CE"                 
      echo -e "$YS       ███████╗██║  ██║   ██║      $WHS Site |$YS https://ehtools.pro/$CE"
      echo -e "$YS       ╚══════╝╚═╝  ╚═╝   ╚═╝      $WHS Plan |$RS Ehtools Framework$WHS :$YS LITE$CE"                                         
		sleep 3
		echo -e "\n["$YS"inf"$CE"] "$YS"Congratulations, you have successfully installed our framework!"$CE""
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
done
clear
printf '\033]2;ehtools INSTALLER\a'
sleep 3
echo -e "Do you want to install ehtools modules now?(\e[1;33myes\e[0m/\e[1;33mno\e[0m): "
echo -e "So without thinking install them now!"
echo -e "Only use 'yes' for the best way!"
read -e -p $'(\e[4;93minstall\e[0m\en)> ' UORI

if [[ "$UORI" = "no" ]]
then 
	clear
	echo -e "OK..."
	sleep 1
	echo -e "To install ehtools modules, run '"$YS"ehtmod -i"$CE"'..."
	sleep 3
	clear
        
elif [[ "$UORI" = "yes" ]]
then
      clear
      echo -e "OK..."
      sleep 1
      echo -e "Please wait..."
      sleep 1
      echo -e "Launching..."
      sleep 1
      ehtmod -i
fi

clear
printf '\033]2;ehtools INSTALLER\a'
sleep 3
echo -e "Do you want to protect ehtools with password?(\e[1;33myes\e[0m/\e[1;33mno\e[0m):"
echo -e "This function will protect ehtools with login and password!"
echo -e "So without thinking protect ehtools now!"
echo -e "Only use 'yes' for the best way!"
read -e -p $'(\e[4;93mprotect\e[0m\en)> ' WQE


if [[ "$WQE" = "no" ]]
then
clear
	echo -e "OK..."
	sleep 1
	echo -e "To protect ehtools, run '"$YS"epasswd"$CE"'..."
	touch /etc/ehtools/login
        touch /etc/ehtools/password
        sleep 3
	clear
fi

if [[ "$WQE" = "yes" ]]
then
if [[ -f /etc/ehtools/login ]]
then
sleep 0
else
clear
printf '\033]2;ehtools password changer\a'
sleep 3
echo -e "Set ehtools login and password!"
echo -e "Ehtools Password Protection:"

sleep 0.5
read -e -p $'(\e[4;93m(new)login\e[0m\en)> ' logins
while [ "$logins" = "root" ]
do
sleep 0.5
echo -e "["$RS"*"$CE"] "$RS"This user is reserved by the ehtools system!"$CE""
sleep 0.5
read -e -p $'(\e[4;93m(new)login\e[0m\en)> ' logins
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
sleep 3
fi
fi

clear
printf '\033]2;create config key\a'
sleep 3
echo -e "Create your ehtools config key for "$YS"/etc/ehtools/.config"$CE""
echo -e "The ehtools config key is intended to protect ehtools boot!"
echo -e "It is recommended to create a strong ehtools config key!"
read -e -p $'(\e[4;93mconfig_key\e[0m\en)> ' DADI
if [[ "$DADI" = "" ]]
then
sleep 0
else
{
rm /root/ehtools/etc/.config
} &> /dev/null
echo $DADI >> /root/ehtools/etc/.config
fi

cd /root/ehtools/lib
chmod +x libconf
./libconf

if [[ "$(cat /etc/ehtools/login)" = "" ]]
then
sleep 0
else
cd /root/ehtools/lib
chmod +x libenc
./libenc
fi

clear
printf '\033]2;ehtools INSTALLER\a'
sleep 3
echo -e "Do you want to create ehtools application(\e[1;33myes\e[0m/\e[1;33mno\e[0m):"
echo -e "This will allow you to run ehtools via the application!"
echo -e "Ehtools application will be created in the applications!"
read -e -p $'(\e[4;93mcreate\e[0m\en)> ' ES

if [[ "$ES" = "yes" ]]
then
cp /root/ehtools/app/ehtools.desktop /usr/share/applications
chmod +x /usr/share/applications/ehtools.desktop
fi

if [[ "$ES" = "no" ]]
then
clear
	echo -e "OK..."
	sleep 1
	echo -e "To create ehtools application, run '"$YS"ehtapp -c"$CE"'..."
        sleep 3
fi

clear
printf '\033]2;ehtools INSTALLER\a'
sleep 3
echo -e "Open a NEW terminal and type '"$YS"ehtools"$CE"' to launch the framework"
sleep 0.5
echo -e "If you want to configure ehtools application, run '"$YS"ehtapp"$CE"'"
sleep 0.5
echo -e "If you want to change ehtools config key, run '"$YS"ehtkey"$CE"'"
sleep 0.5
echo -e "If you want to configure ehtools modules, run '"$YS"ehtmod"$CE"'"
sleep 0.5
echo -e "If you want to uninstall ehtools cache, run '"$YS"uiecache"$CE"'"
sleep 0.5
echo -e "If you want to change ehtools password, run '"$YS"epasswd"$CE"'"
sleep 1
exit
