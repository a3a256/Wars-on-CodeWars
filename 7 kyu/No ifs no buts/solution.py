def no_ifs_no_buts(a, b):
    count = 0
    while a < b:
        count = 1
        break
    while a==b:
        count = 2
        break
    answers = ["{} is greater than {}".format(str(a), str(b)),
              "{} is smaller than {}".format(str(a), str(b)),
              "{} is equal to {}".format(str(a), str(b))]
    return answers[count]
