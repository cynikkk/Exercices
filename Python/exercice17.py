import requests
from bs4 import BeautifulSoup

# Getting HTML from URL in a string
url = 'https://www.nytimes.com/'
request = requests.get(url)
requestHTML = request.text

soup = BeautifulSoup(requestHTML, 'html.parser')
#title = soup.find('span', 'articletitle').string

# Print out a list of all the articles titles

print(soup.prettify())