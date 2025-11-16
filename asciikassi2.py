n = int(input())
print((" x\nx x\n x") if n==0 else
      '\n'.join(
          [' '*(n+1)+'x'] +
          [' '*(n-i+1)+'/'+' '*(2*i-1)+'\\' for i in range(1,n+1)] +
          ['x'+' '*(2*n+1)+'x'] +
          [' '*(n-i+1)+'\\'+' '*(2*i-1)+'/' for i in range(n,0,-1)] +
          [' '*(n+1)+'x']
))

