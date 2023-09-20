class Solution {
    public List<String> ambiguousCoordinates(String s) {
        s = s.substring(1,s.length()-1);
        List<String> result = new LinkedList<>();
        for(int i=1;i<s.length();i++){
            List<String> left = helper(s.substring(0,i));
            List<String> right = helper(s.substring(i));
            for(String llist:left){
                for(String rlist:right){
                    result.add("("+llist+", "+rlist+")");
                }
            }
        }
        return result;
    }
    private List<String> helper(String s){
        int l = s.length();
        List<String> res = new LinkedList<>();
        char[] cs = s.toCharArray();
        if(cs[0]=='0' && cs[l-1]=='0'){
            if(l==1){
                res.add("0");
            }
            return res;
        }
        if(cs[0]=='0'){
            res.add("0."+s.substring(1));
            return res;
        }
        if(cs[l-1]=='0'){
            res.add(s);
            return res;
        }
        res.add(s);
        for(int i=1;i<l;i++){
            res.add(s.substring(0,i)+"."+s.substring(i));
        }
        return res;
    }
}
