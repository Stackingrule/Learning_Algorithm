import java.util.ArrayList;

public class GraphDFS {

    private Graph G;
    private boolean[] visited;

    private ArrayList<Integer> preOrder  = new ArrayList<>();   //先序遍历结果
    private ArrayList<Integer> postOrder = new ArrayList<>();   //后序遍历结果

    public GraphDFS(Graph G){

        this.G = G;
        visited = new boolean[G.V()];

        for (int v = 0; v < G.V(); v++) {
            if(!visited[v]) {
                dfs(v);
            }

        }
    }

    private void dfs(int v) {

        visited[v] = true;
        preOrder.add(v);
        for(int w: G.adj(v))
            if(!visited[w])
                dfs(w);

        postOrder.add(v);
    }

    public Iterable<Integer> getPreOrder() {    //获取先序遍历结果
        return preOrder;
    }

    public Iterable<Integer> getPostOrder() {   //获取后序遍历结果
        return postOrder;
    }

    public static void main(String[] args){

        Graph g = new Graph("g.txt");
        GraphDFS graphDFS = new GraphDFS(g);
        System.out.println(graphDFS.getPreOrder());
        System.out.println(graphDFS.getPostOrder());
    }
}
