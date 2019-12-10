import java.util.ArrayList;


public class GraphDFS {

    private Graph G;
    private boolean[] visited;
    private ArrayList<Integer> order = new ArrayList<>();   //遍历结果


    public GraphDFS(Graph G) {

        this.G = G;
        visited = new boolean[G.V()];

        dfs(0);

    }

    private void dfs(int v) {

        visited[v] = true;
        order.add(v);
        for (int w : G.adj(v)) {
            if(!visited[w])
                dfs(w);
        }
    }

    public Iterable<Integer> getOrder() {   //获取遍历结果
        return order;
    }

    public static void main(String[] args) {

        Graph g = new Graph("g.txt");
        GraphDFS graphDFS = new GraphDFS(g);
        System.out.println(graphDFS.getOrder());

    }

}
