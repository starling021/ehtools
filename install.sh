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
WHS="\e[1;37m"

if [[ $EUID -ne 0 ]]
then
   echo "["$RS"*"$CE"] "$RS"This script must be run as "$YS"root"$CE"" 1>&2
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
sleep 3
printf '\033]2;select ehtools\a'
echo -e "What version of Ehtools Framework you want to install?(\e[1;33mpro\e[0m/\e[1;33mlite\e[0m):"
echo -e "If you did not buy Ehtools Framework PRO, select \e[1;33mlite\e[0m!"
echo -e "If you bought Ehtools Framework PRO, select \e[1;33mpro\e[0m!"
read -p $'(\e[1;33mversion\e[0m)> ' CONFIGURATION

if [[ $CONFIGURATION = "pro" ]]
then

{
rm -r /root/ehtools/etc/lite
rm /root/ehtools/install.sh
cp /root/ehtools/etc/pro/install.sh /root/ehtools
chmod +x /root/ehtools/install.sh
rm -r /root/ehtools/etc/pro
} &> /dev/null
cd /root/ehtools
./install.sh
exit
fi

cd /root/ehtools/etc
cp -r lite /root
cd /root
rm -r ehtools
mv lite ehtools
cd /root/ehtools
chmod +x install.sh
./install.sh
exit
