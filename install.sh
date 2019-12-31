#!/bin/bash

#            --------------------------------------------------
#                            Ehtools Framework          
#            --------------------------------------------------
#                  Copyright (C) <2015>  <Entynetproject>   
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

CE="\033[0m"
RS="\033[1;31m"
YS="\033[1;33m"
WHS="\033[1;37m"

printf '\033]2;install.sh\a'

if [[ $EUID -ne 0 ]]
then
   sleep 1
   echo -e "["$RS"*"$CE"] "$RS"This script must be run as "$YS"root"$RS"!"$CE"" 1>&2
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
printf '\033]2;select ehtools\a'
sleep 3
echo -e "What version of Ehtools Framework you want to install?(\033[1;33mpro\033[0m/\033[1;33mlite\033[0m):"
echo -e "If you did not buy Ehtools Framework PRO, select \033[1;33mlite\033[0m!"
echo -e "If you bought Ehtools Framework PRO, select \033[1;33mpro\033[0m!"
read -e -p $'(\033[1;33mversion\033[0m)> ' CONFIGURATION

if [[ $CONFIGURATION = "pro" ]]
then

{
rm -rf /root/ehtools/etc/lite
rm /root/ehtools/install.sh
cp /root/ehtools/etc/pro/install.sh /root/ehtools
chmod +x /root/ehtools/install.sh
rm -rf /root/ehtools/etc/pro
} &> /dev/null

gcc bin/ehtapp.c -o bin/ehtapp
gcc bin/ehtconsole.c -o bin/ehtconsole
gcc bin/ehtkey.c -o bin/ehtkey
gcc bin/ehtmod.c -o bin/ehtmod
gcc bin/ehtools.c -o bin/ehtools
gcc bin/epasswd.c -o bin/epasswd
gcc dev/dev1.c -o dev/dev1
gcc dev/dev2.c -o dev/dev2
gcc dev/dev21.c -o dev/dev21
gcc eht/eht1.c -o eht/eht1
gcc eht/eht2.c -o eht/eht2
gcc eht/eht21.c eht/eht21.c
gcc eht/eht3.c -o eht/eht3.c
gcc eht/eht31.c -o eht/eht31.c
gcc eht/eht4.c -o eht/eht4.c
gcc eht/eht41.c -o eht/eht41
gcc eht/eht42.c -o eht/eht42
gcc eht/eht43.c -o eht/eht43
gcc lib/libactiv.c -o lib/libactiv
gcc lib/libchattr.c -o lib/libchattr
gcc lib/libconf.c -o lib/libconf
gcc lib/libdec.c -o lib/libdec
gcc lib/libenc.c -o lib/libenc
gcc lib/liblogin.c -o lib/liblogin
gcc lib/libunchattr.c -o lib/libunchattr
gcc lib/libunconf.c -o lib/libunconf
gcc lib/libunlogin.c -o lib/libunlogin
gcc install.sh
gcc uninstall.sh

cd /root/ehtools
./install.sh
exit
fi

cd /root/ehtools/etc
cp -r lite /root
cd /root
rm -rf ehtools
mv lite ehtools
cd /root/ehtools

gcc bin/ehtapp.c -o bin/ehtapp
gcc bin/ehtconsole.c -o bin/ehtconsole
gcc bin/ehtkey.c -o bin/ehtkey
gcc bin/ehtmod.c -o bin/ehtmod
gcc bin/ehtools.c -o bin/ehtools
gcc bin/epasswd.c -o bin/epasswd
gcc dev/dev1.c -o dev/dev1
gcc dev/dev2.c -o dev/dev2
gcc dev/dev21.c -o dev/dev21
gcc eht/eht1.c -o eht/eht1
gcc eht/eht2.c -o eht/eht2
gcc eht/eht21.c eht/eht21.c
gcc eht/eht3.c -o eht/eht3.c
gcc eht/eht31.c -o eht/eht31.c
gcc lib/libchattr.c -o lib/libchattr
gcc lib/libconf.c -o lib/libconf
gcc lib/libdec.c -o lib/libdec
gcc lib/libenc.c -o lib/libenc
gcc lib/liblogin.c -o lib/liblogin
gcc lib/libunchattr.c -o lib/libunchattr
gcc lib/libunconf.c -o lib/libunconf
gcc lib/libunlogin.c -o lib/libunlogin
gcc install.sh
gcc uninstall.sh

chmod +x install.sh
./install.sh
exit
