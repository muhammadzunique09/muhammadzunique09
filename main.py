class Costumer(object):
    cos_name = " "
    cos_cell = " "
    amount_paid = 0
    amount_get_back = 0

    def __init__(self):
        pass

    def get_user_details(self):
        print("GETTING USER's DETAILS\n")
        self.cos_name = str(input("Enter your Name : "))
        self.cos_cell = str(input("Enter Your cell # : "))

    def print_cos(self):
        print("NAME : " + str(self.cos_name))
        print("CELL # : " + str(self.cos_cell))

    def paying(self):
        self.amount_paid = int(input("Enter amount costumer Paid : $"))

    def returnned(self):
        print("Amount returned : $" +str(self.amount_get_back))

class Shop(Costumer):
    itemQuantity = 0
    itemPrice = 0
    itemName = " "
    num = 0
    total = 0
    items = []
    Qty = []
    tot = []
    price = []
    amount_rec = 0
    amount_returned = 0

    def __init__(self):
        pass

    def billing_process(self):
        self.paying()
        self.receiving_amount()
        self.returning_amount()
        self.returning_amount()

    def print_bill(self):
        print("WELCOME TO OUR SHOPPING MART\n============================\n")
        print("Costumer Name : " + str(self.cos_name))
        print("Costumer cell : " +str(self.cos_cell))
        print("\n\t\tTOTAL BILL\n\t\t==========\n")
        print("Item Name\t\tQuanitity\tPrice($)_each")
        print("=====================================\n")
        for i in range(self.num):
            print(str(self.items[i])+"\t\t\t   "+str(self.Qty[i])+"\t\t    "+"$"+str(self.price[i]))

        for i in range(len(self.tot)):
            self.total += self.tot[i]
        print("GST IS OF 5%\n")
        print("Amount due : $"+str(self.total))
        self.receiving_amount()
        print("Costumer Paid : $" +str(self.amount_rec))
        if self.amount_rec < self.total:
            print("Please give $"+str((self.total - self.amount_rec)) + " amount more ...")
            self.paying()
        else:
            print("Amount returned : $" , abs(self.amount_rec - self.total - self.total*0.05))
            print("===========================================")
            print("TOTAL Amount after GST of 5% : "+str( self.total + (self.total * 0.05))+" .")


    def receiving_amount(self):
        self.paying()
        self.amount_rec = self.amount_paid

    def returning_amount(self):
        self.amount_returned = self.total - self.amount_rec - self.total*0.05
        self.amount_get_back = self.amount_returned

    def add_item(self):
            self.items.append( self.itemName)
            self.price.append(self.itemPrice)
            self.Qty.append(self.itemQuantity)
            self.tot.append(self.itemPrice * self.itemQuantity)

    def enter(self):
        for i in range (self.num):
            print("ITEM NUMBER "+ str(i+1) +" : ")
            self.itemName = input("Enter Item name : ")
            self.itemPrice = int(input("Enter item price : $"))
            self.itemQuantity = int(input("Enter item quantity : "))
            self.add_item()

    def number(self):
        print("Item Numbers:")
        self.num=int(input("Enter no of item you want:"))

    def display(self):
        for i in range(len(self.items)):
            if i <  self.num:
                print("ITEM # " + str(i+1) +" : ")
                print("NAME : " + self.items[i])
                print("QUANTITY : "+str(self.Qty[i]))

    def remove_item(self):
        dumy = str(input("Enter Name of item you want to remove from list : "))
        for i in range(len(self.items) - 1):
            if str(self.items[i]) == str(dumy):
                del(self.items[i])
                del(self.Qty[i])
                print("Item removed successfully.")
                self.num -= 1

    def main(self):
        self.get_user_details()
        self.choice()

    def choice(self):
        print("\n\nWELCOME TO OUR SHOPPING CART \n============================\n")
        print("[1]. Add Item to list \n[2]. Remove Item from list \n[3]. Display list Items \n[4]. Print Bill\n[5]. EXIT\n\n")
        value = int(input("SELECT WHAT YOU WANT TO DO ?"))
        if value == 1:
            self.number()
            self.enter()
            y = str(input("Press Y to continue .."))
            if y  == "Y" or "y":
                self.choice()

        elif value == 2:
            if self.num == 0 :
                print("Can't delete data because list is empty")
                self.choice()
            else:
                self.remove_item()
                y = str(input("Press Y to continue .."))
                if y == "Y" or "y":
                    self.choice()

        elif value == 3:
            self.display()
            y = str(input("Press Y to continue .."))
            if y  == "Y" or "y":
                self.choice()

        elif value ==4:
            self.print_bill()
            y = str(input("Press Y to continue .."))
            if y  == "Y" or "y":
                self.choice()

        elif value == 5:
            exit(1)


object = Shop()
object.main()









