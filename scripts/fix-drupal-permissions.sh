#!/bin/bash

path=${1%/}
user=${2}
group=${3}
help="\nHelp: This script is used to fix permissions of a drupal installation\nyou need to provide the following arguments:\n\t 1) Path to your drupal installation\n\t 2) Username of the user that you want to give files/directories ownership\n\t 3) Group that the server belongs to.\n\nUsage: (sudo) bash ${0##*/} drupal_path user_name group_name\n"

if [ -z "${path}" ] || [ ! -d "${path}/sites" ] || [ ! -f "${path}/modules/system/system.module" ]; then
	echo "Please provide a valid drupal path"
	echo -e $help
	exit
fi

if [ -z "${user}" ] || [ "`id -un ${user} 2> /dev/null`" != "${user}" ]; then
	echo "Please provide a valid user"
	echo -e $help
	exit
fi

if [ -z "${group}" ] || [ -z "`cat /etc/group | grep ${group}`" ]; then
	echo "Please provide a valid group"
        echo -e $help
        exit
fi


cd $path;

echo -e "Changing ownership of all contents of \"${path}\" :\n user => \"${user}\" \t group => \"${group}\"\n"
chown -R ${user}:${group} .
echo "Changing permissions of all directories inside \"${path}\" to \"750\"..."
find . -type d -exec chmod u=rwx,g=rx,o= {} \;
echo -e "Changing permissions of all files inside \"${path}\" to \"640\"...\n"
find . -type f -exec chmod u=rw,g=r,o= {} \;

cd $path/sites;

echo "Changing permissions of \"files\" directories in \"${path}/sites\" to \"770\"..."
find . -type d -name files -exec chmod ug=rwx,o= '{}' \;
echo "Changing permissions of all files inside all \"files\" directories in \"${path}/sites\" to \"660\"..."
find . -name files -type d -exec find '{}' -type f \; | while read FILE; do chmod ug=rw,o= "$FILE"; done
echo "Changing permissions of all directories inside all \"files\" directories in \"${path}/sites\" to \"770\"..."
find . -name files -type d -exec find '{}' -type d \; | while read DIR; do chmod ug=rwx,o= "$DIR"; done
