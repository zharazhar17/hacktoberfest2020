@ECHO OFF

SET Connected=false
FOR /F "usebackq tokens=1" %%A IN (`PING google.com`) DO (
    REM Check the current line for the indication of a successful connection.
    IF /I "%%A"=="Reply" SET Connected=true
)

REM Check if a success was found.
IF "%Connected%"=="true" (
    SET Internet=Connected to the internet.
) ELSE (
    SET Internet=Not connected to the internet.
)
