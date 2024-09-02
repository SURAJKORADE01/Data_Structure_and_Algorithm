def find_union(Arr1,Arr2):
    s = set()
    union = []

    for iNo in Arr1:
        s.add(iNo)
    
    for iNo in Arr2:
        s.add(iNo)

    for iNo in s:
        union.append(iNo)
    
    return union


Arr1 = [1,2,3,4,5,6,7,8,9]
Arr2 = [5,6,7,8,9,10,11,12,13]

union = find_union(Arr1,Arr2)

print(union,end = " ")