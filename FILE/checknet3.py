import urllib

def connected(host='http://google.com'):
    try:
        urllib.urlopen(host)
        return True
    except:
        return False

# test
print( 'connected' if connected() else 'no internet!' )
