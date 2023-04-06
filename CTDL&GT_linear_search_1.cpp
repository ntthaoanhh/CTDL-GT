func linearSearch<T: Comparable>(a: [T], key: T) -> Int? {
    
    //check all possible values
    for (index, number) in a.enumerated() {
        if number == key {
            return index
        }
    }
    
    return nil
}
