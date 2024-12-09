class Date {
    private:
    int jour,mois,année;
    public:
    Date(int j = 1, int m = 1, int a = 2000);
    bool estValide() const;
    void afficher() const;
}