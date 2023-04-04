#!/usr/bin/python3
"""
Python script that takes in a URL, sends a request to the URL and manage errors
"""
import requests
import sys

if __name__ == '__main__':

    re = requests.get(sys.argv[1])

    if re.status_code >= 400:
        print("Error code: {}".format(re.status_code))
    else:
        print(re.text)
