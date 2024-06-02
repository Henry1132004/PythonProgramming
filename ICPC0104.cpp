t = int(input())
while t > 0:
    s = input()
    ans = float('inf')
    i = 0
    while i < len(s):
        if s[i].isdigit():
            j = i
            tmp = 0
            while j < len(s) and s[j].isdigit():
                tmp = tmp * 10 + int(s[j])
                j += 1
            ans = min(ans, tmp)
            i = j
        else:
            i += 1
    print(ans)
    t -= 1