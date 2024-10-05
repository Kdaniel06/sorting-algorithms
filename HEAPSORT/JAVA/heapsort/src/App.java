import java.util.Arrays; // Importa la clase Arrays

public class App {

    public static int[] heapsort(int inputArray[]) {
        int n = inputArray.length; // n => The length of the array

        // The main loop, ends with all the array covered
        while (n > 1) {
            // Select the last "node" with children
            int lastFatherPos = (n - 1) / 2;

            // Work with each father
            while (lastFatherPos >= 0) {
                int largestPos = lastFatherPos;

                // Get the "children"
                int leftSonPos = 2 * lastFatherPos + 1;
                int rightSonPos = 2 * lastFatherPos + 2;

                // Select the maximum 
                if (rightSonPos < n && inputArray[largestPos] < inputArray[rightSonPos]) {
                    largestPos = rightSonPos;
                }

                if (leftSonPos < n && inputArray[largestPos] < inputArray[leftSonPos]) {
                    largestPos = leftSonPos;
                }

                // Swap if necessary
                if (largestPos != lastFatherPos) {
                    int temp = inputArray[lastFatherPos];
                    inputArray[lastFatherPos] = inputArray[largestPos];
                    inputArray[largestPos] = temp;
                }

                // Select the previous father
                lastFatherPos--;
            }

            // Swap the root with the last element if necessary    
            int temp = inputArray[0];
            inputArray[0] = inputArray[n - 1];
            inputArray[n - 1] = temp;

            // Cut the max node (Last one)    
            n--;
        }

        return inputArray;
    }

    public static void main(String[] args) throws Exception {
        int[] array = {5, 8, 15, 20, 4, 10, 3, 9, 2, 0};
        heapsort(array);

        // Imprimir el arreglo ordenado
        System.out.println("Sorted array: " + Arrays.toString(array));
    }
}
