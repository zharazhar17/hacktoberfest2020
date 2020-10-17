@echo off
ping -n 2 -w 700 10.11.1.1 | find "bytes="
IF %ERRORLEVEL% EQU 0 (
    SET internet=Connected to the internet.
) ELSE (
    SET internet=Not connected to the internet.
)
echo %internet%
