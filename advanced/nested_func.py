def name(name):
    def type_of_onna(type):
        return print("{} {}".format(name,type))
    return type_of_onna

result=name("kristen")
actual_result=result("10/10 baddie")
print(type(result))
print(result)