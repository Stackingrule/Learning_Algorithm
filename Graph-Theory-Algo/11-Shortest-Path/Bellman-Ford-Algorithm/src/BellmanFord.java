import javax.management.RuntimeErrorException;
import java.util.Arrays;

public class BellmanFord {

    private WeightedGraph G;
    private int s;
    private int[] dis;
    private boolean hasNegativeCycle = false;

    public BellmanFord(WeightedGraph G, int s) {

        this.G = G;
        G.validateVertex(s);
        this.s = s;

        dis = new int[G.V()];
        Arrays.fill(dis, Integer.MAX_VALUE);
        dis[s] = 0;

        for (int pass = 1; pass < G.V(); pass ++) {
            for (int v = 0; v < G.V(); v++) {
                for (int w : G.adj(v)) {
                    if (dis[v] != Integer.MAX_VALUE && dis[v] + G.getWeight(v, w) < dis[w])
                        dis[w] = dis[v] + G.getWeight(v, w);
                }
            }
        }

        for (int v = 0; v < G.V(); v++) {
            for (int w : G.adj(v)) {
                if (dis[v] != Integer.MAX_VALUE && dis[v] + G.getWeight(v, w) < dis[w])
                    hasNegativeCycle = true;
            }
        }

    }

    public boolean hasNegCycle() {
        return hasNegativeCycle;
    }

    public boolean isConnectedTo(int v) {
        G.validateVertex(v);
        return dis[v] != Integer.MAX_VALUE;
    }

    public int distTo(int v) {
        G.validateVertex(v);
        if (hasNegCycle()) throw new RuntimeException("Exist negative cycle.");
        return dis[v];
    }

    public static void main(String[] args) {
        WeightedGraph g1 = new WeightedGraph("g.txt");
        BellmanFord bellmanFord = new BellmanFord(g1, 0);
        if (!bellmanFord.hasNegCycle()) {
            for (int v = 0; v < g1.V(); v++) {
                System.out.print(bellmanFord.distTo(v) + " ");
            }
            System.out.println();
        }
        else {
            System.out.println("Exist negative cycle!");
        }

        WeightedGraph g2 = new WeightedGraph("g2.txt");
        BellmanFord bellmanFord2 = new BellmanFord(g2, 0);
        if (!bellmanFord2.hasNegCycle()) {
            for (int v = 0; v < g1.V(); v++) {
                System.out.print(bellmanFord2.distTo(v) + " ");
            }
            System.out.println();
        }
        else {
            System.out.println("Exist negative cycle!");
        }
    }

}
