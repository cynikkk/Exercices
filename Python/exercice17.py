import requests
from bs4 import BeautifulSoup
import lxml

# Getting HTML from URL in a string
requestHTML = requests.get('https://www.nytimes.com').text

# Creating a parser
parser = BeautifulSoup(requestHTML, 'lxml')

for title in parser.find_all(class_="balancedHeadline"):
    print(title.text.strip())
