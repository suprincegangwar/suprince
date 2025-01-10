def matrixm(A, B):
    result = [[0, 0], [0, 0]]
    
    for i in range(len(A)):
        for j in range(len(B[0])):
            for k in range(len(B)):
                result[i][j] += A[i][k] * B[k][j]
    
    return result

A = [
    [1, 2],
    [3, 4]
]

B = [
    [5, 6],
    [7, 8]
]

result = matrixm(A, B)

for i in result:
    print(i)
