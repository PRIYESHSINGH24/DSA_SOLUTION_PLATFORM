def PalinArray(arr):
    for i in arr:
        s = str(i)
        rev = s[::-1]
        if s != rev:
            return False
    return True