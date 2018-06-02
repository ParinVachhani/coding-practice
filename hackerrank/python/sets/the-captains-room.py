if __name__ == '__main__':
    k,arr = int(input()),list(map(int, input().split()))
    myset = set(arr)
    print(((sum(myset)*k)-(sum(arr)))//(k-1))

# def getSingle(arr, n):
#     ones = 0
#     twos = 0
#     for i in range(n):
#         # one & arr[i]" gives the bits that
#         # are there in both 'ones' and new
#         # element from arr[]. We add these
#         # bits to 'twos' using bitwise OR
#         twos = twos | (ones & arr[i])
#         # one & arr[i]" gives the bits that
#         # are there in both 'ones' and new
#         # element from arr[]. We add these
#         # bits to 'twos' using bitwise OR
#         ones = ones ^ arr[i]
#         # The common bits are those bits 
#         # which appear third time. So these
#         # bits should not be there in both 
#         # 'ones' and 'twos'. common_bit_mask
#         # contains all these bits as 0, so
#         # that the bits can be removed from
#         # 'ones' and 'twos'
#         common_bit_mask = ~(ones & twos)
#         # Remove common bits (the bits that 
#         # appear third time) from 'ones'
#         ones &= common_bit_mask
#         # Remove common bits (the bits that
#         # appear third time) from 'twos'
#         twos &= common_bit_mask
#     return ones
# # driver code
# # arr = [3, 3, 2, 3]
# # n = len(arr)
# # print("The element with single occurrence is ",
# #         getSingle(arr, n))

# k = int(input())
# arr = list(map(int, input().split()))
# print(getSingle(arr, len(arr)))

# d=input();  #get rid of first line 
# a=input().split();  #store all to array
# s1=set();  #all unique room number
# s2=set();  #all unique room number occur more than once
# for i in a:
#     if  i in s1:
#         s2.add(i)
#     else:
#         s1.add(i)
# print(s1.difference(s2).pop())
