import requests

try:
    if requests.get('https://google.com').ok:
        print("You're Online")
except:
    print("You're Offline")
