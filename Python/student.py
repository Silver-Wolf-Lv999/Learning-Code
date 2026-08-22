class Information():
    def __init__(self, name, age):
        self.name = name
        self.age = age 

    def print_information(self):
        print(f"学生姓名{self.name},年龄{self.age}")

    def age_add(self):
        self.age += 1


if __name__ == "__main__":
    student = Information("王强", 15)
    student.print_information()
    student.age_add()
    student.print_information()
    
