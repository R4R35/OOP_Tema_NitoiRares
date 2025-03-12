class Canvas
{
    char** array;
    int latime;
    int inaltime;
public:
    Canvas(int width, int height);
    ~Canvas();
    void DrawCircle(int x, int y, int ray, char ch);
    void FillCircle(int x, int y, int ray, char ch);
    void DrawRect(int left, int top, int right, int bottom, char ch);
    void FillRect(int left, int top, int right, int bottom, char ch);
    void SetPoint(int x, int y, char ch);
    void DrawLine(int x1, int y1, int x2, int y2, char ch);
    void set_pixel(int x, int y, char value);
    void set_pixels(int count, ...);
    void Print(); // shows what was printed
    void Clear(); // clears the canvas
};