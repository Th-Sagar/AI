#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Node in the semantic network
struct Node
{
    string label;
    vector<int> neighbors;
};

// Semantic network
class SemanticNetwork
{
public:
    // Constructor
    SemanticNetwork() {}

    // Add a node to the network
    int addNode(string label)
    {
        int id = nodes.size();
        nodes.push_back({label, {}});
        nodeMap[label] = id;
        return id;
    }

    // Add a relationship between two nodes
    void addRelation(string from, string to)
    {
        int fromId = getNodeID(from);
        int toId = getNodeID(to);
        nodes[fromId].neighbors.push_back(toId);
    }

    // Get the ID of a node given its label
    int getNodeID(string label)
    {
        return nodeMap[label];
    }

    // Print the semantic network
    void print()
    {
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i].label << " -> ";
            for (int j = 0; j < nodes[i].neighbors.size(); j++)
            {
                cout << nodes[nodes[i].neighbors[j]].label << ", ";
            }
            cout << endl;
        }
    }

private:
    vector<Node> nodes;
    unordered_map<string, int> nodeMap;
};

// Example usage
int main()
{
    SemanticNetwork network;
    network.addNode("person");
    network.addNode("animal");
    network.addNode("mammal");
    network.addNode("cat");
    network.addRelation("person", "animal");
    network.addRelation("animal", "mammal");
    network.addRelation("mammal", "cat");
    network.print();
    return 0;
}
