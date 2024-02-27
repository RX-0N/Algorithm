from collections import deque

graph = {}

# asinus = {'아시누스':False}
# teemo = {'티모': True}
# nanus = {'나서스': False}
# ezreal = {'나서스': False}
# vayne = {'베인':False}
# jhin = {'진':False}
#graph["asinus"] = {teemo, nanus, ezreal, vayne, jhin}

graph['아시누스'] = {'티모': True, '나서스': False, '나서스': False, '베인':False, '진':False}
print(graph['아시누스'].get('티모'))

# 각 인원별로 자신과 연결된 정점 목록을 생성

def who_is_seller(person):
    print("is seller?")
    target = {}
    target = person

    for seller in target:
        if seller.values():
            return True
    return False

#누가 버섯을 파는가?
def search(name):
    search_queue = deque()
    search_queue += graph[name]
    searched = []

    while search_queue:
        person = search_queue.popleft()
        if not person in searched:
            if who_is_seller(person):
                print(person + " is a mushroom seller!")
                return True
            else:
                search_queue += graph[person]
                searched.append(person)
    return False

search()