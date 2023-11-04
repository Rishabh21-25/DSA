template<typename T, typename V>
class Pair
{
private:
    T x;
    V y;
public:
 void setX(T a){
    x = a;
 }
T getX() {
    return x;
 }
  void setY(V b){
    y = b;
 }
  V getY() {
    return y;
 }
};
 
