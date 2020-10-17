import requests
from requests.exceptions import ConnectionError

def internet():
    """Detect an internet connection."""

    try:
        r = requests.get("https://google.com")
        r.raise_for_status()
        print("Internet connection detected.")
    except ConnectionError as e:
        print("Internet connection not detected.")
        raise e
