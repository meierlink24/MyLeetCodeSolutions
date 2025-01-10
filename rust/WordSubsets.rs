use std::collections::HashMap;

impl Solution {
    pub fn word_subsets(words1: Vec<String>, words2: Vec<String>) -> Vec<String> {
        let mut freq_word2 = vec![0; 26];
        for word in words2 {
            let mut temp = vec![0; 26];
            for ch in word.chars() {
                let idx = (ch as u8 - b'a') as usize;
                temp[idx] += 1;
                freq_word2[idx] = freq_word2[idx].max(temp[idx]);
            }
        }

        let mut result = Vec::new();
        for word in words1 {
            let mut temp = vec![0; 26];
            for ch in word.chars() {
                temp[(ch as u8 - b'a') as usize] += 1;
            }

            if freq_word2.iter().enumerate().all(|(i, &freq)| temp[i] >= freq) {
                result.push(word);
            }
        }

        result
    }
}