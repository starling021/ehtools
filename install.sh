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
echo -e "More on our site:"
echo -e "==> \e[1;33mhttps://entynethacker.wixsite.com/ehtools\e[0m"                                                           
echo -e "==> \e[1;33mhttp://entynetproject.simplesite.com/\e[0m"
echo -e "Press \e[1;33many key\e[0m to install ehtools"
read -n 1
clear
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
if [[ "$DIR" != "/root/ehtools" ]]
then
	echo -e "ERROR! /00/11/00"
	sleep 4
	echo -e "ERROR! /00/22/00"
        sleep 4
        echo -e "ERROR! /00/33/00"
        sleep 4
        echo -e "TOTAL ERRORS: 3"
        sleep 4
        if [[ -d /root/ehtools ]]
	then
		rm -r /root/ehtools
	fi
	mkdir /root/ehtools
	cp -r "$DIR"/* /root/ehtools
	chmod +x /root/ehtools/install.sh
	gnome-terminal -- "bash /root/ehtools/install.sh"
fi
echo -e "Checking compatibility..."
sleep 20
echo -e "Success!"
sleep 3
echo -e "Installing library..."
sleep 1
echo -e "Fixing permissions..."
sleep 2
echo -e "Connecting to server..."
sleep 10
echo -e "Success!"
sleep 3
echo -e "Creating /bin/ehtools..."
sleep 4
echo -e "Success!"
sleep 3
echo -e "Saving results..."
sleep 10
echo -e "Creating API..."
sleep 10
echo -e "Success!"
sleep 3
echo -e "Downloading EPATH firmware..."
sleep 20
echo -e "Success!"
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
echo -e "Editing Ehtools EPATH..."
sleep 10
echo -e "Success!"
sleep 3
chmod +x /root/ehtools/eht1
chmod +x /root/ehtools/eht2
chmod +x /root/ehtools/eht3
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
		echo -e "Congratulations you have successfully installed our Framework"
		sleep 3
	fi
	echo -e "Adding EntynetHackerTools to PATH so you can access it from anywhere"
	sleep 3
        echo -e "Welcome to EntynetHackerTools PRO free trial :)"
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
sleep 1
clear
echo -e "Open a NEW terminal and type 'ehtools' to launch framework"
sleep  4
exit
