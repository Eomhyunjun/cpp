#ifndef MUT_HPP
#define MUT_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
   public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    //typedef typename -> typedef로 재정의 되었다는 뜻
    // std::stack<T>::container_type::iterator -> iterator로 부르겠다

    iterator begin(void) {
        return (this->c.begin());
    }

    iterator end(void) {
        return (this->c.end());
    }

    const_iterator cbegin(void) const {
        return (this->c.cbegin());
    }

    const_iterator cend(void) const {
        return (this->c.cend());
    }

    reverse_iterator rbegin(void) {
        return (this->c.rbegin());
    }

    reverse_iterator rend(void) {
        return (this->c.rend());
    }

    const_reverse_iterator crbegin(void) const {
        return (this->c.crbegin());
    }

    const_reverse_iterator crend(void) const {
        return (this->c.crend());
    }

    MutantStack& operator=(MutantStack const& other) {
        std::stack<T>::operator=(other);
    }
};

#endif