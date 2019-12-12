import java.util.ArrayList;

public class FindBridges {

    private Graph G;
    private boolean[] visited;

    private int[] ord;
    private int[] low;
    private int cnt;

    private ArrayList<Edge> res;

    public FindBridges(Graph G) {

        this.G = G;
        visited = new boolean[G.V()];

        res = new ArrayList<>();
        ord = new int[G.V()];
        low = new int[G.V()];
        cnt = 0;

        for (int v = 0; v < G.V(); v++) {
            if(!visited[v])
                dfs(v, v);
        }
    }

    private void dfs(int v, int parent) {

        visited[v] = true;
        ord[v] = cnt;
        low[v] = ord[v];
        cnt++;

        for (int w : G.adj(v)) {
            if(!visited[w]) {
                dfs(w, v);
                low[v] = Math.min(low[w], low[v]);
                if (low[w] > ord[v])
                    res.add(new Edge(v, w));
            }
            else if (w != parent) {
                low[v] = Math.min(low[v], low[w]);
            }
        }
    }

    public ArrayList<Edge> result() {
        return res;
    }

    public static void main(String[] args) {

        Graph g = new Graph("g.txt");
        FindBridges findBridges = new FindBridges(g);
        System.out.println("Bridges in g : " + findBridges.result());

        Graph g2 = new Graph("g2.txt");
        FindBridges findBridges2 = new FindBridges(g2);
        System.out.println("Bridges in g2 : " + findBridges2.result());


        Graph g3 = new Graph("g3.txt");
        FindBridges findBridges3 = new FindBridges(g3);
        System.out.println("Bridges in g3 : " + findBridges3.result());

        Graph g4 = new Graph("tree.txt");
        FindBridges findBridges4 = new FindBridges(g4);
        System.out.println("Bridges in tree : " + findBridges4.result());



    }
}
