public class Main {
    public static void main(String[] args) {
        byte b = 1; // 8 bit / -128..127
        short s = 1; // 16 bit / -32768..32767
        int i = 1; // 32 bit /
        long l = 1L; // 64 bit /

        float f = 1.0f; // 32 bit /
        double d = 1.0; // 64 bit /

        char c = 'a'; // 16 bit / only positive
        boolean bool = true; // true or false
    }

    // Сигнатура метода — это имя метода плюс параметры (причем порядок параметров имеет значение).
    // В сигнатуру метода не входит возвращаемое значение, а также бросаемые им исключения.
    public static void drawIsMonitorsCounter(int monitors, int programmers) {

    }

    public static void priceCalculation(double price, int count) {

    }
}