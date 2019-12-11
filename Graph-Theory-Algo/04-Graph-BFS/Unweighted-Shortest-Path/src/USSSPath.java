import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;

// Unweighted Single Source Shortest Path

public class USSSPath {

    private Graph G;
    private int s;

    private boolean[] visited;
    private int[] pre;
    private int[] dis;

    public USSSPath(Graph G, int s) {

        this.G = G;
        this.s = s;

        visited = new boolean[G.V()];
        pre = new int[G.V()];
        dis = new int[G.V()];

        for (int v = 0; v < G.V(); v++) {
            pre[v] = -1;
            dis[v] = -1;
        }

        bfs(s);

        for (int v = 0; v < G.V(); v++)
            System.out.print(dis[v] + " ");
        System.out.println();
    }

    public void bfs(int s) {

        Queue<Integer> queue = new LinkedList<>();
        queue.add(s);
        visited[s] = true;
        pre[s] = s;
        dis[s] = 0;
        while (!queue.isEmpty()) {
            int v = queue.remove();

            for (int w : G.adj(v)) {
                if (!visited[w]) {
                        queue.add(w);
                        visited[w] = true;
                        pre[w] = v;
                        dis[w] = dis[v] + 1;
                }
            }
        }
    }

    public boolean isConnectedTo(int target) {

        G.validateVertex(target);
        return visited[target];

    }

    public int getDis(int target) {

        G.validateVertex(target);
        return dis[target];

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

    public static void main(String[] args) {

        Graph g = new Graph("g.txt");
        USSSPath usssPath = new USSSPath(g, 0);
        System.out.println("0 -> 6 : " + usssPath.path(6));
        System.out.println("0 -> 6 : " + usssPath.getDis(6));
    }



}
