#!/bin/bash

ping -q -w1 -c1 google.com &>/dev/null && echo online || echo offline
