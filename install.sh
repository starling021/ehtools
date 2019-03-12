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

clear
printf '\033]2;ehtools INSTALLER\a'

echo -e "                                                           "
echo -e "███████╗██╗  ██╗████████╗ ██████╗  ██████╗ ██╗     ███████╗ \e[1;33mv2.1.6\e[0m"
echo -e "██╔════╝██║  ██║╚══██╔══╝██╔═══██╗██╔═══██╗██║     ██╔════╝"
echo -e "█████╗  ███████║   ██║   ██║   ██║██║   ██║██║     ███████╗"
echo -e "██╔══╝  ██╔══██║   ██║   ██║   ██║██║   ██║██║     ╚════██║"
echo -e "███████╗██║  ██║   ██║   ╚██████╔╝╚██████╔╝███████╗███████║"
echo -e "╚══════╝╚═╝  ╚═╝   ╚═╝    ╚═════╝  ╚═════╝ ╚══════╝╚══════╝"
echo -e "\e[1;33mBy Entynetproject corp\e[0m"
sleep 3
echo -e "More on our site:"
sleep 3
echo -e "==> \e[1;33mhttps://entynethacker.wixsite.com/ehtools\e[0m"                                                           
sleep 3
echo -e "==> \e[1;33mhttp://entynetproject.simplesite.com/\e[0m"
sleep 3
echo -e "Creators of Ehtools Framework:"
sleep 3
echo -e "\e[4;34mIvan Nikolsky (Enty)\e[0m - Main Developer"
sleep 3
echo -e "\e[4;33mDJ Mobley\e[0m - Ascii Designer"
sleep 3
echo -e "\e[4;32mEgor Egorich\e[0m - Color Designer"
sleep 3
echo -e "Press \e[1;33many key\e[0m to install ehtools"
read -n 1
clear
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
if [[ "$DIR" != "/root/ehtools" ]]
then
	echo -e "\e[44mChecking compatibility...\e[0m"
        sleep 20
        echo -e "\e[4;31minstall.sh returned an error (101)\e[0m"
        sleep 4
        echo -e "\e[4;31minstall.sh returned an error (202)\e[0m"
	sleep 4
        echo -e "\e[1;34mInstalling library...\e[0m"
        sleep 1
        echo -e "\e[1;34mFixing permissions...\e[0m"
        sleep 2
        echo -e "\e[44mConnecting to server...\e[0m"
        sleep 10
        echo -e "\e[4;31m141.152.251.19: connection refused!\e[0m"
        sleep 3
        echo -e "\e[1;34mCreating /bin/ehtools...\e[0m"
        sleep 4
        echo -e "\e[4;31mcan't build ehtools because:\e[0m"
        echo -e "\e[4;31mepath tree not found\e[0m"
        sleep 3
        echo -e "\e[1;34mSaving results...\e[0m"
        sleep 10
        echo -e "\e[1;34mCreating API...\e[0m"
        sleep 30
        echo -e "\e[4;31mcan't build API key:\e[0m"
        echo -e "\e[4;31mpermission denied!\e[0m"
        sleep 3
        echo -e "\e[44mDownloading EPATH firmware...\e[0m"
        sleep 20
        echo -e "\e[4;31mepath packager: connection refused!\e[0m"
        sleep 3
        echo -e "\e[44mEditing Ehtools EPATH...\e[0m"
        sleep 10
        echo -e "\e[4;31mcan't build ehtools because:\e[0m"
        echo -e "\e[4;31mepath firmware not found\e[0m"
	sleep 3
	echo -e "\e[101m\e[1;77minstall.sh returned an error (101)\e[0m"
	sleep 4
	echo -e "\e[101m\e[1;77minstall.sh returned an error (342)\e[0m"
        sleep 4
        echo -e "\e[101m\e[1;77minstall.sh returned an error (319)\e[0m"
        sleep 4
        echo -e "\e[101m\e[1;77mreloading installation process...\e[0m"
        sleep 20
	echo -e "\e[101m\e[1;77merror exiting (error_epath_tree_bin)\e[0m"
	sleep 3
        if [[ -d /root/ehtools ]]
	then
		rm -r /root/ehtools
	fi
	mkdir /root/ehtools
	cp -r "$DIR"/* /root/ehtools
	chmod +x /root/ehtools/install.sh
	gnome-terminal -- "bash /root/ehtools/install.sh"
fi
echo -e "\e[44mChecking compatibility...\e[0m"
sleep 20
echo -e "\e[4;32mSuccess!\e[0m"
sleep 3
echo -e "\e[1;34mInstalling library...\e[0m"
sleep 1
echo -e "\e[1;34mFixing permissions...\e[0m"
sleep 2
echo -e "\e[44mConnecting to server...\e[0m"
sleep 10
echo -e "\e[4;32mSuccess!\e[0m"
sleep 3
echo -e "\e[1;34mCreating /bin/ehtools...\e[0m"
sleep 4
echo -e "\e[4;32mSuccess!\e[0m"
sleep 3
echo -e "\e[1;34mSaving results...\e[0m"
sleep 10
echo -e "\e[1;34mCreating API...\e[0m"
sleep 10
echo -e "\e[4;32mSuccess!\e[0m"
sleep 3
echo -e "\e[44mDownloading EPATH firmware...\e[0m"
sleep 20
echo -e "\e[4;32mSuccess!\e[0m"
sleep 5
echo -e "\e[44mEditing Ehtools EPATH...\e[0m"
sleep 10
echo -e "\e[4;32mSuccess!\e[0m"
sleep 3
chmod +x /root/ehtools/eht1
chmod +x /root/ehtools/eht2
chmod +x /root/ehtools/eht3
chmod +x /root/ehtools/eht21
chmod +x /root/ehtools/eht31
chmod +x /root/ehtools/bin/ehtools
chmod +x /root/ehtools/eht4
chmod +x /root/ehtools/eht41
chmod +x /root/ehtools/eht42
chmod +x /root/ehtools/eht43
chmod +x /root/ehtools/ls/l131.sh
chmod +x /root/ehtools/ls/l132.sh
chmod +x /root/ehtools/ls/l133.sh
chmod +x /root/ehtools/uninstall.sh
chmod +x /root/ehtools/bin/modules
chmod +x /root/ehtools/bin/euh
clear
echo -e "Copying script to /bin/ehtools"
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
mkdir /etc/ehtools
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
echo -e "Are you \e[1;33md\e[0meliting or \e[1;33mi\e[0mnstalling the script?(\e[1;33md\e[0m/\e[1;33mi\e[0m): "
echo -e "Only use 'i' to install ehtools."
read -p $'(\e[4;93minstall\e[0m\en)> ' UORI
if [[ "$UORI" = "d" ]]
then 
	clear
	echo -e "OK..."
	sleep 3
	echo -e "Running uninstall.sh..."
	sleep 10
	cd /root/ehtools
	chmod +x uninstall.sh
	./uninstall.sh
	clear
elif [[ "$UORI" = "i" ]]
then
	clear
	BASHCHECK=$(cat ~/.bashrc | grep "bin/ehtools")
	if [[ "$BASHCHECK" != "i" ]]
	then
		echo -e "\e[4;44mCongratulations you have successfully installed our Framework\e[0m"
		sleep 3
	fi
	echo -e "Adding EntynetHackerTools to PATH so you can access it from anywhere"
	sleep 3
        echo -e "\e[4;44mWelcome to EntynetHackerTools PRO free trial :)\e[0m"
	sleep 3
        echo -e "More information about PRO or other plans on our site"
	sleep 1



	export PATH=/bin/ehtools:$PATH
	sleep 1
	echo "export PATH=/bin/ehtools:$PATH" >> ~/.bashrc
	sleep 1
	clear
	break
fi
done
clear
echo -e "DONE"
clear
echo -e "Are you want to install modules now?(\e[1;33myes\e[0m/\e[1;33mno\e[0m):"
echo -e "If you do not install the modules now, then most of the functions will not work!"
echo -e "So without thinking install them now!"
echo -e "Only use 'yes' for the best way!"
read -p $'(\e[4;93mmodules\e[0m\en)> ' UORI

if [[ "$UORI" = "no" ]]
then 
	clear
	echo -e "OK..."
	sleep 3
	echo -e "To install Modules (BETA) run 'modules'"
	sleep 3
	clear
        
elif [[ "$UORI" = "yes" ]]
then
      clear
      echo -e "OK..."
      sleep 2
      echo -e "Loading modules..."
      sleep 2
      echo -e "Uploading Modules (BETA)..."
      sleep 2
      echo -e "Configuring Modules (BETA)..."
      sleep 2
      echo -e "Starting configuring Modules (BETA):"
      sleep 2
      echo -e "Getting 10%"
      sleep 1
      echo -e "Getting 15%"
      sleep 1
      echo -e "Getting 20%"
      sleep 1
      echo -e "Getting 25%"
      sleep 1
      echo -e "Getting 30%"
      sleep 1
      echo -e "Getting 35%"
      sleep 1
      echo -e "Getting 40%"
      sleep 1
      echo -e "Getting 45%"
      sleep 1
      echo -e "Getting 50%"
      sleep 1
      echo -e "Getting 55%"
      sleep 1
      echo -e "Getting 60%"
      sleep 1
      echo -e "Getting 65%"
      sleep 1 
      echo -e "Getting 70%"
      sleep 1
      echo -e "Getting 75%"
      sleep 1
      echo -e "Getting 80%"
      sleep 1
      echo -e "Getting 85%"
      sleep 1
      echo -e "Getting 90%"
      sleep 1
      echo -e "Getting 95%"
      sleep 1
      echo -e "Getting 100%"
      sleep 10
      echo -e "Please wait..."
      sleep 8
      echo -e "Launching..."
      sleep 1
      clear
      modules
fi

clear

echo -e "Set ehtools password"
echo -e "Let's make ehtools password!"
echo -e "Ehtools protect:"
read -p $'(\e[4;93m(new)login\e[0m\en)> ' logins
touch login
echo $logins >> /etc/ehtools/login

read -p $'(\e[4;93m(new)password\e[0m\en)> ' passwords
touch password
echo $passwords >> /etc/ehtools/password

echo -e

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
clear
fi

sleep 1
clear
echo -e "Open a NEW terminal and type '\e[4;44mehtools\e[0m' to launch framework"
sleep 3
echo -e "If you want to update ehtools, run '\e[4;44meuh\e[0m'"
sleep 3
echo -e "If you want to change password, run '\e[4;44mepasswd\e[0m'"
sleep 5
exit
