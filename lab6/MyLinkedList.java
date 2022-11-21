public class MyLinkedList {
    private Node head;  // instance variable.

    // Default constructor
    public MyLinkedList() {
        this.head=null;
    }

    public int len() {
        Node curr = this.head;
        int len = 0;
        while (curr != null)
        {
            curr = curr.getNext();  // or just curr =curr.next;
            len++;
        }
        return len;
    }

   /* assume list is not empty, and index is valid [0, len()-1] */ 
    public  char get(int index)
    {
        Node curr = this.head;
        for (int i = 0; i < index; i++) {
            curr = curr.getNext();
        }
        return curr.data;
    }

    // appends the specified element to the begining of this list.
    // the list may or may not be empty (but the code is same)
    public void insertBegining(char data) {
        Node newNode = new Node(data);

        // insert at the begining. Order matters.
        // also works if the list is empty.
        newNode.next = head;    // newNode.setNext(this.head);   will be null if list is empty
        head = newNode;
    }

    // inserts the specified element after the specified position in this list
    // assume list is not empty.  index is valid [0 - len()-1]
    public void insertAfter(int index, char data) {
        Node curr = this.head;

        // crawl to the requested index 
        for (int i = 0; i < index; i++) {
            curr = curr.next;
        }

        // insert after curr, and before curr.next;  order matters!!!
        Node newNode = new Node(data);

        // set the new node's next-node reference to curr node's next-node reference
        newNode.next = curr.next;

        // now set curr node's next-node reference to the new node
        curr.next = newNode;
    }

    // removes the element with data dat in this list.
    // assume the list is not empty
    // assume the node to be deleted exists in the list, and no duplicated keys.
    public void remove(char dat) {
        if (head.data == dat)
        {
            head = head.next;
        }
        else{
            Node curr = head;
            while (curr.next.data != dat)
            {
                curr = curr.next;
            }
            // curr is the one preceding the one to be deleted
            // remove curr.next
            curr.next = curr.next.next; // by-pass curr.next; gabage collector will recycle the deleted node.
        }
    }
    
    @Override
    public String toString() {
        String output = "";
        if (head != null) {
            Node curr = head;
            while (curr != null) {
               output += "" + curr.getData() + "   ";
               curr = curr.getNext();
            }
        }
        return output;
    }

    private class Node {
        // two attributes (instance variables)

        // data carried by this node. 
        char data;
        // reference to the next node in the chain, or null if there isn't one.
        Node next;

        // Node constructor
        public Node(char dataValue) {
            this.data = dataValue;
            this.next = null;
        }

        // these methods should be self-explanatory
        public char getData() {
            return this.data;
        }

        public void setData(char dataValue) {
            this.data = dataValue;
        }

        public Node getNext() {
            return this.next;
        }

        public void setNext(Node nextNode) {
            this.next = nextNode;
        }

    }

    public static void main(String[] args) {

        MyLinkedList ll = new MyLinkedList();

        ll.insertBegining('S'); System.out.printf("insert S: (%d)\t%s\n", ll.len(), ll.toString());
        ll.insertBegining('B'); System.out.printf("insert B: (%d)\t%s\n", ll.len(), ll.toString());
        ll.insertBegining('A'); System.out.printf("insert A: (%d)\t%s\n", ll.len(), ll.toString());
        ll.insertBegining('L'); System.out.printf("insert L: (%d)\t%s\n", ll.len(), ll.toString());
        ll.insertBegining('U'); System.out.printf("insert U: (%d)\t%s\n", ll.len(), ll.toString());
        ll.insertBegining('K'); System.out.printf("insert K: (%d)\t%s\n", ll.len(), ll.toString());
        ll.insertBegining('R'); System.out.printf("insert R: (%d)\t%s\n", ll.len(), ll.toString());
        ll.insertBegining('O'); System.out.printf("insert O: (%d)\t%s\n", ll.len(), ll.toString());
        ll.insertBegining('Y'); System.out.printf("insert Y: (%d)\t%s\n", ll.len(), ll.toString());

        char[] removeList ={'B','S','A','O','R','K','Y','U','L'};
        for (int i=0;i<removeList.length ; i++)
        {
            char ele = removeList[i];
            ll.remove(ele);
            System.out.printf("remove %c: (%d)\t%s\n", ele, ll.len(), ll);
        }
        // insert again
        char[] insertList ={'S','B','A','L','U','K','R','O','Y'};
        for (int i=0;i<insertList.length ; i++)
        {
            char ele = insertList[i];
            ll.insertBegining(ele); 
            System.out.printf("insert %c: (%d)\t%s\n", ele, ll.len(), ll);
        }

        char v = ll.get(0);  System.out.println("\nget(0): " + v);
        v = ll.get(3);  System.out.println("get(3): " + v);
        v = ll.get(6);  System.out.println("get(6): " + v);
	v = ll.get(7);  System.out.println("get(7): " + v);	
        v = ll.get(8);  System.out.println("get(8): " + v);

        ll.insertAfter(2,'x'); System.out.printf("\ninsert x after index 2: (%d)\t%s\n", ll.len(), ll);
        ll.insertAfter(0,'y'); System.out.printf("insert y after index 0: (%d)\t%s\n", ll.len(), ll);
        ll.insertAfter(6,'z'); System.out.printf("insert z after index 6: (%d)\t%s\n", ll.len(), ll);
        v = ll.get(0);  System.out.println("\nget(0): " + v);
        v = ll.get(3);  System.out.println("get(3): " + v);
        v = ll.get(6);  System.out.println("get(6): " + v);
	v = ll.get(7);  System.out.println("get(7): " + v);
       	v = ll.get(8);  System.out.println("get(8): " + v + "\n");



    }

}
