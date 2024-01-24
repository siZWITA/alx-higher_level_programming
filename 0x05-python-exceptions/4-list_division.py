#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    r_list = [0] * list_length
    i = 0
    while i < list_length:
        try:
            r_list[i] = my_list_1[i] / my_list_2[i]
        except IndexError:
            print("out of range")
        except ZeroDivisionError:
            print("division by 0")
        except TypeError:
            print("wrong type")
        finally:
            i += 1
    return r_list
