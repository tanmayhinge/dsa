import networkx as nx
import matplotlib.pyplot as plt
import numpy as np

def ba(n, p, m, m0):
    ba_closeness = []
    ba_katz = []
    ba_pagerank = []
    
    for i in range(10):
        G = nx.barabasi_albert_graph(n, m)
        ba_closeness.extend(list(nx.closeness_centrality(G).values()))
        ba_katz.extend(list(nx.katz_centrality_numpy(G).values()))
        ba_pagerank.extend(list(nx.pagerank(G).values()))


    step=10
    plt.plot(range(1, len(ba_closeness) + 1)[::step], list(ba_closeness)[::step])
    plt.xlabel('Nodes')
    plt.ylabel('Closeness Centrality')
    plt.title('Closeness Centrality for Nodes')
    plt.show()


    plt.plot(range(1, len(ba_katz) + 1)[::step], list(ba_katz)[::step])
    plt.xlabel('Nodes')
    plt.ylabel('Katz Centrality')
    plt.title('Katz Centrality for Nodes')
    plt.show()


    plt.plot(range(1, len(ba_pagerank) + 1)[::step], list(ba_pagerank)[::step])
    plt.xlabel('Nodes')
    plt.ylabel('PageRank Centrality')
    plt.title('PageRank Centrality for Nodes')
    plt.show()

def er(n, p, m, m0):
    ba_closeness = []
    ba_katz = []
    ba_pagerank = []
    
    for i in range(10):
        G = nx.erdos_renyi_graph(n, m)
        ba_closeness.extend(list(nx.closeness_centrality(G).values()))
        ba_katz.extend(list(nx.katz_centrality_numpy(G).values()))
        ba_pagerank.extend(list(nx.pagerank(G).values()))


    step=10
    plt.plot(range(1, len(ba_closeness) + 1)[::step], list(ba_closeness)[::step])
    plt.xlabel('Nodes')
    plt.ylabel('Closeness Centrality')
    plt.title('Closeness Centrality for Nodes')
    plt.show()


    plt.plot(range(1, len(ba_katz) + 1)[::step], list(ba_katz)[::step])
    plt.xlabel('Nodes')
    plt.ylabel('Katz Centrality')
    plt.title('Katz Centrality for Nodes')
    plt.show()


    plt.plot(range(1, len(ba_pagerank) + 1)[::step], list(ba_pagerank)[::step])
    plt.xlabel('Nodes')
    plt.ylabel('PageRank Centrality')
    plt.title('PageRank Centrality for Nodes')
    plt.show()

def dataset1():
    edgelist_file = "/Users/tanmayhinge/fall-2023/651/in-class-centrality/d1.txt"
    G = nx.Graph()

    def readGraph(e):
        c=0
        with open(e, "r") as f:
            for line in f:
                    if c == 1000:
                        break
                    l = line.split()
                    u = l[0]
                    v = l[1]
                    w = l[2]
                    G.add_edge(u, v, weight=w)
                    c+=1
        return G

    G = readGraph(edgelist_file)

    step = 10

    closeness_centralities = nx.closeness_centrality(G)
    katz_centralities = nx.katz_centrality_numpy(G)
    pagerank_centralities = nx.pagerank(G)

    plt.plot(range(1, len(closeness_centralities) + 1)[::step], list(closeness_centralities.values())[::step])
    plt.ylabel('Closeness Centrality')
    plt.title('Closeness Centrality for Nodes')
    plt.show()

    plt.plot(range(1, len(katz_centralities) + 1)[::step], list(katz_centralities.values())[::step])
    plt.xlabel('Node')
    plt.ylabel('Katz Centrality')
    plt.title('Katz Centrality for Nodes')
    plt.show()

    plt.plot(range(1, len(pagerank_centralities) + 1)[::step], list(pagerank_centralities.values())[::step])
    plt.xlabel('Node')
    plt.ylabel('PageRank Centrality')
    plt.title('PageRank Centrality for Nodes')
    plt.show()

def dataset2():
    edgelist_file = "/Users/tanmayhinge/fall-2023/651/in-class-centrality/d2.txt"
    G = nx.Graph()

    def readGraph(e):
        c=0
        with open(e, "r") as f:
            for line in f:
                    if c == 1000:
                        break
                    l = line.split()
                    u = l[0]
                    v = l[1]
                    w = l[2]
                    G.add_edge(u, v, weight=w)
                    c+=1
        return G

    G = readGraph(edgelist_file)

    step = 10

    closeness_centralities = nx.closeness_centrality(G)
    katz_centralities = nx.katz_centrality_numpy(G)
    pagerank_centralities = nx.pagerank(G)



    plt.plot(range(1, len(closeness_centralities) + 1)[::step], list(closeness_centralities.values())[::step])
    plt.ylabel('Closeness Centrality')
    plt.title('Closeness Centrality for Nodes')
    plt.show()

    plt.plot(range(1, len(katz_centralities) + 1)[::step], list(katz_centralities.values())[::step])
    plt.xlabel('Node')
    plt.ylabel('Katz Centrality')
    plt.title('Katz Centrality for Nodes')
    plt.show()

    plt.plot(range(1, len(pagerank_centralities) + 1)[::step], list(pagerank_centralities.values())[::step])
    plt.xlabel('Node')
    plt.ylabel('PageRank Centrality')
    plt.title('PageRank Centrality for Nodes')
    plt.show()

if __name__ == "__main__":
    # print("calling dataset 1:")
    # print()
    # dataset1()
    # print("calling dataset 2:")
    # print()
    # dataset2()
    n = 100
    p = 0.1
    m = 3
    m0 = 3
    er(n, p, m, m0)
    ba(n, p, m, m0)
