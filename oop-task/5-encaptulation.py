class MoneyManager:
    _taka = 100

    def __init__(self,value) -> None:
        self._taka += value

    def deposit(self):
        print(self._taka)



A = MoneyManager(5)
A.deposit()


A._taka = 15   # Can access inside
A.deposit()