#include <vector>

template<typename K, typename V>
class HashNode
{
    public:
    V value;
    K key;
     
    //Constructor of hashnode 
    HashNode(K key, V value)
    {
        this->value = value;
        this->key = key;
    }
};

int main()
{
    HashNode<int, int> **arr = new HashNode<int, int>*[3];
    return 0;
}