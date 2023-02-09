def per():
    s = input()
    print(' '.join(map(lambda x: ''.join(x), per(s))))