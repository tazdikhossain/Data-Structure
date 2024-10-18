class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

    class Linkedlist:
        def __init__(self):
            self.head = None
    

        def insertAtStart(self, value):
            new_node = Node(value)
            new_node.next = self.hesd
            self.head = new_node

        def removeAtEnd(self):
            self.head = self.head.next

l = Linkedlist()
l.insertAtStart(1)
l.removeAtEnd()