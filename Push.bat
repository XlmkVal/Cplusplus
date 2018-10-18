@echo off

set /p toBeAdded="Do you need a special message? "

git add *
git commit -m "%toBeAdded% - %date%"
git push