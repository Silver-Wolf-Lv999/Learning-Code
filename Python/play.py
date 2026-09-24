class Playre():
    def __init__(self, name = "User") -> None:
        self.name: str = name;
        self.hp: int = 100;
        self.survive: bool = True;

    def heal(self) -> None:
        if self.hp < 100:
            if self.hp >= 90 and self.hp < 100:
                self.hp = 100;
            self.hp += 10;

    def damage(self) -> None:
        if self.hp > 0:
            if self.hp > 0 and self.hp <= 10:
                self.hp = 0;
                self.die();
            self.hp -= 10;

    def die(self) -> None:
        self.survive = False;
