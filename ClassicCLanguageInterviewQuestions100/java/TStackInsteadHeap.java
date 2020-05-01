import java.util.Stack;

public class TStackInsteadHeap {
    Stack<Integer> s1 = new Stack<>();
    Stack<Integer> s2 = new Stack<>();

    public void push(int num) {
        s1.push(num);
    }

    public int pop() {
        Integer re = null;
        if (!s2.empty()) {
            re = s2.pop();
        } else {
            while (!s1.empty()) {
                re = s1.pop();
                s2.push(re);
            }
            if (!s2.empty()) {
                re = s2.pop();
            }
        }
        return re;
    }

    public static void main(String[] args) {
        TStackInsteadHeap heap = new TStackInsteadHeap();
        for (int i = 0; i < 10; i++) {
            heap.push(i);
        }
        System.out.println("start pop");
        for (int i = 0; i < 10; i++ ) {
            int pop = heap.pop();
            System.out.println("pop = " + pop);

        }
    }
}

