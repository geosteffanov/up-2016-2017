#include <iostream>
using namespace std;
/* функция която печата всички ребра тръгващи от даден връх
   int vertex е върха от който тръгва реброто, int index е
   index-ът на най-предния връх  оставащите съседи.
   */
void printEdgesOfVertex(int vertex, int* vertexNeighbours, int size, int index) {
    if (size == 0)
        return;
    if (*vertexNeighbours == 1)
        cout << "[" << vertex << " -> " << index << "]" << endl;
    printEdgesOfVertex(vertex, vertexNeighbours + 1, size - 1, index + 1);
}

/* функцията приема граф, размера му и index-ът на най-горният ред
   в графа.   */
void printEdges(int** graph, int size, int index) {
    if (index == size) // тук проверявяме дали index == size
                       // за да разберем дали сме приключили
        return;
    printEdgesOfVertex(index, *graph, size, 0); // печатаме всички ребра на текущия ред - като знаем че те са макс size
                                                // на брой и почваме от това с индекс 0. index е индексът или стойността
                                                // на текущия връх - върха, от който излизат тези "потенциални ребра"
    printEdges(graph + 1, size, index + 1); // печатаме следващите редове -> увеливаме индексите и запазваме size - за да може да го
                                            // ползваме за да знаем колко са големи и другите редове - всички са size големи.
}


int main() {
    int firstRow[] = {0,1,1};
    int secondRow[] = {1,0,0};
    int thirdRow[] = {0,0,0};
    int * graph[] = {firstRow, secondRow, thirdRow};
    printEdges(graph, 3, 0);

}
