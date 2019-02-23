#! /bin/bash
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
echo -e "\e[4;34mIvan Nikolsky (Enty)\e[0m - Main Coder"
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
        echo -e "\e[4;31meht1 returned an error code (1)\e[0m"
        sleep 4
        echo -e "\e[4;31meht2 returned an error code (2)\e[0m"
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
	echo -e "\e[101m\e[1;77meht1 returned an error code (101)\e[0m"
	sleep 4
	echo -e "\e[101m\e[1;77meht2 returned an error code (342)\e[0m"
        sleep 4
        echo -e "\e[101m\e[1;77meht3 returned an error code (319)\e[0m"
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
sleep 3
echo -e "+---------------------------------+" 
echo -e "|    WELCOME TO EPATH FIRMWARE!   |"
echo -e "|   EPATH FIRMWARE IS EHTOOLS     |" 
echo -e "|           FIRMWARE!             |" 
echo -e "|                                 |"
echo -e "|  - Ivan Nikolsky (Enty)         |"
echo -e "|                                 |"
echo -e "+---------------------------------+"
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
chmod +x /root/ehtools/ehtools
chmod +x /root/ehtools/eht4
chmod +x /root/ehtools/eht41
chmod +x /root/ehtools/eht42
chmod +x /root/ehtools/eht43
chmod +x /root/ehtools/ls/l131.sh
chmod +x /root/ehtools/ls/l132.sh
chmod +x /root/ehtools/ls/l133.sh
chmod +x /root/ehtools/uninstall.sh
chmod +x /root/ehtools/modules
chmod +x /root/ehtools/euh
clear
echo -e "Copying script to /bin/ehtools"
sleep 1
mkdir /bin/ehtools
cd /root/ehtools
cp /root/ehtools/ehtools /bin/ehtools
cp /root/ehtools/eht1 /bin/ehtools
cp /root/ehtools/eht2 /bin/ehtools
cp /root/ehtools/eht3 /bin/ehtools
cp /root/ehtools/eht31 /bin/ehtools
cp /root/ehtools/eht4 /bin/ehtools
cp /root/ehtools/eht41 /bin/ehtools
cp /root/ehtools/eht42 /bin/ehtools
cp /root/ehtools/eht43 /bin/ehtools
cp /root/ehtools/euh /bin
chmod +x /bin/euh
cp /root/ehtools/modules /bin
chmod +x /bin/modules
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
echo -e "Only use 'i' for the first time."
read UORI
if [[ "$UORI" = "d" ]]
then 
	clear
	echo -e "? GO OUT OF THIS PLACE ?"
	sleep 3
	break
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
echo -e "Are you Are you want to install modules now?(\e[1;33myes\e[0m/\e[1;33mno\e[0m): "
echo -e "Only use 'i' for the first time."
read UORI
if [[ "$UORI" = "no" ]]
then 
	clear
	echo -e "OK..."
	sleep 3
	break
elif [[ "$UORI" = "yes" ]]
then
       modules
fi
sleep 1
clear
echo -e "Open a NEW terminal and type '\e[4;44mehtools\e[0m' to launch framework"
sleep 4
echo -e "To install Modules (BETA) run 'modules'"
sleep 5
exit
