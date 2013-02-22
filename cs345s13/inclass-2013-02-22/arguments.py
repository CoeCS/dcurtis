# arguments.py --- demonstrate argument passing

import sys


def main():
    # will run this function
    print sys.argv[1:]

    newlst = list(reversed(sys.argv[1:]))
    print newlst

    #print list(reversed(sys.argv))[:len(sys.argv)-1]
    #print list(reversed(sys.argv))[:-1]

    print ".".join( newlst )


if __name__ == "__main__":
    main()
