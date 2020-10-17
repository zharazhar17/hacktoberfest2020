import requests

def internet():
    """Detect an internet connection."""

    connection = None
    try:
        r = requests.get("https://google.com")
        r.raise_for_status()
        print("Internet connection detected.")
        connection = True
    except:
        print("Internet connection not detected.")
        connection = False
    finally:
        return connection
internet()
