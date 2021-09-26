strin = int(input())


word_list=[]

for i in range(0,strin):
    words=str(input())
    word_list.append(words)


for i in word_list:
    if(len(i) <= 10):
        print(i)
    else:
        print(f"{i[0]}{len(i)-2}{i[-1]}")
