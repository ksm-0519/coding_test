class Solution {
    public String solution(String my_string, int[] indices) {
        String answer = "";
        
        for(int i=0; i<indices.length; i++) {
            my_string = my_string.substring(0, indices[i]) + "-" + my_string.substring(indices[i] + 1);
        }
        
        for(int i=0; i<my_string.length(); i++) {
            if(my_string.charAt(i) != '-') {
                answer += my_string.charAt(i);
            }
        }
        
        
        
        return answer;
    }
}