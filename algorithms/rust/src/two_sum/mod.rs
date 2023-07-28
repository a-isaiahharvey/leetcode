use std::collections::HashMap;

pub struct Solution;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut m = HashMap::new();
        let mut result = Vec::new();
        for (i, &num) in nums.iter().enumerate() {
            if let Some(&j) = m.get(&(target - num)) {
                result.push(j as i32);
                result.push(i as i32);
            } else {
                m.insert(num, i);
            }
        }
        result
    }
}

#[cfg(test)]
mod tests {
    use super::Solution;

    #[test]
    fn case_1() {
        let nums = vec![2, 7, 11, 15];
        let target = 9;
        let output = Solution::two_sum(nums, target);
        let expected = vec![0, 1];
        assert_eq!(output, expected);
    }

    #[test]
    fn case_2() {
        let nums = vec![3, 2, 4];
        let target = 6;
        let output = Solution::two_sum(nums, target);
        let expected = vec![1, 2];
        assert_eq!(output, expected);
    }

    #[test]
    fn case_3() {
        let nums = vec![3, 3];
        let target = 6;
        let output = Solution::two_sum(nums, target);
        let expected = vec![0, 1];
        assert_eq!(output, expected);
    }
}
