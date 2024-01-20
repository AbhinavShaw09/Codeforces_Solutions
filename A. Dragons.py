from sys import exit

inp = lambda: int(input())
seq = lambda: list(map(int, input().split()))
tup = lambda: map(int, input().split())


def main():
    s, n = tup()
    flag = True
    mp = []
    for i in range(n):
        x,y = tup()
        mp.append((x,y))
    mp.sort(key=lambda x:x[0])
    
    for x,y in mp:
        if s > x:
            s += y
        else:
            flag = False
            break
            
    if flag:
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    main()
