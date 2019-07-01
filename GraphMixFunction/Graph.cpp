
struct Graph
{
    public:

    int V;
    int E;
    int **adj;

};

Graph *adjmatrix()
    {
        int;
        Graph g=new Graph[];
        if(g)
        {
        std::cout<<"errror";
        return ;
        }

        std::cout<<"Enter number of vertrix and edge"std::endl;
        std::cin>>g.V>>g.E;

        g.adj=new int[g.V][g.V];

        for(int u=0;u<g.V;u++)
        for(int v = 0; v < g.V; v++)
        {
            g.adj[u][v]=0;
        }
        
        std::cout<<"n"
