import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;

public class SingleSourcePath {

    private Graph G;
    private int s;
    private boolean[] visited;
    private int[] pre;


    public SingleSourcePath(Graph G, int s){

        this.G = G;
        this.s = s;
        visited = new boolean[G.V()];
        pre = new int[G.V()];
        for (int v = 0; v < G.V(); v++) {
            pre[v] = -1;
        }

        bfs(s);

    }

    private void bfs(int s){

        Queue<Integer> queue = new LinkedList<>();
        queue.add(s);
        visited[s] = true;
        pre[s] = s;
        while(!queue.isEmpty()){
            int v = queue.remove();

            for(int w: G.adj(v))
                if(!visited[w]){
                    queue.add(w);
                    visited[w] = true;
                    pre[w] = v;
                }
        }
    }

    public boolean isConnectedTo(int target) {

        return visited[target];

    }

    public Iterable<Integer> path(int target) {

        ArrayList<Integer> res = new ArrayList<>();
        if(!isConnectedTo(target)) return res;

        int cur = target;
        while (cur != s) {
            res.add(cur);
            cur = pre[cur];
        }

        res.add(s);
        Collections.reverse(res);
        return res;

    }


    public static void main(String[] args){

        Graph g = new Graph("g.txt");
        SingleSourcePath sspath = new SingleSourcePath(g, 0);
        System.out.println("0 -> 6 : " + sspath.path(6));
        System.out.println("0 -> 4 : " + sspath.path(4));
        System.out.println("0 -> 5 : " + sspath.isConnectedTo(5));
        System.out.println("0 -> 3 : " + sspath.isConnectedTo(3));
    }
}
