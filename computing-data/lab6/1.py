############################
######### Дасгал 1 #########
############################
def pairwise_div(Lnum, Ldenom):
    """Lnum болон Ldenom нь тоо агуулсан, ижил урттай,
        хоосон биш жагсаалт
    Хоёр жагсаалтыг харгалзах элемент бүрээр хувааж, хариуг
    агуулсан шинэ жагсаалт буцаана (Lnum/Ldenom).
    Хэрэв Ldenom жагсаалт 0 утга агуулсан эсвэл ямар нэг байдлаар
    хуваахад асуудал гарсан тохиолдолд ValueError алдаа үүсгэ."""
    # Энд кодоо бичнэ үү...
    # assert sd, "/"
    assert len(Lnum) > 0 and len(Ldenom) > 0, "empty array"
    assert len(Lnum) == len(Ldenom), "len dont match"

    result = []

    for i in range(len(Lnum)):
        if Ldenom[i] == 0:
            raise ValueError("cant be divided by 0")

        result.append(Lnum[i] / Ldenom[i])

    return result
   

# Жишээ:
L1 = [5, 10, 15, 20]
L2 = [1, 3, 4, 2]
print(pairwise_div(L1, L2))  # prints [5.0, 3.3333, 3.75, 10]

L1 = [5, 10, 15, 20]
L2 = [5, 4, 3, 0]
print(pairwise_div(L1, L2))  # raises AssertionError

L1 = []
L2 = [5, 4, 3, 2]
print(pairwise_div([], [5, 4, 3, 2]))  # raises AssertionError

L1 = [5, 10, 15, 20]
L2 = [1, 3, 0, 2]
print(pairwise_div(L1, L2))  # raises ValueError


############################
######### Дасгал 2 #########
############################
def sum_str_lengths(L):
    """
    L нь хоосон биш жагсаалт бөгөөд дараах өгөгдлийн төрлүүдийг агуулна:
    * тэмдэгт мөрүүд эсвэл
    * тэмдэгт мөр агуулсан хоосон биш дэд жагсаалт
    L жагсаалт доторх бүх тэмдэгт мөр, мөн дэд жагсаалт байвал
    түүн доторх тэмдэгт мөр бүрийн уртыг олж,
    нийлбэрийг буцаана. Хэрэв L жагсаалтад тэмдэгт мөрөөс
    өөр төрөлтэй өгөгдөл олдох юм бол ValueError алдаа үүсгэнэ үү.
    """
    # Энд кодоо бичнэ үү...
    assert len(L) > 0, "empty array"

    total = 0

    for item in L:

        if isinstance(item, str):
            total += len(item)

        elif isinstance(item, list):
            if len(item) == 0:
                raise ValueError("also empty array")

            for sub in item:
                if not isinstance(sub, str):
                    raise ValueError("not string")

                total += len(sub)

        else:
            raise ValueError("not list or str")

    return total
    


# Жишээ:
print(sum_str_lengths(["abcd", ["e", "fg"]]))  # prints 7
print(sum_str_lengths([12, ["e", "fg"]]))  # raises ValueError
print(sum_str_lengths(["abcd", [3, "fg"]]))  # raises ValueError