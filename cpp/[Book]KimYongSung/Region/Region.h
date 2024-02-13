class Region
{
private:
    /* data */
    int left;
    int top;
    int right;
    int bottom;

public:
    enum {POINT_POINT, POINT_SIZE};

public:
    Region(/* args */);
    Region(int l, int t, int r, int b);

    int GetWidth() const;
    int GetHeight() const;
    void GetStartPoint(int &x, int &y) const;
    void GetEndPoint(int &x, int &y) const;
    void GetCenterPoint(int &x, int &y) const;
    bool IsPointInRegion(int x, int y) const;

    void SetRect(int l, int t, int r, int b);
    void Move(int x, int y);
    void Resize(int width, int height);

    void UnionRegion(const Region &r1, const Region &r2);

    void IntersectRegion(const Region &r1, const Region &r2);

    void Show();
    static void SetNotation(int notation);

    static int notation;
};

Region::Region(/* args */)
{
}

Region::~Region()
{
}
