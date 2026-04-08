namespace targets {
    class Alien {
    public:
        Alien(int x, int y) : x_coordinate(x), y_coordinate(y) {}
        int x_coordinate{};
        int y_coordinate{};
        int get_health() {
            return health;
        }
        bool hit() {
            if (health > 0) {
            health -= 1;
            }
            return true;
        }
        bool is_alive() {
            if (health > 0) {
                return true;
            }
            else return false;
        }
        bool teleport(int x, int y){
            x_coordinate = x;
            y_coordinate = y;
            return true;
        }
        bool collision_detection(const Alien& other) {
            return ((y_coordinate == other.y_coordinate) && (x_coordinate == other.x_coordinate));
        }
    private:
        int health{3};
    };
}
