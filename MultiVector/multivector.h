#include <vector>

template <class T>
class MultiVector {
public:
  MultiVector(int width, int height);
  MultiVector(int width, int height, std::vector<T> vector);
  void SetValue(int x, int y, T value);
  T GetValue(int x, int y);
  int width() const { return width_; }
  int height() const { return height_; }
  int size() const { return width_ * height_; }
  std::vector<T> GetVector() const { return vector_; }
private:
  int CoordinatesToIndex(int x, int y);
  std::pair<int, int> IndexToCoordinates(int i);
  int width_;
  int height_;
  std::vector<T> vector_;
};

template <class T>
MultiVector<T>::MultiVector(int width, int height) {
  width_ = width;
  height_ = height;
  vector_.resize(width_ * height_);
}

template <class T>
MultiVector<T>::MultiVector(int width, int height, std::vector<T> vector) {
  width_ = width;
  height_ = height;
  vector_ = vector;
  vector_.resize(width_ * height_);
}

template <class T>
void MultiVector<T>::SetValue(int x, int y, T value) {
  vector_.at(CoordinatesToIndex(x, y)) = value;
}

template <class T>
T MultiVector<T>::GetValue(int x, int y) {
  return vector_.at(CoordinatesToIndex(x, y));
}

template <class T>
int MultiVector<T>::CoordinatesToIndex(int x, int y) {
  return y * width_ + x;
}

template <class T>
std::pair<int, int> MultiVector<T>::IndexToCoordinates(int i) {
  int y = i / width_;
  int x = i - (y * height_);
  return std::make_pair(x, y);
}