// Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.
//
// The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
//
// You may assume that each input would have exactly one solution and you may not use the same element twice.
//
//
// Input: numbers={2, 7, 11, 15}, target=9
// Output: index1=1, index2=2
//


class Solution {
    func twoSum(_ numbers: [Int], _ target: Int) -> [Int] {
        var hashMap = [Int:Int]()
        for i in 0...numbers.count - 1 {
            if(hashMap[target - numbers[i]] != nil) {
                let x1 = hashMap[target - numbers[i]]!
                let x2 = i
                return [x1 + 1,x2 + 1]
            }
            if hashMap[numbers[i]] == nil {
                hashMap[numbers[i]] = i
            }
        }
        
        return []
    }
}