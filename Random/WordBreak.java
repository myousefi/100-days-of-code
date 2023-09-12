class Solution {
    
    
    boolean helper(String s, Set<String> set,Map<String, Boolean> map){
        
        int len = s.length();
        
        if(len==0) return true;
        if(map.containsKey(s)) {
            return map.get(s);
        }
        for(int i=1;i<=len;i++){
            
            if(set.contains(s.substring(0,i)) && helper(s.substring(i,len),set,map)){
                map.put(s.substring(i,len),true);
                return true;
            }
            
        }
        map.put(s,false);
        return false;
    }
    
    public boolean wordBreak(String s, List<String> wordDict) {
        Set<String> _set = new HashSet<>(wordDict);
        Map<String, Boolean> _map = new HashMap<>();
        return helper(s,_set,_map);
    }
}



    
    
   
        
    
