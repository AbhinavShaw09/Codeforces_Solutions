from sys import exit
from sys import maxsize

inp = lambda : int(input())
seq = lambda : list(map(int,input().split()))
tup = lambda : map(int,input().split())

def main():
    t = inp()
    for _ in range(t):  
        n,k = tup()
        st = input()
        arr = [0]
        cnt = 0
        res = k
        for i in range(n):
            if st[i] == 'W':
                cnt += 1
            arr.append(cnt)
        
        for i in range(k,n+1):
            res = min(res,arr[i]-arr[i-k])
        print(res)
                
if __name__ == '__main__':
    main()
