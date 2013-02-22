

class Rectangle(object):

    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height




def main():
    for width, height in [
            (10,20),
            (-5, 10),
            (7, 7),
            (-2, -40),
            (1000034, 9327)
            ]:
        rect = Rectangle(width, height)
        print "Width: {0}".format(width)
        print "Height: {0}".format(height)
        print "Area: {0}".format(rect.area())
        print "Valid? {0}".format(rect.area() == width * height)
        print



    x = [5, 10]

    x[1] = 20


if __name__ == "__main__":
    main()


