import math

d = {
    'A':0,
    'C':0,
    'G':0,
    'T':0,
    '?':0,
}

def solve():
    mx = 0
    l = int(input().strip())
    s = input().strip()
    if l%4==0:
        for x in s:
            d[x] = d[x] + 1
            if mx < d[x] and x!='?':
                mx = d[x]
                
        if mx <= int(l/4):
            mx = int(l/4)
            total = 4*mx-d['A'] - d['C'] - d['G'] - d['T']
            if total == d['?']:
                for x in s:
                    if x == '?':
                        if mx-d['A']>0:
                            print('A',end='')
                            d['A'] = d['A'] + 1
                        else:
                            if mx-d['C']>0:
                                print('C',end='')
                                d['C'] = d['C'] + 1
                            else:
                                if mx-d['G']>0:
                                    print('G',end='')
                                    d['G'] = d['G'] + 1
                                else:
                                    if mx-d['T']>0:
                                        print('T',end='')   
                                        d['T'] = d['T'] + 1
                    else:
                        print(x,end='')
            else:
                print("===")
        else:
            print("===")    
    else:
        print("===")
      
    
solve()
    
