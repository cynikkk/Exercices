def printGrid(width, height):
    for i in range(height):
        print(' ---' * width)
        print('|   ' * width + '|   ')
        if i == height - 1:
            print(' ---' * width)

def main():
    gameboardSize = input("Which size will the gameboard be ? (width,height) ")

    gameboardSizeW = int(gameboardSize[0])
    gameboardSizeH = int(gameboardSize[2])

    printGrid(gameboardSizeW, gameboardSizeH)

if __name__ == "__main__":
    main()