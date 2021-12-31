#!/bin/bash

printf "\nWelcome, welcome!\nWhat would you like to have nuked today?\n"

read nuke_destination
printf "Your target is $nuke_destination. Is that correct?\n1) (y)es\n2) (n)o\n"

read answer

if [ "$answer" == "y" ]
then 
  printf "Nuking $nuke_destination."

else
  printf "aborting"
fi


