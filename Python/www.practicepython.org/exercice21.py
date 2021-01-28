import requests

# TODO
# Handle all exceptions
# Make url in argument, if not provided ask while running

url = input("Paste url to download : ")

choice = input("Would you like to customize output name ? (y/n) ")
if choice == 'y':
    outputName = input("Name of the file ? ")
else:
    outputName = "output"

text = requests.get(url)

with open(outputName, 'wb') as f:
    f.write(text.content)
