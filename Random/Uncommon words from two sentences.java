class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        Map<String,Integer> mapp = new HashMap<>();
        String[] a1 = s1.split(" ");
        String[] a2 = s2.split(" ");
        for(String s : a1) {
            if(mapp.containsKey(s)) {
                int cnt = mapp.get(s);
                cnt++;
                mapp.put(s,cnt);
            }
            else {
                mapp.put(s,1);
            }
        }
        for(String s : a2) {
            if(mapp.containsKey(s)) {
                int cnt = mapp.get(s);
                cnt++;
                mapp.put(s,cnt);
            }
            else {
                mapp.put(s,1);
            }
        }
        List<String> ans = new ArrayList<>();
        for (String s : mapp.keySet()) {
            if (mapp.get(s) == 1) {
                ans.add(s);
            }
        }
        return ans.toArray(new String[ans.size()]);
        
    }
}
